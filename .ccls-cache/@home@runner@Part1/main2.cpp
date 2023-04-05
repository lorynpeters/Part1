// Loryn Peters, COP2334, Replit
// This program takes input from the user for the value of the stopping point and outputs the first ordinals. 

#include <iostream>
#include <string>
using namespace std;

string ordinalNum(char num) { // declares the string in which the switch lies

  switch (num) {  // switch that allows the ordinals to appear before specific
    case 10:      // numbers.
    case 11: 
    case 12:
    case 13: 
    return "th";
    default: {
      switch (num % 10) { // modulu that assigns ordinal to the remainders
        case 1: 
        return "st";
        case 2:
        return "nd";
        case 3: 
        return "rd";
        default: 
          return "th";
      }
    }
  }
}
  
int main() {
  int input; 

  cout << "\nEnter a stopping point: ";
  cin >> input; // user input

  for (int i = 1; i <= input; ++i) // incriments numbers until stopping point
    cout << i << ordinalNum(i) << " Hello!" << endl; // adds "Hello"

  



  
  
  
  


}