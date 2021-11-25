#include "Muro.h"

Muro::Muro(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer):GameActor(_texture, _renderer)
{
}

void Muro::update(const unsigned int _delta)
{
	GameActor::update(_delta);
}
