#include<iostream>

template <typename T, typename T2> //funzione template, viene compilata quando chiamata
T media(const T &a, const T2 &b){  //i parametri del template sono dedotti da quelli della funzione
	T tmp = a+b;
	return tmp/2;
}

//media(2,3);   // T = int   T2 = int
//media(0,2.3); // T = int   T2 = double 



template <typename T, typename T2> //funzione template dove un tipo è già specificato
T media2(const int &a, const T2 &b){
	T tmp = a+b;
	return tmp/2;
}

//media<unsigned int, double>(2,3.2) // i tipi possono essere specificati in fase di invocazione
							       // T = unsigned int, T2 = double


// è possibile specializzare un template :

template<typename T>
T sorpresa(const T &a) {
	return a/2;
} 

// ... specializzazione (tutti i parametri devono essere specificati) ... 

template <>
int sorpresa<int>(const int &a){
	return a*2;
} 


// i parametri del template possono essere usati come i parametri

template<unsigned i> // questa è una funzoone template il cui parametro è unisgned int
constexpr unsigned long int fib(){
	return fib<i-1>() + fib<i-2>();
}

template<>
constexpr unsigned long int fib<0>(){ // queste sono delle specializzazioni di 'fib'
	return 0;
}

template<>
constexpr unsigned long int fib<1>(){ 
	return 1;
}



int main()
{
	std::cout << "fib(3) = " << fib(3) << std::endl ;
	return 0;
}


