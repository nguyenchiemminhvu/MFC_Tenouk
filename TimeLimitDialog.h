#if !defined(AFX_TIMELIMITDIALOG_H__42041CB2_3082_4CF4_B072_C491A40D7547__INCLUDED_)
#define AFX_TIMELIMITDIALOG_H__42041CB2_3082_4CF4_B072_C491A40D7547__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TimeLimitDialog.h : header file
//

#include "resource.h"

/////////////////////////////////////////////////////////////////////////////
// TimeLimitDialog dialog

class AFX_EXT_CLASS TimeLimitDialog : public CDialog
{
// Construction
public:
	TimeLimitDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(TimeLimitDialog)
	enum { IDD = IDD_DIALOG_TIME_LIMIT };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(TimeLimitDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(TimeLimitDialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TIMELIMITDIALOG_H__42041CB2_3082_4CF4_B072_C491A40D7547__INCLUDED_)
