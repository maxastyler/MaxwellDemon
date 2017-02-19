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
  float totalEnergy;
  float barrierX;
public:
  ParticleManager(SDL_Rect, float);
  void renderParticles(SDL_Renderer*);
  void updateParticle(Particle*);
  void updateParticles();
};

#endif
