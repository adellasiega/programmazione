#include <iostream>

int main()
{
	int* pi{nullptr}; // nullptr ha tipo std::nullptr_t
	
	if (pi != NULL) {
		*pi = 3;
	}
	
	
	std::cout << "Tipo di NULL: " << typeid(NULL).name() << std::endl;
	std::cout << "Tipo di nullptr: " << typeid(nullptr).name() << std::endl;
	return 0;
}
