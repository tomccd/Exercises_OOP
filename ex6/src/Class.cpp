#include "../header/Class.hpp"

/*Display all*/
void myClass::display() {
	if (this->list_student.size() != 0) {
		for (auto student : list_student) {
			std::cout << "\nFull Name: " << student->full_name << " | " << "Age: " << student->age << " | " << "Home Address: " << student->home_address << std::endl;
		}
	}
	else {
		std::cout << "Class: " << this->className << " is empty\n";
	}
}

/*Display based on condition*/
void myClass::display(int _age){
	if (this->list_student.size() != 0) {
		for (auto student : list_student) {
			if (student->age == _age) {
				std::cout << "\nFull Name: " << student->full_name << " | " << "Age: " << student->age << " | " << "Home Address: " << student->home_address << std::endl;
			}
		}
	}
}

void myClass::display(std::string _home_address, int _age) {
	if (this->list_student.size() != 0) {
		for (auto student : list_student) {
			if (student->age == _age && student->home_address == _home_address) {
				std::cout << "\nFull Name: " << student->full_name << " | " << "Age: " << student->age << " | " << "Home Address: " << student->home_address << std::endl;
			}
		}
	}
}

/*Add new Student into vector*/
void myClass::addStudent(Student *student) {
	this->list_student.push_back(student);
}
