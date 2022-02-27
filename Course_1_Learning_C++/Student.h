//
// Created by Plamen Yankov on 26.02.22.
//
#pragma once
#ifndef C_LEARNING_PATH_LINKEDIN_STUDENT_H
#define C_LEARNING_PATH_LINKEDIN_STUDENT_H

#include <iostream>

class Student {
public:
    Student(int id, std::string name);
    int get_id();
    std::string get_name();
    void set_id(int id);
    void set_name(std::string name);

private:
    int id;
    std::string name;
};


#endif //C_LEARNING_PATH_LINKEDIN_STUDENT_H
