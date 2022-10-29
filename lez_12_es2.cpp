#include <iostream>
#include "print_array.hpp"

bool is_prime(const unsigned int& value,
              const unsigned int primes[],
              const size_t& num_of_primes)
{
    for(size_t i=0; i<num_of_primes && primes[i]*primes[i]<value; ++i){
        if(value%primes[i] == 0){
            return false;
        }
    }
    return true;
}


unsigned int* get_primes(const unsigned int n) {
    unsigned int *primes = new unsigned int[n];
    size_t found{0};
    unsigned int value{2};
    while(found<n){
        if(is_prime(value,primes,found)){
            primes[found++] = value;
        }
        ++value;
    }
}

int main()
{
    constexpr unsigned int n{10};
    auto primes = get_primes(n);
    print(primes,n);
    return 0;
}