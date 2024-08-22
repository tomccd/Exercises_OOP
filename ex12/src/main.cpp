#include "../header/Vehicle_Manager.hpp"

int main() {
	Vehicle_Manager manager;
	std::string _id; //unique
	std::string _label;
	int _year_publish;
	int _price;
	std::string _color;
	int _num_seat;
	std::string _engine_type;
	std::string _horse_power;
	int _weight;
	while (1) {
		std::cout << "\n------------------------------------------------\n";
		std::cout << "Application Vehicle Manager\n";
		std::cout << "Select 1: Insert new Vehicle\n";
		std::cout << "Select 2: Delete Vehicle using ID\n";
		std::cout << "Select 3: Find Vehicle with Condition\n";
		std::cout << "Select 4: Show All Vehicle\n";
		std::cout << "Select 5: Exit\n";
		std::cout << "Your choice: ";
		int option;
		std::cin >> option;
		switch (option) {
			case 1:
				std::cout << "\n------------------------------------------------\n";
				std::cout << "Select type of Vehicle to add : \n";
				std::cout << "Select a: Car\n";
				std::cout << "Select b: Motorbike\n";
				std::cout << "Select c: Truck\n";
				std::cout << "Your choice: ";
				char option_2;
				std::cin >> option_2;
				switch (option_2) {
					case 'a':
						std::cout << "\n------------------------------------------------\n";
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id);
						while (manager.isIDExisted(_id)) {
							std::cout << "This ID was existed. Please try again\n";
							std::cout << "Enter ID: ";
							std::getline(std::cin, _id);
						}
						std::cout << "Enter brand: ";
						std::getline(std::cin, _label);
						std::cout << "Enter Color: ";
						std::getline(std::cin, _color);
						std::cout << "Year publish: ";
						std::cin >> _year_publish;
						while (_year_publish < 1998 || _year_publish > 2024) {
							std::cout << "Year publish must be larger than 1998 and smaller than 2024. Please try again\n";
							std::cout << "Year publish: ";
							std::cin >> _year_publish;
						}
						std::cout << "Enter price: ";
						std::cin >> _price;
						while (_price <= 0) {
							std::cout << "The price must be larger than 0. Please try again\n";
							std::cout << "Enter price: ";
							std::cin >> _price;
						}
						std::cout << "Enter Number Seat: ";
						std::cin >> _num_seat;
						while (_num_seat <= 0) {
							std::cout << "The Number of Seats must be larger than 0. Please try again\n";
							std::cout << "Enter Number Seat: ";
							std::cin >> _num_seat;
						}
						std::cout << "Enter Engine Type: ";
						std::cin.ignore();
						std::getline(std::cin,_engine_type);
						manager.vct_vehicle_manager.push_back(new Car(_id, _label, _year_publish, _price, _color, _num_seat, _engine_type));
						break;
					case 'b':
						std::cout << "\n------------------------------------------------\n";
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id);
						while (manager.isIDExisted(_id)) {
							std::cout << "This ID was existed. Please try again\n";
							std::cout << "Enter ID: ";
							std::getline(std::cin, _id);
						}
						std::cout << "Enter brand: ";
						std::getline(std::cin, _label);
						std::cout << "Enter Color: ";
						std::getline(std::cin, _color);
						std::cout << "Year publish: ";
						std::cin >> _year_publish;
						while (_year_publish < 1998 || _year_publish > 2024) {
							std::cout << "Year publish must be larger than 1998 and smaller than 2024. Please try again\n";
							std::cout << "Year publish: ";
							std::cin >> _year_publish;
						}
						std::cout << "Enter price: ";
						std::cin >> _price;
						while (_price <= 0) {
							std::cout << "The price must be larger than 0. Please try again\n";
							std::cout << "Enter price: ";
							std::cin >> _price;
						}
						std::cout << "Enter Horse Power: ";
						std::cin >> _horse_power;
						manager.vct_vehicle_manager.push_back(new MotorBike(_id, _label, _year_publish, _price, _color, _horse_power));
						break;
					case 'c':
						std::cout << "\n------------------------------------------------\n";
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id);
						while (manager.isIDExisted(_id)) {
							std::cout << "This ID was existed. Please try again\n";
							std::cout << "Enter ID: ";
							std::getline(std::cin, _id);
						}
						std::cout << "Enter brand: ";
						std::getline(std::cin, _label);
						std::cout << "Enter Color: ";
						std::getline(std::cin, _color);
						std::cout << "Year publish: ";
						std::cin >> _year_publish;
						while (_year_publish < 1998 || _year_publish > 2024) {
							std::cout << "Year publish must be larger than 1998 and smaller than 2024. Please try again\n";
							std::cout << "Year publish: ";
							std::cin >> _year_publish;
						}
						std::cout << "Enter price: ";
						std::cin >> _price;
						while (_price <= 0) {
							std::cout << "The price must be larger than 0. Please try again\n";
							std::cout << "Enter price: ";
							std::cin >> _price;
						}
						std::cout << "Enter Weight: ";
						std::cin >> _weight;
						while (_weight <= 0) {
							std::cout << "The weight must be larger than 0. Please try again\n";
							std::cout << "Enter Weight: ";
							std::cin >> _weight;
						}
						manager.vct_vehicle_manager.push_back(new Truck(_id, _label, _year_publish, _price, _color, _weight));
						break;
				}
				break;
			case 2:
				std::cout << "\n------------------------------------------------\n";
				std::cout << "Enter ID to delete: ";
				std::cin.ignore();
				std::getline(std::cin, _id);
				manager.deleteVehicle(_id);
				break;
			case 3:
				std::cout << "\n------------------------------------------------\n";
				std::cout << "Enter 1: Search by Brand\n";
				std::cout << "Enter 2: Search by Color\n";
				std::cout << "Your choice: ";
				int option_3;
				std::cin >> option_3;
				switch (option_3) {
					case 1:
						std::cout << "\n------------------------------------------------\n";
						std::cout << "Enter Brand Name to search: ";
						std::cin.ignore();
						std::getline(std::cin, _label);
						manager.display(manager.findVehicle("Brand", _label));
						break;
					case 2:
						std::cout << "\n------------------------------------------------\n";
						std::cout << "Enter Color to search: ";
						std::cin.ignore();
						std::getline(std::cin, _color);
						manager.display(manager.findVehicle("Color", _color));
						break;
				}
				break;
			case 4:
				std::cout << "\n------------------------------------------------\n";
				manager.display();
				break;
			case 5:
				std::cout << "\n------------------------------------------------\n";
				std::cout << "Exit\n";
				return 0;
		}
	}
}