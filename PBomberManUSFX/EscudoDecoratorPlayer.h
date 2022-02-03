#pragma once
#include "DecoratorPlayer.h"
class EscudoDecoratorPlayer :
    public DecoratorPlayer
{
    EscudoDecoratorPlayer(std::shared_ptr<SDL_Texture> texture, SDL_Renderer* renderer, GameActor* _wall) :DecoratorPlayer(texture, renderer, _wall) {};
    void render(const SDL_Rect& _camera);

    virtual void onEvent(const SDL_Event& event) override;

};

