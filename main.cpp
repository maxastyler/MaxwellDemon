#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#include "Particle.hpp"
#include "ParticleManager.hpp"
#include <iostream>

SDL_Window* window;
SDL_Renderer* renderer;
int SCREEN_WIDTH=640;
int SCREEN_HEIGHT=480;
bool init();
void close();

using namespace std;

int main(int argc, char* args[]){
  bool running = init();
  SDL_Event e;
  while (running){
    while (SDL_PollEvent(&e)!=0){
      if (e.type==SDL_QUIT) running=false;
    }

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
  }
  close();
  return 0;
}

bool init(){
  bool success = true;
  if (SDL_Init(SDL_INIT_VIDEO)<0)
    {
      success=false;
    }
  else
    {
      window = SDL_CreateWindow("MaxwellDemon", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
      if (window==NULL){
        success=false;
      }
      else {
        renderer=SDL_CreateRenderer(window, -1, 0);
      }
    }
  return success;
};

void close()
{
  SDL_DestroyRenderer(renderer);
  renderer=NULL;

  SDL_DestroyWindow(window);
  window=NULL;

  SDL_Quit();
};
