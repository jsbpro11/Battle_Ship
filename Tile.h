#pragma once

class CTile : public CMatrix
{
public:
	int type;
	CShip* isEmpty;

public:
	CTile();
	virtual void Render(LPD3DXSPRITE sprite);
};