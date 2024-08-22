#include "../header/Vehicle_Classify.hpp"
/*Display Car*/
std::string Car::getType() const {
	return "Car";
}
void Car::display() {
	std::cout << "ID: " << this->id << " | " << "Type Vehicle: " << this->getType() << " | " << "Brand: " << this->label << " | " << "Year publish: " << this->year_publish << " | " << "Price: " << this->price << " | " << "Color: " << this->color << " | " << "Number Seat: " << this->num_seat << " | " << "Engine Type: " << this->engine_type << std::endl;
}

/*Display Motorbike*/
std::string MotorBike::getType() const {
	return "MotorBike";
}
void MotorBike::display() {
	std::cout << "ID: " << this->id << " | " << "Type Vehicle: " << this->getType() << " | " << "Brand: " << this->label << " | " << "Year publish: " << this->year_publish << " | " << "Price: " << this->price << " | " << "Color: " << this->color << " | " << "Power Horse: " << this->horse_power << std::endl;
}

/*Display Truck*/
std::string Truck::getType() const {
	return "Truck";
}
void Truck::display() {
	std::cout << "ID: " << this->id << " | " << "Type Vehicle: " << this->getType() << " | " << "Brand: " << this->label << " | " << "Year publish: " << this->year_publish << " | " << "Price: " << this->price << " | " << "Color: " << this->color << " | " << "Weight: " << this->weight;
}