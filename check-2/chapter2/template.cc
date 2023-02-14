#include <iostream>
using namespace std;

double square(double x)
{
    return x*x;
}

void print_square(double x)
{
    cout << "the square of " << x << square(x) << "\n";
}

void copy_fct()
{
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];

    for (auto i=0; i!=10: ++i)
	    v2[i]=v1[i];
}

void print()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for (auto x : v)
	    cout << x << "\n";

    for (auto x : {10,21,32,43,54,65})
}

void increment()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for (auto& x : v)
	    ++x;
}


int count_x(char* p, char x)
	// count the number of occurrences of x in P[]
	// p is assumed to point to a zero-terminated array of cahr (or to nothing)
{
    if (p==nullptr) return 0;
    int count = 0;
    for (; *p!=0; ++p)
	    if (*p==x)
		    ++count;
    return count;
}



int main()
{
   print_square(1.234);

   print();
}
