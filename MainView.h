// MainView.h : interface of the MainView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINVIEW_H__67F32FE8_9793_4A48_AE7F_2B91C6345253__INCLUDED_)
#define AFX_MAINVIEW_H__67F32FE8_9793_4A48_AE7F_2B91C6345253__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class MainView : public CView
{
protected: // create from serialization only
	MainView();
	DECLARE_DYNCREATE(MainView)

// Attributes
public:
	MainDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MainView)
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~MainView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(MainView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	CPoint _start;
	CPoint _end;
};

#ifndef _DEBUG  // debug version in MainView.cpp
inline MainDoc* MainView::GetDocument()
   { return (MainDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINVIEW_H__67F32FE8_9793_4A48_AE7F_2B91C6345253__INCLUDED_)
