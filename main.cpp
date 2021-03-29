#include <SDL2/SDL.h>
#include <iostream>

#define DULLE_ASSERT(value) if(!value) std::cerr << "Failed: " << #value << std::endl;

void InitializeMetalAPI()
{
    //TODO:
}

void OnCreate()
{
    //TODO:
}

void OnDispose()
{
    //TODO:
}

int main() {
    InitializeMetalAPI();

    DULLE_ASSERT(SDL_Init(SDL_INIT_EVERYTHING));

    SDL_Window* window = SDL_CreateWindow("WintersportEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_ALLOW_HIGHDPI);
    DULLE_ASSERT(window);

    OnCreate();

    bool running = true;
    if(running)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event) != 0)
        {
            if(event.type == SDL_QUIT)
            {
                running = false;
            }
        }
    }

    OnDispose();

    std::cout << "Shutting down engine" << std::endl;

    SDL_Quit();
    return 0;
}
