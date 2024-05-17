#include "testlib.h"
#include <iostream>

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(1, 100);
    int a = rnd.next(1, 2*n);
    int b = rnd.next(1, 2*n);
    std::cout << n << std::endl;
    std::cout << a << " " << b << std::endl;

    return 0;
}
