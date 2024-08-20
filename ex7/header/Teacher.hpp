#ifndef __TEACHER__
#define __TEACHER__

#include <vector>
#include <iostream>
#include <string>

class Human{
    public:
        std::string full_name;
        int age;
        std::string home_town;
        Human(std::string _full_name, int _age, std::string _home_town){
            this->full_name = _full_name;
            this->age = _age;
            this->home_town = _home_town;
        }
        virtual void display() = 0;
        virtual ~Human(){

        }
};

class Teacher:public Human{
    public:
        std::string id; //unique
        int gross_money;
        int penalty_money;
        int bonus_money;
        Teacher(std::string _full_name, int _age, std::string _home_town,std::string _id, int _gross_money, int _penalty_money, int _bonus_money):Human(_full_name,_age,_home_town){
            this->id = _id;
            this->gross_money = _gross_money;
            this->penalty_money = _penalty_money;
            this->bonus_money = _bonus_money;
        }
        /*Display Information*/
        void display();
        /*Calculate the money*/
        int calcMoney();
        ~Teacher(){

        }
};
#endif