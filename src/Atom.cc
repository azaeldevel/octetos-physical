

#include "Atom.hh"


namespace oct::phy
{












QuantumNumber::operator std::string() const
{
	std::string str = "";
	
	for(unsigned short i = 0; i < size(); i++)
	{
		str += std::to_string(at(i).main);
		switch(at(i).suborbital)
		{
		case Suborbital::s:
			str += "s";
			break;
		case Suborbital::p:
			str += "p";
			break;
		case Suborbital::d:
			str += "d";
			break;
		case Suborbital::f:
			str += "f";
			break;
		}
		str += std::to_string(at(i).electron);
		str += " ";
	}
	
	return str;
}
unsigned short QuantumNumber::getElectronValencia()const
{
	if(not empty())
	{
		unsigned short main = back().main;
		unsigned short counte = 0;
		for(unsigned short i = size() - 1; i > 0; i--)
		{
			if(at(i).main == main) counte += at(i).electron;
		}
		return counte;
	}
	
	throw octetos::core::Exception("Numero cuantico no generado.",__FILE__,__LINE__);
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
	return double(protonsCount) * protonCharge;
}
double Atom::getElectronCharge()const
{
	return double(electronsCount) * electronCharge;
}
double Atom::getRadio(unsigned short n)const
{
	return genRadio(Symbol(protonsCount),n);
}
double Atom::getEnergy(unsigned short n)const
{
	return genEnergy(Symbol(protonsCount),n);
}
const Valencias& Atom::getValencias() const
{	
	return valencias;
}
float Atom::getNegativityNumber()const//escala de pauling
{
	return 0.0;
}
const QuantumNumber& Atom::getQuantumNumber() const
{
	return qnumber;
}
double Atom::getLamda(unsigned short n)const
{
	return hPlank / getMomentum(n);
}
double Atom::getVelocity(unsigned short n)const
{
	return getEnergy(n)/hPlank;
}
double Atom::getMomentum(unsigned short n)const
{
	return (double(n) * hPlank) / (2.0 * M_PI * getRadio(n));
}

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