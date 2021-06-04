

#ifndef OCTETOS_PHYSICAL_ATOM_HH
#define OCTETOS_PHYSICAL_ATOM_HH

namespace oct::phy
{

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

class Atom
{
public:
	Atom();
	Atom(Symbol);
	Atom(unsigned short numatomic);
	Atom(unsigned short proton,unsigned short neutral);

	unsigned short getAtomicNumber()const;
	Symbol getSymbol()const;
	const char* getName()const;
	const char* getStringSymbol()const;

	void set(Symbol);
	void set(unsigned short numatomic);
	void set(unsigned short proton,unsigned short neutral);

protected:
	unsigned short protons;
	unsigned short neutrals;

protected:
	static const char* genNames(Symbol);
	static const char* genStrSymbol(Symbol);
};

}


#endif