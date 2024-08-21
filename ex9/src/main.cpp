#include "../header/Receipt_Manager.hpp"

int main() {
	Receipt_Manager manager;
	std::string _full_name;
	std::string _id_contactor;
	std::string _house_number;
	int _old_number;
	int _current_number;
	while (1) {
		std::cout << "\n-------------------------------------------\n";
		std::cout << "Application Receipt Manager\n";
		std::cout << "Select 1: To insert new receipt\n";
		std::cout << "Select 2: To delete receipt using ID\n";
		std::cout << "Select 3: To show Information\n";
		std::cout << "Select 4: To exit\n";
		int option;
		std::cout << "Your choice: ";
		std::cin >> option;
		switch (option) {
			case 1:
				std::cout << "\n-------------------------------------------\n";
				std::cout << "Enter ID Contactor: ";
				std::cin.ignore();
				std::getline(std::cin, _id_contactor);
				while (manager.checkIDExisted(_id_contactor)) {
					std::cout << "This ID was existed. Please try again\n";
					std::cout << "Enter ID Contactor: ";
					std::getline(std::cin, _id_contactor);
				}
				std::cout << "Enter House Number: ";
				std::getline(std::cin, _house_number);
				std::cout << "Enter Full Name: ";
				std::getline(std::cin, _full_name);
				std::cout << "Enter old number: ";
				std::cin >> _old_number;
				while (_old_number < 0) {
					std::cout << "Old Number must be larger than zero. Please try again\n";
					std::cout << "Enter old number: ";
					std::cin >> _old_number;
				}
				std::cout << "Enter current number: ";
				std::cin >> _current_number;
				while (_current_number <= _old_number) {
					std::cout << "Current Number must be larger than Old Number. Please try again\n";
					std::cout << "Enter current number: ";
					std::cin >> _current_number;
				}
				manager.list_receipt.push_back(new Receipt(_full_name, _house_number, _id_contactor, _old_number, _current_number));
				break;
			case 2:
				std::cout << "\n-------------------------------------------\n";
				std::cout << "Enter ID Contactor to delete: ";
				std::cin.ignore();
				std::getline(std::cin,_id_contactor);
				manager.deleteReceipt(_id_contactor);
				break;
			case 3:
				std::cout << "\n-------------------------------------------\n";
				std::cout << "List all Receipt: \n";
				manager.display();
				break;
			case 4:
				std::cout << "\n-------------------------------------------\n";
				std::cout << "Exit\n";
				return 0;
		}
	}
}