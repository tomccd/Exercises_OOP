#include "../header/Candidate_Manager.hpp"

int main() {
	Candidate_Manager manager;
	std::string _full_name;
	int _birthday_date[3]; // dd/mm/yyyy
	std::string _sex;
	std::string _phone_number;
	std::string _university_name;
	std::string _grade_Level;
	double _gpa;
	std::string _BestRewardName;
	int _Toeic_Score;
	int _entry_Test; //0->10
	int _number_candidate;
	while (1) {
		std::cout << "\n-----------------------------------\n";
		manager.clearCandidate();
		manager.clearNumPassed();
		std::cout << "Application Candidate Manager\n";
		std::cout << "Select 1: To insert candidate\n";
		std::cout << "Select 2: To display all passed candidate\n";
		std::cout << "Select 3: To exit\n";
		std::cout << "Your option: ";
		int option;
		int counter = 0;
		std::cin >> option;
		switch (option) {
			case 1:
				std::cout << "\n-----------------------------------\n";
				std::cout << "Insert number_candidate_expected: ";
				std::cin >> manager.number_expected;
				while (manager.number_expected < 10 || manager.number_expected>15) {
					std::cout << "Wrong Input. Try Again\n";
					std::cout << "Insert number_candidate_expected: ";
					std::cin >> manager.number_expected;
				}
				std::cout << "Insert number_candidate: ";
				std::cin >> _number_candidate;
				while (_number_candidate <= 0) {
					std::cout << "Wrong Input. Try Again\n";
					std::cout << "Insert number_candidate: ";
					std::cin >> _number_candidate;
				}
				while (counter < _number_candidate) {
					std::cout << "\n-----------------------------------\n";
					std::cout << "Enter a: To select GoodStudent\n";
					std::cout << "Enter b: To select NormalStudent\n";
					char option_1;
					std::cout << "Your choice: ";
					std::cin >> option_1;
					switch (option_1) {
						case 'a':
							std::cout << "\n-----------------------------------\n";
							std::cout << "Enter Full Name: ";
							std::cin.ignore();
							std::getline(std::cin, _full_name);
							while (!manager.isNameValid(_full_name)) {
								std::cout << "Wrong Input. Try Again\n";
								std::cout << "Enter Full Name: ";
								std::getline(std::cin, _full_name);
							}
							std::cout << "Birthday Date (DD/MM/YYYY): ";
							std::cin >> _birthday_date[0] >> _birthday_date[1] >> _birthday_date[2];
							while (!manager.isDateValid(_birthday_date[0], _birthday_date[1], _birthday_date[2])) {
								std::cout << "Wrong Input. Try Again\n";
								std::cout << "Birthday Date (DD/MM/YYYY): ";
								std::cin >> _birthday_date[0] >> _birthday_date[1] >> _birthday_date[2];
							}
							std::cout << "Enter Sex: ";
							std::cin.ignore();
							std::getline(std::cin, _sex);
							std::cout << "Enter University Name: ";
							std::getline(std::cin, _university_name);
							std::cout << "Enter Phone Number: ";
							std::getline(std::cin, _phone_number);
							while (!manager.isPhoneNumberValid(_phone_number)) {
								std::cout << "Wrong Input. Try Again\n";
								std::cout << "Enter Phone Number: ";
								std::getline(std::cin, _phone_number);
							}
							std::cout << "Enter Grade Level: ";
							std::getline(std::cin, _grade_Level);
							std::cout << "Enter Best Reward: ";
							std::cin.ignore();
							std::getline(std::cin, _BestRewardName);
							std::cout << "Enter GPA: ";
							std::cin >> _gpa;
							manager.insertCandidate(new GoodStudent(_full_name, _birthday_date[0], _birthday_date[1], _birthday_date[2], _sex, _phone_number, _university_name, _grade_Level, _gpa, _BestRewardName));
							break;
						case 'b':
							std::cout << "\n-----------------------------------\n";
							std::cout << "Enter Full Name: ";
							std::cin.ignore();
							std::getline(std::cin, _full_name);
							while (!manager.isNameValid(_full_name)) {
								std::cout << "Wrong Input. Try Again\n";
								std::cout << "Enter Full Name: ";
								std::getline(std::cin, _full_name);
							}
							std::cout << "Birthday Date (DD/MM/YYYY): ";
							std::cin >> _birthday_date[0] >> _birthday_date[1] >> _birthday_date[2];
							while (!manager.isDateValid(_birthday_date[0], _birthday_date[1], _birthday_date[2])) {
								std::cout << "Wrong Input. Try Again\n";
								std::cout << "Birthday Date (DD/MM/YYYY): ";
								std::cin >> _birthday_date[0] >> _birthday_date[1] >> _birthday_date[2];
							}
							std::cout << "Enter Sex: ";
							std::cin.ignore();
							std::getline(std::cin, _sex);
							std::cout << "Enter University Name: ";
							std::getline(std::cin, _university_name);
							std::cout << "Enter Phone Number: ";
							std::getline(std::cin, _phone_number);
							while (!manager.isPhoneNumberValid(_phone_number)) {
								std::cout << "Wrong Input. Try Again\n";
								std::cout << "Enter Phone Number: ";
								std::getline(std::cin, _phone_number);
							}
							std::cout << "Enter Grade Level: ";
							std::getline(std::cin, _grade_Level);
							std::cout << "Enter Entry Test Score: ";
							std::cin >> _entry_Test;
							while (_entry_Test < 0 || _entry_Test > 10) {
								std::cout << "Wrong Input. Try Again\n";
								std::cout << "Enter Entry Test Score: ";
								std::cin >> _entry_Test;
							}
							std::cout << "Enter Toeic Score: ";
							std::cin >> _Toeic_Score;
							while (_Toeic_Score < 0 || _Toeic_Score>990) {
								std::cout << "Wrong Input. Try Again\n";
								std::cout << "Enter Toeic Score: ";
								std::cin >> _Toeic_Score;
							}
							manager.insertCandidate(new NormalStudent(_full_name, _birthday_date[0], _birthday_date[1], _birthday_date[2], _sex, _phone_number, _university_name, _grade_Level, _Toeic_Score, _entry_Test));
							break;
					}
					counter++;
				}
				manager.insertPassCandidate();
				counter = 0;
				break;
			case 2:
				std::cout << "\n-----------------------------------\n";
				manager.displayAllPassedCandidate();
				break;
			case 3:
				std::cout << "\n-----------------------------------\n";
				std::cout << "Exit\n";
				return 0;

		}
	}
}