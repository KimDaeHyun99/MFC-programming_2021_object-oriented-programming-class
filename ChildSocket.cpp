// ChildSocket.cpp : 구현 파일입니다.
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


// CChildSocket 멤버 함수


void CChildSocket::OnClose(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	POSITION pos = m_pListenSocket->m_pChildSocketList.Find(this);
	m_pListenSocket->m_pChildSocketList.RemoveAt(pos);
	CString strSocketName; UINT uPort;
	this->GetPeerName(strSocketName, uPort);
	CString str; str.Format(_T("[%s:%u] 연결 종료\r\n"), strSocketName, uPort);
	CChatServerDlg* pMain = (CChatServerDlg*)AfxGetMainWnd();
	pMain->m_ctrlEdit.ReplaceSel(str);
	this->ShutDown();
	this->Close();
	delete this;

	CSocket::OnClose(nErrorCode);
}


void CChildSocket::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	// 연결된 클라이언트의 IP주소와 포트 번호를 알아낸다.
	CString strIPAddress; UINT uPortNumber;
	GetPeerName(strIPAddress, uPortNumber);

	// 수신한 데이터를 가져온다.
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
		// 수신한 메시지를 화면에 보여준다.
		szBuff[nRead] = _T('\0');
		CString str; str.Format(_T("[%s:%u] %s"), strIPAddress, uPortNumber, szBuff);
		CChatServerDlg* pMain = (CChatServerDlg*)AfxGetMainWnd();
		pMain->m_ctrlEdit.ReplaceSel(str);

		m_pListenSocket->Broadcast(str);	// 모든 클라이언트에게 송신한다.
		break;
	}

	CSocket::OnReceive(nErrorCode);
}
