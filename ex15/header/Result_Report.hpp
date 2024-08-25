#ifndef __RESULT_REPORT
#define __RESULT_REPORT

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

/*Result_Report*/
class Result_Report{
    public:
        std::string id_student;
        double average_score;
        Result_Report(std::string _id_student,double _avarage_score){
            this->id_student = _id_student;
            this->average_score = _avarage_score;
        }
        void display() const;
        ~Result_Report(){

        }
};

#endif