#include "pch.h"
#include "Repo.h"
#include<string>

Repo::Repo() {
	std::vector<Cheltuieli> v;
	this->v = v;

}
Repo::Repo(std::vector<Cheltuieli> v) {
	this->v = v;
}
std::vector<Cheltuieli> Repo::getV() {
	return this->v;
}

void Repo::setV(std::vector<Cheltuieli> v) {
	this->v = v;
}
int Repo::getSize() {
	return this->v.size();
}
void Repo::addElem(Cheltuieli c) {
	this->v.push_back(c);

}
std::vector<std::vector<Cheltuieli>::iterator > Repo::findByNrApartament(int nrAp) {
	std::vector<std::vector<Cheltuieli>::iterator > iteratorsCheltuieli;
	for (std::vector<Cheltuieli>::iterator it = v.begin(); it != v.end(); it++) {
		if (it->getNrApartament() == nrAp)
			iteratorsCheltuieli.push_back(it); //it-adresa la o chletuiala
	}
	return iteratorsCheltuieli;
}

void Repo::deleteElem(int nrAp) {
	std::vector<std::vector<Cheltuieli>::iterator> iteratorsCheltuieli = this->findByNrApartament(nrAp);

	for (int i = iteratorsCheltuieli.size() - 1; i >= 0; i--) {
		this->v.erase(iteratorsCheltuieli[i]);
	}
}


std::vector<std::vector<Cheltuieli>::iterator > Repo::findByNrApartament2(int nrAp1, int nrAp2) {
	std::vector<std::vector<Cheltuieli>::iterator > iteratorsCheltuieli;
	for (std::vector<Cheltuieli>::iterator it = v.begin(); it != v.end(); it++) {
		if (it->getNrApartament() >= nrAp1 && it->getNrApartament() <= nrAp2)
			iteratorsCheltuieli.push_back(it); //it-adresa la o chletuiala
	}
	return iteratorsCheltuieli;
}


void Repo::deleteElem2(int nrAp1, int nrAp2) {
	std::vector<std::vector<Cheltuieli>::iterator> iteratorsCheltuieli1 = this->findByNrApartament2(nrAp1, nrAp2);

	for (int i = iteratorsCheltuieli1.size() - 1; i >= 0; i--) {
		this->v.erase(iteratorsCheltuieli1[i]);
	}

}

std::vector<std::vector<Cheltuieli>::iterator > Repo::findByTip(string tip) {
	std::vector<std::vector<Cheltuieli>::iterator > iteratorsCheltuieli;
	for (std::vector<Cheltuieli>::iterator it = v.begin(); it != v.end(); it++) {
		if (it->getTip() == tip)
			iteratorsCheltuieli.push_back(it); //it-adresa la o chletuiala
	}
	return iteratorsCheltuieli;
}

void Repo::deleteByTip(string tip) {
	std::vector<std::vector<Cheltuieli>::iterator> iteratorsCheltuieli = this->findByTip(tip);

	for (int i = iteratorsCheltuieli.size() - 1; i >= 0; i--) {
		this->v.erase(iteratorsCheltuieli[i]);
	}
}


void Repo::UpdateCheltuieli(int nrAp, int plata) {
	std::vector<std::vector<Cheltuieli>::iterator> iteratorsCheltuieli = this->findByNrApartament(nrAp);

	for (int i = iteratorsCheltuieli.size() - 1; i >= 0; i--) {
		iteratorsCheltuieli[i]->setSuma(plata);

	}
}

void Repo::Show(int nrAp) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getNrApartament() == nrAp)
			cout << v[i].getSuma() << " " << v[i].getTip() << '\n';
	}

}

void Repo::Show2(int plata2) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getSuma() > plata2)
			cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';
	}

}

void Repo::Show3(int plata) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getSuma() == plata)
			cout << v[i].getNrApartament() << " " << v[i].getSuma() << " " << v[i].getTip() << '\n';
	}

}
int Repo::SumCheltuieli(string tip) {
	int s = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getTip() == tip)
			s = s + v[i].getSuma();

	}
	return s;

}

int Repo::MaxCheltuiala(int nrAp) {
	int max = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getNrApartament() == nrAp && v[i].getSuma() > max)
			max = v[i].getSuma();
	}
	return max;
}

void Repo::OrderByType(string tip) {
	int ok;
	Cheltuieli aux;
	std::vector<Cheltuieli> m;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getTip() == tip)
			m.push_back(v[i]);
	}

	do {
		ok = 1;
		for (int i = 0; i < m.size(); i++)
			if (m[i].getSuma() > m[i + 1].getSuma()) {
				ok = 0;
				aux = m[i];
				m[i] = m[i + 1];
				m[i + 1] = aux;
			}
	} while (ok == 0);

	for (int i = 0; i < m.size(); i++)
		cout << m[i].getNrApartament() << " " << m[i].getSuma() << " " << m[i].getTip() << '\n';

}

std::vector<std::vector<Cheltuieli>::iterator > Repo::findByTip2(string tip) {
	std::vector<std::vector<Cheltuieli>::iterator > iteratorsCheltuieli;
	for (std::vector<Cheltuieli>::iterator it = v.begin(); it != v.end(); it++) {
		if (it->getTip() != tip)
			iteratorsCheltuieli.push_back(it); //it-adresa la o chletuiala
	}
	return iteratorsCheltuieli;
}

void Repo::deleteByTip2(string tip) {
	std::vector<std::vector<Cheltuieli>::iterator> iteratorsCheltuieli = this->findByTip2(tip);

	for (int i = iteratorsCheltuieli.size() - 1; i >= 0; i--) {
		this->v.erase(iteratorsCheltuieli[i]);
	}
}

std::vector<std::vector<Cheltuieli>::iterator > Repo::findBySum(int suma) {
	std::vector<std::vector<Cheltuieli>::iterator > iteratorsCheltuieli;
	for (std::vector<Cheltuieli>::iterator it = v.begin(); it != v.end(); it++) {
		if (it->getSuma() > suma)
			iteratorsCheltuieli.push_back(it); //it-adresa la o chletuiala
	}
	return iteratorsCheltuieli;
}

void Repo::deleteBySum(int suma) {
	std::vector<std::vector<Cheltuieli>::iterator> iteratorsCheltuieli = this->findBySum(suma);

	for (int i = iteratorsCheltuieli.size() - 1; i >= 0; i--) {
		this->v.erase(iteratorsCheltuieli[i]);
	}
}

Repo::~Repo()
{
}