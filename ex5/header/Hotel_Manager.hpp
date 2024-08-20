#ifndef __Hotel_Manager__
#define __Hotel_Manager__
#include "./People.hpp"
#include "./Room_Classify.hpp"
class Hotel_Manager {
	public:
		/*Vector contains pairs of Instance of Human and Instance of Rooms */
		std::vector<std::pair<Human*, Rooms*>>vct_pair_human_room;
		Hotel_Manager() {

		}
		/*Add pair of Instance of Human and Instance of Room into vector*/
		void addElement(std::pair<Human*, Rooms*>element);
		/*Check if ID is Existed in Hotel*/
		bool isIDExists(std::string _id);
		/*Delete element by ID of People*/
		void deleteByID(std::string _id);
		/*Calculate Money based on type of room and day stay*/
		int calcMoney(std::pair<Human*, Rooms*>element);
		/*Display all*/
		void display();
		~Hotel_Manager() {

		}
};
#endif