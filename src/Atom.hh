

#ifndef OCTETOS_PHYSICAL_ATOM_HH
#define OCTETOS_PHYSICAL_ATOM_HH

#include <octetos/math/Point.hh>
#include <vector>


namespace oct::phy
{
//https://es.wikipedia.org/wiki/Electr%C3%B3n
static const double unitProtonCharge = 1.602176634e-19;//Coulomns
static const double unitElectronCharge = -1.602176634e-19;//Coulomns
static const double protonBulk = 1.672621898e-27;//Kilogramos
static const double eletronBulk = 9.10938291e-31;//Kilogramos
static const double hPlank = 6.62607015e-34;
static const double hDirac = 1.054571817e-34;
static const double kCoulomb = 8.9875517923e9;
static const double ePermitividad0 = 8.8541878176e-12;

typedef unsigned short AtomicNumber;

AtomicNumber randNumber();

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

typedef short valencia;
typedef std::vector<valencia> Valencias;

class Atom : public math::Point<double>
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
	double getRadio(unsigned short n)const;
	double getEnergy(unsigned short n)const;

	const Valencias& getValencias()const;
	float getNegativityNumber()const;//escala de pauling
	const QuantumNumber& getQuantumNumber()const;

	void set(Symbol);
	void set(unsigned short numatomic);
	void set(unsigned short proton,unsigned short neutral,unsigned short electron);

protected:
	unsigned short protonsCount;
	unsigned short neutralsCount;
	unsigned short electronsCount;
	Electron* electrons;
	Valencias valencias;
	QuantumNumber qnumber;

protected:
	static const char* genNames(Symbol);
	static const char* genStrSymbol(Symbol);
	static double genRadio(Symbol, unsigned short n);
	static double genEnergy(Symbol, unsigned short n);
	static void genQuantumNumber(Symbol s, QuantumNumber& q);
	static bool genValencias(Symbol,Valencias&);
	static float genNegativityNumber(Symbol);
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