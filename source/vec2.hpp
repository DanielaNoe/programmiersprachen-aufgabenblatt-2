#ifndef VEC2_HPP
#define VEC2_HPP
//Include Guards: Schutz gegen Mehrfacheinbindung 
//ohne Include Guards beim Versuch die HPP 2 mal einzubinden: Error: redefinition of ‘struct Vec2’

// Vec2 data type definition
struct Vec2
{
    float x = 0.0f;    //default parameter
    float y = 0.0f;


    Vec2& operator+=( Vec2 const& v);
    Vec2& operator-=( Vec2 const& v);
    Vec2& operator*=( float s );
    Vec2& operator/=( float s );

};
    //freie Funktionen

    Vec2 operator+( Vec2 const& u, Vec2 const& v);
    Vec2 operator-( Vec2 const& u, Vec2 const& v);
    Vec2 operator*( Vec2 const& v, float s);
    Vec2 operator/( Vec2 const& v, float s);
    Vec2 operator*( float s, Vec2 const& v);

# endif // VEC2_HPP