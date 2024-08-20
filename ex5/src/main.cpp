#include "../header/Hotel_Manager.hpp"

int main() {
	Hotel_Manager manager;
	std::string _full_name;
	int _day_stay;
	int _age;
	std::string _id; //unique
	std::pair<Human*, Rooms*>pair;
	while (1) {
		std::cout << "\n----------------------------\n";
		std::cout << "Application Hotel Manager\n";
		int option;
		std::cout << "Enter 1: To insert customer\n";
		std::cout << "Enter 2: To delete customer by id\n";
		std::cout << "Enter 3: To show all information of customers\n";
		std::cout << "Enter 4: To exit\n";
		std::cout << "Your option: ";
		std::cin >> option;
		switch (option) {
			case 1:
				std::cout << "\n----------------------------\n";
				std::cout << "Select type of Rooms\n";
				std::cout << "Enter A: To choose Room Type A\n";
				std::cout << "Enter B: To choose Room Type B\n";
				std::cout << "Enter C: To choose Room Type C\n";
				char option_1;
				std::cout << "Your choice: ";
				std::cin >> option_1;
				switch (option_1) {
					case 'A':
						std::cout << "\n----------------------------\n";
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id);
						//Check if the id is existed -> else type again
						while (manager.isIDExists(_id)) {
							std::cout << "This ID was existed. Please try again\n";
							std::cout << "Enter ID: ";
							std::getline(std::cin, _id);
						}
						std::cout << "Enter Full Name: ";
						std::getline(std::cin, _full_name);
						std::cout << "Enter Age: ";
						std::cin >> _age;
						while (_age < 0) {
							std::cout << "Age must be larger than 0. Please try again\n";
							std::cout << "Enter Age: ";
							std::cin >> _age;
						}
						std::cout << "Enter Day Stay: ";
						std::cin >> _day_stay;
						while (_day_stay < 1) {
							std::cout << "Day stay must be larger or equal to 1. Please try again\n";
							std::cout << "Enter Day Stay: ";
							std::cin >> _day_stay;
						}
						pair = std::make_pair(new Human(_full_name, _age, _id, _day_stay), new Room_Type_A());
						manager.vct_pair_human_room.push_back(pair);
						break;
					case 'B':
						std::cout << "\n----------------------------\n";
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id);
						//Check if the id is existed -> else type again
						while (manager.isIDExists(_id)) {
							std::cout << "This ID was existed. Please try again\n";
							std::cout << "Enter ID: ";
							std::getline(std::cin, _id);
						}
						std::cout << "Enter Full Name: ";
						std::getline(std::cin, _full_name);
						std::cout << "Enter Age: ";
						std::cin >> _age;
						while (_age < 0) {
							std::cout << "Age must be larger than 0. Please try again\n";
							std::cout << "Enter Age: ";
							std::cin >> _age;
						}
						std::cout << "Enter Day Stay: ";
						std::cin >> _day_stay;
						while (_day_stay < 1) {
							std::cout << "Day stay must be larger or equal to 1. Please try again\n";
							std::cout << "Enter Day Stay: ";
							std::cin >> _day_stay;
						}
						pair = std::make_pair(new Human(_full_name, _age, _id, _day_stay), new Room_Type_B());
						manager.vct_pair_human_room.push_back(pair);
						break;
					case 'C':
						std::cout << "\n----------------------------\n";
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id);
						//Check if the id is existed -> else type again
						while (manager.isIDExists(_id)) {
							std::cout << "This ID was existed. Please try again\n";
							std::cout << "Enter ID: ";
							std::getline(std::cin, _id);
						}
						std::cout << "Enter Full Name: ";
						std::getline(std::cin, _full_name);
						std::cout << "Enter Age: ";
						std::cin >> _age;
						while (_age < 0) {
							std::cout << "Age must be larger than 0. Please try again\n";
							std::cout << "Enter Age: ";
							std::cin >> _age;
						}
						std::cout << "Enter Day Stay: ";
						std::cin >> _day_stay;
						while (_day_stay < 1) {
							std::cout << "Day stay must be larger or equal to 1. Please try again\n";
							std::cout << "Enter Day Stay: ";
							std::cin >> _day_stay;
						}
						pair = std::make_pair(new Human(_full_name, _age, _id, _day_stay), new Room_Type_C());
						manager.vct_pair_human_room.push_back(pair);
						break;
				}
				break;
			case 2:
				std::cout << "\n----------------------------\n";
				std::cout << "Enter the ID you want to delete: ";
				std::cin >> _id;
				manager.deleteByID(_id);
				break;
			case 3:
				std::cout << "\n----------------------------\n";
				std::cout << "The Information of all Customer: ";
				manager.display();
				break;
			case 4:
				std::cout << "\n----------------------------\n";
				std::cout << "Exit\n";
				return 0;
		}
		
	}
}