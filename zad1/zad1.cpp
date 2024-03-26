#include <iostream>
using namespace std;

class Pojazdy {
public:
	string name_p;
	void prezentacjaPojazdu() {
		cout << "Nazwa pojazdu:" << this->name_p << endl;
	}
};
class Samochody:public Pojazdy {
public:
	string name_s;
	void prezentacjaSamochody() {
		cout << "Nazwa samochodu:" << this->name_s << endl;
	}
					
};
class Rolnicze:public Samochody {
public:
	string name_r;
	void prezentacjaRolniczych() {
		cout << "Nazwa Pojazdu Rolniczego:" << this->name_r << endl;
	}

};


int main()
{
	Rolnicze rol;
	rol.name_p = "Bizon";
	rol.name_s = "Szybki bizon";
	rol.name_r = "Wiejski bizonek";
	rol.prezentacjaPojazdu();
	rol.prezentacjaSamochody();
	rol.prezentacjaRolniczych();




	return EXIT_SUCCESS;
}

