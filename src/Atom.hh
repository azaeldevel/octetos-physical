

#ifndef OCTETOS_PHYSICAL_ATOM_HH
#define OCTETOS_PHYSICAL_ATOM_HH

#include <octetos/math/Point.hh>
namespace oct::phy
{
static double unitProtonCharge = 1.6e-19;//Coulomns
static double unitElectronCharge = -1.6e-19;//Coulomns
static double protonBulk = 1.6725e-27;//Kilogramos
static double eletronBulk = 9.1095e-31;//Kilogramos

enum Symbol
{
	None,
	H,
	He,
	Li,
	Be,
	B,
	C,
	N,
	O,
	F,
	Ne,
	Na,
	Mg,
	Al,
	Si,
	P,
	S,
	Cl,
	Ar,
	K,
	Ca,
	Sc,
	Ti,
	V,
	Cr,
	Mn,
	Fe,
	Co,
	Ni,
	Cu,
	Zn,
	Ga,
	Ge,
	As,
	Se,
	Br,
	Kr,
	Rb,
	Sr,
	Y,
	Zr,
	Nb,
	Mo,
	Tc,
	Ru,
	Rh,
	Pd,
	Ag,
	Cd,
	In,
	Sn,
	Sb,
	Te,
	I,
	Xe,
	Cs,
	Ba,
	La,
	Ce,
	Pr,
	Nd,
	Pm,
	Sm,
	Eu,
	Gd,
	Tb,
	Dy,
	Ho,
	Er,
	Tm,
	Yb,
	Lu,
	Hf,
	Ta,
	W,
	Re,
	Os,
	Ir,
	Pt,
	Au,
	Hg,
	Tl,
	Pb,
	Bi,
	Po,
	At,
	Rn,
	Fr,
	Ra,
	Ac,
	Th,
	Pa,
	U,
	Np,
	Pu,
	Am,
	Cm,
	Bk,
	Cf,
	Es,
	Fm,
	Md,
	No,
	Lr,
	Rf,
	Db,
	Sg,
	Bh,
	Hs,
	Mt,
	Ds,
	Rg,
	Cn,
	Nh,
	Fl,
	Mc,
	Lv,
	Ts,
	Og,
	Unknow
};

enum ParticleType
{
	NONE,
	PROTON,
	NEUTRON,
	ELECTRON,
	ATOM
};

class Particle : public math::Point<double>
{
public:
	Particle(ParticleType);
	Particle(double x,double y, double z,ParticleType);

private:
	ParticleType type;
};

class Protron : public Particle
{
public:
	Protron(double x,double y, double z);
};
class Neutron : public Particle
{
public:
	Neutron(double x,double y, double z);
};
class Electron : public Particle
{
public:
	Electron();
	Electron(double x,double y, double z);
};

class Atom
{
public:
	Atom();
	Atom(Symbol);
	Atom(unsigned short numatomic);
	Atom(unsigned short proton,unsigned short neutral,unsigned short electron);
	~Atom();

	unsigned short getAtomicNumber()const;
	Symbol getSymbol()const;
	const char* getName()const;
	const char* getStringSymbol()const;
	//propiedades
	double getNucleoCharge()const;
	double getElectronCharge()const;

	void set(Symbol);
	void set(unsigned short numatomic);
	void set(unsigned short proton,unsigned short neutral,unsigned short electron);

protected:
	unsigned short protonsCount;
	unsigned short neutralsCount;
	unsigned short electronsCount;
	Electron* electrons;

protected:
	static const char* genNames(Symbol);
	static const char* genStrSymbol(Symbol);
};


class Enviroment
{
public:
	Enviroment();
	Enviroment(double size, double time);

private:
	double size;//cm
	double time;//s
};


}


#endif