#include "EscudoDecoratorPlayer.h"

void EscudoDecoratorPlayer::render(const SDL_Rect& _camera)
{
	DecoratorPlayer::render(_camera);
	
	
}

void onEvent(const SDL_Event& event)
{
    Scene::onEvent(event);
    // we need to update movement if movement keys pressed or released
    if ((event.type == SDL_KEYDOWN || event.type == SDL_KEYUP) && event.key.repeat == 0)
    {
        updateMovement(event.type == SDL_KEYDOWN ? true : false, event.key.keysym.scancode);
    }
    if (event.key.keysym.scancode == SDL_SCANCODE_X)
    {
        escudo = escudo - 1;
        updateEscudo();
        if (escudo > 0)
        {
            generateEscudo();
            escudito = true;
        }
        if (escudo < 1)
        {
            generateEscudo();
            escudito = false;
        }
    }
    else if (event.key.keysym.scancode == SDL_SCANCODE_C)
    {

        generateEscudo();
        escudito = false;

    }