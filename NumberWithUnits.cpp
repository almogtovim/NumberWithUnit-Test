//
// Created by tovim on 20/04/2021.
//

#include "NumberWithUnits.hpp"
using namespace ariel;


void ariel::NumberWithUnits::read_units(ifstream &unit_file){}
NumberWithUnits& ariel::NumberWithUnits::operator+(NumberWithUnits &x){return *this;}
NumberWithUnits& ariel::NumberWithUnits::operator+(){return *this;}
NumberWithUnits& ariel::NumberWithUnits::operator++(){return *this;}
NumberWithUnits& ariel::NumberWithUnits::operator++(int dummy){return *this;}
NumberWithUnits& ariel::NumberWithUnits::operator--(){return *this;}
NumberWithUnits& ariel::NumberWithUnits::operator--(int dummy){return *this;}
NumberWithUnits& ariel::NumberWithUnits::operator-(NumberWithUnits &x){return *this;}
NumberWithUnits& ariel::NumberWithUnits::operator-(){return *this;}
NumberWithUnits& ariel::NumberWithUnits::operator*(double x){return *this;}
NumberWithUnits& ariel::NumberWithUnits::operator-=(NumberWithUnits &x){return *this;}
NumberWithUnits& ariel::NumberWithUnits::operator+=(NumberWithUnits const &x){return *this;}
bool ariel::NumberWithUnits::operator>=(NumberWithUnits &x){return true;}
bool ariel::NumberWithUnits::operator<=(NumberWithUnits &x){return true;}
bool ariel::NumberWithUnits::operator!=(NumberWithUnits &x){return true;}
bool ariel::NumberWithUnits::operator>(NumberWithUnits &x){return true;}
bool ariel::NumberWithUnits::operator<(NumberWithUnits &x){return true;}
istream& ariel::operator>>(istream& ist, NumberWithUnits &x) { return ist; }
ostream& ariel::operator<<(ostream& os, NumberWithUnits const &x){ return os; }
NumberWithUnits& ariel::operator*(double k, NumberWithUnits &x){return x*k;}
bool ariel::operator== (const NumberWithUnits&, const NumberWithUnits&){return true;}



