#ifndef __HOUSE_HOLD__
#define __HOUSE_HOLD__
#include "./human.hpp"
class House_Hold {
	public:
		std::vector<Human*>house_hold;
		int number_member;
		int house_number;
		House_Hold(int _number_member, int _house_number) {
			this->number_member = _number_member;
			this->house_number = _house_number;
		}
		/*Add member to house hold*/
		void addMember(Human* _human);
		/*Show all member in House Hold*/
		void showMember();
		/*Check if ID is existed in this house*/
		bool checkExists(std::string _id);
		~House_Hold() {

		}
};
#endif // !__HOUSE_HOLD__


