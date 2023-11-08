#include "Stage.h"

Stage::Stage()
{

}

Stage::~Stage()
{
	Release();
}

void Stage::Initialize()
{
	m_vecBmp.push_back(PATHBMP("../Texture/BackBuffer.bmp"));
	m_vecBmp.push_back(PATHBMP("../Texture/Stage/StageBack/StageBack.bmp"));
	m_vecBmp.push_back(PATHBMP("../Texture/Stage/Player/Player.bmp"));

	m_ObjList[OBJ_STAGE_BACK].push_back(FACTORY(StageBack));
	m_ObjList[OBJ_STAGE_PLAYER].push_back(FACTORY(Player));

	Obj::SetBmp(&m_vecBmp);
}

void Stage::Progress()
{
	for (int i = 0; i < OBJ_STAGE_END; ++i)
	{
		for (auto iter = m_ObjList[i].begin();
			iter != m_ObjList[i].end(); ++iter)
		{
			(*iter)->Progress();
		}
	}
}

void Stage::Render(HDC _hdc)
{
	for (int i = 0; i < OBJ_STAGE_END; ++i)
	{
		for (auto iter = m_ObjList[i].begin();
			iter != m_ObjList[i].end(); ++iter)
		{
			(*iter)->Render(m_vecBmp[BMP_STAGE_BACKBUFFER]->GetMemDC());
		}
	}

	BitBlt(_hdc, 0, 0, Window_Size_X, Window_Size_Y, m_vecBmp[BMP_MENU_BACKBUFFER]->GetMemDC(), 0, 0, SRCCOPY);
}

void Stage::Release()
{
	StateObj::Release();

	for (int i = 0; i < OBJ_STAGE_END; ++i)
	{
		for (auto iter = m_ObjList[i].begin();
			iter != m_ObjList[i].end(); ++iter)
		{
			SAFE_DELETE(*iter);
		}
	}
}