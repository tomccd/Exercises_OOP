#ifndef __MANAGER
#define __MANAGER
#include "./Receipt.hpp"

class Receipt_Manager {
	public:
		std::vector<Receipt*>list_receipt;
		/*Display all receipt*/
		void display();
		/*Add Receipt*/
		void addReceipt(Receipt* receipt);
		/*Check If id_contactor was existed*/
		bool checkIDExisted(std::string _id);
		/*Delete Receipt using id_contactor*/
		void deleteReceipt(std::string _id);
		~Receipt_Manager() {
			for (auto receipt : list_receipt) {
				delete(receipt);
			}
		}
};

#endif // !__MANAGER
