
// HW4_AddingMenuToolbar_2018036042View.cpp : CHW4_AddingMenuToolbar_2018036042View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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
	// 표준 인쇄 명령입니다.
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

// CHW4_AddingMenuToolbar_2018036042View 생성/소멸

CHW4_AddingMenuToolbar_2018036042View::CHW4_AddingMenuToolbar_2018036042View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

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
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CHW4_AddingMenuToolbar_2018036042View 그리기

void CHW4_AddingMenuToolbar_2018036042View::OnDraw(CDC* /*pDC*/)
{
	CHW4_AddingMenuToolbar_2018036042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CHW4_AddingMenuToolbar_2018036042View 인쇄

BOOL CHW4_AddingMenuToolbar_2018036042View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CHW4_AddingMenuToolbar_2018036042View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CHW4_AddingMenuToolbar_2018036042View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CHW4_AddingMenuToolbar_2018036042View 진단

#ifdef _DEBUG
void CHW4_AddingMenuToolbar_2018036042View::AssertValid() const
{
	CView::AssertValid();
}

void CHW4_AddingMenuToolbar_2018036042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW4_AddingMenuToolbar_2018036042Doc* CHW4_AddingMenuToolbar_2018036042View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW4_AddingMenuToolbar_2018036042Doc)));
	return (CHW4_AddingMenuToolbar_2018036042Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW4_AddingMenuToolbar_2018036042View 메시지 처리기

////////////////////////////////////////////////////////////////////////////Shape////////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnScissors()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.

	CClientDC dc(this);
	m_nShape = 0;
	
}


void CHW4_AddingMenuToolbar_2018036042View::OnRectangle()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);
	m_nShape = 1;

}


void CHW4_AddingMenuToolbar_2018036042View::OnCircle()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);
	m_nShape = 2;
}

////////////////////////////////////////////////////////////////////////////Color////////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnWhite()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(255, 255, 255));

}


void CHW4_AddingMenuToolbar_2018036042View::OnRed()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(255, 0, 0));
}


void CHW4_AddingMenuToolbar_2018036042View::OnBlue()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(0, 0, 255));
}

////////////////////////////////////////////////////////////////////////////Line////////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnSolid()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);
	m_nPenstlye = 0;

}


void CHW4_AddingMenuToolbar_2018036042View::OnDash()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);

	m_nPenstlye = 1;
}


void CHW4_AddingMenuToolbar_2018036042View::OnDot()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);
	m_nPenstlye = 2;

}


void CHW4_AddingMenuToolbar_2018036042View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
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
//	// TODO: 여기에 명령 처리기 코드를 추가합니다.
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnLineDash()
//{
//	// TODO: 여기에 명령 처리기 코드를 추가합니다.
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnLineDot()
//{
//	// TODO: 여기에 명령 처리기 코드를 추가합니다.
//
//}
////////////////////////////////////////////////////////////////////////모양////////////////////////////////////////////////////////////////////////

//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtscissors(CCmdUI *pCmdUI)
//{
//	// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
//	m_nBTShape = 0;
//	
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtrectangle(CCmdUI *pCmdUI)
//{
//	// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
//	m_nBTShape = 1;
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtcircle(CCmdUI *pCmdUI)
//{
//	// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
//	m_nBTShape = 2;
//}

////////////////////////////////////////////////////////////////////////색깔////////////////////////////////////////////////////////////////////////

//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtwhite(CCmdUI *pCmdUI)
//{
//	// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtred(CCmdUI *pCmdUI)
//{
//	// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtblue(CCmdUI *pCmdUI)
//{
//	// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
//
//}

////////////////////////////////////////////////////////////////////////라인////////////////////////////////////////////////////////////////////////

//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtsolid(CCmdUI *pCmdUI)
//{
//	// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
//
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtdash(CCmdUI *pCmdUI)
//{
//	// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
//
//}


//void CHW4_AddingMenuToolbar_2018036042View::OnUpdateBtdot(CCmdUI *pCmdUI)
//{
//	// TODO: 여기에 명령 업데이트 UI 처리기 코드를 추가합니다.
//
//}

////////////////////////////////////////////////////////////////////////모양////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnBtscissors()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nShape = 0;
}


void CHW4_AddingMenuToolbar_2018036042View::OnBtrectangle()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nShape = 1;
}


void CHW4_AddingMenuToolbar_2018036042View::OnBtcircle()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nShape = 2;
}

////////////////////////////////////////////////////////////////////////라인////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnBtsolid()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nPenstlye = 0;
}


void CHW4_AddingMenuToolbar_2018036042View::OnBtdash()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nPenstlye = 1;

}


void CHW4_AddingMenuToolbar_2018036042View::OnBtdot()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nPenstlye = 2;
}

////////////////////////////////////////////////////////////////////////색////////////////////////////////////////////////////////////////////////

void CHW4_AddingMenuToolbar_2018036042View::OnBtwhite()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(255, 255, 255));
}


void CHW4_AddingMenuToolbar_2018036042View::OnBtred()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(255, 0, 0));
}


void CHW4_AddingMenuToolbar_2018036042View::OnBtblue()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CClientDC dc(this);
	RECT rect; this->GetClientRect(&rect);
	dc.FillSolidRect(0, 0, 3000, 3000, RGB(0, 0, 255));
}
