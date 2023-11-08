#include "MainMenu.h"

MainMenu::MainMenu()
{
	
}

MainMenu::~MainMenu()
{
	Release();
}

void MainMenu::Initialize()
{
	m_vecBmp.push_back(PATHBMP("../Texture/BackBuffer.bmp"));
	m_vecBmp.push_back(PATHBMP("../Texture/MainMenu/MenuBack/MenuBackGround.bmp"));
	m_vecBmp.push_back(PATHBMP("../Texture/MainMenu/Button/Start.bmp"));
	m_vecBmp.push_back(PATHBMP("../Texture/MainMenu/Button/Exit.bmp"));

	Obj::SetBmp(&m_vecBmp);
	m_ObjList[OBJ_MENU_BACK].push_back(FACTORY(MenuBack));
}

void MainMenu::Progress()
{
	for (int i = 0; i < OBJ_MENU_END; ++i)
	{
		for (auto iter = m_ObjList[i].begin();
			iter != m_ObjList[i].end(); ++iter)
		{
			(*iter)->Progress();

			//버튼올거
		}
	}
}

void MainMenu::Render(HDC _hdc)
{
	for (int i = 0; i < OBJ_MENU_END; ++i)
	{
		for (auto iter = m_ObjList[i].begin();
			iter != m_ObjList[i].end(); ++iter)
		{
			(*iter)->Render(_hdc);

			//버튼올거
		}
	}
}

void MainMenu::Release()
{

}