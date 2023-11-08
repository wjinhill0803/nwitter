#include "StageBack.h"

void StageBack::Initialize()
{
	m_tInfo.fX = 0.f;
	m_tInfo.fY = 0.f;
	m_tInfo.fSizeX = Window_Size_X;
	m_tInfo.fSizeY = Window_Size_Y;
}

void StageBack::Progress()
{

}

void StageBack::Render(HDC _hdc)
{
	BitBlt(_hdc, (int)m_tInfo.fX, (int)m_tInfo.fY,
		(int)m_tInfo.fSizeX, (int)m_tInfo.fSizeY,
		(*m_pVecBmp)[BMP_STAGE_BACK]->GetMemDC(),
		0, 0, SRCCOPY);
}

void StageBack::Release()
{

}

StageBack::StageBack()
{

}

StageBack::~StageBack()
{

}