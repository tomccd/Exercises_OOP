#include "../header/manage_residential_area.hpp"

/*Definition of CheckIDExists Method -> Check if ID is existed in another House Hold*/
bool Manage_Residential::checkIDExists(std::string _id) {
	if (manage_residential.size() != 0) {
		for (auto house_hold : manage_residential) {
			if (house_hold->checkExists(_id)) {
				return true;
			}
		}
	}
	return false;
}

/*Defintion of checkHouseNumber Method -> Check if HouseHold Number is existed*/
bool Manage_Residential::checkHouseNumberExists(int house_number) {
	if (manage_residential.size() != 0) {
		for (auto house_hold : manage_residential) {
			if (house_hold->house_number == house_number) {
				return true;
			}
		}
	}
	return false;
}

/*Definition of Add House Hold method -> add House Hold into residential*/
void Manage_Residential::add_House_Hold(House_Hold* house_hold) {
	//Check if the id of the human in this house hold is the same as another house_hold's members
	for (auto human : house_hold->house_hold) {
		if (this->checkIDExists(human->id)) {
			std::cout << "This ID is existed in another house hold\n";
			return;
		}
	}
	if (this->checkHouseNumberExists(house_hold->house_number)) {
		std::cout << "This House Hold Number is existed\n";
		return;
	}
	this->manage_residential.push_back(house_hold);
}

/**/
void Manage_Residential::show_House_Hold() {
	if (manage_residential.size() != 0) {
		for (auto house_hold : manage_residential) {
			std::cout << "\nHouse Hold " << house_hold->house_number << " lists all its member: ";
			house_hold->showMember();
		}
	}
	else {
		std::cout << "This Residential Area is empty\n";
	}
}