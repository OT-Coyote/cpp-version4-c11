#include <iostream>
#include "Vector.h"
using namespace std;

Vector::Vector(int s)
    :elem{new double[s]}, sz{s}
{
}

double& Vector::operator[](int i)
{
    if (i<0 || size()<=i) throw out_of_range{"Vector::operator[]"};
    return elem[i];
}

int Vector::size()
{
    return sz;
}

void f(Vector& v)
{
    // ...
    try { // exceptions here are handled by the handler defined below

	   v[v.size()] = 7; // try to access beyond the end of v
    }
    catch (out_of_range) {  // oops: out_of_range error
          // ... handle range error ...
    }
}
