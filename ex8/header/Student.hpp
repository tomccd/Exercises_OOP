#ifndef __STUDENT__
#define __STUDENT__

#include <utility>
#include <string>
#include <vector>
#include <iostream>

class Student{
    public:
        std::string full_name;
        int age;
        std::string className;
        Student(std::string _full_name,int _age, std::string _class_name){
            this->full_name = _full_name;
            this->age = _age;
            this->className = _class_name;
        }
        void display();
};

#endif