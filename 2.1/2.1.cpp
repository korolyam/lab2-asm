#include <iostream>
int main()
{
    double z;
    double b = 0;
    std::cout << "Vvedite argument radian z\n";
    std::cin >> z;
    __asm
    {
        fld z
        fld1
        fadd st(0), st(0)
        fdiv st(1), st(0)
        fxch
        fptan
        fstp st(0)
        fmul st(0), st(0)
        fld1
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

