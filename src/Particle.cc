

#include "Particle.hh"

namespace oct::phy
{



Particle::Particle()
{
}
Particle::Particle(ParticleType t,const math::Point<double>& p, double l) : type(t),position(p),lamda(l)
{

}
	
ParticleType Particle::getType()const
{
	return type;
}
const math::Point<double>& Particle::getPosition()const
{
	return position;
}
	
	












Proton::Proton()
{
}
Proton::Proton(const math::Point<double>& p) : Particle(ParticleType::PROTON,p,0.0)
{
}















Neutron::Neutron()
{
}
Neutron::Neutron(const math::Point<double>& p) : Particle(ParticleType::PROTON,p,0.0)
{
}













Electron::Electron()
{
}
Electron::Electron(const math::Point<double>& p,double l) : Particle(ParticleType::ELECTRON,p,l)
{
}














Foton::Foton()
{
}
Foton::Foton(const math::Point<double>& p,double l) : Particle(ParticleType::ELECTRON,p,l)
{
}











}
