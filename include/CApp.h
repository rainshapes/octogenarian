#include <SDL.h>
#include <vector>
#include <CellularAutomaton.h>

class CApp{
private:
	bool Running;

	SDL_Surface* Surf_Display;

	int scale;

	void InitCA();

	void InitColors();

	CellularAutomaton automaton;

	Uint32 Color0;
	Uint32 Color1;
	Uint32 Color2;

public:
	int screenWidth, screenHeight;

	bool KEYS[322];
	
	CApp();

	int OnExecute();

	bool OnInit();

	void OnEvent(SDL_Event* Event);

	void HandleInput();

	void OnLoop();

	void OnRender();

	void OnCleanup();

};