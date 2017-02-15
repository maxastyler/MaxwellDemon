#include "ParticleManager.hpp"

ParticleManager::ParticleManager(SDL_Rect _bounds){
  bounds=_bounds;
  particles.push_back(Particle(40, 40, 40, 40, 40, 40));
}

void ParticleManager::renderParticle(SDL_Renderer* renderer, Particle* part){
  ellipseRGBA(renderer, part->pos.x, part->pos.y, part->radius, part->radius, 0, 0, 0, 255);
}

void ParticleManager::renderParticles(SDL_Renderer* renderer){
  for (auto part: particles){renderParticle(renderer, &part);};
}
