#include <iostream>
using namespace std;

namespace My_code {
    class complex { /* ... */ };
    complex sqrt(complex);
    // ...
    int main();
}


int My_code::main()
{
    // complex z {1,2};
    complex z {2};
    auto z2 = sqrt(z);
    std::cout << '{' << z2.real() << ',' << z2.imag() << "}\n"
    // ...
};

int main()
{
    return My_code::main();
}
