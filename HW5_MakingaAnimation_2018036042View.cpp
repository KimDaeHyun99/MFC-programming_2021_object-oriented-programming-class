
// HW5_MakingaAnimation_2018036042View.cpp : CHW5_MakingaAnimation_2018036042View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "HW5_MakingaAnimation_2018036042.h"
#endif

#include "HW5_MakingaAnimation_2018036042Doc.h"
#include "HW5_MakingaAnimation_2018036042View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHW5_MakingaAnimation_2018036042View

IMPLEMENT_DYNCREATE(CHW5_MakingaAnimation_2018036042View, CView)

BEGIN_MESSAGE_MAP(CHW5_MakingaAnimation_2018036042View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_LBUTTONDOWN()
ON_WM_TIMER()
END_MESSAGE_MAP()

// CHW5_MakingaAnimation_2018036042View 생성/소멸

CHW5_MakingaAnimation_2018036042View::CHW5_MakingaAnimation_2018036042View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CHW5_MakingaAnimation_2018036042View::~CHW5_MakingaAnimation_2018036042View()
{
}

BOOL CHW5_MakingaAnimation_2018036042View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CHW5_MakingaAnimation_2018036042View 그리기

void CHW5_MakingaAnimation_2018036042View::OnDraw(CDC* pDC)
{
	CHW5_MakingaAnimation_2018036042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	


	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.

	CBitmap bmpBack; bmpBack.LoadBitmapW(IDB_BITMAP1);
	BITMAP bitmap; bmpBack.GetBitmap(&bitmap);
	int nWidth = bitmap.bmWidth;
	int nHeight = bitmap.bmHeight;

	CDC memDC; memDC.CreateCompatibleDC(pDC);
	memDC.SelectObject(&bmpBack);
	pDC->BitBlt(0, 0, nWidth, nHeight, &memDC, 200, 100, SRCCOPY);
	memDC.DeleteDC();
	bmpBack.DeleteObject();

//	CBitmap bmpFace; bmpFace.LoadBitmapW(IDB_BITMAP2);
//	BITMAP bitface; bmpFace.GetBitmap(&bitface);

//	CDC memDC1; memDC1.CreateCompatibleDC(pDC);
//	memDC1.SelectObject(&bmpFace);
//	pDC->BitBlt(0, 0, 23, 23, &memDC1, 0, 0, SRCCOPY);
//	memDC1.DeleteDC();
//	bmpFace.DeleteObject();

}


// CHW5_MakingaAnimation_2018036042View 인쇄

BOOL CHW5_MakingaAnimation_2018036042View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CHW5_MakingaAnimation_2018036042View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CHW5_MakingaAnimation_2018036042View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CHW5_MakingaAnimation_2018036042View 진단

#ifdef _DEBUG
void CHW5_MakingaAnimation_2018036042View::AssertValid() const
{
	CView::AssertValid();
}

void CHW5_MakingaAnimation_2018036042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW5_MakingaAnimation_2018036042Doc* CHW5_MakingaAnimation_2018036042View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW5_MakingaAnimation_2018036042Doc)));
	return (CHW5_MakingaAnimation_2018036042Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW5_MakingaAnimation_2018036042View 메시지 처리기


//void CHW5_MakingaAnimation_2018036042View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
//
//	CView::OnLButtonDown(nFlags, point);
//}


void CHW5_MakingaAnimation_2018036042View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	static int x = 0; 
	static int y = 450;
	x +=50;
	
	if (x<=450)
	{

	
	CClientDC dc(this);

	CBitmap bmpBack; bmpBack.LoadBitmapW(IDB_BITMAP1);
	BITMAP bitmap; bmpBack.GetBitmap(&bitmap);
	int nWidth = bitmap.bmWidth;
	int nHeight = bitmap.bmHeight;

	CDC memDC; memDC.CreateCompatibleDC(0);
	memDC.SelectObject(&bmpBack);
	dc.BitBlt(0, 0, nWidth, nHeight, &memDC, 200, 100, SRCCOPY);
	memDC.DeleteDC();
	bmpBack.DeleteObject();


	
	CBitmap bmpFace; bmpFace.LoadBitmapW(IDB_BITMAP2);
	BITMAP bitface; bmpFace.GetBitmap(&bitface);

		CDC memDC1; memDC1.CreateCompatibleDC(0);
		memDC1.SelectObject(&bmpFace);
		dc.BitBlt(x, 0, 23, 23, &memDC1, 0, 0, SRCCOPY);

		dc.BitBlt(0, x, 48, 23, &memDC1, 25, 0, SRCCOPY);
		memDC1.DeleteDC();
		bmpFace.DeleteObject();
	}
	else
	{
		CClientDC dc(this);

		CBitmap bmpBack; bmpBack.LoadBitmapW(IDB_BITMAP1);
		BITMAP bitmap; bmpBack.GetBitmap(&bitmap);
		int nWidth = bitmap.bmWidth;
		int nHeight = bitmap.bmHeight;

		CDC memDC; memDC.CreateCompatibleDC(0);
		memDC.SelectObject(&bmpBack);
		dc.BitBlt(0, 0, nWidth, nHeight, &memDC, 200, 100, SRCCOPY);
		memDC.DeleteDC();
		bmpBack.DeleteObject();



		CBitmap bmpFace; bmpFace.LoadBitmapW(IDB_BITMAP2);
		BITMAP bitface; bmpFace.GetBitmap(&bitface);

		CDC memDC1; memDC1.CreateCompatibleDC(0);
		memDC1.SelectObject(&bmpFace);
		dc.BitBlt(0, y, 23, 23, &memDC1, 0, 0, SRCCOPY);

		dc.BitBlt(y, 0, 48, 23, &memDC1, 25, 0, SRCCOPY);
		memDC1.DeleteDC();
		bmpFace.DeleteObject();
		y -=50;
	
	}
	CView::OnTimer(nIDEvent);
}



void CHW5_MakingaAnimation_2018036042View::OnInitialUpdate()
{
	CView::OnInitialUpdate();
	
	SetTimer(0, 500, NULL);
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
}
