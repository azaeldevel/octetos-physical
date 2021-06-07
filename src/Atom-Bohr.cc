

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







}