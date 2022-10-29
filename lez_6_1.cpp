#include <iostream>

int func1(const double& a)
{
	std::cout << "func1(" << a <<  ")" << std::endl;
	return 1;
}

int func2(const double& a)
{
	std::cout << "func2(" << a <<  ")" << std::endl;
	return 2;
}

int func4(double& a)
{
	std::cout << "func4(" << a <<  ")" << std::endl;
	return 4;
}

int func5(const int& a)
{
	std::cout << "func5(" << a <<  ")" << std::endl;
	return 5;
}

void func6(int (*f)(const double&), const double & a)
{
	std::cout << "func6(f, " << a << ")" << f(a) << std::endl;
}


int main()
{
	int (*f)(const double&);
	
	f = func1;
	f(18.2);
	
	f = func2;
	f(18.2);
	
	// f = func4; //errore
	
	// f = func5; //errore
	//il tipo suleìle funzioni è stretto, niente typecast implicito
	
	auto f2 = func5; // dichiarando puntatore a funzione e assegnazione
	//f2 = func4;
	
	func6(func1, 9.2);
	
	return 0;
}	

