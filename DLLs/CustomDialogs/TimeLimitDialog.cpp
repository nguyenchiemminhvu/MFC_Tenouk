// TimeLimitDialog.cpp : implementation file
//

#include "stdafx.h"
#include "TimeLimitDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// TimeLimitDialog dialog


TimeLimitDialog::TimeLimitDialog(CWnd* pParent /*=NULL*/)
	: CDialog(TimeLimitDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(TimeLimitDialog)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void TimeLimitDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(TimeLimitDialog)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(TimeLimitDialog, CDialog)
	//{{AFX_MSG_MAP(TimeLimitDialog)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// TimeLimitDialog message handlers
