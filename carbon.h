#include <iostream>
#include <cstdlib>
#include "sum.h"

using namespace std;

#ifndef CARBON_H
#define CARBON_H

Sum sum;

//Classes of the Carbon Isotope:

class Gluon{
	private:
		double el_charge_double;
		string mass, spin, el_charge_string, statistics;
    public:
    	Gluon(int i):mass("0 MeV/c^2"), spin("1"), el_charge_string("0e"), el_charge_double(0.0), statistics("Bose-Einstein"){
    		cout<<"A gluon quark has been constructed"<<endl<<endl;
    		sum.set_el_charge_nucleus(el_charge_double);
    	}
		void print_info(){
			cout<<"This gluon has mass "<<mass<<", spin "<<spin<<", electric charge "<<el_charge_string<<" and it is characterized by the statistic "<<statistics<<"."<<endl<<endl;
		}
		~Gluon(){
			cout<<"A gluon quark will be destroyed"<<endl<<endl;
		}
};

class Downquark{
	private:
		double el_charge_double;
		string mass, spin, el_charge_string, statistics;
    public:
    	Downquark(int i):mass("4,7 MeV/c^2"), spin("1/2"), el_charge_string("-1/3e"), el_charge_double(-1.0/3.0), statistics("Fermi-Dirac"){
    		cout<<"A down quark has been constructed"<<endl<<endl;
    		sum.set_el_charge_nucleus(el_charge_double);
		}
		void print_info(){
			cout<<"This down quark has mass "<<mass<<", spin "<<spin<<", electric charge "<<el_charge_string<<" and it is characterized by the statistic "<<statistics<<"."<<endl<<endl;
		}
		~Downquark(){
			cout<<"A down quark will be destroyed"<<endl<<endl;
		}
};

class Upquark{
	private:
		double el_charge_double;
		string mass, spin, el_charge_string, statistics;
    public:
    	Upquark(int i):mass("2.01 MeV/c^2"), spin("1/2"), el_charge_string("+2/3e"), el_charge_double(2.0/3.0), statistics("Fermi-Dirac"){
    		cout<<"An up quark has been constructed"<<endl<<endl;
    		sum.set_el_charge_nucleus(el_charge_double);
    	}
		void print_info(){
			cout<<"This up quark has mass "<<mass<<", spin "<<spin<<", electric charge "<<el_charge_string<<" and it is characterized by the statistic "<<statistics<<"."<<endl<<endl;
		}
		~Upquark(){
			cout<<"An up quark will be destroyed"<<endl<<endl;
		}
};

class Electron{
    private:
    	double el_charge_double;
		string mass, spin, el_charge_string, statistics;
    public:
    	Electron(int i):mass("5.48579909070 x 10^-4 u"), spin("1/2"), el_charge_string("-1e"), el_charge_double(-1.0), statistics("Fermi-Dirac"){
    		cout<<"A electron has been constructed"<<endl<<endl;
    		sum.set_el_charge_electrons(el_charge_double);
		}
		void print_info(){
			cout<<"This electron has mass "<<mass<<", spin "<<spin<<", electric charge "<<el_charge_string<<" and it is characterized by the statistic "<<statistics<<"."<<endl<<endl;
		}
		~Electron(){
			cout<<"An electron will be destroyed"<<endl<<endl;
		}
};

class Neutron{
	private:
		unsigned int quarks, upquarks, downquarks, gluons;
		double el_charge_double;
		string mass, spin, el_charge_string, statistics;
	public:
		Neutron(int i):mass("1.00850 MeV/c^2"), spin("1/2"), el_charge_string("0e"), el_charge_double(0.0),statistics("Fermi-Dirac"), quarks(3), upquarks(1), downquarks(2), gluons(3){
			cout<<"A neutron has been constructed"<<endl<<endl;
			sum.set_neutrons();
		}
		void print_info(){
			cout<<"This neutron has mass "<<mass<<" spin "<<spin<<" electric charge "<<el_charge_string<<" and it is characterized by the statistic "<<statistics<<"."<<endl;
			cout<<"It is composed of "<<quarks<<" quarks, "<<upquarks<<" upquark and "<<downquarks<<" downquarks."<<endl<<endl;
			unsigned int i;
			//NEW UPQUARK - PRINT:
			Upquark* UQ_array[upquarks];
			for (i=0; i<upquarks; i++){
				UQ_array[i] = new Upquark(i);
				UQ_array[i]->print_info();
			}
			//NEW DOWNQUARK - PRINT:
			Downquark* DQ_array[downquarks];
			for (i=0; i<downquarks; i++){
				DQ_array[i] = new Downquark(i);
				DQ_array[i]->print_info();
			}
			//NEW GLUON - PRINT:
			Gluon* GL_array[gluons];
			for (i=0; i<gluons; i++){
				GL_array[i] = new Gluon(i);
				GL_array[i]->print_info();
			}
			//DELETE UPQUARK:
			for (i=0; i<upquarks; i++)
				delete UQ_array[i];
			//DELETE DOWNQUARK:
			for (i=0; i<downquarks; i++)
				delete DQ_array[i];
			//DELETE GLUON:
			for (i=0; i<gluons; i++)
				delete GL_array[i];
		}
		~Neutron(){
			cout<<"A neutron will be destroyed"<<endl<<endl;
		}
};

class Proton{
	private:
		unsigned int quarks, upquarks, downquarks, gluons;
		double el_charge_double;
		string mass, spin, el_charge_string, statistics;
	public:
		Proton(int i):mass("1.007 u"), spin("1/2"), el_charge_string("+1e"), el_charge_double(1.0), statistics("Fermi-Dirac"), quarks(3), upquarks(2), downquarks(1), gluons(3){
			cout<<"A proton has been constructed"<<endl<<endl;
			sum.set_protons();
		}
		void print_info(){
			cout<<"This proton has mass "<<mass<<", spin "<<spin<<", electric charge "<<el_charge_string<<" and it is characterized by the statistic "<<statistics<<"."<<endl;
			cout<<"It is composed of "<<quarks<<" quarks, "<<upquarks<<" upquarks and "<<downquarks<<" downquark."<<endl<<endl;
			unsigned int i;
			//NEW UPQUARK - PRINT:
			Upquark* UQ_array[upquarks];
			for (i=0; i<upquarks; i++){
				UQ_array[i] = new Upquark(i);
				UQ_array[i]->print_info();
			}
			//NEW DOWNQUARK - PRINT:
			Downquark* DQ_array[downquarks];
			for (i=0; i<downquarks; i++){
				DQ_array[i] = new Downquark(i);
				DQ_array[i]->print_info();
			}
			//NEW GLUON - PRINT:
			Gluon* GL_array[gluons];
			for (i=0; i<gluons; i++){
				GL_array[i] = new Gluon(i);
				GL_array[i]->print_info();
			}
			//DELETE UPQUARK:
			for (i=0; i<upquarks; i++)
				delete UQ_array[i];
			//DELETE DOWNQUARK:
			for (i=0; i<downquarks; i++)
				delete DQ_array[i];
			//DELETE GLUON:
			for (i=0; i<gluons; i++)
				delete GL_array[i];
		}
		~Proton(){
			cout<<"A proton will be destroyed"<<endl<<endl;
		}
};

class Nucleus{
	private:
		unsigned int protons, neutrons;
	public:
		unsigned int i;
		Nucleus():protons(6), neutrons((rand()%3)+6){}	/* [6, 8]*/
		void member_construction(){
			//NEW PROTON - PRINT:
			Proton* PR_array[protons];
			for (i=0; i<protons; i++){
				PR_array[i] = new Proton(i);
				PR_array[i]->print_info();
			}
			//NEW NEUTRON - PRINT:
			Neutron* NE_array[neutrons];
			for (i=0; i<neutrons; i++){
				NE_array[i] = new Neutron(i);
				NE_array[i]->print_info();
			}
			//DELETE PROTON:
			for (i=0; i<protons; i++)
				delete PR_array[i];
			//DELETE NEUTRON:
			for (i=0; i<neutrons; i++)
				delete NE_array[i];	
		}
		int get_protons_number(){
			return protons;
		}
		int get_neutrons_number(){
			return neutrons;
		}
		~Nucleus(){}
};

class Atom{
	private:
		unsigned int electrons, mass_number, atomic_number, electric_charge;
		Nucleus nucleus;
	public:
		unsigned int i;
		Atom():electrons(6){
			cout<<"An atom has been constructed"<<endl<<endl;
			cout<<endl<<"This carbon isotope has "<<electrons<<" electrons, "<<nucleus.get_protons_number()<<" protons and "<<nucleus.get_neutrons_number()<<" neutrons."<<endl;
			cout<<endl<<"Atomic number: "<<nucleus.get_protons_number()<<"\nMass number: "<<nucleus.get_neutrons_number()+nucleus.get_protons_number()<<"\nElectrich charge: "<<nucleus.get_protons_number()-electrons<<endl<<endl;
			//NEW ELECTRON - PRINT:
			Electron* EL_array[electrons];
			for (i=0; i<electrons; i++){
				EL_array[i] = new Electron(i);
				EL_array[i]->print_info();
			}

			nucleus.member_construction();

			//DELETE ELECTRON:
			for (i=0; i<electrons; i++)
				delete EL_array[i];
		}
        void print_info(){
            cout<<endl<<"This carbon isotope has "<<nucleus.get_protons_number()<<" protons, " <<nucleus.get_neutrons_number()<<" neutrons and "<<electrons<<" electrons."<<endl<<endl;	
		}
		int get_atom_number(){
			return nucleus.get_protons_number();
		}
		int get_mass_number(){
			return nucleus.get_neutrons_number()+nucleus.get_protons_number();
		}
		int get_electric_charge(){
			return nucleus.get_protons_number()-electrons;
		}
        int get_electrons_number(){
            return electrons;
        }
		~Atom(){
			cout<<"\nAn atom will be destroyed"<<endl<<endl;
		}
};

class Carbon{
	public:
		Carbon(){
			cout<<endl<<"____________________________"<<endl;
			Atom new_atom;
		}
		~Carbon(){
			cout<<endl;
		}
};

#endif
