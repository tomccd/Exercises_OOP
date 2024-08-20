#include "../header/Teacher_Manager.hpp"

int main(){
    Teacher_Manager manager;
    std::string _full_name;
    std::string _id;
    int _age;
    std::string _home_town;
    int _gross_money;
    int _bonus_money;
    int _penalty_money;
    while(1){
        std::cout << "\n-----------------------------------------\n";
        std::cout << "Application Teacher Manager\n";
        std::cout << "Select 1: To insert new Teacher\n";
        std::cout << "Select 2: To delete Teacher using id\n";
        std::cout << "Select 3: To show all Teacher\n";
        std::cout << "Select 4: To exit\n";
        int option;
        std::cout << "Your option: ";
        std::cin >> option;
        switch (option)
        {
        case 1:
            std::cout << "\n-----------------------------------------\n";
            std::cout << "Enter ID: ";
            std::cin.ignore();
            std::getline(std::cin,_id);
            while(manager.checkIDExisted(_id)){
                std::cout << "This ID was existed. Please try again\n";
                std::cout << "Enter ID: ";
                std::getline(std::cin,_id);
            }
            std::cout << "Enter Full Name: ";
            std::getline(std::cin,_full_name);
            std::cout << "Enter Home Town: ";
            std::getline(std::cin,_home_town);
            std::cout << "Enter age: ";
            std::cin >> _age;
            while(_age<18){
                std::cout << "Age must be larger than 18. Please try again\n";
                std::cout << "Enter age: ";
                std::cin >> _age;
            }
            std::cout << "Enter gross: ";
            std::cin >> _gross_money;
            while(_gross_money <= 0){
                std::cout << "Gross money must be larger than 0. Please try again\n";
                std::cout << "Enter gross: ";
                std::cin >> _gross_money;
            }
            std::cout << "Enter bonus: ";
            std::cin >> _bonus_money;
            while(_bonus_money <= 0){
                std::cout << "Bonus money must be larger than 0. Please try again\n";
                std::cout << "Enter gross: ";
                std::cin >> _bonus_money;
            }
            std::cout << "Enter penalty: ";
            std::cin >> _penalty_money;
            while(_penalty_money <= 0){
                std::cout << "Penalty money must be larger than 0. Please try again\n";
                std::cout << "Enter penalty: ";
                std::cin >> _penalty_money;
            }
            manager.addTeacher(new Teacher(_full_name,_age,_home_town,_id,_gross_money,_penalty_money,_bonus_money));
            break;
        case 2:
            std::cout << "\n-----------------------------------------\n";
            std::cout << "Enter ID to delete: ";
            std::cin.ignore();
            std::getline(std::cin,_id);
            manager.deleteTeacher(_id);
            break;
        case 3:
            std::cout << "\n-----------------------------------------\n";
            manager.display();
            break;
        case 4:
            std::cout << "\n-----------------------------------------\n";
            std::cout << "Exit\n";
            return 0;
        }
    }
}