#include "Helper.h"
#include <iostream>
using namespace std;
//NASLEDOVANIE
int Helper::MultiplyClothes()
{
	return class1::Count_Clothes()*2;
}
//PEREOPREDELENIE
void Helper::print()
{
	cout << "Multiplied clothes: " << MultiplyClothes() << endl; 
}
