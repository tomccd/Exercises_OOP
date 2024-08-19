#include "../header/manage_residential_area.hpp"
#include "../header/human.hpp"
#include "../header/house_hold.hpp"

int main() {
	Manage_Residential manage;
	int _number_member;
	int _house_number_id;
	std::string _id; //unique
	std::string _full_name;
	int _age;
	std::string _job;
	int num_household;
	int counter = 0;
	int counter_hs = 0;
	while (1) {
		std::cout << "\n--------------------------------------------\n";
		
		std::cout << "Application House Hold Manager\n";
		std::cout << "Enter 1: To insert House Hold\n";
		std::cout << "Enter 2: To show all House Hold\n";
		std::cout << "Enter 3: To exit\n";
		int option;
		std::cout << "Your choice: ";
		std::cin >> option;
		switch (option) {
			case 1:
				std::cout << "\n--------------------------------------------\n";
				std::cout << "Enter the number of household in this residential: ";
				std::cin >> num_household;
				while (num_household < 0) {
					std::cout << "Please try again. The number of household must be larger than 0\n";
					std::cout << "Enter the number of household in this residential: ";
					std::cin >> num_household;
				}
				while (counter < num_household) {
					std::cout << "\n--------------------------------------------\n";
					std::cout << "Enter the house_number of this house hold: ";
					std::cin >> _house_number_id;
					while (manage.checkHouseNumberExists(_house_number_id)) {
						std::cout << "Please Try Again. This House Number is existed\n";
						std::cout << "Enter the house_number of this house hold: ";
						std::cin >> _house_number_id;
					}
					std::cout << "Enter the number of member in house hold: ";
					std::cin >> _number_member;
					while (_number_member <= 0) {
						std::cout << "Please Try Again. This number of member must be larger than 0\n";
						std::cout << "Enter the number of member in house hold " << _number_member;
						std::cin >> _number_member;
					}
					House_Hold* hd = new House_Hold(_number_member, _house_number_id);
					while (counter_hs < _number_member) {
						std::cout << "\n--------------------------------------------\n";
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id);
						while (manage.checkIDExists(_id) || hd->checkExists(_id)){
							std::cout << "This ID is exists. Try again\n";
							std::cout << "Enter ID: ";
							std::getline(std::cin, _id);
						}
						std::cout << "Enter Full Name: ";
						std::getline(std::cin, _full_name);
						std::cout << "Enter Job: ";
						std::getline(std::cin, _job);
						std::cout << "Age: ";
						std::cin >> _age;
						while (_age < 0) {
							std::cout << "Age must be larger or equal than 0. Try again\n";
							std::cout << "Age: ";
							std::cin >> _age;
						}
						hd->addMember(new Human(_id, _full_name, _age, _job));
						counter_hs += 1;
					}
					manage.add_House_Hold(hd);
					counter_hs = 0;
					counter++;
				}
				counter = 0;
				break;
			case 2:
				std::cout << "\n--------------------------------------------\n";
				manage.show_House_Hold();
				break;
			case 3:
				std::cout << "\n--------------------------------------------\n";
				std::cout << "Exit";
				return 0;
		}
	}
}