#include "../header/Ticket.hpp"

void Ticket::display(){
    std::cout << "\nBorrow ID: " << this->borrow_id << " | " << "Date Borrow: " << this->date_borrow << " | " << "Due Date: " << this->due_date << " | " << "Type Book: " << this->type_book << std::endl;
}