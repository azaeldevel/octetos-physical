

#include <octetos/core/Error.hh>
#include <math.h>


#include "../Atom.hh"

namespace oct::phy
{

	//https://es.wikipedia.org/wiki/Modelo_at%C3%B3mico_de_Bohr, segundo posutulado
	//http://www.sc.ehu.es/sbweb/fisica/elecmagnet/movimiento/bohr/bohr.htm
	double Atom::genRadio(Symbol Z, unsigned short n)
	{
		double num = pow(n,2.0) * pow(hPlank,2.0) * ePermitividad0;
		double den = M_PI * eletronBulk * double(Z) * pow(unitElectronCharge,2.0);
		return num/den;	
	}
	double Atom::genEnergy(Symbol Z, unsigned short n)
	{
		double num =  eletronBulk * pow(unitElectronCharge,4.0) * pow(Z,2.0);
		double den = -8.0 * pow(ePermitividad0,2.0) * pow(hPlank,2.0) * pow(n,2.0);
		return num/den;
	}
}