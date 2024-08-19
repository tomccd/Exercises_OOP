#include <vector>
#include <string>
#include <iostream>
#ifndef __STU_CLASSIFY
#define __STU_CLASSIFY

/*Student*/
class Student {
	public:
		std::string id;
		std::string full_name;
		std::string address;
		int priority;
		std::vector<std::string>subjects;
		Student(std::string _id, std::string _full_name, std::string _address, int _priority, std::string subj_1, std::string subj_2, std::string subj_3) {
			this->id = _id;
			this->full_name = _full_name;
			this->address = _address;
			this->priority = _priority;
			this->subjects.push_back(subj_1);
			this->subjects.push_back(subj_2);
			this->subjects.push_back(subj_3);
		}
		void display() {
			std::cout << "ID: " << this->id << " | " << "Full Name: " << this->full_name << " | " << "Address: " << this->address << " | " << "Priority level: " << this->priority << "Type: " << this->getType() << " | ";
			for (int i = 0; i < subjects.size(); i++) {
				std::cout << "Subject_" << i << ": " << this->subjects[i] << ", ";
			}
			std::cout << "\n";
		}
		virtual std::string getType() const = 0;
		virtual ~Student() {

		}
};

/*Student A*/
class Student_Classify_A: public Student{
	public:
		Student_Classify_A(std::string _id, std::string _full_name, std::string _address, int _priority, std::string subj_1 = "Math", std::string subj_2 = "Physical", std::string subj_3 = "Chemical"):Student(_id,_full_name,_address,_priority,subj_1,subj_2,subj_3) {
			
		}
		std::string getType () const {
			return "A";
		}
		~Student_Classify_A() {

		}
};

/*Student B*/
class Student_Classify_B: public Student {
	public:
		Student_Classify_B(std::string _id, std::string _full_name, std::string _address, int _priority, std::string subj_1 = "Math", std::string subj_2 = "Chemical", std::string subj_3 = "Biology") :Student(_id, _full_name, _address, _priority, subj_1, subj_2, subj_3) {

		}
		std::string getType() const {
			return "B";
		}
		~Student_Classify_B() {

		}
};

/*Student C*/
class Student_Classify_C : public Student {
	public:
		Student_Classify_C(std::string _id, std::string _full_name, std::string _address, int _priority, std::string subj_1 = "Literature", std::string subj_2 = "Historical", std::string subj_3 = "Geography") :Student(_id, _full_name, _address, _priority, subj_1, subj_2, subj_3) {

		}
		std::string getType() const {
			return "C";
		}
		~Student_Classify_C() {

		}
};

#endif