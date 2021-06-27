// ChildSocket.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "ChatServer.h"
#include "ChildSocket.h"
#include "ChatServerDlg.h"

// CChildSocket

CChildSocket::CChildSocket()
{
}

CChildSocket::~CChildSocket()
{
}


// CChildSocket ��� �Լ�


void CChildSocket::OnClose(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	POSITION pos = m_pListenSocket->m_pChildSocketList.Find(this);
	m_pListenSocket->m_pChildSocketList.RemoveAt(pos);
	CString strSocketName; UINT uPort;
	this->GetPeerName(strSocketName, uPort);
	CString str; str.Format(_T("[%s:%u] ���� ����\r\n"), strSocketName, uPort);
	CChatServerDlg* pMain = (CChatServerDlg*)AfxGetMainWnd();
	pMain->m_ctrlEdit.ReplaceSel(str);
	this->ShutDown();
	this->Close();
	delete this;

	CSocket::OnClose(nErrorCode);
}


void CChildSocket::OnReceive(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	// ����� Ŭ���̾�Ʈ�� IP�ּҿ� ��Ʈ ��ȣ�� �˾Ƴ���.
	CString strIPAddress; UINT uPortNumber;
	GetPeerName(strIPAddress, uPortNumber);

	// ������ �����͸� �����´�.
	TCHAR szBuff[1024]; //::ZeroMemory(szBuffer, sizeof(szBuffer));
	int nRead = Receive(szBuff, sizeof(szBuff));
	switch (nRead) {
	case 0: this->Close(); break;
	case SOCKET_ERROR: if (GetLastError() != WSAEWOULDBLOCK)
	{
		AfxMessageBox(_T("Error occurred"));
		Close();
	} break;
	default:
		// ������ �޽����� ȭ�鿡 �����ش�.
		szBuff[nRead] = _T('\0');
		CString str; str.Format(_T("[%s:%u] %s"), strIPAddress, uPortNumber, szBuff);
		CChatServerDlg* pMain = (CChatServerDlg*)AfxGetMainWnd();
		pMain->m_ctrlEdit.ReplaceSel(str);

		m_pListenSocket->Broadcast(str);	// ��� Ŭ���̾�Ʈ���� �۽��Ѵ�.
		break;
	}

	CSocket::OnReceive(nErrorCode);
}
