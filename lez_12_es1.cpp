#include "print_array.hpp"

/*
    Ordina un array di valori.
*/

template<typename T>
void insertion_sort(T A[], const size_t& length){
    for (size_t i=1; i<length; i++){
        auto j = i;
        while(j>0 && A[j]<A[j-1]){
            std::swap(A[j], A[j-1]);
            --j;
        }
    }
}


int main(){

    int A[] = {30,-3,5,-10,7};

    print(A,5);
    insertion_sort(A,5);
    print(A,5);
    return 0;
}