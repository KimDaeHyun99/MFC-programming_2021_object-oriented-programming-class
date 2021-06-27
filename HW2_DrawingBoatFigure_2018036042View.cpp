
// HW2_DrawingBoatFigure_2018036042View.cpp : CHW2_DrawingBoatFigure_2018036042View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "HW2_DrawingBoatFigure_2018036042.h"
#endif

#include "HW2_DrawingBoatFigure_2018036042Doc.h"
#include "HW2_DrawingBoatFigure_2018036042View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHW2_DrawingBoatFigure_2018036042View

IMPLEMENT_DYNCREATE(CHW2_DrawingBoatFigure_2018036042View, CView)

BEGIN_MESSAGE_MAP(CHW2_DrawingBoatFigure_2018036042View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CHW2_DrawingBoatFigure_2018036042View 생성/소멸

CHW2_DrawingBoatFigure_2018036042View::CHW2_DrawingBoatFigure_2018036042View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CHW2_DrawingBoatFigure_2018036042View::~CHW2_DrawingBoatFigure_2018036042View()
{
}

BOOL CHW2_DrawingBoatFigure_2018036042View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CHW2_DrawingBoatFigure_2018036042View 그리기

void CHW2_DrawingBoatFigure_2018036042View::OnDraw(CDC* /*pDC*/)
{
	CHW2_DrawingBoatFigure_2018036042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CHW2_DrawingBoatFigure_2018036042View 인쇄

BOOL CHW2_DrawingBoatFigure_2018036042View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CHW2_DrawingBoatFigure_2018036042View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CHW2_DrawingBoatFigure_2018036042View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CHW2_DrawingBoatFigure_2018036042View 진단

#ifdef _DEBUG
void CHW2_DrawingBoatFigure_2018036042View::AssertValid() const
{
	CView::AssertValid();
}

void CHW2_DrawingBoatFigure_2018036042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW2_DrawingBoatFigure_2018036042Doc* CHW2_DrawingBoatFigure_2018036042View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW2_DrawingBoatFigure_2018036042Doc)));
	return (CHW2_DrawingBoatFigure_2018036042Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW2_DrawingBoatFigure_2018036042View 메시지 처리기


void CHW2_DrawingBoatFigure_2018036042View::OnLButtonDown(UINT nFlags, CPoint point)
{
	int x = point.x;
	int y = point.y;
	int n = 50;

	CClientDC dc(this);
	dc.MoveTo(x - 50, y + 15); dc.LineTo(x + 70, y + 15);  //선채 하단
	dc.MoveTo(x - 70, y - 15); dc.LineTo(x + 70, y - 15);  //선채 상단

	dc.MoveTo(x - 50, y + 15); dc.LineTo(x - 70, y - 15);  //선채 왼쪽
	dc.MoveTo(x + 70, y + 15); dc.LineTo(x + 70, y - 15);  //선채 오른쪽

	dc.MoveTo(x-20, y - 15); dc.LineTo(x-20, y - 70);  //돛대
	dc.MoveTo(x-20, y - 70); dc.LineTo(x, y - 25);  //돛의 윗부분
	dc.MoveTo(x-20, y - 25); dc.LineTo(x, y - 25);  //돛의 아랫부분

	dc.Rectangle(x + 20, y - 15, x + 50, y - 45);	//조타실

	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.





	CView::OnLButtonDown(nFlags, point);
}
