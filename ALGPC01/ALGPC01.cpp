// ALGPC01.cpp : This file contains the 'main' function. Program execution begins and ends there. This is a change
//

#include "pch.h"
#include <iostream>
#include "comlexnum.h"

using namespace std;

int main()
{
    cout << "Welcome to the Comlex Number Calculator!\n"; 

	comlexnum c1;
	//comlexnum c2;
	c1.setX(12);
	c1.setY(21);
	//c2.setX(12);
	//c2.setY(21);

	// printf("%d",c1.getX);
	cout << "Complex: " << c1.getX() << ";" << c1.getY() << endl;


	// allocate memory on heap
	//comlexnum c2 = new comlexnum(12, 2);
	//c2->getX(3);

	//delete c2; this is a change 
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
