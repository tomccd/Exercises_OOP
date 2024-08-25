#ifndef __STUDENT__
#define __STUDENT__

#include "./Semester.hpp"
/*Student*/
class Student{
    public:
        std::string id_student; //unique
        std::string full_name;
        int birthday_date[3]; //dd-mm--yyyy
        int year_onboard;
        double passed_score;
        Student(){

        }
        Student(std::string _id_student,std::string _full_name, int _date, int _month, int _year, int _year_onboard,double _passed_score){
            this->id_student = _id_student;
            this->full_name = _full_name;
            this->birthday_date[0] = _date;
            this->birthday_date[1] = _month;
            this->birthday_date[2] = _year;
            this->year_onboard = _year_onboard;
            this->passed_score = _passed_score;
        }
        Student(Student &obj){
            this->id_student = obj.id_student;
            this->full_name = obj.full_name;
            this->birthday_date[0] = obj.birthday_date[0];
            this->birthday_date[1] = obj.birthday_date[1];
            this->birthday_date[2] = obj.birthday_date[2];
            this->year_onboard = obj.year_onboard;
        }
        /*Get type of this Student*/
        virtual std::string getType() const = 0;
        /*Get training link address*/
        virtual std::string getTraining_Link_Addr() const{
            return "";
        }
        /*Display Information of this Student*/
        virtual void showMe() const = 0;
        virtual ~Student(){

        }
};

/*In_service Student*/
class In_service_Student:public Student{
    public:
        std::string training_link_addr;
        In_service_Student(std::string _id_student,std::string _full_name, int _date, int _month, int _year, int _year_onboard,double _passed_score,std::string _training_link_addr):Student(_id_student,_full_name,_date,_month,_year,_year_onboard,_passed_score){
            this->training_link_addr = _training_link_addr;
        }
        std::string getType() const{return "In_service_Student";}
        void showMe() const;
        std::string getTraining_Link_Addr() const{return this->training_link_addr;}
        ~In_service_Student(){

        }
};

/*Regular_Student*/
class Regular_Student:public Student{
    public:
        Regular_Student(std::string _id_student,std::string _full_name, int _date, int _month, int _year, int _year_onboard,double _passed_score):Student(_id_student,_full_name,_date,_month,_year,_year_onboard,_passed_score){

        }
        std::string getType() const{return "Regular_Student";}
        void showMe() const;
        ~Regular_Student(){

        }
};
#endif