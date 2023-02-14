#include <iostream>
using namespace std;

class Vector {
public:
	Vector(int s) :elem{new double[s]}, sz{s} {}   // construct a Vector
	double& operator[](int i) { return elem[i]; }  // element access: subscripting
	int size() { return sz; }
private:
	double* elem;  // pointer to the elements
	int sz;        // the number of elements
};


double read_and_sum(int s)
{
   Vector v(s);               // make a vector of s elements
   for (int i=0; i!=v.size(); ++i)
	   cin>>v[i];        // read into elements

   double sum = 0;
   for (int i=0; i!=v.size(); ++i)
	   sum+=v[i];    // take the sum of the elements
   return sum;
}

enum class Color{ red, blue, green};
enum class Traffic_light{green, yellow, red};

Traffic_light& operator++(Traffic_light& t)
	// prefix increment ++
{
    switch (t) {
	    case Traffic_light::green:    return t=Traffic_light::yellow;
            case Traffic_light::yellow:   return t=Traffic_light::red;
	    case Traffic_light::red:      return t=Traffic_light::green;
    }
}



int main() {
Vector v(6);    // a Vector with 6 elements

Color col = Color::red;
Traffic_light light = Traffic_light::red;

Traffic_light next = ++light;  // next becomes Traffic_light::green
}
