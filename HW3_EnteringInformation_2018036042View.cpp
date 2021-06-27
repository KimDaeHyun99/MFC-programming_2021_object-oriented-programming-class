
// HW3_EnteringInformation_2018036042View.cpp : CHW3_EnteringInformation_2018036042View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "HW3_EnteringInformation_2018036042.h"
#endif

#include "HW3_EnteringInformation_2018036042Doc.h"
#include "HW3_EnteringInformation_2018036042View.h"

#include "Name.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHW3_EnteringInformation_2018036042View

IMPLEMENT_DYNCREATE(CHW3_EnteringInformation_2018036042View, CView)

BEGIN_MESSAGE_MAP(CHW3_EnteringInformation_2018036042View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CHW3_EnteringInformation_2018036042View 생성/소멸

CHW3_EnteringInformation_2018036042View::CHW3_EnteringInformation_2018036042View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

	m_strMessage = _T("");
	//  m_strAge = 0;
	m_id = 0;
	m_pw = 0;
	m_AGE = 0;
	m_GENDER = 0;
}

CHW3_EnteringInformation_2018036042View::~CHW3_EnteringInformation_2018036042View()
{
}

BOOL CHW3_EnteringInformation_2018036042View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CHW3_EnteringInformation_2018036042View 그리기

void CHW3_EnteringInformation_2018036042View::OnDraw(CDC* pDC)
{
	CHW3_EnteringInformation_2018036042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
	

	if (m_GENDER == 0) {
		CString totalmale1; totalmale1.Format(_T("%s(남자)은 3년 후 %d살이 됩니다."), m_strMessage, m_AGE + 3);	//남자일경우 첫번째 줄
		pDC->TextOutW(0, 0, totalmale1);
		CString totalmale2; totalmale2.Format(_T("ID는 %d이고, 암호는 %d입니다."), m_id, m_pw);		//남자일경우 두번째 줄
		pDC->TextOutW(0, 20, totalmale2);
	}
	if (m_GENDER == 1) 
	{
		CString totalfemale1; totalfemale1.Format(_T("%s(여자)은 3년 후 %d살이 됩니다."), m_strMessage, m_AGE + 3);	//여자일경우 첫번째 줄
		pDC->TextOutW(0, 0, totalfemale1);
		CString totalfemale2; totalfemale2.Format(_T("ID는 %d이고, 암호는 %d입니다."), m_id, m_pw);		//여자일경우 두번째 줄
		pDC->TextOutW(0, 20, totalfemale2);
	}
	if (m_GENDER == 3)
	{
		CString Close1; Close1.Format(_T(""));
		pDC->TextOutW(0, 20, Close1);
	}

}


// CHW3_EnteringInformation_2018036042View 인쇄

BOOL CHW3_EnteringInformation_2018036042View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CHW3_EnteringInformation_2018036042View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CHW3_EnteringInformation_2018036042View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CHW3_EnteringInformation_2018036042View 진단

#ifdef _DEBUG
void CHW3_EnteringInformation_2018036042View::AssertValid() const
{
	CView::AssertValid();
}

void CHW3_EnteringInformation_2018036042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW3_EnteringInformation_2018036042Doc* CHW3_EnteringInformation_2018036042View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW3_EnteringInformation_2018036042Doc)));
	return (CHW3_EnteringInformation_2018036042Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW3_EnteringInformation_2018036042View 메시지 처리기


void CHW3_EnteringInformation_2018036042View::OnInitialUpdate()
{
	CView::OnInitialUpdate();

	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	CName dlg;
	dlg.m_strNAME = _T("김대현");
	dlg.m_age = (23);
	dlg.m_ID = (2018036042);
	dlg.m_PW = (12345678);
	dlg.m_gender = 0;
	if (dlg.DoModal() == IDOK) {
		m_strMessage = dlg.m_strNAME;
		m_AGE = dlg.m_age;
		m_id = dlg.m_ID;
		m_pw = dlg.m_PW;

		switch (m_GENDER)
		{
		case 0: m_GENDER = dlg.m_gender; break;
		case 1: m_GENDER = 1; break;

		}
	}
	else
	{
		m_GENDER = 3;
	}


	

}
