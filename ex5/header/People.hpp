#ifndef __PEOPLE__
#define __PEOPLE__
#include <vector>
#include <utility>
#include <string>
#include <iostream>
class Human {
	public:
		std::string full_name;
		int age;
		std::string id; //unique
		int day_stay;
		Human(std::string _full_name, int _age, std::string _id, int _day_stay) {
			this->full_name = _full_name;
			this->age = _age;
			this->id = _id;
			this->day_stay = _day_stay;
		}
		~Human() {

		}
};

#endif