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

//////////////////////////////asdf///////////////////


GameObject::~GameObject() {}

void GameObject::setSize_(const int width, const int height)
{
    rect.w = width;  // controls the width of the rect
    rect.h = height; // controls the height of the rect
}

void GameObject::setPosition_(const int x, const int y)
{
    rect.x = x; // controls the rect's x coordinate
    rect.y = y; // controls the rect's y coordinate
}

void GameObject::setClip(const int width, const int height, const int x, const int y)
{
    clip.w = width;  // controls the width of the rect
    clip.h = height; // controls the height of the rect
    clip.x = x;      // controls the rect's x coordinate
    clip.y = y;      // controls the rect's y coordinate
}

//void GameObject::attachToCamera(bool isAttached /* = true*/)
//{
//    this->isAttachedToCamera = isAttached;
//}

int GameObject::getWidth() const
{
    return rect.w;
}

int GameObject::getHeight() const
{
    return rect.h;
}

int GameObject::getPositionX_() const
{
    return rect.x;
}

int GameObject::getPositionY_() const
{
    return rect.y;
}

const SDL_Rect& GameObject::getRect() const
{
    return rect;
}

void GameObject::setFlip(SDL_RendererFlip flip)
{
    flipping = flip;
}