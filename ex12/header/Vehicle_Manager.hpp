#ifndef __MANAGER
#define __MANAGER

#include "./Vehicle_Classify.hpp"

class Vehicle_Manager {
	public:
		std::vector<Vehicle* >vct_vehicle_manager;
		/*Insert Vehicle*/
		void insertVehicle(Vehicle* vehicle);
		/*Delete Vehicle using id*/
		void deleteVehicle(std::string _id);
		/*Check if ID was existed*/
		bool isIDExisted(std::string _id);
		/*Find vehicle with condition: Label, Color*/
		Vehicle* findVehicle(std::string _condition, std::string _value2Find);
		/*Display*/
		void display();
		void display(Vehicle* vehicle);
		~Vehicle_Manager() {
			for (auto vehicle : vct_vehicle_manager) {
				delete(vehicle); //release obj
			}
		}
};

#endif