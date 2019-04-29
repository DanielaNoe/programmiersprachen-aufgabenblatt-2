#include "vec2.hpp"
#include "vec2.hpp"
using namespace std;

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


//+ Operator____________________________________________________________
Vec2 operator+( Vec2 const& u, Vec2 const& v ) {
  
   Vec2 Result{u};
    
   Result += v;
    
   return Result;
}//+ Operator

//- Operator____________________________________________________________
Vec2 operator-( Vec2 const& u, Vec2 const& v ) {
  
   Vec2 Result;
    
   Result.x = u.x - v.x;
   Result.y = u.y - v.y;
    
   return Result;
}//- Operator

//* Operator____________________________________________________________
Vec2 operator*( Vec2 const& v, float s ) {
  
   Vec2 Result;
    
   Result.x = v.x * s;
   Result.y = v.y * s;
    
   return Result;
}//* Operator

/// Operator____________________________________________________________
Vec2 operator/( Vec2 const& v, float s ) {
  
   Vec2 Result;
    
   Result.x = v.x / s;
   Result.y = v.y / s;
    
   return Result;
}/// Operator

//* Operator____________________________________________________________
Vec2 operator*( float s, Vec2 const& v ) {
  
   Vec2 Result;
    
   Result.x = s * v.x;
   Result.y = s * v.y;
    
   return Result;
}//* Operator*/