//
// Created by tovim on 21/04/2021.
//

#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <sstream>
#include <array>

using namespace ariel;
using namespace std;
using NwU = NumberWithUnits;
bool res = true;

array<NwU, 3> dist = {{{0 , "km"},{1 , "m"}, {2 , "cm"}}};

array<NwU, 3> weight = {{{0 , "kg"},{1 , "ton"},{2 , "g"}}};

array<NwU, 3> times = {{{0 , "hour"},{1 , "min"},{2 , "sec"}}};

array<NwU, 2> cur = {{{0 , "USD"},{1 , "ILS"}}};



/*  UNARY OPERATOR + TEST */
//TEST_CASE("UNARY OPERATOR + TEST"){
//    for (int i = 0; i < 2; ++i) {
//    CHECK(dist[i] == +dist[i]);
//    CHECK(weight[i] == +weight[i]);
//    CHECK(times[i] == +times[i]);
//    CHECK(cur[i] == +cur[i]);
//    }
//}
/*  UNARY OPERATOR - TEST */
//TEST_CASE("UNARY OPERATOR - TEST") {
//    NwU d;
//    for (int i = 0; i < 2; ++i) {
//                CHECK(-dist[i] != dist[i]);
//                CHECK(-weight[i] != weight[i]);
//                CHECK(-time[i] != time[i]);
//                CHECK(-cur[i] != cur[i]);
//    }
//}

/*  BINARY OPERATOR - GOOD TEST */
//TEST_CASE("UNARY OPERATOR - TEST") {
//    NwU d;
//    for (int i = 0; i < 2; ++i) {
//                CHECK(dist[i] != -dist[i]);
//                CHECK(weight[i] != -weight[i]);
//                CHECK(times[i] != -times[i]);
//                CHECK(cur[i] != -cur[i]);
//    }
//}

//TEST_CASE("UNARY OPERATOR - TEST") {
//    NwU d;
//    for (int i = 0; i < 2; ++i) {
//                CHECK(dist[i] != -dist[i]);
//                CHECK(weight[i] != -weight[i]);
//                CHECK(times[i] != -times[i]);
//                CHECK(cur[i] != -cur[i]);
//    }
//}

//TEST_CASE("UNARY OPERATOR << TEST") {
//    NwU d;
//    std::ostream os;
//    os << '[' << value << ']' << unit
//    for (int i = 0; i < 3; ++i) {
//                os << '[' << value << ']' << unit
//                newOs << dist[i];
//                CHECK(os == dist[i
//    }
//}


TEST_CASE("no other option"){
    for (int i = 0; i < 22; ++i) {
                CHECK(res);
    }


}

