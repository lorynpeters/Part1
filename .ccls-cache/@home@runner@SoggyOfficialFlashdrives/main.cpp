// Loryn Peters, COP2334, Replit 
//The program uses the while function to loop some equations using a number inputted by the user.


// when input was 0, the output when divided by itself was nan(not a number).
// when input was j, the program began to loop itself forever. 

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double num; // double for potential decimals 
  int counter = 0; 
  
  cout << "Please enter any (n) number (-1 will end the program): ";
  cin >> num; // integer entered by user
  
  while (num != -1) {  // Loop is executed until input is equal to -1
    
    double numMul = (num * num); // number multiplied by itself
    cout << "The number times itself: " << numMul << endl; // number divided by itself

    double numDiv = (num / num);
    cout << "The number divided by itself: " << numDiv << endl;

    double out1 = ((num + 3) / 5);
    cout << "(n + 3) / 5 = " << out1 << endl;

    double out2 = ((num + 3) / 5 + (num + 7) / 2);
    cout << "[(n + 3) / 5) + (n + 7) / 2] = " << out2 << endl;

    cout << "\nPlease enter any (n) number (-1 will end the program): ";
    cin >> num;

    counter += 1; // counts the number of inputs (counter + 1 = 1)

    }

    cout << "\nThe program ran " << counter << " times."; // outputs the amount of times the program ran
  
}