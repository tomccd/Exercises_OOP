#include "../header/School.hpp"

int main() {
	mySchool mschool;
	std::string _full_name;
	std::string _home_address;
	int _age;
	std::string _className;
	while (1) {
		std::cout << "\n------------------------------------\n";
		std::cout << "Application School Manager\n";
		int option;
		std::cout << "Enter 1: To insert new Class\n";
		std::cout << "Enter 2: To insert new Student\n";
		std::cout << "Enter 3: To show all Class\n";
		std::cout << "Enter 4: To show all Student\n";
		std::cout << "Enter 5: To show Student based on condition\n";
		std::cout << "Enter 6: To exit\n";
		std::cout << "Your choice: ";
		std::cin >> option;
		switch (option) {
			case 1:
				std::cout << "\n------------------------------------\n";
				std::cout << "Type Name of New Class: ";
				std::cin >> _className;
				while (mschool.isExisted(_className)) {
					std::cout << "This Class is Existed. Please Try Again\n";
					std::cout << "Type Name of New Class: ";
					std::cin >> _className;
				}
				mschool.addClass(new myClass(_className));
				break;
			case 2:
				std::cout << "\n------------------------------------\n";
				if (mschool.list_class.size() == 0) {
					std::cout << "This school is empty.\n";
				}
				else {
					std::cout << "Select Class to contain new Student";
					mschool.listAllClass();
					int option_1;
					std::cout << "\nYour choice: ";
					std::cin >> option_1;
					while (option_1 < 0 || option_1 >= mschool.list_class.size()) {
						std::cout << "The option should be between " << 0 << " and " << mschool.list_class.size() - 1 << ". Please try again\n";
						std::cout << "\nYour choice: ";
						std::cin >> option_1;
					}
					std::cout << "\n------------------------------------\n";
					std::cout << "Enter Full Name: ";
					std::cin.ignore();
					std::getline(std::cin, _full_name);
					std::cout << "Enter Home Address: ";
					std::getline(std::cin, _home_address);
					std::cout << "Enter Age: ";
					std::cin >> _age;
					while (_age < 15) {
						std::cout << "The Age of Student in High School must be larger or equal to 15. Please Try Again\n";
						std::cout << "Enter Age: ";
						std::cin >> _age;
					}
					mschool.addStudentIntoClass(mschool.list_class[option_1], new Student(_full_name, _home_address, _age));
				}
				_age = 0;
				_home_address = "\0";
				break;
			case 3:
				std::cout << "\n------------------------------------\n";
				std::cout << "List Class in this school: \n";
				mschool.listAllClass();
				break;
			case 4:
				std::cout << "\n------------------------------------\n";
				mschool.display();
				break;
			case 5:
				std::cout << "\n------------------------------------\n";
				std::cout << "Select a: To filter student based on age\n";
				std::cout << "Select b: To filter student based on age and home address\n";
				std::cout << "Your choice: ";
				char choice_3;
				std::cin >> choice_3;
				switch (choice_3) {
					case 'a':
						std::cout << "Enter age to filter: ";
						std::cin >> _age;
						while (_age < 15) {
							std::cout << "The Age of Student in High School must be larger or equal to 15. Please Try Again\n";
							std::cout << "Enter Age: ";
							std::cin >> _age;
						}
						mschool.display(_age);
						break;
					case 'b':
						std::cout << "Enter home address to filter: ";
						std::cin.ignore();
						std::getline(std::cin, _home_address);
						std::cout << "Enter age to filter: ";
						std::cin >> _age;
						while (_age < 15) {
							std::cout << "The Age of Student in High School must be larger or equal to 15. Please Try Again\n";
							std::cout << "Enter Age: ";
							std::cin >> _age;
						}
						mschool.display(_home_address, _age);
						break;
				}
				break;
			case 6:
				std::cout << "\n------------------------------------\n";
				std::cout << "Exit\n";
				return 0;
		}
	}
}