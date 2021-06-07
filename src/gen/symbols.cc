
#include <octetos/core/Error.hh>

#include "../Atom.hh"

namespace oct::phy
{
const char* Atom::genStrSymbol(Symbol s)
{
	switch(s)
	{
	case 0:
		return NULL;
		break;
	case Symbol::H:
		return "H";
	case Symbol::He:
		return "He";
	case Symbol::Li:
		return "Li";
	case Symbol::Be:
		return "Be";
	case Symbol::B:
		return "B";
	case Symbol::C:
		return "C";
	case Symbol::N:
		return "N";
	case Symbol::O:
		return "O";
	case Symbol::F:
		return "F";
	case Symbol::Ne:
		return "Ne";
		
	case Symbol::Na:
		return "Na";
	case Symbol::Mg:
		return "Mg";
		
		
	case Symbol::Al:
		return "Al";
	case Symbol::Si:
		return "Si";
	case Symbol::P:
		return "P";
	case Symbol::S:
		return "S";
	case Symbol::Cl:
		return "Cl";
	case Symbol::Ar:
		return "Ar";
		
	case Symbol::K:
		return "K";
	case Symbol::Ca:
		return "Ca";
	case Symbol::Sc:
		return "Sc";
	case Symbol::Ti:
		return "Ti";
	case Symbol::V:
		return "V";
	case Symbol::Cr:
		return "Cr";
	case Symbol::Mn:
		return "Mn";
	case Symbol::Fe:
		return "Fe";
	case Symbol::Co:
		return "Co";
	case Symbol::Ni:
		return "Ni";
	case Symbol::Cu:
		return "Cu";
	case Symbol::Zn:
		return "Zn";
	case Symbol::Ga:
		return "Ga";
	case Symbol::Ge:
		return "Ge";
	case Symbol::As:
		return "As";
	case Symbol::Se:
		return "Se";
	case Symbol::Br:
		return "Br";
	case Symbol::Kr:
		return "Kr";
		
	case Symbol::Rb:
		return "Rb";
	case Symbol::Sr:
		return "Sr";
	case Symbol::Y:
		return "Y";
	case Symbol::Zr:
		return "Zr";
	case Symbol::Nb:
		return "Nb";
	case Symbol::Mo:
		return "Mo";
	case Symbol::Tc:
		return "Tc";
	case Symbol::Ru:
		return "Ru";
	case Symbol::Rh:
		return "Rh";
	case Symbol::Pd:
		return "Pd";
	case Symbol::Ag:
		return "Ag";
	case Symbol::Cd:
		return "Cd";
	case Symbol::In:
		return "In";
	case Symbol::Sn:
		return "Sn";
	case Symbol::Sb:
		return "Sb";
	case Symbol::Te:
		return "Te";
	case Symbol::I:
		return "I";
	case Symbol::Xe:
		return "Xe";
				
	case Symbol::Cs:
		return "Cs";		
	case Symbol::Ba:
		return "Ba";
		
	case Symbol::La:
		return "La";
	case Symbol::Ce:
		return "Ce";
	case Symbol::Pr:
		return "Pr";
	case Symbol::Nd:
		return "Nd";
	case Symbol::Pm:
		return "Pm";
	case Symbol::Sm:
		return "Sm";
	case Symbol::Eu:
		return "Eu";
	case Symbol::Gd:
		return "Gd";
	case Symbol::Tb:
		return "Tb";
	case Symbol::Dy:	
		return "";
	case Symbol::Ho:
		return "Ho";
	case Symbol::Er:	
		return "Er";
	case Symbol::Tm:
		return "Tm";
	case Symbol::Yb:
		return "Yb";
		
	case Symbol::Lu:
		return "Lu";
	case Symbol::Hf:	
		return "Hf";
	case Symbol::Ta:	
		return "Ta";
	case Symbol::W:	
		return "W";
	case Symbol::Re:
		return "Re";
	case Symbol::Os:
		return "Os";
	case Symbol::Ir:
		return "Ir";
	case Symbol::Pt:
		return "Pt";
	case Symbol::Au:
		return "Au";
	case Symbol::Hg:
		return "Hg";
	case Symbol::Tl:
		return "Tl";
	case Symbol::Pb:	
		return "pb";
	case Symbol::Bi:
		return "Bi";
	case Symbol::Po:
		return "Po";
	case Symbol::At:
		return "At";
	case Symbol::Rn:
		return "Rn";
	case Symbol::Fr:	
		return "Fr";
	case Symbol::Ra:	
		return "Ra";
	case Symbol::Ac:	
		return "Ac";
	case Symbol::Th:
		return "Th";
	case Symbol::Pa:
		return "Pa";
	case Symbol::U:	
		return "";
	case Symbol::Np:	
		return "Np";
	case Symbol::Pu:
		return "Pu";
	case Symbol::Am:	
		return "Am";
	case Symbol::Cm:
		return "Cm";
	case Symbol::Bk:
		return "Bk";
	case Symbol::Cf:	
		return "Cf";
	case Symbol::Es:
		return "Es";
	case Symbol::Fm:	
		return "Fm";
	case Symbol::Md:
		return "Md";
	case Symbol::No:
		return "No";
		
	case Symbol::Lr:
		return "Lr";
	case Symbol::Rf:
		return "Rf";
	case Symbol::Db:
		return "Db";
	case Symbol::Sg:	
		return "Sg";
	case Symbol::Bh:
		return "Bh";
	case Symbol::Hs:
		return "";	
	case Symbol::Mt:	
		return "Mt";
	case Symbol::Ds:
		return "Ds";
	case Symbol::Rg:	
		return "Rg";
	case Symbol::Cn:
		return "Cn";
	case Symbol::Nh:	
		return "Nh";
	case Symbol::Fl:
		return "Fl";
	case Symbol::Mc:	
		return "Mc";
	case Symbol::Lv:	
		return "Lv";
	case Symbol::Ts:
		return "Ts";
	case Symbol::Og:
		return "Og";
	default:
		std::string msg = "El elemento con numero atomico '";
		msg += std::to_string(s) + "' no exite en la tabla perica(de la tierra!)";
		throw octetos::core::Exception(msg,__FILE__,__LINE__);	
	}
	return NULL;
}
}