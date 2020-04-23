#include"pch.h"
#include"Cheltuieli.h"
#include"Repo.h"
#include<iostream>

#define assert 
using namespace std;

void test() {
	cout << "ok";
	Cheltuieli c0(25, 100, "gaz");
	Cheltuieli c1(25, 100, "gaz");
	Cheltuieli c2(12, 123, "lumina");
	Cheltuieli c3(26, 148, "gaz");
	Cheltuieli c4(29, 156, "apa");
	Cheltuieli c5(35, 278, "gaz");
	Cheltuieli c6(26, 299, "lumina");
	assert(c0.getNrApartament() == 25);
	assert(c4.getSuma() == 156);
	assert(c5.getTip() == "gaz");
	assert(c0 == c1);
	assert(c0 != c4);
	cout << "All tests are ok" << '\n';

}