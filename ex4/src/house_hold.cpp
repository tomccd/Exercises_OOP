#include "../header/house_hold.hpp"

/*Definition of checkExists method -> Check if ID is existed in this house*/
bool House_Hold::checkExists(std::string _id) {
	if (house_hold.size() != 0) {
		for (auto human : house_hold) {
			if (human->id == _id) {
				return true;
			}
		}
	}
	return false;
}

/*Defintion of addMember method*/
void House_Hold::addMember(Human* _human) {
	if (!this->checkExists(_human->id)) {
		house_hold.push_back(_human);
	}
	else {
		std::cout << "ID is existed in this house hold\n";
	}
}
/*Definition of show member method*/
void House_Hold::showMember() {
	if (house_hold.size() != 0) {
		for (auto human : house_hold) {
			human->display();
		}
	}
	else {
		std::cout << "This House Hold is empty\n";
	}
}