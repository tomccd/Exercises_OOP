#include "../header/Receipt.hpp"

int Receipt::calcMoney() {
	return (this->current_number - this->old_number) * 5;
}

void Receipt::display() {
	std::cout << "ID Contactor: " << this->id_contacter << " | " << "House Number: " << this->house_number << " | " << "Full Name: " << this->full_name << " | " << "Old Number: " << this->old_number << "Current Number: " << this->current_number << " | " << "Money to Paid: " << this->calcMoney() << std::endl;
}
