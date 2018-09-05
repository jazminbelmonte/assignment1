#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "range.h"
using namespace std;

TEST_CASE("Integer ascending range; defaut step") {
    Range<int> r(3, 11);
    vector<int> values = {3, 4, 5, 6, 7, 8, 9, 10, 11};
    
    REQUIRE( r.sum() == 63 );
    REQUIRE( r.length() == 9 );
    REQUIRE( r.average() == 63 / 9 );
    REQUIRE( r.max() == 11 );
    REQUIRE( r.min() == 3 );
    REQUIRE( values == r.values() );
}

TEST_CASE("Integer ascending range; step = 2") {
    Range<int> r(3, 12, 2);
    vector<int> values = {3, 5, 7, 9, 11};
    
    REQUIRE( r.sum() == 35 );
    REQUIRE( r.length() == 5 );
    REQUIRE( r.average() == 35 / 5 );
    REQUIRE( r.max() == 11 );
    REQUIRE( r.min() == 3 );
    REQUIRE( values == r.values() );
}

TEST_CASE("Double ascending range; step = 2.5") {
    Range<double> r(7.5, 20.3, 2.5);
    vector<double> values = {7.5, 10.0, 12.5, 15.0, 17.5, 20.0 };
    
    REQUIRE( r.sum() == 82.5 );
    REQUIRE( r.length() == 6 );
    REQUIRE( r.average() == 82.5 / 6 );
    REQUIRE( r.max() == 20.0 );
    REQUIRE( r.min() == 7.5 );
    REQUIRE( values == r.values() );
}

TEST_CASE("Integer descending range; step = -2") {
    Range<int> r(12, 3, -2);
    vector<int> values = {12, 10, 8, 6, 4};
    
    REQUIRE( r.sum() == 40 );
    REQUIRE( r.length() == 5 );
    REQUIRE( r.average() == 40 / 5 );
    REQUIRE( r.max() == 12 );
    REQUIRE( r.min() == 4 );
    REQUIRE( values == r.values() );
}

TEST_CASE("Double descending range; step = -2.5") {
    Range<double> r(20.0, 4.0, -2.5);
    vector<double> values = {20.0, 17.5, 15.0, 12.5, 10.0, 7.5, 5.0};
    
    REQUIRE( r.sum() == 87.5 );
    REQUIRE( r.length() == 7 );
    REQUIRE( r.average() == 87.5 / 7 );
    REQUIRE( r.max() == 20.0 );
    REQUIRE( r.min() == 5.0 );
    REQUIRE( values == r.values() );
}