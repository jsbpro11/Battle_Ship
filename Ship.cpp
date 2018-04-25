#include "DXUT.h"
#include "Header.h"

CShip::CShip()
	:CMatrix(), positionX(0), positionY(0), sizeX(1), sizeY(0), type(0), isDie(false), dir(UP), hp(0)
{

}

void CShip::Update(float deltaTime)
{
	CMatrix::Update(deltaTime);
}

void CShip::Render(LPD3DXSPRITE sprite)
{
	if (type == 1)
	{
		switch (dir)
		{
		case UP:
			break;
		case DOWN:
			break;
		case LEFT:
			break;
		case RIGHT:
			break;
		}
	}
	else if (type == 2)
	{
		switch (dir)
		{
		case UP:
			break;
		case DOWN:
			break;
		case LEFT:
			break;
		case RIGHT:
			break;
		}
	}
	else if (type == 3)
	{
		switch (dir)
		{
		case UP:
			break;
		case DOWN:
			break;
		case LEFT:
			break;
		case RIGHT:
			break;
		}
	}
	else if (type == 4)
	{
		switch (dir)
		{
		case UP:
			break;
		case DOWN:
			break;
		case LEFT:
			break;
		case RIGHT:
			break;
		}
	}
	else if (type == 5)
	{
		switch (dir)
		{
		case UP:
			break;
		case DOWN:
			break;
		case LEFT:
			break;
		case RIGHT:
			break;
		}
	}
}