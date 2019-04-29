#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include <iostream>
#include <cmath>
using namespace std;


TEST_CASE( "DefaultConstruktorInitialisiert" ) {
    
    Vec2 objekt1{};

    REQUIRE( objekt1.x  == 0.0 );
    REQUIRE( objekt1.y  == 0.0 );
}

TEST_CASE( "Aggregatinitialisierung" ) {
    
    Vec2 objekt2{2.6f, 3.4f};

    REQUIRE( objekt2.x  == Approx(2.6f) ); //Approx: Funktion die rundet --> cmath-include
    REQUIRE( objekt2.y  == Approx(3.4f) );
}

TEST_CASE( "+= Operator" ) {
    
    Vec2 objekt3{1.0f, 2.0f};
    Vec2 objekt4{5.0f, -3.0f};

    objekt3 += objekt4;
	
    REQUIRE( objekt3.x  == Approx(6.0f) );
    REQUIRE( objekt3.y  == Approx(-1.0f) );
}

TEST_CASE( "-= Operator" ) {
    
    Vec2 objekt5{7.0f, 8.0f};
    Vec2 objekt6{3.0f, -1.0f};

    objekt5 -= objekt6;
	
    REQUIRE( objekt5.x  == Approx(4.0f) );
    REQUIRE( objekt5.y  == Approx(9.0f) );
}

TEST_CASE( "*= Operator" ) {
    
    Vec2 objekt7{2.0f, 3.0f};
    float s{4.0f};

    objekt7 *= s;
	
    REQUIRE( objekt7.x  == Approx(8.0f) );
    REQUIRE( objekt7.y  == Approx(12.0f) );
}

TEST_CASE( "/= Operator" ) {
    
    Vec2 objekt8{16.0f, -8.0f};
    float s{2.0f};

    objekt8 /= s;
	
    REQUIRE( objekt8.x  == Approx(8.0f) );
    REQUIRE( objekt8.y  == Approx(-4.0f) );
}

TEST_CASE( "+ Operator" ) {
    
    Vec2 objekt9{2.0f, -1.0f};
    Vec2 objekt10{7.0f, 3.0f};

    Vec2 objekt11 = objekt9 + objekt10;
	
    REQUIRE( objekt11.x  == Approx(9.0f) );
    REQUIRE( objekt11.y  == Approx(2.0f) );
}


int main(int argc, char *argv[])
{
    return Catch::Session().run(argc, argv);
}