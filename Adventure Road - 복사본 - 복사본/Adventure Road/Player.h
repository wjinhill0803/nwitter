#pragma once
#include "Obj.h"

class Player:
	public Obj
{
private:
	int			m_iStartMotionX;
	int			m_iSrartMotionY;
public:
	void FrameMove();
	void KeyCheck();
	void SetMotion(int _startx, int _starty, int _lastx, int _lasty, int iframex);

public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render(HDC _hdc);
	virtual void Release();
public:
	Player();
	virtual ~Player();
};

