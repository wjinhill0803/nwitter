#include "StateObj.h"

StateObj::StateObj()
{

}

StateObj::~StateObj()
{
	Release();
}

void StateObj::Release()
{
	for (size_t i = 0; i < m_vecBmp.size(); ++i)
	{
		SAFE_DELETE(m_vecBmp[i]);
	}
	m_vecBmp.clear();
}