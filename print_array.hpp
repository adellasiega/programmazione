#include<iostream>
/*
    Stampa un array
*/
template<typename T>
void print(const T A[], const size_t& length){
    std::cout << "[";
    for(size_t i=0; i<length; ++i){
        if(i>0){
            std::cout<<",";
        }
        std::cout << A[i];
    }
    std::cout << "]" <<std::endl;
}
