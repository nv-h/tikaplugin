# tikaPlugin

MS OfficeファイルやPDFの比較を出来るようにする[WinMerge](http://winmerge.org/)用のプラグイン(64bit版専用)。  
[xdocdiffPlugin64](http://crus.mydns.jp/xdocdiffPlugin64/)を少しだけ改造し、[tika](http://tika.apache.org/1.16/gettingstarted.html)により差分を取るようにしたもの。

tikaPluginは、図などの中身を比較できる(そのかわり遅い)。  
また、JAVA 1.8以上が必要。

WinMergeの実行ファイルがあるフォルダに、`tika.exe`を配置、WinMergeの実行ファイルがあるフォルダ内の`MergePlugins`フォルダに`tikaplugin.dll`を配置すると使えるようになるはず。

# Build

Visual Studio 2017 Community on Windows 10

`tika.exe`は、[Launch4j 3.11](http://launch4j.sourceforge.net/)により`tika-app-1.16.jar`から作成した。

# License

GPL2

Copyright (c) 2017 H.Saido saido.nv@gmail.com

## xdocdiffPlugin64: GPL2

Copyright (c) 2014 来栖光明(webmaster@crus.mydns.jp)

## tika: Apache License 2

Copyright (c) 2017 The Apache Software Foundation.

## Launch4j: MIT (the code which is attached to the wrapped jars)

Copyright (c) 2005-2017 Grzegorz Kowal
