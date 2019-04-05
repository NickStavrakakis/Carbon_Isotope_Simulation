#include <iostream>
#include <cstdlib>

using namespace std;

#ifndef SUM_H
#define SUM_H

class Sum{
	private:
		unsigned int pr, ne; /* pr = number of protons, ne = number of neutrons */
		double ec_nu, ec_el; /* ec_nu = electric charge of nucleuses (protons+neutrons), ec_el = electric charge of electrons */
	public:
		Sum():pr(0), ne(0), ec_nu(0.0), ec_el(0.0){}
		void set_protons(){
			pr++;
		}
		void set_neutrons(){
			ne++;
		}
		int get_protons(){
			return pr;
		}
		int get_neutrons(){
			return ne;
		}
		void set_el_charge_nucleus(double i){
			ec_nu = ec_nu + i;
		}
		void set_el_charge_electrons(double i){
			ec_el = ec_el + i;
		}
		int get_el_charge(){
			return (ec_nu + ec_el);
		}
};

#endif
