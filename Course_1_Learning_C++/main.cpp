//
// Created by Plamen Yankov on 23.02.22.
//

#include <iostream>
#define HUNDRED 100
#define DEBUG

auto a = 1;
auto b = 12312321312321;
auto c = 3.14f;
auto d = 3.14;
auto e = true;
auto f = 'b';

int main(){
    c += d;
#ifdef DEBUG
    std::cout << c << std::endl;
#endif
    return 0;
}