#include "../header/docs_manager.hpp"

Documents* Library_Manager::searchDocument(std::string _id) {
	if (doc_lists.size() != 0) {
		for (auto doc : doc_lists) {
			if (doc->id == _id) {
				return doc;
			}
		}
	}
	return nullptr;
}

/*Definition of Search Document by type and publisher name*/
Documents* Library_Manager::searchDocument(const std::string typeOfObj,std::string _publisher_name) {
	if (doc_lists.size() != 0) {
		for (auto doc : doc_lists) {
			if (doc->getType() == typeOfObj && doc->publisher_name == _publisher_name) {
				return doc;
			}
		}
	}
	return nullptr;
}


/*Definition of Insert Document*/
bool Library_Manager::insertDocument(Documents* doc) {
	if (this->searchDocument(doc->id) == nullptr) {
		doc_lists.push_back(doc);
		return true;
	}
	else {
		std::cout << "Can't insert the id that existed in library\n";
		return false;
	}
}

/*Definition of detete Document*/
bool Library_Manager::deleteDocument(std::string _id) {
	if (doc_lists.size() != 0) {
		for (int i = 0; i < doc_lists.size(); i++) {
			if (doc_lists[i]->id == _id) {
				doc_lists.erase(doc_lists.begin() + i);
				return true;
			}
		}
		std::cout << "Can't find that id to erase\n";
		return false;
	}
	std::cout << "The library is empty\n";
	return false;
}

/*Display all Document in Library*/
void Library_Manager::displayDocument() {
	if (doc_lists.size() != 0) {
		for (auto doc : doc_lists) {
			doc->display();
		}
	}
	else {
		std::cout << "The library is empty\n";
	}
}

/*Display once*/
void Library_Manager::displayDocument(Documents* doc) {
	if (doc_lists.size() != 0) {
		if (doc != nullptr) {
			doc->display();
		}
		else {
			std::cout << "Can't find the id that match the id given\n";
		}
	}
	else {
		std::cout << "The library is empty\n";
	}
}
