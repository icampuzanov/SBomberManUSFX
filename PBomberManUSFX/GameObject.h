#pragma once
#include<iostream>
#include <SDL.h>
using namespace std;

class GameObject
{
private:
	int  idGameObject;
	string nombre;
	bool eliminar;
	bool isAttachedToCamera = true;/////////////////////////////
	/// <summary>
	/// ///
	/// </summary>
protected:

	SDL_Renderer* renderer = nullptr;               // SDL2 renderer
	std::shared_ptr<SDL_Texture> texture = nullptr; // SDL2 texture
	SDL_Rect rect;                                  // size and position of texture on the screen
	SDL_Rect clip;                                  // what part of texture to draw on the screen
	SDL_RendererFlip flipping = SDL_FLIP_NONE;      // flip of texture
	

/// <summary>
/// /////
/// </summary>
public:
	static int numeroGameObjectCreados;
	GameObject();
	GameObject(string _nombre);

	int getIdGameObject() { return idGameObject; }
	string getNombre() { return nombre; }
	bool getEliminar() { return eliminar; }

	void setIdGameObject(int _idGameObject) { idGameObject = _idGameObject; }
	void setNombre(string _nombre) { nombre = _nombre; }
	void setEliminar(bool _eliminar) { eliminar = _eliminar; }
	////////////////////////////
	void render(const SDL_Rect& camera) const; ///////MUCHO OJOOOO SE USO PARA SCENE MANAGER
	
	GameObject(SDL_Renderer* renderer);////ojo doble constructor parece
	virtual ~GameObject();/// x2
	void attachToCamera(bool isAttached = true);
											   
	//////////////////////////
	// Metodos varios
	//Metodos virtuales puros
	virtual void render(SDL_Rect& _camera) = 0;
	virtual void update(const unsigned int _delta) = 0;
	virtual void handleEvent(SDL_Event* _event) = 0;
	//Metodos virtuales
	virtual void deleteGameObject() { eliminar = true; }
	virtual void free() {};

};

