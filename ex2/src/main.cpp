#include "../header/docs_manager.hpp"

#ifndef __DOCS_CLASSIFY__
#include "../header/docs_classify.hpp"
#endif

int main() {
	Library_Manager lib_manager;
	std::string _id;
	std::string _publisher_name;
	int _publish_count;
	std::string _author;
	int _num_page;
	int _publish_num_version;
	int _month_publish;
	std::string _date_publish;
	while (1) {
		std::cout << "\n----------------------------------\n";
		std::cout << "Application Library Manager\n";
		int option;
		std::cout << "Enter 1: To insert Document\n";
		std::cout << "Enter 2: To search Document by type and publisher name\n";
		std::cout << "Enter 3: To delete Document using id\n";
		std::cout << "Enter 4: To show information Documents\n";
		std::cout << "Enter 5: To exit\n";
		std::cout << "Your Option: ";
		std::cin >> option;
		switch (option) {
			case 1:
				std::cout << "\n----------------------------------\n";
				std::cout << "Enter b: To insert Book\n";
				std::cout << "Enter m: To insert Magazine\n";
				std::cout << "Enter n: To insert Newspaper\n";
				char option_1;
				std::cout << "Your option: ";
				std::cin >> option_1;
				switch (option_1) {
					case 'b':
						std::cout << "\n----------------------------------\n";
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin,_id);
						std::cout << "Enter Publisher Name: ";
						std::getline(std::cin, _publisher_name);
						std::cout << "Enter the Number of Docs publised: ";
						std::cin >> _publish_count;
						while (_publish_count < 0) {
							std::cout << "Wrong input.Please type again.\n";
							std::cout << "Enter the Number of Docs publised: ";
							std::cin >> _publish_count;
						}
						std::cout << "Enter the name of author: ";
						std::cin.ignore();
						std::getline(std::cin, _author);
						std::cout << "Enter the number of pages: ";
						std::cin >> _num_page;
						while (_num_page<0) {
							std::cout << "Wrong input.Please type again.\n";
							std::cout << "Enter the number of pages: ";
							std::cin >> _num_page;
						}
						lib_manager.insertDocument(new Books(_id, _publisher_name, _publish_count, _author, _num_page));
						break;
					case 'm':
						std::cout << "\n----------------------------------\n";
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id);
						std::cout << "Enter Publisher Name: ";
						std::getline(std::cin, _publisher_name);
						std::cout << "Enter the Number of Docs publised: ";
						std::cin >> _publish_count;
						while (_publish_count < 0) {
							std::cout << "Wrong input.Please type again.\n";
							std::cout << "Enter the Number of Docs publised: ";
							std::cin >> _publish_count;
						}
						std::cout << "Enter the Publish Number Version: ";
						std::cin >> _publish_num_version;
						std::cout << "Enter the Month that the Magazine publised: ";
						std::cin >> _month_publish;
						while (_month_publish >12 || _month_publish < 0) {
							std::cout << "Wrong input.Please type again.\n";
							std::cout << "Enter the Month that the Magazine publised: ";
							std::cin >> _month_publish;
						}
						lib_manager.insertDocument(new Magazines(_id, _publisher_name
							, _publish_count, _publish_num_version, _month_publish));
						break;
					case 'n':
						std::cout << "\n----------------------------------\n";
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id);
						std::cout << "Enter Publisher Name: ";
						std::getline(std::cin, _publisher_name);
						std::cout << "Enter the Number of Docs publised: ";
						std::cin >> _publish_count;
						while (_publish_count < 0) {
							std::cout << "Wrong input.Please type again.\n";
							std::cout << "Enter the Number of Docs publised: ";
							std::cin >> _publish_count;
						}
						std::cout << "Enter the date that Newspaper published: ";
						std::cin.ignore();
						std::getline(std::cin, _date_publish);
						lib_manager.insertDocument(new Newspapers(_id, _publisher_name, _publish_count, _date_publish));
						break;
				}
				break;
			case 2:
				std::cout << "\n----------------------------------\n";
				std::cout << "Enter b: To search in Book\n";
				std::cout << "Enter m: To search in Magazine\n";
				std::cout << "Enter n: To search in Newspaper\n";
				char option_2;
				std::cout << "Your option: ";
				std::cin >> option_2;
				switch (option_2) {
					case 'b':
						std::cout << "\n----------------------------------\n";
						std::cout << "Enter Publisher Name of Book to search: ";
						std::cin.ignore();
						std::getline(std::cin, _publisher_name);
						lib_manager.displayDocument(lib_manager.searchDocument("Books", _publisher_name));
						break;
					case 'm':
						std::cout << "\n----------------------------------\n";
						std::cout << "Enter Publisher Name of Magazine to search: ";
						std::cin.ignore();
						std::getline(std::cin, _publisher_name);
						lib_manager.displayDocument(lib_manager.searchDocument("Magazines", _publisher_name));
						break;
					case 'n':
						std::cout << "\n----------------------------------\n";
						std::cout << "Enter Publisher Name of Newspaper to search: ";
						std::cin.ignore();
						std::getline(std::cin, _publisher_name);
						lib_manager.displayDocument(lib_manager.searchDocument("Newspaper", _publisher_name));
						break;
				}
				break;
			case 3:
				std::cout << "\n----------------------------------\n";
				std::cout << "Enter id to delete: ";
				std::cin.ignore();
				std::getline(std::cin, _id);
				lib_manager.deleteDocument(_id);
				break;
			case 4:
				std::cout << "\n----------------------------------\n";
				std::cout << "Show List: \n";
				lib_manager.displayDocument();
				break;
			case 5:
				std::cout << "\n----------------------------------\n";
				std::cout << "Exit\n";
				return 0;

		}
	}
}
