


#ifndef OCTETOS_PHYSICAL_ATOM_BOHR_HH
#define OCTETOS_PHYSICAL_ATOM_BOHR_HH

#include "Atom.hh"


namespace oct::phy
{

enum Suborbital
{
	s,
	p,
	d,
	f
};

struct Orbital
{
	unsigned short main;
	Suborbital suborbital;//tipode orbital
	unsigned short electron;//electrones en el orbital
};

struct QuantumNumber : std::vector<Orbital>
{
	operator std::string() const;	
	unsigned short getElectronValencia()const;
};


class Bohr : public Atom
{
public:
	Bohr();
	Bohr(unsigned short numatomic);
	Bohr(Symbol);
	
	const QuantumNumber& getQuantumNumber();

protected:
	QuantumNumber qnumber;
	
protected:	
	static void genQuantumNumber(Symbol s, QuantumNumber& q);
};

}


#endif