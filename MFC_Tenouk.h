// MFC_Tenouk.h : main header file for the MFC_TENOUK application
//

#if !defined(AFX_MFC_TENOUK_H__A6A6CADD_D25B_483A_B82D_17155D0E1DF5__INCLUDED_)
#define AFX_MFC_TENOUK_H__A6A6CADD_D25B_483A_B82D_17155D0E1DF5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// MainApp:
// See MFC_Tenouk.cpp for the implementation of this class
//

class MainApp : public CWinApp
{
public:
	MainApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MainApp)
public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(MainApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFC_TENOUK_H__A6A6CADD_D25B_483A_B82D_17155D0E1DF5__INCLUDED_)
