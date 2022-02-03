#pragma once
#include "GameActor.h"
#include "Sprite.h"
//#include "../Entities/GameActor.h"
class DecoratorPlayer :
    public Sprite
{
private:
    Sprite* player;
public:
    DecoratorPlayer(std::shared_ptr<SDL_Texture> texture, SDL_Renderer* renderer, GameActor* _wall) :Sprite(texture, renderer) {
        player = _player;
    }

    void render(const SDL_Rect& _camera);

    void generateEscudo();
    bool escudito = false;


};

