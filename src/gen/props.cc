

#include <octetos/core/Error.hh>
#include <math.h>


#include "../Atom.hh"

namespace oct::phy
{
	
	double Atom::genRadio(Symbol Z, unsigned short n)
	{
		double num = pow(n,2.0) * pow(hPlank,2.0) * permitivity0;
		double den = M_PI * eletronBulk * double(Z) * pow(electronCharge,2.0);
		return num/den;	
	}
	double Atom::genEnergy(Symbol Z, unsigned short n)
	{
		double num =  eletronBulk * pow(electronCharge,4.0) * pow(Z,2.0);
		double den = -8.0 * pow(permitivity0,2.0) * pow(hPlank,2.0) * pow(n,2.0);
		return num/den;
	}
}