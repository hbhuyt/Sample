// CBitmapDlg.h : ヘッダー ファイル
//

#pragma once


// CBitmapDlg ダイアログ
class CBitmapDlg : public CDialog
{
// コンストラクション
public:
	CBitmapDlg(CWnd* pParent = NULL);	// 標準コンストラクタ

// ダイアログ データ
	enum { IDD = IDD_CBITMAP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

// 追加のメンバ
// privateメンバ
private:

	// privateメンバ変数
	CBitmap m_cBitmap;	// CBitmapオブジェクトm_cBitmap

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
