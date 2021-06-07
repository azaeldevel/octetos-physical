

#include <octetos/core/Error.hh>

#include "../Atom.hh"

namespace oct::phy
{

	//https://es.wikipedia.org/wiki/Modelo_at%C3%B3mico_de_Bohr, segundo posutulado
	double Atom::genRadio(Symbol Z, unsigned short n)
	{
		double num = pow(n,2.0) * pow(hDirac,2.0);
		double den = kCoulomb * eletronBulk * double(Z) * pow(unitElectronCharge,2.0);
		return num/den;	
	}
}