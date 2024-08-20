#ifndef __SCHOOL__
#define __SCHOOL__
#include "./Class.hpp"

class mySchool {
	public:
		std::vector<myClass*>list_class;
		mySchool() {

		}
		/*Add Class into School*/
		void addClass(myClass *instance_class);
		/*Check if this Class is Existed*/
		bool isExisted(std::string _name);
		/*List all Class*/
		void listAllClass();
		/*Add Student into Class*/
		void addStudentIntoClass(myClass* instance_class, Student* instance_student);
		/*Display all Student*/
		void display();
		/*Display based on condition*/
		void display(int _age);
		void display(std::string _home_address, int _age);
		~mySchool() {

		}
};
#endif // !__SCHOOL__
