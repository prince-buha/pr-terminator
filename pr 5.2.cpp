/*
2. Create hybrid inheritance and remove ambiguity permanently.


method from vehical class.
 method from car class..
 method from Bike class..
 method from Motory cycle class.
 */

#include <iostream>
using namespace std;


class Vehicle {
	public:
    	Vehicle() {
        	cout << " method from vehical class." << endl;
    	}
	};

class Car : virtual public Vehicle {
	public:
   		 Car() {
       		 cout << " method from car class.." << endl;
    	}
	};

class Bike : virtual public Vehicle {
	public:
    	Bike() {
        	cout << " method from Bike class.." << endl;
    	}
	};

class Motorcycle : public Car, public Bike {
	public:
    	Motorcycle() {
        	cout << " method from Motory cycle class." << endl;
    	}
	};

int main() {
    Motorcycle m;
    return 0;
}
