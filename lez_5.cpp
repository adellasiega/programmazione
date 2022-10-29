#include <iostream>

void scambia_1(int a, int b);
void scambia_2(int* a, int* b);
void scambia_3(int& a, int& b);

int main()
{
	const int init_a{-10}, init_b{10};
	int a{init_a}, b{init_b};
	
	std::cout << "a: "<< a << " b: "<< b << std::endl;
	scambia_3(a, b);
	std::cout << "a: "<< a << " b: "<< b << std::endl;


}

void scambia_1(int a, int b)
{
	auto tmp{a};
	a = b;
	b = tmp;
	std::cout << "Dentro scambia_1 " << "a: " << a << " b: "<< b << std::endl;
}

void scambia_2(int* a, int* b)
{
	auto tmp{*a};
	*a = *b;
	*b = tmp;
	std::cout << "Dentro scambia_2 " << "*a: " << *a << " *b: "<< *b << std::endl;
}

void scambia_3(int& a, int& b)
{
	auto tmp{a};
	a = b;
	b = tmp;
	std::cout << "Dentro scambia_3 " << "a: " << a << " b: "<< b << std::endl;
}

