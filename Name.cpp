// Name.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "HW3_EnteringInformation_2018036042.h"
#include "Name.h"
#include "afxdialogex.h"


// CName ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CName, CDialogEx)

CName::CName(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_NAME, pParent)
	, m_strNAME(_T(""))
	, m_ID(0)
	, m_PW(0)
	, m_age(0)
	, m_gender(0)
{

}

CName::~CName()
{
}

void CName::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_strNAME);
	//  DDX_Text(pDX, IDC_EDIT2, m_strAGE);
	DDX_Text(pDX, IDC_EDIT3, m_ID);
	DDX_Text(pDX, IDC_EDIT4, m_PW);
	DDX_Text(pDX, IDC_EDIT2, m_age);
	DDX_Radio(pDX, IDC_RADIO1, m_gender);
}


BEGIN_MESSAGE_MAP(CName, CDialogEx)
END_MESSAGE_MAP()


// CName �޽��� ó�����Դϴ�.
