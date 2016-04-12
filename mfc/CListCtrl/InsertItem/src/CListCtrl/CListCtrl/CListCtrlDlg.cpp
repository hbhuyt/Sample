// CListCtrlDlg.cpp : �����t�@�C��
//

#include "stdafx.h"
#include "CListCtrl.h"
#include "CListCtrlDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CListCtrlDlg �_�C�A���O




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
	ON_BN_CLICKED(IDC_BUTTON1, &CListCtrlDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CListCtrlDlg ���b�Z�[�W �n���h��

BOOL CListCtrlDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// ���̃_�C�A���O�̃A�C�R����ݒ肵�܂��B�A�v���P�[�V�����̃��C�� �E�B���h�E���_�C�A���O�łȂ��ꍇ�A
	//  Framework �́A���̐ݒ�������I�ɍs���܂��B
	SetIcon(m_hIcon, TRUE);			// �傫���A�C�R���̐ݒ�
	SetIcon(m_hIcon, FALSE);		// �������A�C�R���̐ݒ�

	// TODO: �������������ɒǉ����܂��B
	// �^�C�g���p�[�ɃA�C�R���̕\��.
	CWinApp *pApp = AfxGetApp();	// AfxGetApp()��theApp�̃|�C���^�擾.
	HICON hIcon = ::LoadIcon(pApp->m_hInstance, MAKEINTRESOURCE(IDI_ICON1));	// ::LoadIcon��IDI_ICON1(icon1.ico)�����[�h, �n���h����hIcon�Ɋi�[.
	SetIcon(hIcon, TRUE);	// CWnd::SetIcon��hIcon���Z�b�g.(TRUE�Ȃ̂ő傫���A�C�R���ɃZ�b�g.)
	SetIcon(hIcon, FALSE);	// CWnd::SetIcon��hIcon���Z�b�g.(FALSE�Ȃ̂ŏ������A�C�R���ɃZ�b�g.)

	// ���X�g�R���g���[���ɃJ����(��)�w�b�_��}��.
	CListCtrl *pListCtrl1 = (CListCtrl *)GetDlgItem(IDC_LIST1);	// GetDlgItem�Ń��X�g�R���g���[��IDC_LIST1�̃I�u�W�F�N�g�|�C���^��pListCtrl1�Ɋi�[.((CListCtrl *)�ɃL���X�g.)
	// �J����1�̑}��.
	pListCtrl1->InsertColumn(0, _T("Name"), LVCFMT_LEFT, 120);	// pListCtrl1->InsertColumn��0�Ԗڂ�Name�Ƃ����J�����w�b�_��}��.
	// �J����2�̑}��.
	pListCtrl1->InsertColumn(1, _T("Age"), LVCFMT_LEFT, 120);	// pListCtrl1->InsertColumn��1�Ԗڂ�Age�Ƃ����J�����w�b�_��}��.
	// �J����3�̑}��.
	pListCtrl1->InsertColumn(2, _T("Address"), LVCFMT_LEFT, 120);	// pListCtrl1->InsertColumn��2�Ԗڂ�Address�Ƃ����J�����w�b�_��}��.

	return TRUE;  // �t�H�[�J�X���R���g���[���ɐݒ肵���ꍇ�������ATRUE ��Ԃ��܂��B
}

// �_�C�A���O�ɍŏ����{�^����ǉ�����ꍇ�A�A�C�R����`�悷�邽�߂�
//  ���̃R�[�h���K�v�ł��B�h�L�������g/�r���[ ���f�����g�� MFC �A�v���P�[�V�����̏ꍇ�A
//  ����́AFramework �ɂ���Ď����I�ɐݒ肳��܂��B

void CListCtrlDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �`��̃f�o�C�X �R���e�L�X�g

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// �N���C�A���g�̎l�p�`�̈���̒���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �A�C�R���̕`��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// ���[�U�[���ŏ��������E�B���h�E���h���b�O���Ă���Ƃ��ɕ\������J�[�\�����擾���邽�߂ɁA
//  �V�X�e�������̊֐����Ăяo���܂��B
HCURSOR CListCtrlDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CListCtrlDlg::OnBnClickedButton1()
{
	// TODO: �����ɃR���g���[���ʒm�n���h�� �R�[�h��ǉ����܂��B
	// �G�f�B�b�g�{�b�N�X�ɓ��͂��ꂽ�e�L�X�g�����X�g�{�b�N�X�ɏォ��}�����Ă���.
	CListCtrl *pListCtrl1 = (CListCtrl *)GetDlgItem(IDC_LIST1);	// GetDlgItem�Ń��X�g�R���g���[��IDC_LIST1�̃I�u�W�F�N�g�|�C���^��pListCtrl1�Ɋi�[.((CListCtrl *)�ɃL���X�g.)
	CEdit *pEdit1 = (CEdit *)GetDlgItem(IDC_EDIT1);	// GetDlgItem�ŃG�f�B�b�g�R���g���[��IDC_EDIT1�̃I�u�W�F�N�g�|�C���^��pEdit1�Ɋi�[.((CEdit *)�ɃL���X�g.)
	TCHAR tszBuf[256];	// TCHAR�^�o�b�t�@tszBuf(�v�f��256).
	int iLen = pEdit1->GetLine(0, tszBuf, 255);	// pEdit1->GetLine��0�s�ڂ̕�������擾��, tszBuf�Ɋi�[(�ő�255����), �߂�l�̃R�s�[������������iLen�Ɋi�[.
	tszBuf[iLen] = _T('\0');	// �Ō�̕����̎��ɂ�'\0'������.
	pListCtrl1->InsertItem(0, tszBuf);	// pListCtrl1->InsertItem��0�s�ڂ�tszBuf��}��.
}