
// HW2_DrawingBoatFigure_2018036042View.cpp : CHW2_DrawingBoatFigure_2018036042View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CHW2_DrawingBoatFigure_2018036042View ����/�Ҹ�

CHW2_DrawingBoatFigure_2018036042View::CHW2_DrawingBoatFigure_2018036042View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CHW2_DrawingBoatFigure_2018036042View::~CHW2_DrawingBoatFigure_2018036042View()
{
}

BOOL CHW2_DrawingBoatFigure_2018036042View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CHW2_DrawingBoatFigure_2018036042View �׸���

void CHW2_DrawingBoatFigure_2018036042View::OnDraw(CDC* /*pDC*/)
{
	CHW2_DrawingBoatFigure_2018036042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CHW2_DrawingBoatFigure_2018036042View �μ�

BOOL CHW2_DrawingBoatFigure_2018036042View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CHW2_DrawingBoatFigure_2018036042View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CHW2_DrawingBoatFigure_2018036042View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CHW2_DrawingBoatFigure_2018036042View ����

#ifdef _DEBUG
void CHW2_DrawingBoatFigure_2018036042View::AssertValid() const
{
	CView::AssertValid();
}

void CHW2_DrawingBoatFigure_2018036042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW2_DrawingBoatFigure_2018036042Doc* CHW2_DrawingBoatFigure_2018036042View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW2_DrawingBoatFigure_2018036042Doc)));
	return (CHW2_DrawingBoatFigure_2018036042Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW2_DrawingBoatFigure_2018036042View �޽��� ó����


void CHW2_DrawingBoatFigure_2018036042View::OnLButtonDown(UINT nFlags, CPoint point)
{
	int x = point.x;
	int y = point.y;
	int n = 50;

	CClientDC dc(this);
	dc.MoveTo(x - 50, y + 15); dc.LineTo(x + 70, y + 15);  //��ä �ϴ�
	dc.MoveTo(x - 70, y - 15); dc.LineTo(x + 70, y - 15);  //��ä ���

	dc.MoveTo(x - 50, y + 15); dc.LineTo(x - 70, y - 15);  //��ä ����
	dc.MoveTo(x + 70, y + 15); dc.LineTo(x + 70, y - 15);  //��ä ������

	dc.MoveTo(x-20, y - 15); dc.LineTo(x-20, y - 70);  //����
	dc.MoveTo(x-20, y - 70); dc.LineTo(x, y - 25);  //���� ���κ�
	dc.MoveTo(x-20, y - 25); dc.LineTo(x, y - 25);  //���� �Ʒ��κ�

	dc.Rectangle(x + 20, y - 15, x + 50, y - 45);	//��Ÿ��

	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.





	CView::OnLButtonDown(nFlags, point);
}
