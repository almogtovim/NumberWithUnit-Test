//
// Created by tovim on 20/04/2021.
//

#ifndef DEMO_CPP_NUMBERWITHUNITS_HPP
#define DEMO_CPP_NUMBERWITHUNITS_HPP
#include <iostream>
using namespace std;
namespace ariel {
    class NumberWithUnits {
        double value;
        string unit;
    public:
        NumberWithUnits();
        NumberWithUnits(double x, string str): value(x), unit(str){};
        static void read_units(ifstream &unit_file);
        NumberWithUnits& operator+(NumberWithUnits &x);
        NumberWithUnits& operator+();
        NumberWithUnits& operator++();
        NumberWithUnits& operator++(int dummy);
        NumberWithUnits& operator--();
        NumberWithUnits& operator--(int dummy);
        NumberWithUnits& operator-(NumberWithUnits &x);
        NumberWithUnits& operator-();
        NumberWithUnits& operator*(double x);
        NumberWithUnits& operator-=(NumberWithUnits &x);
        NumberWithUnits& operator+= (NumberWithUnits const &x);
        bool operator>=(NumberWithUnits &x);
        bool operator<=(NumberWithUnits &x);
        bool operator!=(NumberWithUnits &x);
        bool operator>(NumberWithUnits &x);
        bool operator<(NumberWithUnits &x);
        friend istream& operator>>(istream& ist, NumberWithUnits  &x);
        friend ostream& operator<<(ostream& os, NumberWithUnits const &x);
        friend NumberWithUnits& operator*(double k, NumberWithUnits &x);
        friend bool operator== (const NumberWithUnits&, const NumberWithUnits&);

    };
}
#endif //DEMO_CPP_NUMBERWITHUNITS_HPP
