#include "vec2.hpp"
using namespace std;

//Konstruktor__________________________________________________________________
Vec2::Vec2( float x_, float y_ ) :
    x{x_},
    y{y_} {
}//Konstruktor

//Operatoren -> kein scope operator, weil ist ja nicht im Vec2 deklariert
//+= Operator____________________________________________________________
Vec2& Vec2::operator+=( Vec2 const& v ) {     //Referenz: Aliasname für die gleiche Variable, spart Speicher
                                              //Vec2& --> nicht Elementardatentyp
   x += v.x;
   y += v.y;
   return *this;
}//+= Operator

//-= Operator____________________________________________________________
Vec2& Vec2::operator-=( Vec2 const& v ) {

   x -= v.x;
   y -= v.y;
   return *this;
}//-= Operator

//*= Operator____________________________________________________________
Vec2& Vec2::operator*=( float s ) {

   x *= s;
   y *= s;
   return *this;
}//*= Operator

///= Operator____________________________________________________________
Vec2& Vec2::operator/=( float s ) {

   x /= s;
   y /= s;
   return *this;
}///= Operator
