#pragma once
#include <SDL.h>


class Application {

public:
	Application();
	~Application();

	int eventLoop();

private:
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
};
