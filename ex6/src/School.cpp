#include "../header/School.hpp"

/*Check if Class is existed*/
bool mySchool::isExisted(std::string _name) {
	if (this->list_class.size() != 0) {
		for (auto mclass : list_class) {
			if (mclass->className == _name) {
				return true;
			}
		}
	}
	return false;
}

/*Add Class into School*/
void mySchool::addClass(myClass *instance_class) {
	if (!this->isExisted(instance_class->className)) {
		this->list_class.push_back(instance_class);
	}
	else {
		std::cout << "This Class Name has already existed\n";
	}
}

/*List All Class in School*/
void mySchool::listAllClass() {
	if (this->list_class.size() != 0) {
		for (int i = 0; i < list_class.size();i++) {
			std::cout << "\n" << i << ": " << list_class[i]->className;
		}
	}
	else {
		std::cout << "This school is empty\n";
	}
}

/*Add Student into the class*/
void mySchool::addStudentIntoClass(myClass* instance_class, Student* instance_student) {
	instance_class->addStudent(instance_student);
}

/*Display all Student*/
void mySchool::display() {
	if (this->list_class.size() != 0) {
		for (auto mclass : this->list_class) {
			if (mclass->list_student.size() != 0) {
				std::cout << "\nList Student of Class " << mclass->className << ": \n";
				for (auto student : mclass->list_student) {
					std::cout << "\nFull Name: " << student->full_name << " | " << "Age: " << student->age << " | " << "Home Address: " << student->home_address << std::endl;
				}
			}
			else {
				std::cout << "Class: " << mclass->className << " is empty\n";
			}
		}
	}
	else {
		std::cout << "This school is empty\n";
	}
}

/*Display based on condition*/
void mySchool::display(int _age) {
	if (this->list_class.size() != 0) {
		for (auto mclass : this->list_class) {
			if (mclass->list_student.size() != 0) {
				std::cout << "\nList Student of Class " << mclass->className << "whose age is " << _age << ": \n";
				int counter = 0;
				for (auto student : mclass->list_student) {
					if (student->age == _age) {
						std::cout << "\nFull Name: " << student->full_name << " | " << "Age: " << student->age << " | " << "Home Address: " << student->home_address << std::endl;
						counter++;
					}
				}
				if (counter == 0) {
					std::cout << "\nClass " << mclass->className << "does contain student whose age is" << _age << std::endl;
				}
			}
			else {
				std::cout << "Class: " << mclass->className << " is empty\n";
			}
		}
	}
	else {
		std::cout << "This school is empty\n";
	}
}

void mySchool::display(std::string _home_address, int _age) {
	for (auto mclass : this->list_class) {
		std::cout << "\nList Student of Class " << mclass->className << " whose age is " << _age << ": \n";
		int counter = 0;
		for (auto student : mclass->list_student) {
			if (student->age == _age && student->home_address == _home_address) {
				std::cout << "\nFull Name: " << student->full_name << " | " << "Age: " << student->age << " | " << "Home Address: " << student->home_address << std::endl;
				counter++;
			}
		}
		if (counter == 0) {
			std::cout << "\nClass " << mclass->className << "does contain student whose age is" << _age << std::endl;
		}
	}
}