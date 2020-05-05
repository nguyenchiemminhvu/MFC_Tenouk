#if !defined(AFX_DIALOGNCMV_H__0F0C0A3B_E122_47AA_A1C7_69CADE4355D7__INCLUDED_)
#define AFX_DIALOGNCMV_H__0F0C0A3B_E122_47AA_A1C7_69CADE4355D7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogNCMV.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogNCMV dialog

class DialogNCMV : public CDialog
{
// Construction
public:
	DialogNCMV(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogNCMV)
	enum { IDD = IDD_DIALOG_NCMV };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogNCMV)
	public:
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	virtual int DoModal();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogNCMV)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGNCMV_H__0F0C0A3B_E122_47AA_A1C7_69CADE4355D7__INCLUDED_)
