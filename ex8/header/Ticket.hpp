#ifndef __TICKET__
#define __TICKET__
#include "./Student.hpp"
class Ticket{
    public:
        std::string borrow_id; //unique
        std::string date_borrow;
        std::string due_date;
        std::string type_book;
        Ticket(std::string _borrow_id, std::string _date_borrow, std::string _due_date, std::string _type_book){
            this->borrow_id = _borrow_id;
            this->date_borrow = _date_borrow;
            this->due_date = _due_date;
            this->type_book = _type_book;
        }
        void display();
        ~Ticket(){

        }
};

#endif