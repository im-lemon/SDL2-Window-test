# include <SDL2/SDL.h>
# include <stdbool.h>
# include <stdio.h>

int main()
{
    bool running = false;
    SDL_Window *pwindow = SDL_CreateWindow("Window Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 500, 500, 0);
    if (pwindow)
        {
	    running = true;
	}

    SDL_Event event;
    SDL_Surface *psurface = SDL_GetWindowSurface(pwindow);
    SDL_FillRect(psurface, NULL, 0xFFFFFFFF);
    SDL_UpdateWindowSurface(pwindow);


    while (running == true)
        {
	    SDL_PollEvent(&event);
	    if (event.type == SDL_QUIT)
	        {
			SDL_Quit();
                        SDL_DestroyWindow(pwindow);
			return 0;
		}
	}
return 0;
}
