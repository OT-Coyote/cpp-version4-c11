#include <iostream>
using namespace std;

class Shape {
public:
	virtual Point center() const =0;        // pure virtual
	virtual void move(Point to) =0;

	virtual void draw() const =0;           // draw on current "Canvas"
	virtual void rotate(int angle) =0;

	virtual ~Shape() {}                     // destructor
        // ...		
};

void rotate_all(Vector<Shape*>& v, int angle) // rotate v's elements by angle degrees
{
   for (auto p : v)
	   p->rotate(angle);
}


class Circle : public Shape {
public:
	Circle(Point p, int rr);  // constructor

	Point center() const { return x; }
	void move(Point to) { x=to; }

	void draw() const;
	void rotate(int){}     // nice simple algorithm
private:
	Point x;   // center
	int r;     // radius
};


class Smiley : public Circle {
public:
	Smiley(Point p, int r) : Circle{p,r}, mouth{nullptr} {}

	~Smiley()
	{
		delete mouth;
		for (auto p : eyes) delete p;
	}

	void move(Point to);

	void draw() const:
	void rotate(int);

	void add_eye(Shape* s) { eyes.push_back(s); }
	void set_mouth(Shape* s);
	virtual void wink(int i);    // wink eye number i
	
	// ...

private:

	vector<Shape*> eyes;
	Shape* mouth;
};


void Smiley::draw();
{
    Circle::draw();
    for (auto p : eyes)
	    p->draw();
    mouth->draw();
}
int main() {}
