
#include <octetos/core/Error.hh>
#include <iostream>


#include "../Atom.hh"

namespace oct::phy
{

bool genQuantumNumber_s(unsigned short& rest,Orbital& o,QuantumNumber& q)
{
	//std::cout << "s " << rest << "\n";
	if(rest > 2) 
	{
		o.electron = 2;
		rest -= o.electron;
		q.push_back(o);	
		return true;
	}
	else if(rest <= 2)
	{
		o.electron = rest;
		rest -= o.electron;
		q.push_back(o);
		return false;
	}
	
	throw octetos::core::Exception("Error desconocido",__FILE__,__LINE__);
}
bool genQuantumNumber_p(unsigned short& rest,Orbital& o,QuantumNumber& q)
{
	if(rest >= 6) 
	{
		o.electron = 6;
		rest -= o.electron;
		q.push_back(o);
		return true;
	}
	else if(rest < 6) 
	{
		o.electron = rest;
		rest = 0;
		q.push_back(o);
		return false;
	}
		
	throw octetos::core::Exception("Error desconocido",__FILE__,__LINE__);
}
bool genQuantumNumber_d(unsigned short& rest,Orbital& o,QuantumNumber& q)
{
	if(rest >= 10) 
	{
		o.electron = 10;
		rest -= o.electron;
		q.push_back(o);
		return true;
	}
	else if(rest < 10) 
	{
		o.electron = rest;
		rest = 0;
		q.push_back(o);
		return false;
	}
	
	throw octetos::core::Exception("Error desconocido",__FILE__,__LINE__);
}
bool genQuantumNumber_f(unsigned short& rest,Orbital& o,QuantumNumber& q)
{
	if(rest >= 14) 
	{
		o.electron = 14;
		rest -= o.electron;
		q.push_back(o);
		return true;
	}
	else if(rest < 14) 
	{
		o.electron = rest;
		rest = 0;
		q.push_back(o);
		return false;
	}
	
	throw octetos::core::Exception("Error desconocido",__FILE__,__LINE__);
}
void Atom::genQuantumNumber(Symbol s, QuantumNumber& q)
{
	Orbital o;
	unsigned short rest = s;
	//std::cout << "symbol : " << s << "\n";
	//std::cout << "rest : " << rest << "\n";
	//std::cout << "Step 1\n";
	//1s2
	o.main = 1;
	o.suborbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q)) 
	{
		q.resize(1);
		return;
	}
	//std::cout << "Step 2\n";
	//2s2
	o.main = 2;
	o.suborbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(2);
		return;
	}
	//std::cout << "Step 3\n";
	//2p6
	o.main = 2;
	o.suborbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(3);
		return;
	}
	//std::cout << "Step 4\n";
	//3s2
	o.main = 3;
	o.suborbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(4);
		return;
	}
	//std::cout << "Step 5\n";
	//3p6
	o.main = 3;
	o.suborbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(5);
		return;
	}
	
	//4s2
	o.main = 4;
	o.suborbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(6);
		return;
	}
	
	//3d10
	o.main = 3;
	o.suborbital = Suborbital::d;
	if(not genQuantumNumber_d(rest,o,q))
	{
		q.resize(7);
		return;
	}
	
	//4p6
	o.main = 4;
	o.suborbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(8);
		return;
	}
	
	//5s2
	o.main = 5;
	o.suborbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(9);
		return;
	}
	
	//4d10
	o.main = 4;
	o.suborbital = Suborbital::d;
	if(not genQuantumNumber_d(rest,o,q))
	{
		q.resize(10);
		return;
	}
	
	//5p6
	o.main = 5;
	o.suborbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(11);
		return;
	}
	
	//6s2
	o.main = 6;
	o.suborbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(12);
		return;
	}
	
	//4f14
	o.main = 4;
	o.suborbital = Suborbital::f;
	if(not genQuantumNumber_f(rest,o,q)) 
	{
		q.resize(13);
		return;
	}
	//5d10
	o.main = 5;
	o.suborbital = Suborbital::d;
	if(not genQuantumNumber_d(rest,o,q))
	{
		q.resize(14);
		return;
	}
	
	//6p6
	o.main = 6;
	o.suborbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(15);
		return;
	}
	
	//7s2
	o.main = 7;
	o.suborbital = Suborbital::s;
	if(not genQuantumNumber_s(rest,o,q))
	{
		q.resize(16);
		return;
	}
	
	//5f14
	o.main = 5;
	o.suborbital = Suborbital::f;
	if(not genQuantumNumber_f(rest,o,q))
	{
		q.resize(17);
		return;
	}
	//6d10
	o.main = 6;
	o.suborbital = Suborbital::d;
	if(not genQuantumNumber_d(rest,o,q))
	{
		q.resize(18);
		return;
	}
	
	//7p6
	o.main = 7;
	o.suborbital = Suborbital::p;
	if(not genQuantumNumber_p(rest,o,q))
	{
		q.resize(19);
		return;
	}
	
	//6f14
	o.main = 6;
	o.suborbital = Suborbital::f;
	if(not genQuantumNumber_f(rest,o,q))
	{
		q.resize(20);
		return;
	}
	
	//7d10
	o.main = 7;
	o.suborbital = Suborbital::d;
	if(not genQuantumNumber_d(rest,o,q))
	{
		q.resize(21);
		return;
	}
	
	//7f14
	o.main = 7;
	o.suborbital = Suborbital::f;
	if(not genQuantumNumber_f(rest,o,q))
	{
		q.resize(22);
		return;
	}
}



}