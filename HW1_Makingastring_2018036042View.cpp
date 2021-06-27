
// HW1_Makingastring_2018036042View.cpp : CHW1_Makingastring_2018036042View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "HW1_Makingastring_2018036042.h"
#endif

#include "HW1_Makingastring_2018036042Doc.h"
#include "HW1_Makingastring_2018036042View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHW1_Makingastring_2018036042View

IMPLEMENT_DYNCREATE(CHW1_Makingastring_2018036042View, CView)

BEGIN_MESSAGE_MAP(CHW1_Makingastring_2018036042View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CHW1_Makingastring_2018036042View 생성/소멸

CHW1_Makingastring_2018036042View::CHW1_Makingastring_2018036042View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CHW1_Makingastring_2018036042View::~CHW1_Makingastring_2018036042View()
{
}

BOOL CHW1_Makingastring_2018036042View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CHW1_Makingastring_2018036042View 그리기

void CHW1_Makingastring_2018036042View::OnDraw(CDC* /*pDC*/)
{
	CHW1_Makingastring_2018036042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CHW1_Makingastring_2018036042View 인쇄

BOOL CHW1_Makingastring_2018036042View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CHW1_Makingastring_2018036042View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CHW1_Makingastring_2018036042View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CHW1_Makingastring_2018036042View 진단

#ifdef _DEBUG
void CHW1_Makingastring_2018036042View::AssertValid() const
{
	CView::AssertValid();
}

void CHW1_Makingastring_2018036042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW1_Makingastring_2018036042Doc* CHW1_Makingastring_2018036042View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW1_Makingastring_2018036042Doc)));
	return (CHW1_Makingastring_2018036042Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW1_Makingastring_2018036042View 메시지 처리기


void CHW1_Makingastring_2018036042View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CString str;


	str.Format(_T("%c"), nChar); 
	CClientDC dc(this);

	if (str == 47 || str == 46 || str == 45 || str == 44 || str == 43 || str == 42 || str == 41 || str == 40 || str == 39 || str == 38 
		|| str == 37 || str == 36 || str == 35 || str == 34 || str == 33 || str == 58 || str == 59 || str == 60 || str == 61 || str == 62 || str == 63 || str == 64
		|| str == 91 || str == 92 || str == 93 || str == 94 || str == 95 || str == 96 || str == 123 || str == 124 || str == 125 || str == 126)
	{
		str.Remove(47);		str.Remove(46);		str.Remove(45);		str.Remove(44);		str.Remove(43);		str.Remove(42);		str.Remove(41);		str.Remove(40);
		str.Remove(39);		str.Remove(38);		str.Remove(37);		str.Remove(36);		str.Remove(35);		str.Remove(34);		str.Remove(33);		str.Remove(58);
		str.Remove(59);		str.Remove(60);		str.Remove(61);		str.Remove(62);		str.Remove(63);		str.Remove(64);		str.Remove(91);		str.Remove(92);
		str.Remove(93);		str.Remove(94);		str.Remove(95);		str.Remove(96);		str.Remove(123);		str.Remove(124);		str.Remove(125);
		str.Remove(126);
	}
	//특수문자가 입력될시 특수문자 삭제(아스키코드)

	dc.TextOutW(x, y, str);	//x,y 좌표에 str출력
	CSize size = dc.GetTextExtent(str);	//문자의 크기
	x += size.cx;	//문자의 크기만큼 x축으로 이동
	

	CView::OnChar(nChar, nRepCnt, nFlags);
}
