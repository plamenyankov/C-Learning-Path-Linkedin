//
// Created by Plamen Yankov on 23.02.22.
//

#include "main.h"
#include <iostream>
#include <typeinfo>

auto a = 1;
auto b = 12312321312321;
auto c = 3.14f;
auto d = 3.14;
auto e = true;
auto f = 'b';

int main(){
//    std::string name;
//    std::cout << "Write your name" << std::endl;
//    std::cin >> name;
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(e).name() << std::endl;
    std::cout << typeid(f).name() << std::endl;
    return 0;
}