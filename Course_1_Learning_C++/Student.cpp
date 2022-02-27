//
// Created by Plamen Yankov on 26.02.22.
//

#include "Student.h"

Student::Student(int _id, std::string _name): id(_id), name(_name){

}
int Student::get_id(){
    return id;
}
std::string Student::get_name(){
    return name;
}
void Student::set_id(int new_id){
    id = new_id;
}
void Student::set_name(std::string new_name){
    name = new_name;
}
