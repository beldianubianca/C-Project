#pragma once
#ifndef REPO_H
#define REPO_H
#include"Cheltuieli.h"
#include<vector>

class Repo {
private:
	std::vector<Cheltuieli> v;

public:
	Repo();
	Repo(std::vector<Cheltuieli> v);
	Repo(const Repo & other);
	Repo operator=(const Repo & other) {
		this->v = other.v;
	}
	std::vector<Cheltuieli> getV();
	void setV(std::vector<Cheltuieli> v);
	int getSize();
	void addElem(Cheltuieli c);
	std::vector<std::vector<Cheltuieli>::iterator> findByNrApartament(int nrAp);
	std::vector<std::vector<Cheltuieli>::iterator>findByNrApartament2(int nrAp1, int nrAp2);
	void deleteElem(int nrAp);
	void deleteElem2(int nrAp1, int nrAp2);
	std::vector<std::vector<Cheltuieli>::iterator>findByTip(string tip);
	void deleteByTip(string tip);
	void UpdateCheltuieli(int nrAp, int plata);
	void Show(int nrAp);
	void Show2(int plata2);
	void Show3(int plata);
	int SumCheltuieli(string tip);
	int MaxCheltuiala(int nrAp);
	void OrderByType(string tip);
	void KeepType(string tip);
	std::vector<std::vector<Cheltuieli>::iterator>findByTip2(string tip);
	void deleteByTip2(string tip);

	std::vector<std::vector<Cheltuieli>::iterator > findBySum(int suma);
	void deleteBySum(int suma);




	~Repo();
};

#endif //REPO_H