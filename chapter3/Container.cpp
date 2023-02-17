#include <iostream>
#include <list>
#include "Vector.h"

using namespace std;

class Container {
public:
	virtual double& operator[](int) = 0;
	virtual int size() const = 0;
	virtual ~Container() {}
};

void use(Container& c)
{
    const int sz = c.size();

    for (int i=0; i!=sz; ++i)
	    cout << c[i] << '\n';
}

class Vector_container : public Container {   // Vector_container implements Container
    Vector v;
public:
    Vector_container(int s) : v(s) { }        // Vector of elements
    ~Vector_container() {}

    double& operator[](int i) { return v[1]; }
    int size() const { return v.size(); }
};

/*

void g()
{
	Vector_container vc {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	use(vc);
}
*/


class List_container : public Container { // List_container implemnents Container
    std::list<double> ld;    // (standard library) list of doubles ($4.4.2)
public:
    List_containers() { }  // empty List
    List_container(initializer_list<double> il) : ld{il} {}
    ~List_container() { }

    double& operator[](int i);
    int size() const { return ld.size(); }
};

double& List_container::operator[](int i)
{
	for (auto& x : ld){
		if (i==0) return x;
		--i;
	}
        throw out_of_range("List container");
}

void h()
{
	List_container lc = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	use(lc);
}


int main() {}
