

#include "Atom.hh"


namespace oct::phy
{

Atom::Atom() : symbol(Symbol::None)
{

}
Atom::Atom(Symbol s) : symbol(s)
{
	
}
Atom::Atom(unsigned short n) : symbol((Symbol)n)
{
	
}


unsigned short Atom::getAtomicNumber()const
{
	return symbol;
}
Symbol Atom::getSymbol()const
{
	return symbol;
}
const char* Atom::getName()const
{
	return genNames(symbol);
}
const char* Atom::getStringSymbol()const
{
	return genStrSymbol(symbol);
}

void Atom::set(Symbol s)
{
	symbol = s;
}
void Atom::set(unsigned short a)
{
	symbol = Symbol(a);
}




}