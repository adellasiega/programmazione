#include <iostream>
#include <memory>

bool is_prime(const std::unique_ptr<unsigned int[]>& P,
              const size_t& P_length, const unsigned int& value)
{
    for (size_t i=0; i<P_length && P[i]*P[i] <= value; ++i){
        if (value % P[i] == 0){
            return false;
        }
    }
    return true;
}  


unsigned int nth_prime(const unsigned int& n)
{
    std::unique_ptr<unsigned int[]> P{new unsigned int[n+1]};

    size_t primi_trovati{0};
    unsigned int valore{2};

    while (primi_trovati<=n){
        if (is_prime(P, primi_trovati, valore)){
            P[primi_trovati++]=valore;
        }
        ++valore;
    }

    return P[n];

}

int main()
{
    constexpr unsigned int n{10};
    std::cout << "nth_prime("<<n<<") = "<< nth_prime(n)<<std::endl;

    return 0;
}

