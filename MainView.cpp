// MainView.cpp : implementation of the MainView class
//

#include "stdafx.h"
#include "MFC_Tenouk.h"

#include "MainDoc.h"
#include "MainView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// MainView

IMPLEMENT_DYNCREATE(MainView, CView)

BEGIN_MESSAGE_MAP(MainView, CView)
	//{{AFX_MSG_MAP(MainView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// MainView construction/destruction

MainView::MainView()
{
	// TODO: add construction code here
	_start.x = _start.y = _end.x = _end.y = -1;
}

MainView::~MainView()
{
}

BOOL MainView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// MainView drawing

void MainView::OnDraw(CDC* pDC)
{
	MainDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	
}

/////////////////////////////////////////////////////////////////////////////
// MainView diagnostics

#ifdef _DEBUG
void MainView::AssertValid() const
{
	CView::AssertValid();
}

void MainView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

MainDoc* MainView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(MainDoc)));
	return (MainDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// MainView message handlers

void MainView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CView::OnLButtonDown(nFlags, point);

	_start.x = point.x;
	_start.y = point.y;
}

void MainView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CView::OnLButtonUp(nFlags, point);

	_start.x = -1;
	_start.y = -1;
}

void MainView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CView::OnMouseMove(nFlags, point);

	CClientDC dc(this);
	_end.x = point.x;
	_end.y = point.y;
	if (_start.x != -1)
	{
		dc.MoveTo(_start.x, _start.y);
		dc.LineTo(_end.x, _end.y);
		_start.x = _end.x;
		_start.y = _end.y;
	}
}
