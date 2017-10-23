// WinMergeScript.cpp : Implementation of CWinMergeScript
#include "stdafx.h"
#include "tikaplugin.h"
#include "WinMergeScript.h"
#include "unicheck.h"
#include <fstream>
#include <sstream>
using namespace std;

typedef std::basic_string<TCHAR> tstring;
#define TEMP_PATH_LEN 1000


/////////////////////////////////////////////////////////////////////////////
// CWinMergeScript


STDMETHODIMP CWinMergeScript::get_PluginEvent(BSTR *pVal)
{
	*pVal = SysAllocString(L"FILE_PACK_UNPACK");
	return S_OK;
}

STDMETHODIMP CWinMergeScript::get_PluginDescription(BSTR *pVal)
{
	*pVal = SysAllocString(L"Display the text content of MS Word, Excel, PowerPoint and pdf files.");
	return S_OK;
}

STDMETHODIMP CWinMergeScript::get_PluginFileFilters(BSTR *pVal)
{
	*pVal = SysAllocString(L"\\.sxw;\\.sxc;\\.sxi;\\.sxd;\\.odt;\\.ods;\\.odp;\\.odg;\\.docx;\\.docm;\\.xlsx;\\.xlsm;\\.pptx;\\.pptm;\\.doc;\\.xls;\\.ppt;\\.rtf;\\.jaw;\\.jtw;\\.jbw;\\.juw;\\.jfw;\\.jvw;\\.jtd;\\.jtt;\\.oas;\\.oa2;\\.oa3;\\.bun;\\.wj2;\\.wj3;\\.wk3;\\.wk4;\\.123;\\.wri;\\.pdf;\\.mht;\\.eml$");
	return S_OK;
}

STDMETHODIMP CWinMergeScript::get_PluginIsAutomatic(VARIANT_BOOL *pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}


STDMETHODIMP CWinMergeScript::UnpackBufferA(SAFEARRAY **pBuffer, INT *pSize, VARIANT_BOOL *pbChanged, INT *pSubcode, VARIANT_BOOL *pbSuccess)
{
	// We don't need it
	return S_OK;
}

STDMETHODIMP CWinMergeScript::PackBufferA(SAFEARRAY **pBuffer, INT *pSize, VARIANT_BOOL *pbChanged, INT subcode, VARIANT_BOOL *pbSuccess)
{
	// We don't need it
	return S_OK;
}


STDMETHODIMP CWinMergeScript::UnpackFile(BSTR fileSrc, BSTR fileDst, VARIANT_BOOL *pbChanged, INT *pSubcode, VARIANT_BOOL *pbSuccess)
{
	USES_CONVERSION;

	wchar_t TempPath[TEMP_PATH_LEN];
	BOOL fileCopied = FALSE;

	GetTempPath(TEMP_PATH_LEN, TempPath);

	tstring tsTempPath = TempPath;

	tstring::size_type i = 0;
	tstring tsFileName = fileSrc;
	i = tsFileName.rfind(L'\\');

	if(i != tstring::npos){
		tsFileName = tsFileName.substr(i + 1);
	}
	//::MessageBox(NULL, tsFileName.c_str(), L"tsFileName", 0);

	tstring tsTempFileName = tsTempPath + tsFileName;
	//::MessageBox(NULL, tsTempFileName.c_str(), L"tsTempFileName", 0);

	if(::PathFileExists(fileSrc) && ::PathFileExists(tsTempFileName.c_str())){
		long length = 0;
		TCHAR* buffer = NULL;
	
		length = ::GetShortPathName(fileSrc, NULL, 0) + 1;
		buffer = new TCHAR[length];
		::GetShortPathName(fileSrc, buffer, length);
		tstring tsShortfileSrc = buffer;
		delete [] buffer;
	
		length = ::GetShortPathName(tsTempFileName.c_str(), NULL, 0) + 1;
		buffer = new TCHAR[length];
		::GetShortPathName(tsTempFileName.c_str(), buffer, length);
		tstring tsShortTempFileName = buffer;
		delete [] buffer;
	
		if(tsShortfileSrc == tsShortTempFileName){
			//::MessageBox(NULL, L"ファイルをコピーする必要はありません。", L"", 0);
		}else{
			//::MessageBox(NULL, L"ファイルをコピーします。", L"", 0);
			fileCopied = TRUE;
		}
	}else{
		fileCopied = TRUE;
	}

	if(fileCopied){
		::CopyFile(fileSrc, tsTempFileName.c_str(), FALSE);
		::SetFileAttributes(tsTempFileName.c_str(), ::GetFileAttributes(tsTempFileName.c_str()) & ~FILE_ATTRIBUTE_READONLY);
		//::MessageBox(NULL, tsTempFileName.c_str(), L"tsTempFileName", 0);
	}

	tstring tstikaParam = tsTempFileName;
	if(tstikaParam.find(L' ') != tstring::npos){
		tstikaParam = L"\"" + tstikaParam + L"\"";
		//::MessageBox(NULL, tstikaParam.c_str(), L"tstikaParam", 0);
	}
	// $TEMP+fileSrc(binary) to $TEMP+fileSrc(.txt)
	tstikaParam = L"tika -t " + tstikaParam;
	size_t tikaParamSize = wcslen(tstikaParam.c_str());
	TCHAR *tikaParam = new TCHAR[tikaParamSize + 1];
	wcscpy_s(tikaParam, tikaParamSize + 1, tstikaParam.c_str());
	//wcscpy(tikaParam, tstikaParam.c_str());
	//::MessageBox(NULL, tikaParam, L"tikaParam", 0);

	SECURITY_ATTRIBUTES sec_a;
	ZeroMemory(&sec_a,sizeof(sec_a));
	sec_a.bInheritHandle = TRUE;
	HANDLE htempTextFile;
	i = tsTempFileName.rfind(L'.');
	tstring tstempTextFile = tsTempFileName.substr(0, i) + L".txt";
	size_t tempTextFileSize = wcslen(tstempTextFile.c_str());
	TCHAR *tempTextFile = new TCHAR[tempTextFileSize + 1];
	wcscpy_s(tempTextFile, tempTextFileSize + 1, tstempTextFile.c_str());
	htempTextFile =
		::CreateFile(tempTextFile, GENERIC_WRITE, FILE_SHARE_WRITE,
			&sec_a, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

	PROCESS_INFORMATION pi;
	STARTUPINFO si;
	::ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	si.dwFlags = STARTF_USESTDHANDLES;
	si.hStdOutput = htempTextFile;
	::CreateProcess(NULL, tikaParam, NULL, NULL, TRUE, CREATE_NO_WINDOW | NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	::CloseHandle(htempTextFile);
	::CloseHandle(pi.hThread);
	::WaitForSingleObject(pi.hProcess, 100000);
	::CloseHandle(pi.hProcess);

	delete [] tikaParam;

	//::MessageBox(NULL, tstempTextFile.c_str(), L"tstempTextFile", 0);
	::MoveFileEx(tstempTextFile.c_str(), fileDst, MOVEFILE_REPLACE_EXISTING);

	if(fileCopied){
		::DeleteFile(tsTempFileName.c_str());
	}

	*pbChanged = VARIANT_TRUE;
	*pbSuccess = VARIANT_TRUE;
	*pSubcode = 1;
	return S_OK;
}



STDMETHODIMP CWinMergeScript::PackFile(BSTR fileSrc, BSTR fileDst, VARIANT_BOOL *pbChanged, INT pSubcode, VARIANT_BOOL *pbSuccess)
{
	// always return error so the users knows we can not repack
	*pbChanged = VARIANT_FALSE;
	*pbSuccess = VARIANT_FALSE;
	pSubcode = 1;
	return S_OK;
}
