// MainDoc.cpp : implementation of the MainDoc class
//

#include "stdafx.h"
#include "MFC_Tenouk.h"

#include "MainDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// MainDoc

IMPLEMENT_DYNCREATE(MainDoc, CDocument)

BEGIN_MESSAGE_MAP(MainDoc, CDocument)
	//{{AFX_MSG_MAP(MainDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// MainDoc construction/destruction

MainDoc::MainDoc()
{
	// TODO: add one-time construction code here

}

MainDoc::~MainDoc()
{
}

BOOL MainDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// MainDoc serialization

void MainDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// MainDoc diagnostics

#ifdef _DEBUG
void MainDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void MainDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// MainDoc commands
