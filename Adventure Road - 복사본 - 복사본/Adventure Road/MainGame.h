#pragma once
#include "Include.h"
#include "Logo.h"
#include "StateMgr.h"
class MainGame
{
	Logo* m_Logo;
	HDC m_hdc;
public:

	void Initialize();
	void Progress();
	void Render();
	void Release();

public:

	MainGame();
	~MainGame();
};

