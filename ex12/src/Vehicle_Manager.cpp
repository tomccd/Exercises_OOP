#include "../header/Vehicle_Manager.hpp"

/*Insert Vehicle*/
void Vehicle_Manager::insertVehicle(Vehicle* vehicle) {
	if (!this->isIDExisted(vehicle->id)) {
		vct_vehicle_manager.push_back(vehicle);
	}
	else {
		std::cout << "This ID was existed\n";
	}
}
/*Delete Vehicle using id*/
void Vehicle_Manager::deleteVehicle(std::string _id) {
	if (vct_vehicle_manager.size() != 0) {
		if (this->isIDExisted(_id)) {
			for (int i = 0; i < vct_vehicle_manager.size(); i++) {
				if (vct_vehicle_manager[i]->id == _id) {
					vct_vehicle_manager.erase(vct_vehicle_manager.begin() + i);
					break;
				}
			}
		}
		else {
			std::cout << "List doesn't contain this id\n";
		}
	}
	else {
		std::cout << "List is empty\n";
	}
}
/*Check if ID was existed*/
bool Vehicle_Manager::isIDExisted(std::string _id) {
	if (vct_vehicle_manager.size() != 0) {
		for (auto vehicle : vct_vehicle_manager) {
			if (vehicle->id == _id) {
				return true;
			}
		}
	}
	return false;
}
/*Find vehicle with condition: Label, Color*/
Vehicle* Vehicle_Manager::findVehicle(std::string _condition, std::string _value2Find) {
	if (vct_vehicle_manager.size() != 0) {
		if (_condition == "Brand") {
			for (auto vehicle : vct_vehicle_manager) {
				if (vehicle->label == _value2Find) {
					return vehicle;
				}
			}
		}
		else if (_condition == "Color") {
			for (auto vehicle : vct_vehicle_manager) {
				if (vehicle->color == _value2Find) {
					return vehicle;
				}
			}
		}
	}
	return nullptr;
}

/*Display all*/
void Vehicle_Manager::display() {
	if (vct_vehicle_manager.size() != 0) {
		for (auto vehicle : vct_vehicle_manager) {
			vehicle->display();
		}
	}
	else {
		std::cout << "List is empty\n";
	}
}

/*Display once*/
void Vehicle_Manager::display(Vehicle* vehicle) {
	if (vehicle != nullptr) {
		vehicle->display();
	}
	else {
		std::cout << "Can't find that vehicle to display\n";
	}
}
