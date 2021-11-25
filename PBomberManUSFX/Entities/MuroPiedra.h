#pragma once
#include "Muro.h"
class MuroPiedra :
    public Muro
{
public:
    MuroPiedra(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer);
    virtual void update(const unsigned int _delta) override;
};

