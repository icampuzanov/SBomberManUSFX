#include "MuroPiedra.h"

MuroPiedra::MuroPiedra(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer):Muro(_texture, _renderer)
{
}

void MuroPiedra::update(const unsigned int _delta)
{
	Muro::update(_delta);
}
