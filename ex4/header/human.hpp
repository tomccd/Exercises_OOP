#ifndef __HUMAN__
#define __HUMAN__
#include <vector>
#include <string>
#include <iostream>

class Human {
	public:
		std::string id; //unique
		std::string full_name;
		int age;
		std::string job;
		Human(std::string _id, std::string _full_name, int _age, std::string _job) {
			this->id = _id;
			this->full_name = _full_name;
			this->age = _age;
			this->job = _job;
		}
		void display(){
			std::cout << "\nID: " << this->id << " | " << "Full Name: " << this->full_name << " | " << "Age: " << this->age << " | " << "Job: " << this->job << std::endl;
		}
		~Human() {

		}
};
#endif // !__HUMAN__
