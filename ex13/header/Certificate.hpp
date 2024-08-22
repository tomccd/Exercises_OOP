#ifndef __CERTIFICATE__
#define __CERTIFICATE__
#include <vector>
#include <string>
#include <iostream>

class Certificate {
	public:
		std::string id; //unique
		std::string name;
		std::string rank;
		int cer_date[3]; //yyyy-dd-mm
		Certificate(std::string _id, std::string _name, std::string _rank, int _year, int _date, int _month) {
			this->id = _id;
			this->name = _name;
			this->rank = _rank;
			this->cer_date[0] = _year;
			this->cer_date[1] = _date;
			this->cer_date[2] = _year;
		}
		//Display Certificate
		void display();
		~Certificate() {

		}
};

#endif