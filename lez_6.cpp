#include <iostream>

int mult(const int& a, const int & b)
{
	std::cout<<"mult(const int& a, const& b)"<<std::endl;
	return a*b;
}

double mult(const double& a, const double& b)
{
	std::cout<<"mult(const double& a, const double& b)"<<std::endl;
	return a*b;
}

long int mult(const long int& a, const long int& b)
{
	std::cout<<"mult(const long int& a, const long int& b)"<<std::endl;
	return a*b;
} 

/*double mult(const float& a, const char* b)
{
	std::cout<<"mult(const float& a, const char* b)"<<std::endl;
	return a*b;
}*/

void test_void(void *a)
{
	std::cout << "void test_vodi(void* a)" << std::endl
	<< a << " ("<< typeid(a).name() << ")"
	<< std::endl;
}

void test_void(long a)
{
	std::cout << "void test_vodi(long a)" << std::endl
	<< a << " ("<< typeid(a).name() << ")"
	<< std::endl;
}


int main()
{
	{
		auto r = mult(7l,-4l+3l);
		std::cout << "mult(7l,-4l) = " << r << std::endl;
	}
	
	{
		auto r = mult(7.4,static_cast<float>(3));
		std::cout << "mult(7.4,static_cast<double>(3)) = " << r << std::endl;
	}
	
	{
		test_void(nullptr);
		test_void(NULL);
	}
	
	return 0;
}
