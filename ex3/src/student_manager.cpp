#include "../header/student_manager.hpp"
#ifndef __STU_MANAGER__
#define __STU_MANAGER__
#endif

bool Student_Manager::isStudentExist(std::string _id) {
	if (list_student.size() != 0) {
		for (auto stu : list_student) {
			if (stu->id == _id) {
				return true;
			}
		}
	}
	return false;
}

void Student_Manager::addStudent(Student* student_instance) {
	if (!this->isStudentExist(student_instance->id)) {
		list_student.push_back(student_instance);
	}
	else {
		std::cout << "This id was existed\n";
	}
}

Student* Student_Manager::findStudent(std::string _id) {
	if (list_student.size() != 0) {
		for (auto stu : list_student) {
			if (stu->id == _id) {
				return stu;
			}
		}
	}
	return nullptr;
}

void Student_Manager::display() {
	if (list_student.size() != 0) {
		for (auto stu : list_student) {
			stu->display();
		}
	}
	else {
		std::cout << "The list is empty\n";
	}
}

void Student_Manager::display(Student* student_instance) {
	if (list_student.size() != 0) {
		if (student_instance != nullptr) {
			student_instance->display();
		}
		else {
			std::cout << "Can't find that student\n";
		}
	}
	else {
		std::cout << "The list is empty\n";
	}
}