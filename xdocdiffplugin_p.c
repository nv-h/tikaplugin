

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Thu Nov 08 22:44:12 2012
 */
/* Compiler settings for xdocdiffplugin.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "xdocdiffplugin.h"

#define TYPE_FORMAT_STRING_SIZE   1041                              
#define PROC_FORMAT_STRING_SIZE   401                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _xdocdiffplugin_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } xdocdiffplugin_MIDL_TYPE_FORMAT_STRING;

typedef struct _xdocdiffplugin_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } xdocdiffplugin_MIDL_PROC_FORMAT_STRING;

typedef struct _xdocdiffplugin_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } xdocdiffplugin_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const xdocdiffplugin_MIDL_TYPE_FORMAT_STRING xdocdiffplugin__MIDL_TypeFormatString;
extern const xdocdiffplugin_MIDL_PROC_FORMAT_STRING xdocdiffplugin__MIDL_ProcFormatString;
extern const xdocdiffplugin_MIDL_EXPR_FORMAT_STRING xdocdiffplugin__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWinMergeScript_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWinMergeScript_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const xdocdiffplugin_MIDL_PROC_FORMAT_STRING xdocdiffplugin__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_PluginEvent */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 26 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PluginDescription */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 64 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PluginFileFilters */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x9 ),	/* 9 */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 92 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 94 */	NdrFcShort( 0x1 ),	/* 1 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 102 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PluginIsAutomatic */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0xa ),	/* 10 */
/* 122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x22 ),	/* 34 */
/* 128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 140 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 144 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 148 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnpackBufferA */

/* 152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0xb ),	/* 11 */
/* 160 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 162 */	NdrFcShort( 0x52 ),	/* 82 */
/* 164 */	NdrFcShort( 0x22 ),	/* 34 */
/* 166 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 168 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBuffer */

/* 178 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 180 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 182 */	NdrFcShort( 0x3f4 ),	/* Type Offset=1012 */

	/* Parameter pSize */

/* 184 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 186 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbChanged */

/* 190 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 192 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 194 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pSubcode */

/* 196 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 198 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbSuccess */

/* 202 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 204 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 206 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 210 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PackBufferA */

/* 214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0xc ),	/* 12 */
/* 222 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 224 */	NdrFcShort( 0x3e ),	/* 62 */
/* 226 */	NdrFcShort( 0x22 ),	/* 34 */
/* 228 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 230 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBuffer */

/* 240 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 242 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 244 */	NdrFcShort( 0x3f4 ),	/* Type Offset=1012 */

	/* Parameter pSize */

/* 246 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 248 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbChanged */

/* 252 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 254 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 256 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter subcode */

/* 258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 260 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbSuccess */

/* 264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 268 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnpackFile */

/* 276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0xd ),	/* 13 */
/* 284 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 286 */	NdrFcShort( 0x36 ),	/* 54 */
/* 288 */	NdrFcShort( 0x22 ),	/* 34 */
/* 290 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 292 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x1 ),	/* 1 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fileSrc */

/* 302 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 304 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 306 */	NdrFcShort( 0x406 ),	/* Type Offset=1030 */

	/* Parameter fileDst */

/* 308 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 310 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 312 */	NdrFcShort( 0x406 ),	/* Type Offset=1030 */

	/* Parameter pbChanged */

/* 314 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 316 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 318 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pSubcode */

/* 320 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 322 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbSuccess */

/* 326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 328 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 330 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 334 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PackFile */

/* 338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0xe ),	/* 14 */
/* 346 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 348 */	NdrFcShort( 0x22 ),	/* 34 */
/* 350 */	NdrFcShort( 0x22 ),	/* 34 */
/* 352 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 354 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fileSrc */

/* 364 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 366 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 368 */	NdrFcShort( 0x406 ),	/* Type Offset=1030 */

	/* Parameter fileDst */

/* 370 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 372 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 374 */	NdrFcShort( 0x406 ),	/* Type Offset=1030 */

	/* Parameter pbChanged */

/* 376 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 378 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 380 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pSubcode */

/* 382 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 384 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbSuccess */

/* 388 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 390 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 392 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 396 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const xdocdiffplugin_MIDL_TYPE_FORMAT_STRING xdocdiffplugin__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 44 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x11, 0x0,	/* FC_RP */
/* 48 */	NdrFcShort( 0x3c4 ),	/* Offset= 964 (1012) */
/* 50 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 52 */	NdrFcShort( 0x2 ),	/* Offset= 2 (54) */
/* 54 */	
			0x12, 0x0,	/* FC_UP */
/* 56 */	NdrFcShort( 0x3aa ),	/* Offset= 938 (994) */
/* 58 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 60 */	NdrFcShort( 0x20 ),	/* 32 */
/* 62 */	NdrFcShort( 0xa ),	/* 10 */
/* 64 */	NdrFcLong( 0x8 ),	/* 8 */
/* 68 */	NdrFcShort( 0x50 ),	/* Offset= 80 (148) */
/* 70 */	NdrFcLong( 0xd ),	/* 13 */
/* 74 */	NdrFcShort( 0x82 ),	/* Offset= 130 (204) */
/* 76 */	NdrFcLong( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0xb4 ),	/* Offset= 180 (260) */
/* 82 */	NdrFcLong( 0xc ),	/* 12 */
/* 86 */	NdrFcShort( 0x2a8 ),	/* Offset= 680 (766) */
/* 88 */	NdrFcLong( 0x24 ),	/* 36 */
/* 92 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (804) */
/* 94 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 98 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (838) */
/* 100 */	NdrFcLong( 0x10 ),	/* 16 */
/* 104 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (870) */
/* 106 */	NdrFcLong( 0x2 ),	/* 2 */
/* 110 */	NdrFcShort( 0x314 ),	/* Offset= 788 (898) */
/* 112 */	NdrFcLong( 0x3 ),	/* 3 */
/* 116 */	NdrFcShort( 0x32a ),	/* Offset= 810 (926) */
/* 118 */	NdrFcLong( 0x14 ),	/* 20 */
/* 122 */	NdrFcShort( 0x340 ),	/* Offset= 832 (954) */
/* 124 */	NdrFcShort( 0xffff ),	/* Offset= -1 (123) */
/* 126 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 136 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 140 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 142 */	
			0x12, 0x0,	/* FC_UP */
/* 144 */	NdrFcShort( 0xff86 ),	/* Offset= -122 (22) */
/* 146 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 148 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 150 */	NdrFcShort( 0x10 ),	/* 16 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x6 ),	/* Offset= 6 (160) */
/* 156 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 158 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 160 */	
			0x11, 0x0,	/* FC_RP */
/* 162 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (126) */
/* 164 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 176 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 178 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 180 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 182 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 192 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 196 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 198 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 200 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (164) */
/* 202 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 204 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 206 */	NdrFcShort( 0x10 ),	/* 16 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x6 ),	/* Offset= 6 (216) */
/* 212 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 214 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 216 */	
			0x11, 0x0,	/* FC_RP */
/* 218 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (182) */
/* 220 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 222 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 232 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 234 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 236 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 238 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 248 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 252 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 254 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 256 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (220) */
/* 258 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 260 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 262 */	NdrFcShort( 0x10 ),	/* 16 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x6 ),	/* Offset= 6 (272) */
/* 268 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 270 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 272 */	
			0x11, 0x0,	/* FC_RP */
/* 274 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (238) */
/* 276 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 278 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 280 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 282 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 284 */	NdrFcShort( 0x2 ),	/* Offset= 2 (286) */
/* 286 */	NdrFcShort( 0x10 ),	/* 16 */
/* 288 */	NdrFcShort( 0x2f ),	/* 47 */
/* 290 */	NdrFcLong( 0x14 ),	/* 20 */
/* 294 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 296 */	NdrFcLong( 0x3 ),	/* 3 */
/* 300 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 302 */	NdrFcLong( 0x11 ),	/* 17 */
/* 306 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 308 */	NdrFcLong( 0x2 ),	/* 2 */
/* 312 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 314 */	NdrFcLong( 0x4 ),	/* 4 */
/* 318 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 320 */	NdrFcLong( 0x5 ),	/* 5 */
/* 324 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 326 */	NdrFcLong( 0xb ),	/* 11 */
/* 330 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 332 */	NdrFcLong( 0xa ),	/* 10 */
/* 336 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 338 */	NdrFcLong( 0x6 ),	/* 6 */
/* 342 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (574) */
/* 344 */	NdrFcLong( 0x7 ),	/* 7 */
/* 348 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 350 */	NdrFcLong( 0x8 ),	/* 8 */
/* 354 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (580) */
/* 356 */	NdrFcLong( 0xd ),	/* 13 */
/* 360 */	NdrFcShort( 0xff3c ),	/* Offset= -196 (164) */
/* 362 */	NdrFcLong( 0x9 ),	/* 9 */
/* 366 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (220) */
/* 368 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 372 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (584) */
/* 374 */	NdrFcLong( 0x24 ),	/* 36 */
/* 378 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (592) */
/* 380 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 384 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (592) */
/* 386 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 390 */	NdrFcShort( 0x100 ),	/* Offset= 256 (646) */
/* 392 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 396 */	NdrFcShort( 0xfe ),	/* Offset= 254 (650) */
/* 398 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 402 */	NdrFcShort( 0xfc ),	/* Offset= 252 (654) */
/* 404 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 408 */	NdrFcShort( 0xfa ),	/* Offset= 250 (658) */
/* 410 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 414 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (662) */
/* 416 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 420 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (666) */
/* 422 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 426 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (650) */
/* 428 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 432 */	NdrFcShort( 0xde ),	/* Offset= 222 (654) */
/* 434 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 438 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (670) */
/* 440 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 444 */	NdrFcShort( 0xde ),	/* Offset= 222 (666) */
/* 446 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 450 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (674) */
/* 452 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 456 */	NdrFcShort( 0xde ),	/* Offset= 222 (678) */
/* 458 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 462 */	NdrFcShort( 0xdc ),	/* Offset= 220 (682) */
/* 464 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 468 */	NdrFcShort( 0xda ),	/* Offset= 218 (686) */
/* 470 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 474 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (698) */
/* 476 */	NdrFcLong( 0x10 ),	/* 16 */
/* 480 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 482 */	NdrFcLong( 0x12 ),	/* 18 */
/* 486 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 488 */	NdrFcLong( 0x13 ),	/* 19 */
/* 492 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 494 */	NdrFcLong( 0x15 ),	/* 21 */
/* 498 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 500 */	NdrFcLong( 0x16 ),	/* 22 */
/* 504 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 506 */	NdrFcLong( 0x17 ),	/* 23 */
/* 510 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 512 */	NdrFcLong( 0xe ),	/* 14 */
/* 516 */	NdrFcShort( 0xbe ),	/* Offset= 190 (706) */
/* 518 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 522 */	NdrFcShort( 0xc2 ),	/* Offset= 194 (716) */
/* 524 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 528 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (720) */
/* 530 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 534 */	NdrFcShort( 0x74 ),	/* Offset= 116 (650) */
/* 536 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 540 */	NdrFcShort( 0x72 ),	/* Offset= 114 (654) */
/* 542 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 546 */	NdrFcShort( 0x70 ),	/* Offset= 112 (658) */
/* 548 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 552 */	NdrFcShort( 0x66 ),	/* Offset= 102 (654) */
/* 554 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 558 */	NdrFcShort( 0x60 ),	/* Offset= 96 (654) */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x0 ),	/* Offset= 0 (564) */
/* 566 */	NdrFcLong( 0x1 ),	/* 1 */
/* 570 */	NdrFcShort( 0x0 ),	/* Offset= 0 (570) */
/* 572 */	NdrFcShort( 0xffff ),	/* Offset= -1 (571) */
/* 574 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 578 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 580 */	
			0x12, 0x0,	/* FC_UP */
/* 582 */	NdrFcShort( 0xfdd0 ),	/* Offset= -560 (22) */
/* 584 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 586 */	NdrFcShort( 0x2 ),	/* Offset= 2 (588) */
/* 588 */	
			0x12, 0x0,	/* FC_UP */
/* 590 */	NdrFcShort( 0x194 ),	/* Offset= 404 (994) */
/* 592 */	
			0x12, 0x0,	/* FC_UP */
/* 594 */	NdrFcShort( 0x20 ),	/* Offset= 32 (626) */
/* 596 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 598 */	NdrFcLong( 0x2f ),	/* 47 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 608 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 610 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 612 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 614 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 618 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 620 */	NdrFcShort( 0x4 ),	/* 4 */
/* 622 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 624 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 626 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 628 */	NdrFcShort( 0x18 ),	/* 24 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0xa ),	/* Offset= 10 (642) */
/* 634 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 636 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 638 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (596) */
/* 640 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 642 */	
			0x12, 0x0,	/* FC_UP */
/* 644 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (614) */
/* 646 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 648 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 650 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 652 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 654 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 656 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 658 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 660 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 662 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 664 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 666 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 668 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 670 */	
			0x12, 0x0,	/* FC_UP */
/* 672 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (574) */
/* 674 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 676 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (580) */
/* 678 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 680 */	NdrFcShort( 0xfdfc ),	/* Offset= -516 (164) */
/* 682 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 684 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (220) */
/* 686 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 688 */	NdrFcShort( 0x2 ),	/* Offset= 2 (690) */
/* 690 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 692 */	NdrFcShort( 0x2 ),	/* Offset= 2 (694) */
/* 694 */	
			0x12, 0x0,	/* FC_UP */
/* 696 */	NdrFcShort( 0x12a ),	/* Offset= 298 (994) */
/* 698 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 700 */	NdrFcShort( 0x2 ),	/* Offset= 2 (702) */
/* 702 */	
			0x12, 0x0,	/* FC_UP */
/* 704 */	NdrFcShort( 0x14 ),	/* Offset= 20 (724) */
/* 706 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 708 */	NdrFcShort( 0x10 ),	/* 16 */
/* 710 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 712 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 714 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 716 */	
			0x12, 0x0,	/* FC_UP */
/* 718 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (706) */
/* 720 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 722 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 724 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 726 */	NdrFcShort( 0x20 ),	/* 32 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* Offset= 0 (730) */
/* 732 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 734 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 736 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 738 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 740 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (276) */
/* 742 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 744 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 754 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 758 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 760 */	
			0x12, 0x0,	/* FC_UP */
/* 762 */	NdrFcShort( 0xffda ),	/* Offset= -38 (724) */
/* 764 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 766 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 768 */	NdrFcShort( 0x10 ),	/* 16 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x6 ),	/* Offset= 6 (778) */
/* 774 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 776 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 778 */	
			0x11, 0x0,	/* FC_RP */
/* 780 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (744) */
/* 782 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 792 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 796 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 798 */	
			0x12, 0x0,	/* FC_UP */
/* 800 */	NdrFcShort( 0xff52 ),	/* Offset= -174 (626) */
/* 802 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 804 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 806 */	NdrFcShort( 0x10 ),	/* 16 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x6 ),	/* Offset= 6 (816) */
/* 812 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 814 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 816 */	
			0x11, 0x0,	/* FC_RP */
/* 818 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (782) */
/* 820 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 826 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 828 */	NdrFcShort( 0x10 ),	/* 16 */
/* 830 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 832 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 834 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (820) */
			0x5b,		/* FC_END */
/* 838 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 840 */	NdrFcShort( 0x20 ),	/* 32 */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0xa ),	/* Offset= 10 (854) */
/* 846 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 848 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 850 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (826) */
			0x5b,		/* FC_END */
/* 854 */	
			0x11, 0x0,	/* FC_RP */
/* 856 */	NdrFcShort( 0xfd5e ),	/* Offset= -674 (182) */
/* 858 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 860 */	NdrFcShort( 0x1 ),	/* 1 */
/* 862 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 868 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 870 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 872 */	NdrFcShort( 0x10 ),	/* 16 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x6 ),	/* Offset= 6 (882) */
/* 878 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 880 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 882 */	
			0x12, 0x0,	/* FC_UP */
/* 884 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (858) */
/* 886 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 888 */	NdrFcShort( 0x2 ),	/* 2 */
/* 890 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 896 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 898 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 900 */	NdrFcShort( 0x10 ),	/* 16 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x6 ),	/* Offset= 6 (910) */
/* 906 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 908 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 910 */	
			0x12, 0x0,	/* FC_UP */
/* 912 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (886) */
/* 914 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 916 */	NdrFcShort( 0x4 ),	/* 4 */
/* 918 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 924 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 926 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 928 */	NdrFcShort( 0x10 ),	/* 16 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x6 ),	/* Offset= 6 (938) */
/* 934 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 936 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 938 */	
			0x12, 0x0,	/* FC_UP */
/* 940 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (914) */
/* 942 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 946 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 952 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 954 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 956 */	NdrFcShort( 0x10 ),	/* 16 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x6 ),	/* Offset= 6 (966) */
/* 962 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 964 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 966 */	
			0x12, 0x0,	/* FC_UP */
/* 968 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (942) */
/* 970 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 976 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 978 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 982 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 984 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 986 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 988 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 990 */	NdrFcShort( 0xffec ),	/* Offset= -20 (970) */
/* 992 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 994 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 996 */	NdrFcShort( 0x38 ),	/* 56 */
/* 998 */	NdrFcShort( 0xffec ),	/* Offset= -20 (978) */
/* 1000 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1000) */
/* 1002 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1004 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1006 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1008 */	0x0,		/* 0 */
			NdrFcShort( 0xfc49 ),	/* Offset= -951 (58) */
			0x5b,		/* FC_END */
/* 1012 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1014 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0xfc36 ),	/* Offset= -970 (50) */
/* 1022 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1024 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1026 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1028 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1030 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0xfe36 ),	/* Offset= -458 (580) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWinMergeScript, ver. 0.0,
   GUID={0x47E6B958,0xC17A,0x4024,{0x9B,0xE1,0x68,0xDC,0xC9,0x2D,0xD4,0x6E}} */

#pragma code_seg(".orpc")
static const unsigned short IWinMergeScript_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    38,
    76,
    114,
    152,
    214,
    276,
    338
    };

static const MIDL_STUBLESS_PROXY_INFO IWinMergeScript_ProxyInfo =
    {
    &Object_StubDesc,
    xdocdiffplugin__MIDL_ProcFormatString.Format,
    &IWinMergeScript_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWinMergeScript_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xdocdiffplugin__MIDL_ProcFormatString.Format,
    &IWinMergeScript_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _IWinMergeScriptProxyVtbl = 
{
    &IWinMergeScript_ProxyInfo,
    &IID_IWinMergeScript,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWinMergeScript::get_PluginEvent */ ,
    (void *) (INT_PTR) -1 /* IWinMergeScript::get_PluginDescription */ ,
    (void *) (INT_PTR) -1 /* IWinMergeScript::get_PluginFileFilters */ ,
    (void *) (INT_PTR) -1 /* IWinMergeScript::get_PluginIsAutomatic */ ,
    (void *) (INT_PTR) -1 /* IWinMergeScript::UnpackBufferA */ ,
    (void *) (INT_PTR) -1 /* IWinMergeScript::PackBufferA */ ,
    (void *) (INT_PTR) -1 /* IWinMergeScript::UnpackFile */ ,
    (void *) (INT_PTR) -1 /* IWinMergeScript::PackFile */
};


static const PRPC_STUB_FUNCTION IWinMergeScript_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWinMergeScriptStubVtbl =
{
    &IID_IWinMergeScript,
    &IWinMergeScript_ServerInfo,
    15,
    &IWinMergeScript_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    xdocdiffplugin__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x8000253, /* MIDL Version 8.0.595 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _xdocdiffplugin_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IWinMergeScriptProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _xdocdiffplugin_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IWinMergeScriptStubVtbl,
    0
};

PCInterfaceName const _xdocdiffplugin_InterfaceNamesList[] = 
{
    "IWinMergeScript",
    0
};

const IID *  const _xdocdiffplugin_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _xdocdiffplugin_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _xdocdiffplugin, pIID, n)

int __stdcall _xdocdiffplugin_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_xdocdiffplugin_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo xdocdiffplugin_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _xdocdiffplugin_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _xdocdiffplugin_StubVtblList,
    (const PCInterfaceName * ) & _xdocdiffplugin_InterfaceNamesList,
    (const IID ** ) & _xdocdiffplugin_BaseIIDList,
    & _xdocdiffplugin_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

