#include "GameObject.h"

int GameObject::numeroGameObjectCreados = 0;

GameObject::GameObject() {
	eliminar = false;
	numeroGameObjectCreados++;
	idGameObject = numeroGameObjectCreados;
}


GameObject::GameObject(string _nombre)
{
	eliminar = false;
	nombre = _nombre;
	numeroGameObjectCreados++;
	idGameObject = numeroGameObjectCreados;
}

void GameObject::render(const SDL_Rect& camera) const
{
    if (renderer != nullptr && texture != nullptr)
    {
        // change position according to camera
        SDL_Rect destrinationRect = rect;
        if (isAttachedToCamera)
        {
            destrinationRect.x -= camera.x;
            destrinationRect.y -= camera.y;
        }
        // draw on the screen
        SDL_RenderCopyEx(renderer, texture.get(), &clip, &destrinationRect, 0, nullptr, flipping);
    }
}

void GameObject::attachToCamera(bool isAttached /* = true*/)
{
    this->isAttachedToCamera = isAttached;
}

GameObject::GameObject(SDL_Renderer* _renderer)
{
    this->renderer = _renderer;
}

GameObject::~GameObject() {}