#include "DXUT.h"
#include "Header.h"

CPick::CPick(D3DXVECTOR2 pos, int type, D3DXVECTOR2 index)
{
	position = pos;

	this->type = type;
	this->index = index;

	if (type == 1)
	{
		center.x = 16;
		center.y = 16;
	}
	else if (type == 2)
	{
		center.x = 16;
		center.y = 16;
	}
}

void CPick::Render(LPD3DXSPRITE sprite)
{
	if (type == 1)
	{
		
	}
	else if (type == 2)
	{

	}
}