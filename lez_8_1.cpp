#include <cmath>

/*  Calcola la radice n-esima di un valore 
    
    Calcola la radice n-esima di un valore atttraverso il metodo di bisezione

    @param value è il radicando non negativo
    @param n è l'indice della radice
    @return un valore v tale che [v-1e-16, v+1e-16] includa la radice n-esima di value
*/
double radice(const double& value, const unsigned int& n)
{
    // Se R è la radice n-esima di value allora la soluzione di 
    // f(x) = x^n - value = 0
    // è R
    

    double lb{0}, rb{value+1};
    double flb{std::pow(lb,n)-value}, frb{std::pow(rb,n)-value};
    const double err{1e-16};
    // finché l'errore è maggiore di err
    while(rb-lb>err){
        
        //calcolo la mediana dell'intervallo
        const double m = (lb-rb)/2;
        
        // valuto la funzione in m
        const double fm = std::pow(m,n)-value;

        // se la mediana è soluzione di f allora la mediana è al radice
        if (fm == 0){
            return m;
        }
         
        // se la mediana non è soluzione trovo il semi-intervallo contenete la soluzione
        if (flb*fm < 0){
            rb = m;
        } else {
            lb = m;
            flb = fm;
        }
    }
    return lb;
}



