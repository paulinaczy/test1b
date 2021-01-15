#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta
using namespace std;

class Artysta {
public:
	Artysta():pseudonim("Anonim"), sluchacze(0){}
	Artysta(string x, unsigned y): pseudonim(x), sluchacze(y){}
	virtual void graj(ostream& stream) const {
		stream << pseudonim << ": " << sluchacze << endl;
	}
	const string getPseudonim() const {
		return pseudonim;
	}
	unsigned getSluchacze() const {
		return sluchacze;
	}
private:
	string pseudonim;
	unsigned sluchacze;
};
