

class Vector {
private:
	double* elem;  // elem points to an array of sz doubles
        int sz;
public:
	Vector(int s) :elem{new doubles[s]}, sz{s}    // constructor: acquire resources
	{
            for (int i=0; i!=s; ++i) elem[i];         // initializs elements
	}

	~Vector() { delete[] elem; }                  // destructor:  release resources
						      //
	double& operator[](int i);
	int size() const;
};

