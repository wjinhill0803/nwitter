#pragma once
#include "Include.h"

class LoadBmp
{
private:
	HDC			m_hdc, m_MemDC;
	HBITMAP		m_bitMap, m_oldbitMap;
public:
	HDC GetMemDC(void) { return m_MemDC; }
public:
	LoadBmp* LoadBmpf(const TCHAR* pFileName);
	void Release(void);
public:
	LoadBmp();
	~LoadBmp();
};

