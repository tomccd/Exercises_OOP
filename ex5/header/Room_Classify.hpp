#ifndef __ROOMS__
#define __ROOMS__
class Rooms {
	public:
		int price;
		Rooms(int _price) {
			this->price = _price;
		}
		virtual std::string getType() const = 0;
		virtual ~Rooms() {
		
		}
};

class Room_Type_A :public Rooms {
	public:
		Room_Type_A(int _price=500) :Rooms(_price) {

		}
		std::string getType() const {
			return "A";
		}
		~Room_Type_A() {

		}
};

class Room_Type_B : public Rooms {
	public:
		Room_Type_B(int _price=300) :Rooms(_price) {

		}
		std::string getType() const {
			return "B";
		}
		~Room_Type_B() {

		}
};

class Room_Type_C : public Rooms {
public:
	Room_Type_C(int _price=100) :Rooms(_price) {

	}
	std::string getType() const {
		return "C";
	}
	~Room_Type_C() {

	}
};

#endif

