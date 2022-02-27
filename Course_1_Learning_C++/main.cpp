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
    return 0;
}