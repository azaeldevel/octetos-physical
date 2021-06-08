

#include "Atom-Bohr.hh"


namespace oct::phy
{









QuantumNumber::operator std::string() const
{
	std::string str = "";
	
	for(unsigned short i = 0; i < size(); i++)
	{
		str += std::to_string(at(i).main);
		switch(at(i).suborbital)
		{
		case Suborbital::s:
			str += "s";
			break;
		case Suborbital::p:
			str += "p";
			break;
		case Suborbital::d:
			str += "d";
			break;
		case Suborbital::f:
			str += "f";
			break;
		}
		str += std::to_string(at(i).electron);
		str += " ";
	}
	
	return str;
}
unsigned short QuantumNumber::getElectronValencia()const
{
	if(not empty())
	{
		unsigned short main = back().main;
		unsigned short counte = 0;
		for(unsigned short i = size() - 1; i > 0; i--)
		{
			if(at(i).main == main) counte += at(i).electron;
		}
		return counte;
	}
	
	throw octetos::core::Exception("Numero cuantico no generado.",__FILE__,__LINE__);
}










Bohr::Bohr() : Atom(Symbol::None)
{

}
Bohr::Bohr(Symbol s) : Atom(s)
{
	
}
Bohr::Bohr(unsigned short n) : Atom((Symbol)n)
{
	
}

const Valencias& Bohr::getValencias()const
{

}
float Bohr::getNegativityNumber()const//escala de pauling
{

}
const QuantumNumber& Bohr::getQuantumNumber() const
{
	return qnumber;
}





}