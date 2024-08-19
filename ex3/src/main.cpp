#include "../header/student_manager.hpp"
#include "../header/student_classify.hpp"

void inputPhase(Student_Manager& manager, char option) {
	std::string _id;
	std::string _full_name;
	std::string _address;
	int _priority;
	std::cout << "\n---------------------------------\n";
	std::cout << "Enter ID: ";
	std::cin.ignore();
	std::getline(std::cin, _id);
	std::cout << "Enter full name: ";
	std::getline(std::cin, _full_name);
	std::cout << "Enter address: ";
	std::getline(std::cin, _address);
	do {
		std::cout << "Enter Priority Level (0->3): ";
		std::cin >> _priority;
	} while (_priority > 3 || _priority < 0);
	switch (option) {
		case 'A':
			manager.addStudent(new Student_Classify_A(_id, _full_name, _address, _priority));
			break;
		case 'B':
			manager.addStudent(new Student_Classify_B(_id, _full_name, _address, _priority));
			break;
		case 'C':
			manager.addStudent(new Student_Classify_C(_id, _full_name, _address, _priority));
			break;
	}
}

void searchPhase(Student_Manager& manager) {
	std::string _id;
	std::cout << "\n---------------------------------\n";
	std::cout << "Searching ID: ";
	std::cin.ignore();
	std::getline(std::cin, _id);
	manager.display(manager.findStudent(_id));
}

int main() {
	Student_Manager stu_manager;
	while (1) {
		std::cout << "\n---------------------------------\n";
		std::cout << "Application Student Manager\n";
		int option;
		std::cout << "Enter 1: To insert Student\n";
		std::cout << "Enter 2: To search Student using id\n";
		std::cout << "Enter 3: To display all Student\n";
		std::cout << "Enter 4: To exit\n";
		std::cout << "Your option: ";
		std::cin >> option;
		switch (option) {
			case 1:
				std::cout << "\n---------------------------------\n";
				std::cout << "Enter A: To insert Student whose exam block is A\n";
				std::cout << "Enter B: To insert Student whose exam block is B\n";
				std::cout << "Enter C: To insert Student whose exam block is C\n";
				char option_1;
				std::cout << "Your option: ";
				std::cin >> option_1;
				inputPhase(stu_manager, option_1);
				break;
			case 2:
				searchPhase(stu_manager);
				break;
			case 3:
				std::cout << "\n---------------------------------\n";
				stu_manager.display();
				break;
			case 4:
				std::cout << "\n---------------------------------\n";
				std::cout << "Exit\n";
				return 0;
		}
	}
}

