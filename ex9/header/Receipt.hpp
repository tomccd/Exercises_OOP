#ifndef __Receipt__
#define __Receipt__

#include <vector>
#include <string>
#include <iostream>

class Customer {
	public:
		std::string full_name;
		std::string house_number;
		std::string id_contacter;
		Customer(std::string _full_name, std::string _house_number, std::string _id_contacter) {
			this->full_name = _full_name;
			this->house_number = _house_number;
			this->id_contacter = _id_contacter;
		}
};

class Receipt : public Customer {
	public:
		int old_number;
		int current_number;
		Receipt(std::string _full_name, std::string _house_number, std::string _id_contacter, int _old_number, int _current_number) :Customer(_full_name, _house_number, _id_contacter) {
			this->old_number = _old_number;
			this->current_number = _current_number;
		}
		void display();
		int calcMoney();
		~Receipt() {

		}
};
#endif