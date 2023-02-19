#include "Vector.h"
#include <iostream>


void fct(int n)
{
   Vector v(n);
   
   // ... use v ..

   {
       Vector v2(2*n);
   } 
}

int main() {}
