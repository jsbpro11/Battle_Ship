#pragma once

#define WORLD_W 10
#define WORLD_H 10

#define TILE_SIZE_W 32
#define TILE_SIZE_H 32

class CGameScene : public CScene
{
public:
	int phase;
	int xIndex;
	int yIndex;

	int mouseX;
	int mouseY;
	DIRECTION mouseDirection;
	bool leftMouseClicked;

public:
	D3DXVECTOR2 playerWorldOffset;
	CTile* playerWorld[WORLD_W][WORLD_H];

public:
	D3DXVECTOR2 enemyWorldOffset;
	CTile* enemyWorld[WORLD_W][WORLD_H];

public:
	CGameScene();
	virtual ~CGameScene();
	virtual void Update(float deltaTime);
	virtual void Render(LPD3DXSPRITE sprite);
	virtual void MsgProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
};