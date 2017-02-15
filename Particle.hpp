#ifndef PARTICLE
#define PARTICLE

#include "Vector.hpp"

class Particle
{
public:
  Vec2 pos;
  Vec2 vel;
  float radius;
  float mass;

  Particle(Vec2 _pos, Vec2 _vel, float _radius, float _mass):pos(_pos), vel(_vel), radius(_radius), mass(_mass){};
  Particle(float _x, float _y, float _vx, float _vy, float _radius, float _mass):pos(Vec2(_x, _y)), vel(Vec2(_vx, _vy)), radius(_radius), mass(_mass){};
  float getEnergy(){return (1/2)*mass*vel.lengthSquare();};
};

#endif
