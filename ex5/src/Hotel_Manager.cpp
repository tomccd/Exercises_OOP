#include "../header/Hotel_Manager.hpp"

//Calculate the monet
int Hotel_Manager::calcMoney(std::pair<Human*, Rooms*>element) {
	return element.first->day_stay * element.second->price;
}

//Display all people and their information in this hotel
void Hotel_Manager::display() {
	for (auto pair : vct_pair_human_room) {
		std::cout << "\nID: " << pair.first->id << " | " << "Full Name: " << pair.first->full_name << " | " << "Age: " << pair.first->age << " | " << "Type Room: " << pair.second->getType() << " | " << "Price: " << pair.second->price << " | " << "Day Stay: " << pair.first->day_stay << " | " << "Total money to pay: " << this->calcMoney(pair) << std::endl;
	}
}

//Check if ID is existed or not
bool Hotel_Manager::isIDExists(std::string _id) {
	if (vct_pair_human_room.size() != 0) {
		for (auto pair : vct_pair_human_room) {
			if (pair.first->id == _id) {
				return true;
			}
		}
	}
	return false;
}

//Add pair of Instance of People and Instance of Rooms into vector
void Hotel_Manager::addElement(std::pair<Human*, Rooms*>element) {
	if (!this->isIDExists(element.first->id)) {
		vct_pair_human_room.push_back(element);
	}
	else {
		std::cout << "This ID is existed\n";
	}
}

//Delete based on ID
void Hotel_Manager::deleteByID(std::string _id) {
	if (this->isIDExists(_id)) {
		for (int i = 0; i < vct_pair_human_room.size(); i++) {
			if (vct_pair_human_room[i].first->id == _id) {
				vct_pair_human_room.erase(vct_pair_human_room.begin() + i);
			}
		}
	}
	else {
		std::cout << "This ID is not existed to delete\n";
	}
}

