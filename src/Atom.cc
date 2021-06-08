

#include "Atom.hh"


namespace oct::phy
{



Particle::Particle(ParticleType t) : type(t)
{

}











Electron::Electron() : Particle(ParticleType::ELECTRON)
{

}














Atom::Atom() : protonsCount(Symbol::None),neutralsCount(Symbol::None),electrons(NULL),electronsCount(0)
{
	
}
Atom::Atom(Symbol s) : protonsCount(s),neutralsCount(s)
{
	electronsCount = s;
	electrons = new Electron[s];
}
Atom::Atom(unsigned short n) : protonsCount(n),neutralsCount(n)
{
	electronsCount = n;
	electrons = new Electron[n];
}
Atom::Atom(unsigned short p,unsigned short n,unsigned short e) : protonsCount(p),neutralsCount(n)
{
	electronsCount = e;
	electrons = new Electron[e];
}
Atom::~Atom()
{
	if(electrons) delete[] electrons;
}
unsigned short Atom::getAtomicNumber()const
{
	return protonsCount;
}
Symbol Atom::getSymbol()const
{
	return Symbol(protonsCount);
}
const char* Atom::getName()const
{
	return genNames(Symbol(protonsCount));
}
const char* Atom::getStringSymbol()const
{
	return genStrSymbol(Symbol(protonsCount));
}

//propiedades
double Atom::getNucleoCharge()const
{
	return double(protonsCount) * unitProtonCharge;
}
double Atom::getElectronCharge()const
{
	return double(electronsCount) * unitElectronCharge;
}
double Atom::getRadio(unsigned short n)const
{
	return genRadio(Symbol(protonsCount),n);
}
double Atom::getEnergy(unsigned short n)const
{
	return genEnergy(Symbol(protonsCount),n);
}
/*const QuantumNumber& Atom::getQuantumNumber()
{
	//generar si no existe
	if(qnumber.empty()) genQuantumNumber(Symbol(protonsCount), qnumber);
	return qnumber;
}*/

void Atom::set(Symbol s)
{
	protonsCount = (unsigned short)s;
	neutralsCount = (unsigned short)s;
	electrons = new Electron[s];
}
void Atom::set(unsigned short a)
{
	protonsCount = (unsigned short)a;
	neutralsCount = (unsigned short)a;
	electrons = new Electron[a];
}
void Atom::set(unsigned short p,unsigned short n,unsigned short e)
{
	protonsCount = p;
	neutralsCount = n;
	electrons = new Electron[e];
}












Enviroment::Enviroment()
{
	size = 0.001;
	time = 0.000001;
}
Enviroment::Enviroment(double s, double t) : size(s),time(t)
{
}


}