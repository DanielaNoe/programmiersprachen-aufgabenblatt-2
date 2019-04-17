# ifndef VEC2_HPP
# define VEC2_HPP
// Vec2 data type definition
struct Vec2
{
    Vec2 a ; // requires that 0.0 f == a . x and 0.0 f == a . y
    Vec2 b {5.1 f , -9.3 f }; /* requires that 5.1 f == approx ( a . y ) and -9.3 f == approx ( b . y ) */
};
# endif // VEC2_HPP