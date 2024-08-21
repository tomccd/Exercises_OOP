#include "../header/Document.hpp"

int main() {
	Document doc;
	std::string _str;
	char given_char;
	while (1) {
		std::cout << "\n---------------------------------\n";
		std::cout << "Application Optimize Document\n";
		std::cout << "Enter 1: Enter Document\n";
		std::cout << "Enter 2: Show Length Document\n";
		std::cout << "Enter 3: Optimize the Document\n";
		std::cout << "Enter 4: To display\n";
		std::cout << "Enter 5: To exit\n";
		int option;
		std::cout << "Your choice: ";
		std::cin >> option;
		switch (option) {
			case 1:
				std::cout << "\n---------------------------------\n";
				std::cout << "Enter Document: ";
				std::cin.ignore();
				std::getline(std::cin, doc.myString);
				break;
			case 2:
				std::cout << "\n---------------------------------\n";
				std::cout << "Enter a: To show length of Document\n";
				std::cout << "Enter b: To show number of given character in Document\n";
				char option_2;
				std::cout << "Your choice: ";
				std::cin >> option_2;
				switch (option_2) {
					case 'a':
						std::cout << "Total Character in this Doc: " << doc.calcChar() << std::endl;
						break;
					case 'b':
						std::cout << "Enter the char: ";
						std::cin >> given_char;
						std::cout << "Total Character " <<  given_char <<"in this Doc: " << doc.calcChar() << std::endl;
						break;
				}
				break;
			case 3:
				std::cout << "\n---------------------------------\n";
				doc.optimizeString();
				break;
			case 4:
				std::cout << "\n---------------------------------\n";
				doc.display();
				break;
			case 5:
				std::cout << "\n---------------------------------\n";
				std::cout << "Exit\n";
				return 0;
		}
	}
}