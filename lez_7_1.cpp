#include<iostream>

template<typename T , typename T2>
T media(const T& a, const T2& b)
{
	std::cout << "(generica) ";
	
	T tmp = a+b ;
	
	return tmp/2 ;
	
}

// specializzazione della funzione media nel caso in cui i due parametri sono entrambi double
template<>
double media<double, double>(const double& a, const double& c)
{
	std::cout << "(double double) ";
	return a/2+c/2;
}

double identity(const double& a)
{
	return a;
}

template<typename T>
T doppio(const double& v)
{	
	return 2*identity(v);
}



int main()
{
	std::cout << "media(2,3) = " << media(2,3) << std::endl ;
	std::cout << "media(0.2,0.3) = " << media(0.2,0.3) << std::endl ;
	std::cout << "media(0.2,0.3) = " << media<double,float>(0.2,0.3) << std::endl ;
	//std::cout << "doppio(3.2) = " << doppio<double>(3.2) << std::endl ;
	std::cout << "doppio(3.2) = " << doppio<auto>(3.2) << std::endl ;
	
	return 0;
}
