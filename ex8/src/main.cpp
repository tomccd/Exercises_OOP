#include "../header/Library_Manager.hpp"
#include "../header/Student.hpp"
#include "../header/Ticket.hpp"
int main(){
    Library_Manager manager;
    std::string _full_name;
    int _age;
    std::string _className;
    std::string _borrow_id;
    std::string _date_borrow;
    std::string _due_date;
    std::string _type_book;
    std::pair<Ticket*,Student*>ticket;
    while(1){
        std::cout << "--------------------------------------\n";
        std::cout << "Application Library Manager\n";
        std::cout << "Select 1: Add Ticket\n";
        std::cout << "Select 2: Delete By ID Ticket\n";
        std::cout << "Select 3: Display all Ticket\n";
        std::cout << "Select 4: To exit\n";
        int option;
        std::cout << "Your choice: ";
        std::cin >> option;
        switch(option){
            case 1:
                std::cout << "--------------------------------------\n";
                std::cout << "Enter ID Ticket: ";
                std::cin.ignore();
                std::getline(std::cin,_borrow_id);
                while(manager.checkIdExisted(_borrow_id)){
                    std::cout << "This Borrow Id was existed. Please try again\n";
                    std::cout << "Enter ID Ticket: ";
                    std::getline(std::cin,_borrow_id);
                }
                std::cout << "Enter Date Borrow: ";
                std::getline(std::cin,_date_borrow);
                std::cout << "Enter Due Data: ";
                std::getline(std::cin,_due_date);
                std::cout << "Enter Type Book: ";
                std::getline(std::cin,_type_book);
                std::cout << "Enter Lending People Full Name: ";
                std::getline(std::cin,_full_name);
                std::cout << "Enter Class Name: ";
                std::getline(std::cin,_className);
                std::cout << "Enter age: ";
                std::cin >> _age;
                while(_age < 18){
                    std::cout << "Age must be larger than 18. Please Try Again\n";
                    std::cout << "Enter age: ";
                    std::cin >> _age;
                }
                ticket = std::make_pair(new Ticket(_borrow_id,_date_borrow,_due_date,_type_book),new Student(_full_name,_age,_className));
                manager.vct_ticket.push_back(ticket);
                break;
            case 2:
                std::cout << "--------------------------------------\n";
                std::cout << "Enter ID to delete: ";
                std::cin.ignore();
                std::getline(std::cin,_borrow_id);
                manager.deleteById(_borrow_id);
                break;
            case 3:
                std::cout << "--------------------------------------\n";
                manager.display();
                break;
            case 4:
                std::cout << "--------------------------------------\n";
                std::cout << "Exit\n";
                return 0;
        }
    }
}