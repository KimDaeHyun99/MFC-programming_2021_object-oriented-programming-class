
// HW4_AddingMenuToolbar_2018036042View.cpp : CHW4_AddingMenuToolbar_2018036042View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "HW4_AddingMenuToolbar_2018036042.h"
#endif

#include "HW4_AddingMenuToolbar_2018036042Doc.h"
#include "HW4_AddingMenuToolbar_2018036042View.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif



// CHW4_AddingMenuToolbar_2018036042View

IMPLEMENT_DYNCREATE(CHW4_AddingMenuToolbar_2018036042View, CView)

BEGIN_MESSAGE_MAP(CHW4_AddingMenuToolbar_2018036042View, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(IDM_SCISSORS, &CHW4_AddingMenuToolbar_2018036042View::OnScissors)
	ON_COMMAND(IDM_RECTANGLE, &CHW4_AddingMenuToolbar_2018036042View::OnRectangle)
	ON_COMMAND(IDM_CIRCLE, &CHW4_AddingMenuToolbar_2018036042View::OnCircle)
	ON_COMMAND(IDM_WHITE, &CHW4_AddingMenuToolbar_2018036042View::OnWhite)
	ON_COMMAND(IDM_RED, &CHW4_AddingMenuToolbar_2018036042View::OnRed)
	ON_COMMAND(IDM_BLUE, &CHW4_AddingMenuToolbar_2018036042View::OnBlue)
	ON_COMMAND(IDM_SOLID, &CHW4_AddingMenuToolbar_2018036042View::OnSolid)
	ON_COMMAND(IDM_DASH, &CHW4_AddingMenuToolbar_2018036042View::OnDash)
	ON_COMMAND(IDM_DOT, &CHW4_AddingMenuToolbar_2018036042View::OnDot)
	ON_WM_LBUTTONDOWN()
//	ON_COMMAND(ID_LINE_SOLID, &CHW4_AddingMenuToolbar_2018036042View::OnLineSolid)
//	ON_COMMAND(ID_LINE_DASH, &CHW4_AddingMenuToolbar_2018036042View::OnLineDash)
//	ON_COMMAND(ID_LINE_DOT, &CHW4_AddingMenuToolbar_2018036042View::OnLineDot)
//ON_UPDATE_COMMAND_UI(IDM_BTSCISSORS, &CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtscissors)
//ON_UPDATE_COMMAND_UI(IDM_BTRECTANGLE, &CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtrectangle)
//ON_UPDATE_COMMAND_UI(IDM_BTCIRCLE, &CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtcircle)
//ON_UPDATE_COMMAND_UI(IDM_BTWHITE, &CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtwhite)
//ON_UPDATE_COMMAND_UI(IDM_BTRED, &CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtred)
//ON_UPDATE_COMMAND_UI(IDM_BTBLUE, &CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtblue)
//ON_UPDATE_COMMAND_UI(IDM_BTSOLID, &CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtsolid)
//ON_UPDATE_COMMAND_UI(IDM_BTDASH, &CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtdash)
//ON_UPDATE_COMMAND_UI(IDM_BTDOT, &CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtdot)
ON_COMMAND(IDM_BTSCISSORS, &CHW4_AddingMenuToolbar_2018036042View::OnBtscissors)
ON_COMMAND(IDM_BTRECTANGLE, &CHW4_AddingMenuToolbar_2018036042View::OnBtrectangle)
ON_COMMAND(IDM_BTCIRCLE, &CHW4_AddingMenuToolbar_2018036042View::OnBtcircle)
ON_COMMAND(IDM_BTSOLID, &CHW4_AddingMenuToolbar_2018036042View::OnBtsolid)
ON_COMMAND(IDM_BTDASH, &CHW4_AddingMenuToolbar_2018036042View::OnBtdash)
ON_COMMAND(IDM_BTDOT, &CHW4_AddingMenuToolbar_2018036042View::OnBtdot)
ON_COMMAND(IDM_BTWHITE, &CHW4_AddingMenuToolbar_2018036042View::OnBtwhite)
ON_COMMAND(IDM_BTRED, &CHW4_AddingMenuToolbar_2018036042View::OnBtred)
ON_COMMAND(IDM_BTBLUE, &CHW4_AddingMenuToolbar_2018036042View::OnBtblue)
END_MESSAGE_MAP()

// CHW4_AddingMenuToolbar_2018036042View ����/�Ҹ�

CHW4_AddingMenuToolbar_2018036042View::CHW4_AddingMenuToolbar_2018036042View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

	m_nShape = 0;
	m_nPenstlye = 0;
	m_nBTShape = 0;
	m_nBTLine = 0;
}

CHW4_AddingMenuToolbar_2018036042View::~CHW4_AddingMenuToolbar_2018036042View()
{
}

BOOL CHW4_AddingMenuToolbar_2018036042View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CHW4_AddingMenuToolbar_2018036042View �׸���

void CHW4_AddingMenuToolbar_2018036042View::OnDraw(CDC* /*pDC*/)
{
	CHW4_AddingMenuToolbar_2018036042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CHW4_AddingMenuToolbar_2018036042View �μ�

BOOL CHW4_AddingMenuToolbar_2018036042View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CHW4_AddingMenuToolbar_2018036042View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CHW4_AddingMenuToolbar_2018036042View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CHW4_AddingMenuToolbar_2018036042View ����

#ifdef _DEBUG
void CHW4_AddingMenuToolbar_2018036042View::AssertValid() const
{
	CView::AssertValid();
}

void CHW4_AddingMenuToolbar_2018036042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW4_AddingMenuToolbar_2018036042Doc* CHW4_AddingMenuToolbar_2018036042View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW4_AddingMenuToolbar_2018036042Doc)));
	return (CHW4_AddingMenuToolbar_2018036042Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW4_AddingMenuToolbar_2018036042View �޽��� ó����

////////////////////////////////////////////////////////////////////////////Shape////////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnScissors()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.

	CClientDC dc(this);
	m_nShape = 0;
	
}


void CHW4_AddingMenuToolbar_2018036042View::OnRectangle()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);
	m_nShape = 1;

}


void CHW4_AddingMenuToolbar_2018036042View::OnCircle()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);
	m_nShape = 2;
}

////////////////////////////////////////////////////////////////////////////Color////////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnWhite()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(255, 255, 255));

}


void CHW4_AddingMenuToolbar_2018036042View::OnRed()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(255, 0, 0));
}


void CHW4_AddingMenuToolbar_2018036042View::OnBlue()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(0, 0, 255));
}

////////////////////////////////////////////////////////////////////////////Line////////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnSolid()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);
	m_nPenstlye = 0;

}


void CHW4_AddingMenuToolbar_2018036042View::OnDash()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);

	m_nPenstlye = 1;
}


void CHW4_AddingMenuToolbar_2018036042View::OnDot()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);
	m_nPenstlye = 2;

}


void CHW4_AddingMenuToolbar_2018036042View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	CClientDC dc(this);
	int x = point.x;
	int y = point.y;
	CPen pen;

	if (m_nPenstlye == 0)
	{
		pen.CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
		CPen *pOldPen = (CPen *)dc.SelectObject(&pen);
	}
	else if (m_nPenstlye ==1)
	{
		pen.CreatePen(PS_DASH, 1, RGB(0, 0, 0));
		CPen *pOldPen = (CPen *)dc.SelectObject(&pen);
	}
	else if (m_nPenstlye == 2)
	{
		pen.CreatePen(PS_DOT, 1, RGB(0, 0, 0));
		CPen *pOldPen = (CPen *)dc.SelectObject(&pen);
	}
	
	switch (m_nShape)
	{
	case 0:	
		dc.MoveTo(x - 20, y - 20);
		dc.LineTo(x + 20, y + 20);
		dc.MoveTo(x + 20, y - 20);
		dc.LineTo(x - 20, y + 20); 
		break;	//Scissors

	case 1:	
		dc.Rectangle(x - 20, y - 20, x + 20, y + 20);
		break;	//Rectangle
	case 2:	
		dc.Ellipse(x - 20, y - 20, x + 20, y + 20);
		break;	//Circle
	}

	CView::OnLButtonDown(nFlags, point);
}







//////////////////////////////////////////////////////////line

//void CHW4_AddingMenuToolbar_2018036042View::OnLineSolid()
//{
//	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnLineDash()
//{
//	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnLineDot()
//{
//	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
//
//}
////////////////////////////////////////////////////////////////////////���////////////////////////////////////////////////////////////////////////

//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtscissors(CCmdUI *pCmdUI)
//{
//	// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
//	m_nBTShape = 0;
//	
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtrectangle(CCmdUI *pCmdUI)
//{
//	// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
//	m_nBTShape = 1;
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtcircle(CCmdUI *pCmdUI)
//{
//	// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
//	m_nBTShape = 2;
//}

////////////////////////////////////////////////////////////////////////����////////////////////////////////////////////////////////////////////////

//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtwhite(CCmdUI *pCmdUI)
//{
//	// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtred(CCmdUI *pCmdUI)
//{
//	// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtblue(CCmdUI *pCmdUI)
//{
//	// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
//
//}

////////////////////////////////////////////////////////////////////////����////////////////////////////////////////////////////////////////////////

//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtsolid(CCmdUI *pCmdUI)
//{
//	// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
//
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtdash(CCmdUI *pCmdUI)
//{
//	// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtdot(CCmdUI *pCmdUI)
//{
//	// TODO: ���⿡ ��� ������Ʈ UI ó���� �ڵ带 �߰��մϴ�.
//
//}

////////////////////////////////////////////////////////////////////////���////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnBtscissors()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	m_nShape = 0;
}


void CHW4_AddingMenuToolbar_2018036042View::OnBtrectangle()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	m_nShape = 1;
}


void CHW4_AddingMenuToolbar_2018036042View::OnBtcircle()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	m_nShape = 2;
}

////////////////////////////////////////////////////////////////////////����////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnBtsolid()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	m_nPenstlye = 0;
}


void CHW4_AddingMenuToolbar_2018036042View::OnBtdash()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	m_nPenstlye = 1;

}


void CHW4_AddingMenuToolbar_2018036042View::OnBtdot()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	m_nPenstlye = 2;
}

////////////////////////////////////////////////////////////////////////��////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnBtwhite()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(255, 255, 255));
}


void CHW4_AddingMenuToolbar_2018036042View::OnBtred()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(255, 0, 0));
}


void CHW4_AddingMenuToolbar_2018036042View::OnBtblue()
{
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(0, 0, 255));
}
