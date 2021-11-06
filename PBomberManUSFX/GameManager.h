#pragma once
#include<iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

#include <SDL.h>
#include <SDL_image.h>

#include "Bomberman.h"
#include "MuroMetal.h"
#include "MapGenerator.h"
#include "system/KeyboardInput.h"
#include "TilesGraph.h"

#include<memory>
#include "AssetManager.h"
#include "SceneManager.h"

using namespace std;

const int SCREEN_WIDTH = 850;
const int SCREEN_HEIGHT = 510;
  
class GameManager
{
private:
    //The window we'll be rendering to
    SDL_Window* gWindow = nullptr;

    //The window renderer
    SDL_Renderer* gRenderer = nullptr;

    //Current displayed texture
    SDL_Texture* gTexture = nullptr;
       
    vector<GameObject*> actoresJuego;
    MapGenerator* generadorMapa;
    KeyboardInput* keyboardInput;


    SDL_Event evento;
    bool enEjecucion;

    TilesGraph* tilesGraphGM;

    SDL_Rect camera;
    Uint32 lastTickTime = 0;

    SceneManager* sceneManager = nullptr; // scene manager
    AssetManager* assetManager = nullptr; // asset manager
   
    // screen parameters
    int windowWidth = 0; //// inclui
    int windowHeight = 0; //// inclui

public:
    // Constructores & destructores
    GameManager();

    // Metodos especializados
    bool onInit();
    bool loadContent();
    int onExecute();
    void onEvent(SDL_Event* _event);
    void onLoop();
    void onRender();
    void close(); 

   

    int getWindowWidth()const ; /////  MUCHO OJO 
    int getWindowHeight() const; /////  MUCHO OJO

    SDL_Renderer* getgRenderer()const ; //const  ///  MUCHO OJO

    SceneManager* getSceneManager() const ; //const ///  MUCHO OJO
    AssetManager* getAssetManager()const ;/// const /// MUCHO OJO

    
    void stop();///////////////////
    void run();//////////////////
    GameManager(const std::string& windowName, const int windowWidth, const int windowHeight);
    ~GameManager();////////////////
};
