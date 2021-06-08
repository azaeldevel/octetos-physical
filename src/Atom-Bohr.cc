

#include "Atom-Bohr.hh"


namespace oct::phy
{

Bohr::Bohr() : Atom(Symbol::None)
{

}
Bohr::Bohr(Symbol s) : Atom(s)
{
	
}
Bohr::Bohr(unsigned short n) : Atom((Symbol)n)
{
	
}


const QuantumNumber& Bohr::getQuantumNumber()
{
	//generar si no existe
	if(qnumber.empty()) genQuantumNumber(Symbol(protonsCount), qnumber);
	return qnumber;
}




}