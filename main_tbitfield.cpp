#include "tbitfield.h"
#include <iostream>

int main()
{
    TBitField field_1(64);
    TBitField field_2(32);

    field_1.SetBit(1);
    field_2.SetBit(1);

    cout << field_1 << '\n';
    cout << field_2 << '\n';
    
    cout << field_1.GetBit(2) << '\n';
}
