
// HW5_MakingaAnimation_2018036042View.cpp : CHW5_MakingaAnimation_2018036042View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_LBUTTONDOWN()
ON_WM_TIMER()
END_MESSAGE_MAP()

// CHW5_MakingaAnimation_2018036042View ����/�Ҹ�

CHW5_MakingaAnimation_2018036042View::CHW5_MakingaAnimation_2018036042View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CHW5_MakingaAnimation_2018036042View::~CHW5_MakingaAnimation_2018036042View()
{
}

BOOL CHW5_MakingaAnimation_2018036042View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CHW5_MakingaAnimation_2018036042View �׸���

void CHW5_MakingaAnimation_2018036042View::OnDraw(CDC* pDC)
{
	CHW5_MakingaAnimation_2018036042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	


	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.

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


// CHW5_MakingaAnimation_2018036042View �μ�

BOOL CHW5_MakingaAnimation_2018036042View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CHW5_MakingaAnimation_2018036042View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CHW5_MakingaAnimation_2018036042View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CHW5_MakingaAnimation_2018036042View ����

#ifdef _DEBUG
void CHW5_MakingaAnimation_2018036042View::AssertValid() const
{
	CView::AssertValid();
}

void CHW5_MakingaAnimation_2018036042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW5_MakingaAnimation_2018036042Doc* CHW5_MakingaAnimation_2018036042View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW5_MakingaAnimation_2018036042Doc)));
	return (CHW5_MakingaAnimation_2018036042Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW5_MakingaAnimation_2018036042View �޽��� ó����


//void CHW5_MakingaAnimation_2018036042View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
//
//	CView::OnLButtonDown(nFlags, point);
//}


void CHW5_MakingaAnimation_2018036042View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
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
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
}
