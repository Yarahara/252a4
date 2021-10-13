//Divine-Favour Gbagi

#include <string>
#ifndef BITTYPE_H
#define BITTYPE_H

#include <string>

using namespace std;

class bitType {
  private:
    int theBit;
  public:

    bitType(int bit); //constructor that takes in a number
    bitType(); //default constructor
    //void print();
    bitType(const bitType &b1); //copy constructor
    void operator = (const bitType &b1); //overloaded assignment operator
    int getBit() const; //a way to get the value
    void setBit(int); //a way to set the value
    
    
    
    //name method
        //get plural
    string getPlural() const; 
        //get single
    string getSingular() const; 
        //get abbreviation 
    string getAbbrv() const; 


    
    bool operator < (const bitType&) const;
    bool operator == (const bitType&) const;
    bool operator != (const bitType&) const;
    bool operator <= (const bitType&) const;
    bool operator > (const bitType&) const;
    bool operator >= (const bitType&) const;

};
//overloaded input and output operator << and >>
ostream& operator << (ostream&, const bitType&);
istream& operator >> (istream&, bitType&);

#endif
