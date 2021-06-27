
// HW3_EnteringInformation_2018036042View.cpp : CHW3_EnteringInformation_2018036042View Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CHW3_EnteringInformation_2018036042View ����/�Ҹ�

CHW3_EnteringInformation_2018036042View::CHW3_EnteringInformation_2018036042View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

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
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CHW3_EnteringInformation_2018036042View �׸���

void CHW3_EnteringInformation_2018036042View::OnDraw(CDC* pDC)
{
	CHW3_EnteringInformation_2018036042Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
	

	if (m_GENDER == 0) {
		CString totalmale1; totalmale1.Format(_T("%s(����)�� 3�� �� %d���� �˴ϴ�."), m_strMessage, m_AGE + 3);	//�����ϰ�� ù��° ��
		pDC->TextOutW(0, 0, totalmale1);
		CString totalmale2; totalmale2.Format(_T("ID�� %d�̰�, ��ȣ�� %d�Դϴ�."), m_id, m_pw);		//�����ϰ�� �ι�° ��
		pDC->TextOutW(0, 20, totalmale2);
	}
	if (m_GENDER == 1) 
	{
		CString totalfemale1; totalfemale1.Format(_T("%s(����)�� 3�� �� %d���� �˴ϴ�."), m_strMessage, m_AGE + 3);	//�����ϰ�� ù��° ��
		pDC->TextOutW(0, 0, totalfemale1);
		CString totalfemale2; totalfemale2.Format(_T("ID�� %d�̰�, ��ȣ�� %d�Դϴ�."), m_id, m_pw);		//�����ϰ�� �ι�° ��
		pDC->TextOutW(0, 20, totalfemale2);
	}
	if (m_GENDER == 3)
	{
		CString Close1; Close1.Format(_T(""));
		pDC->TextOutW(0, 20, Close1);
	}

}


// CHW3_EnteringInformation_2018036042View �μ�

BOOL CHW3_EnteringInformation_2018036042View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CHW3_EnteringInformation_2018036042View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CHW3_EnteringInformation_2018036042View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CHW3_EnteringInformation_2018036042View ����

#ifdef _DEBUG
void CHW3_EnteringInformation_2018036042View::AssertValid() const
{
	CView::AssertValid();
}

void CHW3_EnteringInformation_2018036042View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHW3_EnteringInformation_2018036042Doc* CHW3_EnteringInformation_2018036042View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHW3_EnteringInformation_2018036042Doc)));
	return (CHW3_EnteringInformation_2018036042Doc*)m_pDocument;
}
#endif //_DEBUG


// CHW3_EnteringInformation_2018036042View �޽��� ó����


void CHW3_EnteringInformation_2018036042View::OnInitialUpdate()
{
	CView::OnInitialUpdate();

	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	CName dlg;
	dlg.m_strNAME = _T("�����");
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
