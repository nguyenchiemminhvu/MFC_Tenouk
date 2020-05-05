// DialogNCMV.cpp : implementation file
//

#include "stdafx.h"
#include "MFC_Tenouk.h"

#include "DialogNCMV.h"
#include "resource.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogNCMV dialog


DialogNCMV::DialogNCMV(CWnd* pParent /*=NULL*/)
	: CDialog(DialogNCMV::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogNCMV)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void DialogNCMV::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogNCMV)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogNCMV, CDialog)
	//{{AFX_MSG_MAP(DialogNCMV)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogNCMV message handlers

BOOL DialogNCMV::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDialog::Create(IDD, pParentWnd);
}

int DialogNCMV::DoModal() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDialog::DoModal();
}

BOOL DialogNCMV::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	CSliderCtrl * sl = (CSliderCtrl *) GetDlgItem(IDC_SLIDER_1);
	sl->SetRange(0, 5);
	sl->SetPos(1);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
