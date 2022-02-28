//
// Created by Plamen Yankov on 23.02.22.
//

#include <iostream>
#include <vector>
#include "Student.h"

enum car_purpose {ass, bad, girl};

struct Car{
    std::string name;
    int age;
    unsigned char pur;
};
int main(){
    // Car class
    Car car1;
    car1.name = "dad";
    car1.age = 12;
    car1.pur = bad;

    std::cout << car1.name << std::endl;
    std::cout << bad << std::endl;

    // Student class
//    Student student1(1, "Pancho");
//    std::cout << student1.get_name() << std::endl;

    std::vector<int> v{1,3,5,7};
    std::cout << v.size() << std::endl;
/*
 * Switch
 */
int operand1;
int operand2;
char op_sign;

std::cout << "Operand 1 " << std::endl;
std::cin >> operand1;

std::cout << "Operand 1 " << std::endl;
std::cin >> operand2;

std::cout << "Sign " << std::endl;
std::cin >> op_sign;


std::cout << operand1 << " " << operand2 << " " << op_sign << std::endl;

    switch (op_sign) {
        case '*':
            std::cout << operand1 * operand2 << std::endl;
            break;
    }


    return 0;
}