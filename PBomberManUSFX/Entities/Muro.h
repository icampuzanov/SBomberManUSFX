#pragma once
#include "GameActor.h"
class Muro :
    public GameActor
{
public:
    Muro(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer);
    virtual void update(const unsigned int _delta) override;
};

