#pragma once
#include "Include.h"
class StateObj
{
protected:
	vector <LoadBmp*> m_vecBmp;
public:
	virtual void Initialize() PURE;
	virtual void Progress() PURE;
	virtual void Render(HDC _hdc) PURE;
	virtual void Release();

public:
	StateObj();
	~StateObj();
};
