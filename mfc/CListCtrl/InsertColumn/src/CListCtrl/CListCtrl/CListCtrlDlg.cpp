// CListCtrlDlg.cpp : 実装ファイル
//

#include "stdafx.h"
#include "CListCtrl.h"
#include "CListCtrlDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CListCtrlDlg ダイアログ




CListCtrlDlg::CListCtrlDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CListCtrlDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CListCtrlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CListCtrlDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


// CListCtrlDlg メッセージ ハンドラ

BOOL CListCtrlDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// このダイアログのアイコンを設定します。アプリケーションのメイン ウィンドウがダイアログでない場合、
	//  Framework は、この設定を自動的に行います。
	SetIcon(m_hIcon, TRUE);			// 大きいアイコンの設定
	SetIcon(m_hIcon, FALSE);		// 小さいアイコンの設定

	// TODO: 初期化をここに追加します。
	// タイトルパーにアイコンの表示.
	CWinApp *pApp = AfxGetApp();	// AfxGetApp()でtheAppのポインタ取得.
	HICON hIcon = ::LoadIcon(pApp->m_hInstance, MAKEINTRESOURCE(IDI_ICON1));	// ::LoadIconでIDI_ICON1(icon1.ico)をロード, ハンドルをhIconに格納.
	SetIcon(hIcon, TRUE);	// CWnd::SetIconでhIconをセット.(TRUEなので大きいアイコンにセット.)
	SetIcon(hIcon, FALSE);	// CWnd::SetIconでhIconをセット.(FALSEなので小さいアイコンにセット.)

	// リストコントロールにカラム(列)ヘッダを挿入.
	CListCtrl *pListCtrl1 = (CListCtrl *)GetDlgItem(IDC_LIST1);	// GetDlgItemでリストコントロールIDC_LIST1のオブジェクトポインタをpListCtrl1に格納.((CListCtrl *)にキャスト.)
	// カラム1の挿入.
	pListCtrl1->InsertColumn(0, _T("Name"), LVCFMT_LEFT, 120);	// pListCtrl1->InsertColumnで0番目にNameというカラムヘッダを挿入.
	// カラム2の挿入.
	pListCtrl1->InsertColumn(1, _T("Age"), LVCFMT_LEFT, 120);	// pListCtrl1->InsertColumnで1番目にAgeというカラムヘッダを挿入.
	// カラム3の挿入.
	pListCtrl1->InsertColumn(2, _T("Address"), LVCFMT_LEFT, 120);	// pListCtrl1->InsertColumnで2番目にAddressというカラムヘッダを挿入.

	return TRUE;  // フォーカスをコントロールに設定した場合を除き、TRUE を返します。
}

// ダイアログに最小化ボタンを追加する場合、アイコンを描画するための
//  下のコードが必要です。ドキュメント/ビュー モデルを使う MFC アプリケーションの場合、
//  これは、Framework によって自動的に設定されます。

void CListCtrlDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 描画のデバイス コンテキスト

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// クライアントの四角形領域内の中央
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// アイコンの描画
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// ユーザーが最小化したウィンドウをドラッグしているときに表示するカーソルを取得するために、
//  システムがこの関数を呼び出します。
HCURSOR CListCtrlDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

