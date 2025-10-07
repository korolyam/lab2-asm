#include <iostream>
int main()
{
    int z, b;
    std::cout << "Vvedite argument radian z\n";
    std::cin >> z;
    __asm
    {
        fld1
        fadd st(0), st(0)
        fld z
        fdiv st(0), st(1)
        fptan
        fxch st(1)
        fmul st(0), st(0)
        fadd st(0), st(1)
        fmul st(0), st(0)
        fld z
        fsincos
        fmul st(0), st(1)
        fmul st(0), st(2)
        fstp b
    }
    std::cout << "b = " << b << "\n";
}

