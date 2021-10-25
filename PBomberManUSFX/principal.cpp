#include <iostream>
#include "GameManager.h"
//#include "Bomberman.h"
//#include "GameObject.h"
//#include "GameActor.h"
//#include "Detonador.h"

using namespace std;

int main(int argc, char* args[])
{
	GameManager* gm01 = new GameManager();
	
	return gm01->onExecute();

	//LABORATORIO 6

	map <string, float> puntaje;
	puntaje ["Carlos"] = 10;
	puntaje ["Walter"] = 100;
	puntaje ["Erick"] = 1000;
	puntaje ["Sebastian"] = 10000;

	for (auto i = puntaje.begin(); i != puntaje.end(); ++i)
		cout << i->first << " tiene: " << i->second << " puntos." << endl;
	return 0;







}