#ifndef __MANAGE_RESIDENTIAL__
#define __MANAGE_RESIDENTIAL__
#include "./house_hold.hpp"
class Manage_Residential {
	public:
		std::vector<House_Hold*>manage_residential;
		/*Add House Hold to Residential Area*/
		void add_House_Hold(House_Hold *house_hold);
		/*Show all House Hold */
		void show_House_Hold();
		/*Check if ID is existed in another House Hold*/
		bool checkIDExists(std::string id);
		/*Check if house_number is existed*/
		bool checkHouseNumberExists(int house_number);
};

#endif // !__MANAGE_RESIDENTIAL__
