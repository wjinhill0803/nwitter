#pragma once
#include "Include.h"

class Obj
{
protected:
	INFO		m_tInfo;
	FRAME		m_tFrame;
	DWORD		m_dwStatus;
	float		m_fSpeed;

protected:
	static vector<LoadBmp*>* m_pVecBmp;

public:
	static void SetBmp(vector<LoadBmp*>* pVecBmp) { m_pVecBmp = pVecBmp; }

public:
	RECT GetRect(void) const
	{
		RECT rc =
		{
			long(m_tInfo.fX - m_tInfo.fSizeX / 2),
			long(m_tInfo.fY - m_tInfo.fSizeY / 2),
			long(m_tInfo.fX - m_tInfo.fSizeX / 2),
			long(m_tInfo.fY - m_tInfo.fSizeY / 2)
		};
	}

public:
	virtual void Initialize() PURE;
	virtual void Progress() PURE;
	virtual void Render(HDC _hdc) PURE;
	virtual void Release()PURE;

public:
	Obj(void);

	Obj(float _fx, float _fy)
		:m_tInfo(_fx, _fy) {};

	Obj(float _fx, float _fy, float _fsizex, float _fsizey)
		:m_tInfo(_fx, _fy, _fsizex, _fsizey) {};

	virtual ~Obj(void);
};