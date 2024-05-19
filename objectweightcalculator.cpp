// Object Weight Calculator
// By Marcos A. Mendoza Jr.
// 5/19/2024

#include <iostream> // for cout
#include <stdlib.h> // for sleep function
#include <stdio.h> // for input, output
#include <unistd.h> // for sleep function just in case

float x;
float y;
float m;
float w;

int main()
{
 std::cout << "Welcome to Object Weight Calculator. Please input the object's volume \n"; // Welcome text and introduction
  std::cin >> x; // Grab's the user's object volume
  std::cout << "Input the object's density in g/cm^3\n"; // Asks user for the object's density
  std::cin >> y; // Grabs the user's object density
 m = x * y;
  std::cout << "Object's mass is " << m; // Prints out the object's mass
 w = m / 9.8;
  std::cout << "\nThe object's weight is " << w; // Let's the user know the object's weight
}