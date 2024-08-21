#include "../header/Document.hpp"

/*Display*/
void Document::display() {
	if (this->myString.length() != 0) {
		std::cout << this->myString;
	}
	else {
		std::cout << "Document is empty\n";
	}
}

/*Calculate Character in this Document*/
int Document::calcChar() {
	return this->myString.length();
}
/*Calculate given Character in this Document*/
int Document::calcChar(const char given_char) {
	int counter = 0;
	for (int i = 0; i < myString.length(); i++) {
		if (myString[i] == given_char) {
			counter++;
		}
	}
	return counter;
}

/**/
bool Document::isCorrect() {
	if (this->myString.length() == 0) {
		return true;
	}
	else {
		/*If the begin and the end of the word is space*/
		if (*(this->myString.begin()) == 32 || *(this->myString.end() - 1) == 32) {
			return false;
		}
		else {
			for (int i = 0; i < myString.length()-1; i++) {
				if (myString[i] == 32 && myString[i + 1] == 32) {
					return false;
				}
			}
		}
		return true;
	}
}
/*Optimize Given String*/

void Document::optimizeString() {
	if (this->myString.length() == 0) {
		std::cout << "This Document is empty\n";
	}
	else {
		while (!this->isCorrect()) {
			if (*(this->myString.begin()) == 32|| *(this->myString.end() - 1) == 32) {
				if (*(this->myString.begin()) == 32) {
					this->myString.erase(myString.begin());
				}
				if (*(this->myString.end() - 1) == 32) {
					this->myString.erase(myString.end()-1);
				}
			}
			else {
				for (int i = 0; i < myString.length() - 1; i++) {
					if (myString[i] == 32 && myString[i + 1] == 32) {
						this->myString.erase(myString.begin() + i);
					}
				}
			}
		}
		this->display();
	}
}