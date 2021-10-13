/* 
Divine-Favour Gbagi
Due Date: 10/1/2021
CSIS 252
Assignment 4
*/   
#include <iostream>
#include <string>
#include "bitType.h"

using namespace std;

/* The test driver to create instances of bitType class and call methods 
 * on them to test the methods are working
 */



int main()
{
    bitType b1 = 4; // test constructor that takes in a number (your chooice of int, float, double, and so on) and sets the initial value to that
    bitType b2; //default constructor
    bitType b3 = b1; //copy constructor test
    bitType b4; //default constructor test
    bitType b5(10); //test of constructor that takes in a number (your chooice of int, float, double, and so on) and sets the initial value to that
    bitType b6;
    bitType b7(70);
    bitType b8(80);
    

    cout << "- - Test for default constructor" << endl;
    cout << "b2: " << b2.getBit() << endl;
    
    cout << "- - Test for constructor that takes in a number & sets to that" << endl;
    cout << "b5: " << b5.getBit() << endl;
    
    cout << "- - Test for copy constructor" << endl;
    cout << "b3: " << b3.getBit() << endl;
    
    cout << "- - Test for overloaded assignment constructor" << endl;
    b7 = b8; //overloaded assignment operator test
    cout << "b7: " << b7.getBit() << endl;

    cout << "- - Test for setting and getting the value" << endl;
    b6.setBit(6);
    cout << "b6: " << b6.getBit() << endl;
    
    cout << "- - Test for comparisons between different instances of class" << endl;
    if (b1 == b3) 
        cout << "b1 and b3 are equivalent" << endl;
    else
        cout << "They are not equivalent" << endl; 
    if (b1 > b2) 
        cout << "b1 is greater than b2" << endl;
    if (b1 < b5)
        cout << "b1 is less than b5" << endl;
    if (b1 != b5)
        cout << "b1 and b5 are not equivalent" << endl;
  
    cout << "- - Test for input and output for unit" << endl;
    cout << "1st) Bit num  " << endl;
    cout << "2nd) Bit unit: " << endl;
    cin >> b6;
    cout << b6;
    
    cout << "\n- - Test getting the name of the unit" << endl;
    cout << b6.getSingular() << endl;
    cout << b6.getAbbrv() << endl;
    cout << b6.getPlural() << endl;
    

    
    return 0;
}
