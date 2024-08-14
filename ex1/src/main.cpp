#include "../header/manage_officer.hpp"

//Header guard
#ifndef __CLASSIFY__
#include "classify.hpp"
#endif

int main(){
    QLCB  ql;
    std::string name;
    std::string type_gender;
    int age;
    std::string address;
    std::string major;
    std::string type_job;
    while(1){
        std::cout << "\n------------------------------\n";
        std::cout << "Application Manager Officer\n";
        int option = -1;
        std::cout << "Enter 1: To insert Officer\n";
        std::cout << "Enter 2: To search officer by name\n";
        std::cout << "Enter 3: To show information officers\n";
        std::cout << "Enter 4: To exit\n";
        std::cout << "Your Option: ";
        std::cin.ignore();
        std::cin >> option;
        switch(option){
            case 1:
                std::cout << "\n------------------------------\n";
                std::cout << "Enter e: To insert Engineer\n";
                std::cout << "Enter w: To insert Worker\n";
                std::cout << "Enter s: To insert Staff\n";
                char type;
                std::cout << "Your Option: ";
                std::cin >> type;
                switch(type){
                    case 'e':
                        std::cout << "\n------------------------------\n";
                        std::cout << "Enter name: ";
                        std::cin.ignore();
                        std::getline(std::cin, name);
                        std::cout << "Enter age: ";
                        std::cin >> age;
                        while(age<0 && age>55){
                            std::cout << "\nThe age should be larger than 0 and smaller than 55\n";
                            std::cout << "Enter age: ";
                            std::cin >> age;
                        } 
                        std::cout << "Enter gender: ";
                        std::cin.ignore();
                        std::getline(std::cin, type_gender);
                        std::cout << "Enter address: ";
                        std::cin.ignore();
                        std::getline(std::cin, address);
                        std::cout << "Enter major: ";
                        std::cin.ignore();
                        std::getline(std::cin, address);
                        ql.addOffice(new KySu(name,type_gender,age,address,major));
                        break;
                    case 'w':
                        std::cout << "\n------------------------------\n";
                        std::cout << "Enter name: ";
                        std::cin.ignore();
                        std::getline(std::cin, name);
                        std::cout << "Enter age: ";
                        std::cin >> age;
                        while (age < 0 && age>55) {
                            std::cout << "\nThe age should be larger than 0 and smaller than 55\n";
                            std::cout << "Enter age: ";
                            std::cin >> age;
                        }
                        std::cout << "Enter gender: ";
                        std::cin.ignore();
                        std::getline(std::cin, type_gender);
                        std::cout << "Enter address: ";
                        std::cin.ignore();
                        std::getline(std::cin, address);
                        std::cout << "Enter level: ";
                        int level;
                        std::cin >> level;
                        ql.addOffice(new CongNhan(name,type_gender,age,address,level));
                        break;
                    case 's':
                        std::cout << "\n------------------------------\n";
                        std::cout << "Enter name: ";
                        std::cin.ignore();
                        std::getline(std::cin, name);
                        std::cout << "Enter age: ";
                        std::cin >> age;
                        while (age < 0 && age>55) {
                            std::cout << "\nThe age should be larger than 0 and smaller than 55\n";
                            std::cout << "Enter age: ";
                            std::cin >> age;
                        }
                        std::cout << "Enter gender: ";
                        std::cin.ignore();
                        std::getline(std::cin, type_gender);
                        std::cout << "Enter address: ";
                        std::cin.ignore();
                        std::getline(std::cin, address);
                        std::cout << "Enter Job: ";
                        std::cin.ignore();
                        std::getline(std::cin, address);
                        ql.addOffice(new NhanVien(name,type_gender,age,address,type_job));
                        break;
                }
                break;
            case 2:
                std::cout << "\n--------------------------------------\n";
                std::cout << "Enter name to search: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                ql.displayOfficer(ql.searchOfficer(name));
                break;

            case 3:
                std::cout << "\n------------------------------------------\n";
                std::cout << "Show List : \n";
                ql.displayOfficer();
                break;
            case 4:
                std::cout <<"\n--------------------------------------\n";
                std::cout << "Exit\n";
                return 0;
        }
    }
}