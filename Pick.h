#pragma once

class CPick : public CMatrix
{
public:
	CMatrix pick;
	D3DXVECTOR2 index;

	int type;

public:
	CPick(D3DXVECTOR2 pos, int type, D3DXVECTOR2 index);
	virtual void Render(LPD3DXSPRITE sprite);
};