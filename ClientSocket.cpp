// ClientSocket.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "ChatClient.h"
#include "ClientSocket.h"
#include "ChatClientDlg.h"

// CClientSocket

CClientSocket::CClientSocket()
{
}

CClientSocket::~CClientSocket()
{
}


// CClientSocket ��� �Լ�


void CClientSocket::OnClose(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	this->ShutDown();
	this->Close();
	AfxMessageBox(_T("������ ������ �����Ͽ����ϴ�."));
	::PostQuitMessage(0);	//���α׷� ���� ����


	CSocket::OnClose(nErrorCode);
}


//void CClientSocket::OnAccept(int nErrorCode)
//{
//	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
//	
//
//
//
//	CSocket::OnAccept(nErrorCode);
//}


void CClientSocket::OnReceive(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	TCHAR szBuff[1024]; //::ZeroMemory(szBuff, sizeof(szBuff));
	int nRead = Receive(szBuff, sizeof(szBuff));
	switch (nRead) {
	case 0: this->Close(); break;
	case SOCKET_ERROR: if (GetLastError() != WSAEWOULDBLOCK)
	{
		AfxMessageBox(_T("Error occurred"));
		this->Close();
	} break;
	default:
		// ������ �޽����� ȭ�鿡 �����ش�.
		szBuff[nRead] = _T('\0');
		CChatClientDlg *pMain = (CChatClientDlg *)AfxGetMainWnd();
		pMain->m_ctrlEdit.ReplaceSel(szBuff);
	}


	CSocket::OnReceive(nErrorCode);
}
