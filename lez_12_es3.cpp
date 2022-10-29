#include <iostream>
#include "print_array.hpp"

template<typename T, typename OUTPUT = double>
OUTPUT compute_average(const T A[], const size_t length){
    T sum{0};
    for(size_t i=0; i<length; i++){
        sum += A[i];
    }
    return sum/length;
}

/*
template<typename T, typename AVG_T>
OUTPUT compute_variance(const T A[], const size_t length, const AVG_T average){
    AVG_T sum{0};
    for(size_t i=0; i<length; i++){
        const AVG_T delta =  A[i] - average;
        sum += delta*delta;
    }
    return sum/length;
}

template<typename T, type
*/

int main()
{
    int A[] = {1,1,3,1,1};
    print(A,5);
    std::cout << "avg(A): " << compute_average(A,5) << std::endl;
}