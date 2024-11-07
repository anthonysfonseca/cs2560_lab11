#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box

// Anthony Fonseca

// Fill in code to declare a structure named dimensions that
// contains 2 float members, length and width
struct dimensions {
	float length;
	float width;
};

struct results {
	float area;
	float perimeter;
};

// Fill in code to declare a structure named rectangle that contains
// 3 members, area, perimeter, and sizes. area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable
struct rectangle {
	results output;
	dimensions sizes;
};

float findArea(float length, float width);
float findPerimeter(float length, float width);

int main()
{
	// Fill in code to define a rectangle structure variable named box.
	rectangle box;

	cout << "Enter the length of a rectangle: ";

	// Fill in code to read in the length to the appropriate location
	cin >> box.sizes.length;

	cout << "Enter the width of a rectangle: ";

	// Fill in code to read in the width to the appropriate location
	cin >> box.sizes.width;

	cout << endl << endl;

	/*
	// Fill in code to compute the area and store it in the appropriate
	// location
	box.output.area = box.sizes.length * box.sizes.width;

	// Fill in code to compute the perimeter and store it in the
	// appropriate location
	box.output.perimeter = 2 * box.sizes.length + 2 * box.sizes.width;
	*/

	cout << fixed << showpoint << setprecision(2);

	cout << "The area of the rectangle is " << findArea(box.sizes.length, box.sizes.width)
		<< endl;

	cout << "The perimeter of the rectangle is "
		<< findPerimeter(box.sizes.length, box.sizes.width) << endl;

	return 0;
}

float findArea(float length, float width) {
	return length * width;
}

float findPerimeter(float length, float width) {
	return 2 * length + 2 * width;
}