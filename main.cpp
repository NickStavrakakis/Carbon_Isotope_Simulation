#include <iostream>
#include <cstdlib>
#include <time.h>
#include "carbon.h"

using namespace std;

int main(){

	srand(time(NULL));
	unsigned int i;
	const unsigned int atom_total = rand()%4 + 3; // [3, 6]

	for(i=1; i<=atom_total; i++){
		Carbon new_carbon;
	}

	cout<<"Total Protons: "<<sum.get_protons()<<"\nTotal Neutrons: "<<sum.get_neutrons()<<"\nTotal Charge: "<<sum.get_el_charge()<<"e"<<endl;

	return 1;
}


