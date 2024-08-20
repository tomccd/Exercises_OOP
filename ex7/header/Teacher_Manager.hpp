#ifndef __TEACHER_MANAGER
#define __TEACHER_MANAGER

#include "./Teacher.hpp"

class Teacher_Manager{
    public:
        std::vector<Teacher*>list_teacher;
        /*Check if id was existed*/
        bool checkIDExisted(std::string _id);
        /*Add Teacher*/
        void addTeacher(Teacher *teacher);
        /*Display Information*/
        void display();
        /*Delete*/
        void deleteTeacher(std::string _id);
};

#endif