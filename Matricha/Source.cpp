#include "Header.h"
#include <iostream>
using namespace std;


int main()
{
	/*srand(unsigned(time(0)));
	Matricha<int>b;
	b.Init();
	b.Print();
	b += 5;

	cout << "\n" << endl;

	Matricha<int>a;
	a.Init();
	a.Print();
	a -= 5;

	cout << "\n" << endl;

	Matricha<int>c;
	c.Init();
	c.Print();
	c *= 5;

	cout << "\n" << endl;

	Matricha<int>e;
	e.Init();
	e.Print();
	e /= 5;

	Matricha<int>k;
	k.InitMatricha();
	k.Print();
	k.MinMax();*/

	Matricha<Point> obj(4, 5, Point(2, 3));
	obj.InitMatricha();
	obj += 5;
	cout << endl;
	obj -= 5;
	cout << endl;
	obj *= 5;
	cout << endl;
	obj /= 5;
	cout << endl;
	obj.Print();

	cout << endl;


}



