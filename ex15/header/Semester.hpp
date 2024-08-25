#ifndef __SEMESTER
#define __SEMESTER

#include "./Result_Report.hpp"

class Semester{
    private:
        std::string semester_name; //unique
        std::vector<Result_Report *>list_result_report;
    public:
        Semester(std::string _semester_name){
            semester_name = _semester_name;
        }
        void display() const;
        std::string showName() const;
        void add_Result_Report(Result_Report *report);
        bool isIDExisted(std::string _id_student);
        std::string findIdHighestScore() const;
};


#endif