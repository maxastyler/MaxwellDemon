#include "ParticleManager.hpp"
#include <iostream>

ParticleManager::ParticleManager(SDL_Rect _bounds, float _totalEnergy){
  bounds=_bounds;
  barrierX = bounds.x+(bounds.w/2);
  totalEnergy=_totalEnergy;
  particles.push_back(Particle(40, 40, 40, 40, 40, 40));
}

void ParticleManager::renderParticle(SDL_Renderer* renderer, Particle* part){
  ellipseRGBA(renderer, part->pos.x, part->pos.y, part->radius, part->radius, 0, 0, 0, 255);
}

void ParticleManager::renderParticles(SDL_Renderer* renderer){
  for (auto part: particles){renderParticle(renderer, &part);};
}

void ParticleManager::updateParticle(Particle* part){
  std::cout << part->pos.x << std::endl;
  part->setX(1);
}

  void ParticleManager::updateParticles(){
    for i in 
}
