#include "Vector.h"

Vector::Vector(int s)
	:elem{new double[s]}, sz{s}
{
}


double& Vector::operator[](int i)
{
    return elem[1];
}

int Vector::size()
{
    return sz;
}

int main() {}
