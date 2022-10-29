#include <iostream> // serve per includere le firme delle funzioni di input/output

int main()
{

	int a=1;
	unsigned int ui = 200;
	char c='a';
	char c2=100;
	short s=-6;
	bool b = true;
	bool b2 = false; 
	double d=9.3;
	int i=2.3; //typecast implicito, narrowing i = 2
	// int i{2.3}; //inizializzatore universale, verifica che la costante che si vuole
		        //rappresentare sia effettivamente del tipo dichiarato. Genera errore.
	int n{(int)(d+i)};
	
	int16_t i16; //rappresentazione con esattamente 16, 32, 64 bit
	int32_t i32;
	int64_t i64;
	
	long int i2{1<<40};
	
	
	
	std::cout << "Ciao, Mondo!" 
	<< std::endl
	<< "Come stai?"
	<< std::endl
	<< i2
	<< std::endl;
	
	return 0;

}
