#include "MainGame.h"

void MainGame::Initialize()
{
	m_hdc = GetDC(g_hWnd);
	StateMgr::GetInst()->SetState(STATE_LOGO);
}
		
void MainGame::Progress()
{
	StateMgr::GetInst()->GetState()->Progress();
}

void MainGame::Render()
{
	StateMgr::GetInst()->GetState()->Render(m_hdc);
}

void MainGame::Release()
{
	ReleaseDC(g_hWnd, m_hdc);
	StateMgr::GetInst()->DestroyInst();
}

/*               持失切 / 社瑚切                 */

MainGame::MainGame()
{

}

MainGame::~MainGame()
{

}