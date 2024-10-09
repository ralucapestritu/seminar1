#include <iostream>
using namespace std;
struct casa {
	int nrCamere ;
	float nrMp;
	string adresa;

};

void afisareCasa(casa c) {
	cout << c.nrCamere << endl;
	cout << c.nrMp << endl;
	cout << c.adresa << endl;

}

void modificaNrCamere(casa* c, int NouNrCamere) {
	c->nrCamere = NouNrCamere;
}

void modificaNrCamereRef(casa& c, int NouNrCamere) {
	c.nrCamere = NouNrCamere;
}

casa initialiareCasa(int nrCamere, float nrMp, string adresa) {
	casa c;
	c.adresa = adresa;
	c.nrCamere = nrCamere;
	c.nrMp = nrMp;
	return c;
}

int main() {
	casa c;
	c.nrCamere = 3;
	c.nrMp = 75;
	c.adresa = "Stefan cel Mare,nr 3";
	afisareCasa(c);

	casa c2;
	cout << "introduceti adresa:";
	cin >> c2.adresa;
	cout << "introduceti nr camere:";
	cin >> c2.nrCamere;
	cout << "Introduceti nr Mp:";
	cin >> c2.nrMp;

	afisareCasa(c2);

	modificaNrCamere(&c2, 3);
	afisareCasa(c2);
	casa c3;
	modificaNrCamereRef(c3, 7);
	afisareCasa(c3);

	return 0;
}
