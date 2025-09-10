// Assignment 1 - Fuel Range
// TODO: YOUR NAME HERE
#include <iostream>
// TODO: Add the "using" statement
using namespace std;
int main() {
  // TODO: Declare your variables, with comments for each
  // capacity of the fuel tank in gallons
  double capacity;
  //miles per gallon
  double mpg;
  //percentage filled
  int percentFull;


  // TODO: Prompt for and input the required values
  cout << "Please input the capacity of your fuel tank: ";
  cin >> capacity;
  cout << "Please input the mpg of your car: ";
  cin >> mpg;
  cout << "Please enter percent full: ";
  cin >> percentFull;
  // TODO: Calculate the results

  double remainingFuel = (percentFull*capacity)/100;
  double milesLeft = remainingFuel*mpg;
  
  // TODO: Output the results
  cout <<" The vehicle can be driven " << milesLeft << " on the remaining fuel. " << endl;
}
