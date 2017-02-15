#ifndef PARTICLE
#define PARTICLE

#include "Vector.hpp"
#include <math.h>

class Particle
{
  Vec2 vel;
public:
  Vec2 pos;
  float velSq;
  float velMag;
  float radius;
  float mass;
  float energy;

  Particle(Vec2 _pos, Vec2 _vel, float _radius, float _mass):pos(_pos), radius(_radius), mass(_mass){setVel(_vel);};
  Particle(float _x, float _y, float _vx, float _vy, float _radius, float _mass):pos(Vec2(_x, _y)), radius(_radius), mass(_mass){setVel(_vx, _vy);};
  void updateEnergy(){energy=(1/2)*mass*vel.lengthSquare();};
  void setVel(float _x, float _y){vel.x=_x, vel.y=_y; updateEnergy();};
  void setVel(Vec2 _vel){vel=_vel; updateEnergy(); velSq=vel.lengthSquare(); velMag=std::sqrt(velSq);};
  Vec2 getVel(){return vel;};
};

#endif
