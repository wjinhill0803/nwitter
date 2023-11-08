#pragma once
#include "include.h"
#include "StateObj.h"
#include "Logo.h"
#include "MainMenu.h"
#include "Stage.h"

class StateMgr
{
private:
	StateObj* m_pState;
public:
	StateObj* GetState() const { return m_pState; }
public:
	StateObj* SetState(STATEID estate);
public:
	void Release();
private:
	static StateMgr* m_pInst;
public:
	static inline StateMgr* GetInst()
	{
		if (!m_pInst)
		{
			m_pInst = new StateMgr;
		}

		return m_pInst;
	}

	void DestroyInst()
	{
		SAFE_DELETE(m_pInst)
	}
public:
	StateMgr();
	~StateMgr();
};

