#include "MenuBack.h"

MenuBack::MenuBack()
{

}

MenuBack::~MenuBack()
{

}

void MenuBack::Initialize()
{
	m_tInfo.fX = 0.f;
	m_tInfo.fY = 0.f;
	m_tInfo.fSizeX = 800;
	m_tInfo.fSizeY = 600;
}

void MenuBack::Progress()
{

}

void MenuBack::Render(HDC _hdc)
{
	BitBlt(_hdc, (int)m_tInfo.fX, (int)m_tInfo.fY, (int)m_tInfo.fSizeX, (int)m_tInfo.fSizeY,
		(*m_pVecBmp)[BMP_MENU_BACK]->GetMemDC(),
		0, 0, SRCCOPY);
}

void MenuBack::Release()
{

}