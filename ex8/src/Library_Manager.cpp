#include "../header/Library_Manager.hpp"

/*Check If borrow Id was existed*/
bool Library_Manager::checkIdExisted(std::string _id){
    if(vct_ticket.size()!=0){
        for(auto ticket: vct_ticket){
            if(ticket.first->borrow_id == _id){
                return true;
            }
        }
    }
    return false;
}

/*Add Ticket*/
void Library_Manager::addTicket(std::pair<Ticket *, Student *>pair){
    if(!this->checkIdExisted(pair.first->borrow_id)){
        vct_ticket.push_back(pair);
    }
    else{
        std::cout << "This ID was existed\n";
    }
}

/*Delete by ID*/
void Library_Manager::deleteById(std::string _id){
    if(vct_ticket.size()!=0){
        if(this->checkIdExisted(_id)){
            for(int i=0;i<vct_ticket.size();i++){
                if(vct_ticket[i].first->borrow_id == _id){
                    vct_ticket.erase(vct_ticket.begin()+i);
                }
            }
        }
        else{
            std::cout << "Can't delete this ticket because it is not available\n";
        }
    }
    else{
        std::cout << "This library is empty\n";
    }
}

/*Display*/
void Library_Manager::display(){
    if(vct_ticket.size() != 0){
        for(auto ticket:vct_ticket){
            std::cout << "\nTicket Information: \n";
            ticket.first->display();
            std::cout << "\nPeople Information: \n";
            ticket.second->display();
            std::cout << "--------------------------------------\n";
        }
    }
    else{
        std::cout << "This library is empty\n";
    }
}