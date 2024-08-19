#include "student_classify.hpp"

class Student_Manager {
	private:
		std::vector<Student*>list_student;
	public:
		//Add Student
		void addStudent(Student* student_instance);
		//Check if Student was Existed
		bool isStudentExist(std::string _id);
		//Find student by id
		Student* findStudent(std::string _id);
		//Display all
		void display();
		//Display once
		void display(Student* student_instance);
};

