// Learning C++
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño

#include <iostream>
#include <vector>
#include "Student.h"



std::vector<Student> students = {Student(1,"George P. Burdell"),
                            Student(2,"Nancy Rhodes")};

std::vector<Course> courses = {Course(1,"Algebra",5),
                          Course(2,"Physics",4),
                          Course(3,"English",3),
                          Course(4,"Economics",4)};

std::vector<Grade> grades = {Grade(1,1,'B'),	Grade(1,2,'A'),	Grade(1,3,'C'),
                        Grade(2,1,'A'),	Grade(2,2,'A'), Grade(2,4,'B')};

float GPA = 0.0f;
int id;

int main(){
    std::cout << "Enter a student ID: ";
    std::cin >> id;
    float totalPoints = 0.0f;
    float credits = 0.0f;
    // Calculate the GPA for the selected student.
    // Write your code here
    for(int i = 0; i < grades.size();i++){
        std::cout << grades[i].get_student_id() << std::endl;
        if(id == grades[i].get_student_id()){
            float points = courses[grades[i].get_course_id() - 1].get_credits();
            credits += points;
            char grade = grades[i].get_grade();
            switch (grade) {
                case 'A':
                   totalPoints+= points*4;
                    break;
                case 'B':
                    totalPoints+= points*3;
                    break;
                case 'C':
                    totalPoints+= points*2;
                    break;
            }
        }
    }


    std::string student_str;
    student_str = students[id - 1].get_name(); // Change this to the selected student's name
    GPA = totalPoints / credits;
    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    return (0);
}




