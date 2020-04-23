#include "pch.h"
#include"Cheltuieli.h"
#include"teste.h"
#include"Repo.h"
#include<string>
#include <iostream>
#include<vector>
using namespace std;

int main() {
	cout << "ok";
	test();
	int nrAp;
	int p;
	Cheltuieli c1(25, 100, "gaz");
	Cheltuieli c2(12, 123, "lumina");
	Cheltuieli c3(26, 148, "gaz");
	Cheltuieli c4(29, 156, "apa");
	Cheltuieli c5(35, 278, "gaz");
	Cheltuieli c6(26, 299, "lumina");
	Repo r1;

	r1.addElem(c1);
	r1.addElem(c2);
	r1.addElem(c3);
	r1.addElem(c4);
	r1.addElem(c5);
	r1.addElem(c6);

	do {
		cout << "Pt a opri aplicatia apasa 0" << endl;
		cout << "Pentru a adauga o cheltuiala apasa 1" << endl;
		cout << "Pentru a elimina toate cheltuielile unui apartament apasa 2" << endl;
		cout << "Pt a elimina toate cheltuielile apartamentelor apasa 3" << endl;
		cout << "Pt a elimina toate cheltuielile de un anumit tip apasa 4" << endl;
		cout << "Pt a inlocui suma unei cheltuieli apasa 5" << endl;
		cout << "Pt a afisa toate cheltuielile din lista apasa 6" << endl;
		cout << "Pt a afisa toate cheltuielile unui apartament apasa 7" << endl;
		cout << "Pt a afisa toate cheltuielile mai mari decat o suma data apasa 8" << endl;
		cout << "Pt a afisa toate cheltuielile in valoare de o anumita suma apasa 9" << endl;
		cout << "Pt a afisa suma totala a cheltuielilor de un anumit tip apasa 10" << endl;
		cout << "Pt a afisa cea mai mare valoare a cheltuielilor unui apartament apasa 11" << endl;
		cout << "Pt a sorta descrescator cheltuielile cu un anumit tip apasa 12" << endl;
		cout << "Pt a pastra doar cheltuielile de un anumit tip apasa 13" << endl;
		cout << "Pt a pastra doar cheltuielile cu o valoare mai mica decat un nr dat apasa 14" << endl;
		cin >> p;
		if (p == 1) {
			std::string tip;
			int plata;
			cout << "numar apartament="; cin >> nrAp;
			cout << "plata="; cin >> plata;
			cout << "tip="; cin >> tip;
			Cheltuieli c(nrAp,plata, tip);
			r1.addElem(c);
			std::vector<Cheltuieli> v = r1.getV();
			for (int i = 0; i < v.size(); i++)
				cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';
			
		}
		if (p == 2) {
			cout << "nrAp=";
			cin >> nrAp;
			r1.deleteElem(nrAp);
			std::vector<Cheltuieli> v = r1.getV();
			for (int i = 0; i < v.size(); i++)
				cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';
		}
		if (p == 3) {
			int nrAp1, nrAp2;
			cout << "nrAp1="; cin >> nrAp1;
			cout << "nrAp2="; cin >> nrAp2;
			r1.deleteElem2(nrAp1, nrAp2);
			std::vector<Cheltuieli> v = r1.getV();
			for (int i = 0; i < v.size(); i++)
				cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';
		}
		if (p == 4) {
			std::string tip;
			cout << "tip="; cin >> tip;
			r1.deleteByTip(tip);
			std::vector<Cheltuieli> v = r1.getV();
			for (int i = 0; i < v.size(); i++)
				cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';
		}

		if (p == 5) {
			int nrAp, plata;
			cout << "nrAp="; cin >> nrAp;
			cout << "Plata="; cin >> plata;
			r1.UpdateCheltuieli(nrAp, plata);
			std::vector<Cheltuieli> v = r1.getV();
			for (int i = 0; i < v.size(); i++)
				cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';

		}
		if (p == 6) {
			std::vector<Cheltuieli> v = r1.getV();
			for (int i = 0; i < v.size(); i++)
				cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';

		}
		if (p == 7) {
			cout << "nrAp=";
			cin >> nrAp;
			r1.Show(nrAp);

		}
		if (p == 8){
			int plata2;
			cout << "plata="; cin >> plata2;
			r1.Show2(plata2);


			}
		if (p == 9) {
				int plata;
					cout << "plata="; cin >> plata;
					r1.Show3(plata);
			}
		if (p == 10) {
			int s;
			std::string tip;
			cout << "tipul este"; cin >> tip;
			s = r1.SumCheltuieli(tip);
			cout << s;

		}
		if (p == 11) {
			int max;
			cout << "nrAp=";
			cin >> nrAp;
			max = r1.MaxCheltuiala(nrAp);
			cout << max;

		}
		if (p == 12) {
			std::string tip;
			cout << "tip="; cin >> tip;
			r1.OrderByType(tip);

		}
		if (p == 13) {
			std::string tip;
			cout << "tipul este:"; cin >> tip;
			r1.deleteByTip2(tip);
			std::vector<Cheltuieli> v = r1.getV();
			for (int i = 0; i < v.size(); i++)
				cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';

		}
		if (p == 14) {
			int suma;
			cout << "suma ="; cin >> suma;
			r1.deleteBySum(suma);
			std::vector<Cheltuieli> v = r1.getV();
			for (int i = 0; i < v.size(); i++)
				cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';

		}

	}//do
	while (p != 0);
}