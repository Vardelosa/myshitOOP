//Oblast - proizvodstvenniy tekstilny ceh
#include "class1.h"
#include <iostream>
using namespace std;
	class1::class1(int a, int b)
	{
		number_of_tshirts = a;
		number_of_pants = b;
	}
	class1::class1()
	{
		number_of_tshirts = 1;
		number_of_pants = 1;
	}
	int class1::Count_Clothes()
	{
		return number_of_tshirts + number_of_pants;
	}
	
	//METOD, UCHITIVAUSIY BRAK(PEREGRUZKA)
	int class1::Count_Clothes(int Brak)
	{
		return number_of_tshirts + number_of_pants - Brak;
	}

	void class1::print()
	{
		cout << "All the clothes: " << Count_Clothes() << endl;
	}
