#include <iostream>
#include <chrono>

template<unsigned i>
unsigned long int fib_t()
{
	return fib_t<i-1>()+fib_t<i-2>();
}
template<>
unsigned long int fib_t<0>(){
	return 0;
}
template<>
unsigned long int fib_t<1>(){
	return 1;
}

unsigned long int fib_r(const unsigned & i)
{
	if(i<2){
		return i;
		}
	else return fib_r(i-1) + fib_r(i-2);
}	
	
	
	
constexpr unsigned long int fib_ce(const unsigned & i)
{
	if(i<2){
		return i;
		}
	else return fib_ce(i-1) + fib_ce(i-2);
}	
	

int main()
{
	constexpr unsigned int num{24};
	
	{
		auto t0 = std::chrono::high_resolution_clock::now();
		auto x = fib_t<num>();
		auto t1 = std::chrono::high_resolution_clock::now();
		auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(t1-t0);
		std::cout << "funzione template " << elapsed.count() << " microsecondi"<<std::endl;
		
		auto t02 = std::chrono::high_resolution_clock::now();
		auto x2 = fib_r(num);
		auto t12 = std::chrono::high_resolution_clock::now();
		auto elapsed2 = std::chrono::duration_cast<std::chrono::microseconds>(t12-t02);
		std::cout << "funzione ric " << elapsed2.count() << " microsecondi"<<std::endl;
		
		auto t03 = std::chrono::high_resolution_clock::now();
		auto x3 = fib_ce(num);
		auto t13 = std::chrono::high_resolution_clock::now();
		auto elapsed3 = std::chrono::duration_cast<std::chrono::microseconds>(t12-t02);
		std::cout << "funzione ce " << elapsed3.count() << " microsecondi"<<std::endl;
		
		
	}
}
