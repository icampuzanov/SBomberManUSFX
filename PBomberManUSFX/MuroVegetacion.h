#pragma once
#include "GameActor.h"
class MuroVegetacion :
	public GameActor
{
public:
	MuroVegetacion(Texture* _textura, Tile* _tileActual);
	void setTileActual(Tile* _tileNuevo);
};

