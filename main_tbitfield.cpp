#include "tbitfield.h"
#include <cassert>
#include <iostream>

int main()
{
    TBitField bits(8);

    assert(bits.GetLength() == 8);
    assert(bits.GetBit(3) == 0);

    bits.SetBit(3);
    assert(bits.GetBit(3) != 0);

    bits.ClrBit(3);
    assert(bits.GetBit(3) == 0);

    std::cout << "Все проверки пройдены\n";
}