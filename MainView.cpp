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
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// MainView construction/destruction

MainView::MainView()
{
	// TODO: add construction code here

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
