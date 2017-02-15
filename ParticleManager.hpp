#ifndef PARTICLE_MANAGER
#define PARTICLE_MANAGER

#include "Particle.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#include <vector>
#include "Vector.hpp"

using namespace std;

class ParticleManager
{
private:
  vector<Particle> particles;
  SDL_Rect bounds;
  void renderParticle(SDL_Renderer*, Particle*);
public:
  ParticleManager(SDL_Rect);
  void renderParticles(SDL_Renderer*);
};

#endif
