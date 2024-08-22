#ifndef __VEHICLE_CLASSIFY
#define __VEHICLE_CLASSIFY

#include <vector>
#include <string>
#include <iostream>

/*Vehicle*/
class Vehicle {
	public:
		std::string id; //unique
		std::string label;
		int year_publish;
		int price;
		std::string color;
		Vehicle(std::string _id, std::string _label, int _year_publish, int _price, std::string _color) {
			this->id = _id;
			this->label = _label;
			this->year_publish = _year_publish;
			this->price = _price;
			this->color = _color;
		}
		virtual void display() = 0;
		virtual std::string getType() const = 0;
		~Vehicle() {

		}
};

/*Car*/
class Car :public Vehicle {
	public:
		int num_seat;
		std::string engine_type;
		Car(std::string _id, std::string _label, int _year_publish, int _price, std::string _color, int _num_seat, std::string _engine_type) :Vehicle(_id, _label, _year_publish, _price, _color) {
			this->num_seat = _num_seat;
			this->engine_type = _engine_type;
		}
		void display();
		std::string getType() const;
		~Car() {

		}
};

/*Motorbike*/
class MotorBike :public Vehicle {
	public:
		std::string horse_power;
		MotorBike(std::string _id, std::string _label, int _year_publish, int _price, std::string _color, std::string _horse_power) :Vehicle(_id, _label, _year_publish, _price, _color) {
			this->horse_power = _horse_power;
		}
		void display();
		std::string getType() const;
		~MotorBike() {

		}
};

/*Truck*/
class Truck :public Vehicle {
	public:
		int weight;
		Truck(std::string _id, std::string _label, int _year_publish, int _price, std::string _color, int _weight) :Vehicle(_id, _label, _year_publish, _price, _color) {
			this->weight = _weight;
		}
		void display();
		std::string getType() const;
		~Truck() {

		}
};
#endif