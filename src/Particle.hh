

#ifndef OCTETOS_PHYSICAL_PARTICLE_HH
#define OCTETOS_PHYSICAL_PARTICLE_HH

#include <octetos/math/Vector.hh>



namespace oct::phy
{


enum ParticleType
{
	NONE,
	PROTON,
	NEUTRON,
	ELECTRON,
	FOTON,
	ATOM
};

typedef std::map<void*,math::Vector<double>> Components;

class Particle 
{
public:
	Particle();
	Particle(ParticleType, const math::Point<double>& p,double lamda);
	
	ParticleType getType()const;
	const math::Point<double>& getPosition()const;

public:
	Components components;
	
private:
	ParticleType type;
	math::Point<double> position;
	double lamda;	
};

class Proton : public Particle
{
public:
	Proton();
	Proton(const math::Point<double>&);
};

class Neutron : public Particle
{
public:
	Neutron();
	Neutron(const math::Point<double>&);
};

class Electron : public Particle
{
public:
	Electron();
	Electron(const math::Point<double>&,double lamda);
};

class Foton : public Particle
{
public:
	Foton();
	Foton(const math::Point<double>&,double lamda);
};



}


#endif