#include <iostream>
#include <cmath>

using namespace std;

// Triangle class
class Triangle {
public:
  // Private member variables
  double a, b, c; // sides of the triangle

public:
  // Member functions
  void input(); // function for taking input from the user
  double area(); // function for calculating the area of the triangle
  double perimeter(); // function for calculating the perimeter of the triangle
  void print(); // function for printing the data
};

// Function for taking input from the user
void Triangle::input() {
  cout << "Enter the sides of the triangle: ";
  cin >> a >> b >> c;
}

// Function for calculating the area of the triangle
double Triangle::area() {
  double s = (a + b + c) / 2; // semi-perimeter of the triangle
  return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
}

// Function for calculating the perimeter of the triangle
double Triangle::perimeter() {
  return a + b + c;
}

// Function for printing the data
void Triangle::print() {
  cout << "The sides of the triangle are: " << a << ", " << b << ", " << c << endl;
  cout << "The area of the triangle is: " << area() << endl;
  cout << "The perimeter of the triangle is: " << perimeter() << endl;
}

// Main function
int main() {
  Triangle t; // create an object of the Triangle class
  t.input(); // take input from the user
  t.print(); // print the data
  return 0;
}
