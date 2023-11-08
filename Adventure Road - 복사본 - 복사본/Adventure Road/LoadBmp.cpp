#include "LoadBmp.h"

LoadBmp::LoadBmp(void)
{
}

LoadBmp::~LoadBmp(void)
{
	Release();
}

LoadBmp* LoadBmp::LoadBmpf(const TCHAR* pFileName)
{
	m_hdc = GetDC(g_hWnd);
	m_MemDC = CreateCompatibleDC(m_hdc);

	m_bitMap = (HBITMAP)LoadImage(NULL, pFileName, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
	
	if (m_bitMap == NULL)
	{
		MessageBox(g_hWnd, pFileName, L"SYSTEM ERROR (UNABLE TO LOAD IMAGE)", MB_OKCANCEL);
	}

	m_oldbitMap = (HBITMAP)SelectObject(m_MemDC, m_bitMap);

	return this;
}

void LoadBmp::Release(void)
{
	SelectObject(m_MemDC, m_bitMap);
	DeleteObject(m_bitMap);
	DeleteObject(m_oldbitMap);
	DeleteDC(m_MemDC);
	ReleaseDC(g_hWnd, m_hdc);
}