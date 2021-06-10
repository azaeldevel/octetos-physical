
/*
 * main.cc
 * Copyright (C) 2021 Azael R. <azael.devel@gmail.com>
 * 
 * octetos-chimestry is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * octetos-chimestry is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <CUnit/Basic.h>

//#include <list>
#include <iostream>
#include <Atom.hh>



void testDeveloping()
{	
	unsigned short MAXNUMATOM = 118;
	oct::phy::Atom atoms[MAXNUMATOM];
	
	for(unsigned short i = 1; i < MAXNUMATOM; i++)
	{
		CU_ASSERT(atoms[i].getSymbol() == oct::phy::Symbol::None);
	}	
	for(unsigned short i = 1; i < MAXNUMATOM; i++)
	{
		atoms[i].set(i);	
		CU_ASSERT(atoms[i].getSymbol() == atoms[i].getAtomicNumber()); //el numero atomico es equivalenmte a la enumeriacion
		/*
		std::cout << "Propiedades de " << atoms[i].getName() << "\n";
		std::cout << "\tcarga del nucle = " << atoms[i].getNucleoCharge() << "\n";
		std::cout << "\tcarga de los electrones : " << atoms[i].getElectronCharge() << "\n";
		*/
	}		
		
	oct::phy::Atom& H = atoms[1];	
	double rH1 = H.getRadio(1);
	double eH1 = H.getEnergy(1);	
	CU_ASSERT(5.29177e-11 - rH1 < 0.1e-11);
	CU_ASSERT(2.17987e-18 + eH1 < 0.1e-18);
	//std::cout << eH1/(1.6e-19) << "eV";
	//std::cout << "Para H n = 1, r = " << rH1 << "\n";
	//std::cout << "Para H n = 1, E0 = " << eH1 << "\n";
	oct::phy::Atom& Li = atoms[3];
	double rLi1 = Li.getRadio(1);
	double eLi1 = Li.getEnergy(1);	
	CU_ASSERT(1.76392e-11 - rLi1 < 0.1e-11);
	CU_ASSERT(1.96188e-17 + eLi1 < 0.1e-17);
	//std::cout << "Para Li n = 1, r = " << rLi1 << "\n";
	//std::cout << "Para Li n = 1, E0 = " << eLi1 << "\n";
	oct::phy::Atom& Na = atoms[11];
	double rNa1 = Na.getRadio(1);
	double eNa1 = Na.getEnergy(1);	
	CU_ASSERT(4.8107e-12 - rNa1 < 0.1e-12);
	CU_ASSERT(2.63765e-16 + eNa1 < 0.1e-16);
	//std::cout << "Para Na n = 1, r = " << rNa1 << "\n";
	//std::cout << "Para Na n = 1, E0 = " << eNa1 << "\n";
	oct::phy::Atom& Au = atoms[79];
	double rAu1 = Au.getRadio(1);
	double rAu2 = Au.getRadio(2);
	double rAu3 = Au.getRadio(3);
	double rAu4 = Au.getRadio(4);
	double rAu5 = Au.getRadio(5);
	double rAu6 = Au.getRadio(6);	
	CU_ASSERT(6.69845e-13 - rAu1 < 0.1e-11);
	CU_ASSERT(2.41144e-11 - rAu6 < 0.1e-11);
	//CU_ASSERT(2.63765e-16 + eAu1 < 0.1e-16);
	std::cout << "Para Au n = 1, r = " << rAu1 << "\n";
	std::cout << "Para Au n = 2, r = " << rAu2 << "\n";
	std::cout << "Para Au n = 3, r = " << rAu3 << "\n";
	std::cout << "Para Au n = 4, r = " << rAu4 << "\n";
	std::cout << "Para Au n = 5, r = " << rAu5 << "\n";
	std::cout << "Para Au n = 6, r = " << rAu6 << "\n";
	//std::cout << "Para Na n = 1, E0 = " << eNa1 << "\n";
	double cmpAuH = rAu6/rH1;
	std::cout << "Comparacion con el Au/H " << cmpAuH << "\n";
	
	oct::phy::Atom& U = atoms[92];
	double rU1 = U.getRadio(1);
	double rU2 = U.getRadio(2);
	double rU3 = U.getRadio(3);
	double rU4 = U.getRadio(4);
	double rU5 = U.getRadio(5);
	double rU6 = U.getRadio(6);	
	double rU7 = U.getRadio(7);	
	//CU_ASSERT(6.69845e-13 - rU1 < 0.1e-11);
	//CU_ASSERT(2.41144e-11 - rU6 < 0.1e-11);
	//CU_ASSERT(2.63765e-16 + eAu1 < 0.1e-16);
	std::cout << "Para U n = 1, r = " << rU1 << "\n";
	std::cout << "Para U n = 2, r = " << rU2 << "\n";
	std::cout << "Para U n = 3, r = " << rU3 << "\n";
	std::cout << "Para U n = 4, r = " << rU4 << "\n";
	std::cout << "Para U n = 5, r = " << rU5 << "\n";
	std::cout << "Para U n = 6, r = " << rU6 << "\n";
	std::cout << "Para U n = 7, r = " << rU7 << "\n";
	//std::cout << "Para Na n = 1, E0 = " << eNa1 << "\n";
	double cmpUH = rU7/rH1;
	std::cout << "Comparacion con el U/H " << cmpUH << "\n";
}

int init(void)
{
	return 0;
}
int clean(void)
{
	return 0;
}

int main(int argc, char *argv[])
{  
	 
	CU_pSuite pSuite = NULL;
	
	/* initialize the CUnit test registry */
	if (CUE_SUCCESS != CU_initialize_registry()) return CU_get_error();
	
	pSuite = CU_add_suite("Testong Chemistry", init, clean);
	if (NULL == pSuite) 
	{
		CU_cleanup_registry();
		return CU_get_error();
	}
		
	if ((NULL == CU_add_test(pSuite, "Developing..", testDeveloping)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}
		
	
	/* Run all tests using the CUnit Basic interface */
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();	
}
