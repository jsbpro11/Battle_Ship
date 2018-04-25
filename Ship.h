#pragma once

enum DIRECTION
{
	UP = 0, LEFT, DOWN, RIGHT
};

class CShip : public CMatrix
{
public:
	int positionX;
	int positionY;

	int sizeX;
	int sizeY;

	int hp;
	int type;
	bool isDie;
	DIRECTION dir;

public:
	CShip();
	virtual void Update(float deltaTime);
	virtual void Render(LPD3DXSPRITE sprite);
};