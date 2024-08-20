#ifndef __LIB_MANAGER
#define __LIB_MANAGER

#include "./Ticket.hpp"
#include "./Student.hpp"

class Library_Manager{
    public:
        std::vector<std::pair<Ticket*, Student*>>vct_ticket;
        /*Add Ticket*/
        void addTicket(std::pair<Ticket*, Student*>pair);
        /*Check If borrow_id was existed*/
        bool checkIdExisted(std::string _id);
        /*Delete using id*/
        void deleteById(std::string _id);
        /*Display*/
        void display();
};
#endif