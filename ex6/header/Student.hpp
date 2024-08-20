#ifndef __STUDENT__
#define __STUDENT__

#include <vector>
#include <string>
#include <iostream>

class Student {
	public:
		std::string full_name;
		std::string home_address;
		int age;
		Student(std::string _full_name, std::string _home_address, int _age) {
			this->full_name = _full_name;
			this->age = _age;
			this->home_address = _home_address;
		}
		~Student() {

		}
};
#endif // !__STUDENT__
