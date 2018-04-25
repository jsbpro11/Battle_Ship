#include "DXUT.h"
#include "Header.h"

CTile::CTile()
	: CMatrix(), type(0), isEmpty(NULL)
{

}

void CTile::Render(LPD3DXSPRITE sprite)
{
	Draw(sprite, gAssetManager->tileTexture);
}