#include "Player.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::Initialize()
{
	m_tInfo.fX = Window_Size_X / 2;
	m_tInfo.fY = Window_Size_Y / 2;

	m_tInfo.fSizeX = 20;
	m_tInfo.fSizeY = 20;
	m_fSpeed = 10;
	m_tFrame.iStartX = 0;
	m_tFrame.iStartY = 0;
	m_tFrame.dwTime = GetTickCount();

	m_iStartMotionX = 0;
	m_iSrartMotionY = 0;
	SetMotion(0, 3, 1, 3, 0);
}

void Player::Progress()
{
	if (m_tFrame.dwTime + 100 < GetTickCount())
	{
		m_tFrame.dwTime = GetTickCount();
		FrameMove();
	}

	KeyCheck();
}

void Player::FrameMove()
{
	++m_tFrame.iStartX;

	if (m_tFrame.iStartX >= m_tFrame.iLastX)
	{
		m_tFrame.iStartX = m_iStartMotionX;
		++m_tFrame.iStartY;

		if (m_tFrame.iStartY >= m_tFrame.iLastY)
		{
			m_tFrame.iStartY = m_iSrartMotionY;
		}
	}
}

void Player::SetMotion(int _startx, int _starty, int _lastx, int _lasty, int iframex)
{
	if (m_tFrame.iStartX != iframex)
		m_tFrame.iStartX = iframex;

	m_iStartMotionX = _startx;
	m_iSrartMotionY = _starty;
	m_tFrame.iLastX = _lastx;
	m_tFrame.iLastY = _lasty;

}

void Player::KeyCheck()
{
	if (GetAsyncKeyState(VK_DOWN))
	{
		m_tInfo.fY += m_fSpeed;
		SetMotion(0, 3, 1, 3, 0);
	}

	if (GetAsyncKeyState(VK_UP))
	{
		m_tInfo.fY -= m_fSpeed;
		SetMotion(0, 2, 1, 2, 0);
	}

	if (GetAsyncKeyState(VK_LEFT))
	{
		m_tInfo.fX -= m_fSpeed;
		SetMotion(0, 0, 1, 0, 0);
	}

	if (GetAsyncKeyState(VK_RIGHT))
	{
		m_tInfo.fX += m_fSpeed;
		SetMotion(0, 1, 0, 1, 0);
	}
}

void Player::Render(HDC _hdc)
{
	TransparentBlt(_hdc, int(m_tInfo.fX - m_tInfo.fSizeX / 2),
		int(m_tInfo.fY - m_tInfo.fSizeY / 2),
		(INT)m_tInfo.fSizeX, (INT)m_tInfo.fSizeY,
		(*m_pVecBmp)[BMP_STAGE_PLAYER]->GetMemDC(),
		INT(m_tInfo.fSizeX * m_tFrame.iStartX),
		INT(m_tInfo.fSizeY * m_tFrame.iStartY),
		INT(m_tInfo.fSizeX), INT(m_tInfo.fSizeY), RGB(111, 111, 111));
}

void Player::Release()
{

}