#include<iostream>
/*
*    Stampa le mosse che risolvono la torre di Hanoi
*
*    @param n è la dimensione della torre
*    @param src è l'asta sorgente
*    @param dst è l'asta di destinazione
*    @param aux è l'asta ausiliaria
*/

void hanoi_solver(const unsigned int& n,
                  const unsigned int& src,
                  const unsigned int& dst,
                  const unsigned int& aux)
{
    
    // Casi base :
    
    // nessun disco da spostare
    if (n == 0){ 
        return;
    }
    
    // un unico disco da spostare 
    if (n == 1){ 
        std::cout << "Sposta disco 1 dall'asta "<< src 
                  << " all'asta " << dst << std::endl ;
    }

    
    // Passso ricorsivo:
    
    // sposto la torre di dimensione n-1 da src ad aux
    hanoi_solver(n-1, src, aux, dst);
    
    // sposto l'ultimo disco da src a dst
    std::cout << "Sposta disco " << n << " dall'asta " << src
              << " all'asta " << dst << std::endl ;

    // sposto la torre di dimensione n-1 da aux a dst
    hanoi_solver(n-1, aux, dst, src);
}


void hanoi_solver(const unsigned int& n){ // overload per mascherare nomi aste
    hanoi_solver(n,0,1,2);
}



int main(){
    hanoi_solver(2);
    return 0;
}