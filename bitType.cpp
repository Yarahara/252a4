/* 
Divine-Favour Gbagi
Due Date: 10/1/2021
CSIS 252
Assignment 4
*/  
#include <iostream>
#include "bitType.h"
#include <string>

using namespace std;

bitType::bitType(int bit) {
  theBit = bit;
};

bitType::bitType() {
    theBit = 0;
};

bitType::bitType(const bitType &b1) {
    theBit = b1.theBit;
};

void bitType::operator = (const bitType &b1) {
    theBit = b1.theBit;
};

int bitType::getBit() const{
    return theBit;
};
void bitType::setBit(int bit){
    theBit = bit;
};





bool bitType::operator < (const bitType& bit) const
{
   cout << "Testing the operator <\n";
   return getBit() < bit.getBit();
}

bool bitType::operator == (const bitType& bit) const
{
   cout << "Testing the operator ==\n";
   return getBit() == bit.getBit();
}

bool bitType::operator != (const bitType& bit) const
{
   cout << "Testing the operator !=\n";
   return getBit() != bit.getBit();
}

bool bitType::operator >= (const bitType& bit) const
{
   cout << "Testing the operator >=\n";
   return getBit() >= bit.getBit();
}

bool bitType::operator <= (const bitType& bit) const
{
   cout << "Testing the operator <=\n";
   return getBit() <= bit.getBit();
}

bool bitType::operator > (const bitType& bit) const
{
   cout << "Testing the operator >\n";
   return getBit() > bit.getBit();
}





ostream& operator << (ostream& o, const bitType& bit)
{
    string bName;
    if (bit.getBit() >1)
    {
        bName = bit.getPlural();
    }
    else 
    {
        bName = bit.getSingular();
    }
    o  << bit.getBit() << " " << bName;
    return o;
}

istream& operator >> (istream& input, bitType& bit)
{

    int bitNum;
    string bitName;
    input >> bitNum >> bitName;
    
    if (bitName == bit.getPlural() or bitName == bit.getSingular() or bitName == bit.getAbbrv())
    {
        bit.setBit(bitNum);
    }
    else {
        cout << "ERROR"  <<endl;
    }
    
    return input;
    
}




string bitType::getPlural() const
{
    return "bits";
}

string bitType::getSingular() const
{
    return "bit";
}

string bitType::getAbbrv() const
{
    return "b";
}


