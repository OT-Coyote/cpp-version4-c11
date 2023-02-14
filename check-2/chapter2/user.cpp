#include "Vector.h"
#include <cmath>
using namespace std;

double sqrt_sum(Vector& v)
{
    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
	    sum+=sqrt(v[i]);
    return sum;
}

void test()
{
    try {
        Vector v(-27);
    }
    catch (std::length_error) {
        // handle negative size
    }
    catch (std::bad_alloc) {
        // handle memory exaustion
    }
}


int main() {}
