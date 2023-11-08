#include "StateMgr.h"
#include "StateObj.h"
#include "Logo.h"
#include "MainMenu.h"

StateMgr* StateMgr::m_pInst = NULL;

StateMgr::StateMgr()
	:m_pState(NULL)
{
}

StateObj* StateMgr::SetState(STATEID estate)
{
	SAFE_DELETE(m_pState);

	switch (estate)
	{
	case STATE_LOGO:
		m_pState = new Logo;
		break;
	case STATE_MENU:
		m_pState = new MainMenu;
		break;
	case STATE_STAGE:
		m_pState = new Stage;
	}
	m_pState->Initialize();

	return m_pState;
}

StateMgr::~StateMgr()
{
	Release();
}

void StateMgr::Release()
{
	SAFE_DELETE(m_pState);
}

