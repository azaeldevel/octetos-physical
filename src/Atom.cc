

#include "Atom.hh"


namespace oct::phy
{

Atom::Atom() : protons(Symbol::None),neutrals(Symbol::None)
{

}
Atom::Atom(Symbol s) : protons(s),neutrals(s)
{
	
}
Atom::Atom(unsigned short n) : protons(n),neutrals(n)
{
	
}
Atom::Atom(unsigned short p,unsigned short n) : protons(p),neutrals(n)
{
	
}

unsigned short Atom::getAtomicNumber()const
{
	return protons;
}
Symbol Atom::getSymbol()const
{
	return Symbol(protons);
}
const char* Atom::getName()const
{
	return genNames(Symbol(protons));
}
const char* Atom::getStringSymbol()const
{
	return genStrSymbol(Symbol(protons));
}

void Atom::set(Symbol s)
{
	protons = (unsigned short)s;
	neutrals = (unsigned short)s;
}
void Atom::set(unsigned short a)
{
	protons = (unsigned short)a;
	neutrals = (unsigned short)a;
}
void Atom::set(unsigned short p,unsigned short n)
{
	protons = p;
	neutrals = n;
}



}