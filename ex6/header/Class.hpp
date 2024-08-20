#ifndef __CLASS__
#define __CLASS__
#include "./Student.hpp"

class myClass {
	public:
		std::vector<Student*>list_student;
		std::string className;
		myClass(std::string _class_Name) {
			this->className = _class_Name;
		}
		/*Add new Student into vector*/
		void addStudent(Student* student);
		/*Display all student*/
		void display();
		/*Display student based on _age*/
		void display(int _age);
		/*Display student based on _age and _home_address*/
		void display(std::string _home_address, int _age);
		~myClass() {

		}
};

#endif // __CLASS
