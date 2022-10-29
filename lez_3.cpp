#include <iostream>
#include <typeinfo>

int main()
{
	/*auto va {1};
	std::cout << "va: " 
	<< va 
	<< std::endl
	<< typeid(va).name()
	<< std::endl;
	
	auto vb{true};
	std::cout<< "vb: "
	<< vb
	<< std::endl
	<< typeid(vb).name()
	<< std::endl;
	
	int a{5}, b{5};
	int* p{&a};
	std::cout << "1) a: " << a << std::endl;
	*p = 8;
	std::cout << "2) a: " << a << std::endl;
	p = &b;
	std::cout << "3) *p: " << *p << std::endl;
	
	const int* p2{&a};
	std::cout << "4) a: " << *p2 << std::endl;
	//*p2 = 3;*
	*/
	
	int a{1};
	int* p;
	int& r{a};              // variabile riferimento ad a
	
	p = &a;
	
	std::cout << "a:" << a
	<< std::endl
	<< "*p: " << *p
	<< std::endl
	<< "p: " << p
	<< std::endl
	<< "r: "<< r
	<< std::endl
	<< "&r: "<< &r
	<< std::endl;
	
	
	
	
	return 0;
}
