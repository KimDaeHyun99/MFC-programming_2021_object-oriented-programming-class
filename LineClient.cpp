// LineClient.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "ChatClient.h"
#include "LineClient.h"


// CLineClient

CLineClient::CLineClient()
{
}

CLineClient::~CLineClient()
{
}


// CLineClient ��� �Լ�


void CLineClient::OnClose(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	this->ShutDown();
	this->Close();
	AfxMessageBox(_T("������ ������ �����Ͽ����ϴ�."));
	::PostQuitMessage(0);	//���α׷� ���� ����
	CSocket::OnClose(nErrorCode);
}


void CLineClient::OnReceive(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.


	CSocket::OnReceive(nErrorCode);
}

CLineClient::CLineClient(CPoint pointto, CPoint pointfrom)
{
	m_pointfrom = pointfrom;
	m_pointto = pointto;
}