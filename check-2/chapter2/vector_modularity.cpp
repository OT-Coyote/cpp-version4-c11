#include <iostream>
using namespace std;

double sqrt(double);

class Vector {
public:
	Vector(int s);
	double& operator[](int i);
	int size();
private:
	double* elem;  // elem points to an array of sz doubles
	int sz;
};

double sqrt(double d)  // definition of sqrt()
{
    cout << "...algorithm as found in math textbook...";
    return d;
}

Vector::Vector(int s)        // definition of the constructor
{
        if (s<0) throw length_error{};
	elem = new double[s];
        sz = s;
}

double& Vector::operator[](int i)
{
    if (i<0 || size()<=i) throw out_of_range{"Vector::operator[]"};
    return elem[i];
}

void f(Vector& v)
{
    // ...
    try { // exceptions here are handled by the handler defined below

	    v[v.size()] = 7; // try to access beyond the end of v
    }
    catch(out_of_range) {  // oops:  out_of_range error
	    // ... handle range error ...
    }
    // ...
}

int Vector::size()
{
    return sz;
}
int main() {}
