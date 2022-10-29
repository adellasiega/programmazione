#include <iostream>
int main()
{
	int i{8};
	double d{8.3};
	
	int *pi{&i};
	double* pd{&d};
	const int* pic{&i};
	void* pv;
	
	//pd = pi; //errore, non si può convertire int* in double*
	pd = (double *)pi; 
	//pd = pv; //errore, non si può convertire da void* a double*
	//*pic = 2; //errore, *pic è di sola lettura
	*((int *)pic) = 2;
	
	//STATIC_CAST
	//consente di fare il cast tra tipi in relazione tra di loro
	
	// pd = pv //errore
	pd = static_cast<double *>(pv);
	//pd = static_cast<double *>(pi); // errore, non c'è relazione tra un puntatore a double ed un
									  // puntatoree a int
	//pi = static_cast<int*>(pic);
	pic = static_cast<const int*>(pi);
	
	//CONST_CAST
	//consente di rimuovere i vincoli di accesso
	
	//pd = const_cast<double *>(pv); // il const_cast serve solo a rimuovere i vincoli di const

	pi = const_cast<int *>(pic);
	
	//pd = const_cast<double *>(pi); //errore
	
	
	//REINTERPRET_CAST
	//Reinterpreta la sequanza di bit in un tipo diverso
	
	pd = reinterpret_cast<double *>(pi);
	pd = reinterpret_cast<double *>(pv);
	
	//I CAST sopra vengono utilizzati in fase di compilazione.
	
	return 0;
}


