#include "../header/Certificate.hpp"

/*Display Information about Certificate*/
void Certificate::display() {
	std::cout << "ID: " << this->id << " | " << "Name: " << this->name << " | " << "Rank: " << this->rank << " | " << "Year: " << this->cer_date[0] << " | " << "Date: " << this->cer_date[1] << " | " << "Month: " << this->cer_date[2] << " | " << std::endl;
}