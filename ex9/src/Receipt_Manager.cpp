#include "../header/Receipt_Manager.hpp"

/*Check if id_contactor was existed*/
bool Receipt_Manager::checkIDExisted(std::string _id) {
	if (this->list_receipt.size() != 0) {
		for (auto receipt : list_receipt) {
			if (receipt->id_contacter == _id) {
				return true;
			}
		}
	}
	return false;
}
/*Display all receipt*/
void Receipt_Manager::display() {
	if (this->list_receipt.size() != 0) {
		for (auto receipt : list_receipt) {
			receipt->display();
		}
	}
	else {
		std::cout << "List is empty\n";
	}
}

/*Add Receipt*/
void Receipt_Manager::addReceipt(Receipt* receipt) {
	if (!this->checkIDExisted(receipt->id_contacter)) {
		this->list_receipt.push_back(receipt);
	}
	else {
		std::cout << "This Contactor ID was existed\n";
	}
}

/*Delete Receipt using id_contactor*/
void Receipt_Manager::deleteReceipt(std::string _id) {
	if (this->checkIDExisted(_id)) {
		for (int i = 0; i < list_receipt.size(); i++) {
			if (list_receipt[i]->id_contacter == _id) {
				this->list_receipt.erase(list_receipt.begin() + i);
			}
		}
	}
	else {
		std::cout << "List didn't contain that id\n";
	}
}
