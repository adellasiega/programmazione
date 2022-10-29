#include<iostream>



/*
*	Calcolo il Massimo Comun Divisore
*		
*	Calcolo il massimo comune divisore tra due numeri, cioè il massimo intero che divide
*	entrambi. Questa funzione implementa l'algoritmo di Euclide
*	(vedi https://it.wikipedia.org/wiki/Algoritmo_di_Euclide)
*	
*	@param n è il primo numero
*	@param m è il secondo numero
*	@return unsigned int il massimo comune divisore
*/

unsigned int MCD(const unsigned int n, const unsigned int m)
{
	if (n%m == 0){
		// se m è divisore di n, allora il MCD dei due è m
		
		return m;
	}
	
	// se m non è un divisore di n, allora n%m>0 e il MCD di n e m è il MCD di m e n%m
	
	return MCD(m, n%m);		
}



/*
*	Calcola il minimo comune multiplo
*/

unsigned int mcm(const unsigned int n, const unsigned int m)
{	
	return n*m/MCD(m,n);
}



/*
*	Calcola la successione di Fibonacci
*/
unsigned int Fib_r(const unsigned int n){	

	if (n<2){
		return n;
	}
	
	return Fib_r(n-1) + Fib_r(n-2);
}

unsigned int Fib_i(const unsigned int n){
	
	unsigned int fib_0{0}, fib_1{1};
	
	while (n-- > 0){
		auto fib_2 = fib_0 + fib_1;
		fib_0 = fib_1;
		fib_1 = fib_2;
	}

	return fib_0;
}



int main()
{
	unsigned int a{2381}, b{82}, c{6};
	std::cout<< Fib_i(c) <<std::endl;
	return 0;
}
