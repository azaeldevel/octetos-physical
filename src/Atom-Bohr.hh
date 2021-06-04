


#ifndef OCTETOS_PHYSICAL_ATOM_BOHR_HH
#define OCTETOS_PHYSICAL_ATOM_BOHR_HH

#include "Atom.hh"


namespace oct::phy
{

class Bohr : public Atom
{
public:
	Bohr();
	Bohr(unsigned short numatomic);
	Bohr(Symbol);
	
};

}


#endif