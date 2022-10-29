#include <iostream>

void stampa_array(unsigned int A[], const size_t length)
{
    std::cout << "[";
    for (size_t i=0; i<length; ++i){
        std::cout << A[i];
        if (i != length-1){
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

unsigned int* calcola_Fibonacci(const size_t n)
{
    unsigned int* A = new unsigned int[n];
    A[0] = 0;
    A[1] = 1;

    for (size_t i=2; i<n; ++i){
        A[i]=A[i-1]+A[i-2];
    }
    
    return A;
}

/*
int main()
{
    size_t n{10};

    auto A = calcola_Fibonacci(n);
    
    stampa_array(A, n+1);
    
    delete[] A;

    return 0;
}
*/

int main()
{
    size_t n{10};
    unsigned int A[n];

    char *Ac = reinterpret_cast<char*>(A);

    for(size_t i=0; i<sizeof(unsigned int)*n; ++i){
        Ac[i] = 'a';
    }

    for(size_t i=0; i<sizeof(unsigned int)*n;++i){
        std::cout << Ac[i];
    }

    std::cout<<std::endl;
}