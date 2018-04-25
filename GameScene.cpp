#include "DXUT.h"
#include "Header.h"

CGameScene::CGameScene()
	: phase(0), xIndex(0), yIndex(0), mouseX(0), mouseY(0), mouseDirection(UP), leftMouseClicked(false)
{
	playerWorldOffset.x = 145;
	playerWorldOffset.y = 216;

	enemyWorldOffset.x = 512 + 35;
	enemyWorldOffset.y = 216;
}

CGameScene::~CGameScene()
{

}

void CGameScene::Update(float deltaTime)
{

}

void CGameScene::Render(LPD3DXSPRITE sprite)
{

}

void CGameScene::MsgProc(UINT uMsg, WPARAM wParam, LPARAM lParam)
{

}