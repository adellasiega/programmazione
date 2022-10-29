#include <iostream>
#include <memory>

int* usa_puntatore()
{
    int* pi1 = new int(4);

    std::cout << "*pi1: " << *pi1 << std::endl;

    *pi1 = *pi1 + 3;

    std::cout << "*pi1: " << *pi1 << std::endl;

    int* pi2;

    pi2 = pi1;

    std::cout << "*pi1: " << *pi1 << std::endl;

    return pi2;
}

void puntatori_tradizionali()
{
    std::cout<<"puntatori tradizionali"<<std::endl;
    auto pi{usa_puntatore()};
    std::cout << "*pi: " << *pi << std::endl;
    delete pi;
}

std::unique_ptr<int> usa_unique_pointer()
{
    std::unique_ptr<int> u1{new int(4)};
    std::cout << "*u1: " << *u1 << std::endl;
    *u1 = *u1 + 3;
    std::unique_ptr<int> u2;
    // u2 = u1; errore: non si possono copiare gli unique pointer
    return u1;
}

void unique_pointer()
{
    std::cout << "unique pointer" << std::endl;
    auto up{usa_unique_pointer()};
}

std::shared_ptr<int> usa_shared_pointer()
{
    int* i = new int(4);
    std::shared_ptr<int> s3{i};
    std::shared_ptr<int> s4{i};
    
    std::shared_ptr<int> s1{new int(4)};
    std::cout << "*s1: " << *s1 << std::endl;
    *s1 = *s1 + 3;
    std::cout << "*s1: " << *s1 << std::endl;
    std::cout<<"s1.use_count(): "<<s1.use_count()<<std::endl;
    std::shared_ptr<int> s2;
    s2 = s1;
    std::cout<<"s1.use_count(): "<<s1.use_count()<<std::endl;    
    *s2 = 6;
    std::cout << "*s1: " << *s1 << std::endl;
    return s2;
}

void shared_pointer()
{
    std::cout << "shared pointer"<< std::endl;
    auto sp{usa_shared_pointer()};
    std::cout << "*sp: " << *sp << std::endl;
}

int main()
{
    shared_pointer();
    return 0;
}