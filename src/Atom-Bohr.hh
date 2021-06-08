


#ifndef OCTETOS_PHYSICAL_ATOM_BOHR_HH
#define OCTETOS_PHYSICAL_ATOM_BOHR_HH

#include "Atom.hh"
#include <vector>

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

typedef unsigned short valencia;
typedef std::vector<valencia> Valencias;


class Bohr : public Atom
{
public:
	Bohr();
	Bohr(unsigned short numatomic);
	Bohr(Symbol);
	
	const Valencias& getValencias()const;
	float getNegativityNumber()const;//escala de pauling
	const phy::QuantumNumber& getQuantumNumber()const;

protected:
	QuantumNumber qnumber;
	
protected:
	static void genQuantumNumber(Symbol s, QuantumNumber& q);
	static bool genValencias(Symbol,Valencias&);
	static float genNegativityNumber(Symbol);
};

}


#endif