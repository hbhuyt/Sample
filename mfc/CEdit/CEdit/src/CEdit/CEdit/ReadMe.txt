================================================================================
MICROSOFT FOUNDATION CLASS ライブラリ: CEdit プロジェクトの概要
===============================================================================

アプリケーション ウィザードが作成した CEdit には Microsoft 
Foundation Class の基本的な使い方が示されています。アプリケーション作成のひな型
としてお使いください。

このファイルには CEdit アプリケーションを構成している各ファイ
ルの概要説明が含まれます。

CEdit.vcproj
   これはアプリケーション ウィザードで生成された VC++ プロジェクトのメイン プ
   ロジェクト ファイルです。ファイルが生成された Visual C++ のバージョン情報が
   含まれています。また、アプリケーション ウィザードで選択したプラットフォー
   ム、構成およびプロジェクト機能に関する情報も含まれています。

CEdit.h
   これはアプリケーションのメイン ヘッダー ファイルです。このファイルには、
   Resource.h を含む、その他のプロジェクト固有のヘッダーが含まれていて、
   CEditApp アプリケーション クラスを宣言します。

CEdit.cpp
   これは、アプリケーション クラス CEditApp を含むメイン アプリケー
   ション ソース ファイルです。

CEdit.rc
   これは、プログラムが使用する Microsoft Windows のリソースの一覧ファイルで
   す。このファイルには RES サブディレクトリに保存されているアイコン、ビットマ
   ップ、カーソルが含まれています。このファイルは、Microsoft Visual C++ で直接
   編集することができます。プロジェクト リソースは 1041 にあります。

res\CEdit.ico
   これは、アプリケーションのアイコンとして使用されるアイコンファイルです。この
   アイコンはメイン リソース ファイル CEdit.rc に含まれていま
   す。

res\CEdit.rc2
   このファイルは Microsoft Visual C++ を使用しないで編集されたリソースを含んで
   います。リソース エディタで編集できないリソースはすべてこのファイルに入れて
   ください。


/////////////////////////////////////////////////////////////////////////////

アプリケーション ウィザードは 1 つのダイアログ クラスを作成します:

CEditDlg.h, CEditDlg.cpp - ダイアログ
   これらのファイルは CEditDlg クラスを含みます。このクラスはアプ
   リケーションのメイン ダイアログの動作を定義します。ダイアログ テンプレートは
   Microsoft Visual C++ で編集可能な CEdit.rc に含まれます。


/////////////////////////////////////////////////////////////////////////////

その他の標準ファイル:

StdAfx.h, StdAfx.cpp
   これらのファイルは、既にコンパイルされたヘッダー ファイル (PCH) 
   CEdit.pch や既にコンパイルされた型のファイル StdAfx.obj を
   ビルドするために使用されます。

Resource.h
   これは新規リソース ID を定義する標準ヘッダー ファイルです。Microsoft 
   Visual C++ はこのファイルの読み取りと更新を行います。

/////////////////////////////////////////////////////////////////////////////

その他の注意:

アプリケーション ウィザードは "TODO:" で始まるコメントを使用して、追加したりカ
スタマイズする必要があるソース コードの部分を示します。

アプリケーションが共有 DLL 内で MFC を使用する場合は、MFC DLL を再頒布する必要
があります。また、アプリケーションがオペレーティング システムのロケール以外の言
語を使用している場合も、対応するローカライズされたリソース MFC80XXX.DLL を再頒
布する必要があります。これらのトピックの詳細については、MSDN ドキュメントの 
Visual C++ アプリケーションの再頒布に関するセクションを参照してください。

/////////////////////////////////////////////////////////////////////////////
