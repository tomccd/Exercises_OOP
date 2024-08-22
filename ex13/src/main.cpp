#include "../header/Employee_Manager.hpp"

int main() {
	Employee_Manager manager;
	std::string _id_employee;
	std::string _full_name;
	int _birthday[3]; //YYYY-DD-MM
	std::string _phone_number;
	std::string _email;
	std::string _id_cer; //unique
	std::string _name_cer;
	std::string _rank;
	std::string _proskill;
	std::string _education;
	std::string _major;
	int _semester;
	std::string _university_name;
	std::vector<Certificate*>ls_cer;
	int cer_date[3]; //yyyy-dd-mm
	int gra_date[3]; //yyyy-dd-mm
	int counter = 0;
	int yExp;
	while (1) {
		std::cout << "\n-----------------------------------------------------\n";
		std::cout << "Application Employee Manager\n";
		std::cout << "Select 1: Insert new Employee\n";
		std::cout << "Select 2: Delete Employee using ID\n";
		std::cout << "Select 3: Show All Information of Employee\n";
		std::cout << "Select 4: Show Information of Employee with Type Employee\n";
		std::cout << "Select 5: To exit\n";
		int option;
		std::cout << "Your choice: ";
		std::cin >> option;
		switch (option) {
			case 1:
				std::cout << "\n-----------------------------------------------------\n";
				std::cout << "Select Type Of Employee: \n";
				std::cout << "Select a: Experience\n";
				std::cout << "Select b: Fresher\n";
				std::cout << "Select c: Intern\n";
				char option_2;
				std::cout << "Your choice: ";
				std::cin >> option_2;
				switch (option_2) {
					case 'a':
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id_employee);
						while (manager.isID_employeeExisted(_id_employee)) {
							std::cout << "This ID was existed. Please try again\n";
							std::cout << "Enter ID: ";
							std::getline(std::cin, _id_employee);
						}
						std::cout << "Enter Full Name: ";
						std::getline(std::cin, _full_name);
						std::cout << "Enter Birthday (YYYY/DD/MM): ";
						std::cin >> _birthday[0] >> _birthday[1] >> _birthday[2];
						while (!manager.isDateValid(_birthday[0], _birthday[1], _birthday[2])) {
							std::cout << "This Date isn't valid. Please try again\n";
							std::cout << "Enter Birthday (YYYY/DD/MM): ";
							std::cin >> _birthday[0] >> _birthday[1] >> _birthday[2];
						}
						std::cout << "Enter Phone Number: ";
						std::cin.ignore();
						std::getline(std::cin, _phone_number);
						while (!manager.isPhoneNumberValid(_phone_number)) {
							std::cout << "This Phone Number isn't valid. Please try again\n";
							std::cout << "Enter Phone Number: ";
							std::getline(std::cin, _phone_number);
						}
						std::cout << "Enter Email: ";
						std::getline(std::cin, _email);
						while (!manager.isEmailValid(_email)) {
							std::cout << "This Email isn't valid. Please try again\n";
							std::cout << "Enter Email: ";
							std::getline(std::cin, _email);
						}
						std::cout << "Select 1: Have Certificate\n";
						std::cout << "Select 2: No\n";
						std::cout << "Your Choice: ";
						int option_3;
						std::cin >> option_3;
						switch (option_3) {
							case 1:
								std::cout << "\n-----------------------------------------------------\n";
								std::cout << "Number of Certificate: ";
								int cer_num;
								std::cin >> cer_num;
								while (cer_num <= 0) {
									std::cout << "Number of Certificate must be larger than 0. Please try again\n";
									std::cout << "Number of Certificate: ";
									std::cin >> cer_num;
								}
								
								while (counter < cer_num) {
									std::cout << "\n-----------------------------------------------------\n";
									std::cout << "ID of Certificate: ";
									std::cin.ignore();
									std::getline(std::cin, _id_cer);
									while (manager.isIdCerExisted(_id_cer)) {
										std::cout << "This ID was existed. Please try again\n";
										std::cout << "ID of Certificate: ";
										std::getline(std::cin, _id_cer);
									}
									std::cout << "Name of Certificate: ";
									std::getline(std::cin, _name_cer);
									std::cout << "Type of Rank: ";
									std::getline(std::cin, _rank);
									std::cout << "Enter Date Certificate (YYYY/DD/MM): ";
									std::cin >> cer_date[0] >> cer_date[1] >> cer_date[2];
									while (!manager.isDateValid(cer_date[0], cer_date[1], cer_date[2])) {
										std::cout << "This Date isn't valid. Please try again\n";
										std::cout << "Enter Date Certificate (YYYY/DD/MM): ";
										std::cin >> cer_date[0] >> cer_date[1] >> cer_date[2];
									}
									ls_cer.push_back(new Certificate(_id_cer, _name_cer, _rank, cer_date[0], cer_date[1], cer_date[2]));
									counter++;
								}
								counter = 0;
								break;
							case 2:
								break;
						}
						std::cout << "Enter Year Experience: ";
						std::cin >> yExp;
						while (yExp <= 3) {
							std::cout << "Year Experience must be larger than 3. Please try again\n";
							std::cout << "Enter Year Experience: ";
							std::cin >> yExp;
						}
						std::cout << "Pro Skill: ";
						std::cin.ignore();
						std::getline(std::cin, _proskill);
						if (ls_cer.size() != 0) {
							manager.addEmployee(new Experience(_id_employee, _full_name, _birthday[0], _birthday[1], _birthday[2], _phone_number, _email, yExp, _proskill), ls_cer);
						}
						else {
							manager.addEmployee(new Experience(_id_employee, _full_name, _birthday[0], _birthday[1], _birthday[2], _phone_number, _email, yExp, _proskill));
						}
						ls_cer.clear();
						break;
					case 'b':
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id_employee);
						while (manager.isID_employeeExisted(_id_employee)) {
							std::cout << "This ID was existed. Please try again\n";
							std::cout << "Enter ID: ";
							std::getline(std::cin, _id_employee);
						}
						std::cout << "Enter Full Name: ";
						std::getline(std::cin, _full_name);
						std::cout << "Enter Birthday (YYYY/DD/MM): ";
						std::cin >> _birthday[0] >> _birthday[1] >> _birthday[2];
						while (!manager.isDateValid(_birthday[0], _birthday[1], _birthday[2])) {
							std::cout << "This Date isn't valid. Please try again\n";
							std::cout << "Enter Birthday (YYYY/DD/MM): ";
							std::cin >> _birthday[0] >> _birthday[1] >> _birthday[2];
						}
						std::cout << "Enter Phone Number: ";
						std::cin.ignore();
						std::getline(std::cin, _phone_number);
						while (!manager.isPhoneNumberValid(_phone_number)) {
							std::cout << "This Phone Number isn't valid. Please try again\n";
							std::cout << "Enter Phone Number: ";
							std::getline(std::cin, _phone_number);
						}
						std::cout << "Enter Email: ";
						std::getline(std::cin, _email);
						while (!manager.isEmailValid(_email)) {
							std::cout << "This Email isn't valid. Please try again\n";
							std::cout << "Enter Email: ";
							std::getline(std::cin, _email);
						}
						std::cout << "Select 1: Have Certificate\n";
						std::cout << "Select 2: No\n";
						std::cout << "Your Choice: ";
						std::cin >> option_3;	
						switch (option_3) {
							case 1:
								std::cout << "\n-----------------------------------------------------\n";
								std::cout << "Number of Certificate: ";
								int cer_num;
								std::cin >> cer_num;
								while (cer_num <= 0) {
									std::cout << "Number of Certificate must be larger than 0. Please try again\n";
									std::cout << "Number of Certificate: ";
									std::cin >> cer_num;
								}
								while (counter < cer_num) {
									std::cout << "\n-----------------------------------------------------\n";
									std::cout << "ID of Certificate: ";
									std::cin.ignore();
									std::getline(std::cin, _id_cer);
									while (manager.isIdCerExisted(_id_cer)) {
										std::cout << "This ID was existed. Please try again\n";
										std::cout << "ID of Certificate: ";
										std::getline(std::cin, _id_cer);
									}
									std::cout << "Name of Certificate: ";
									std::getline(std::cin, _name_cer);
									std::cout << "Type of Rank: ";
									std::getline(std::cin, _rank);
									std::cout << "Enter Date Certificate (YYYY/DD/MM): ";
									std::cin >> cer_date[0] >> cer_date[1] >> cer_date[2];
									while (!manager.isDateValid(cer_date[0], cer_date[1], cer_date[2])) {
										std::cout << "This Date isn't valid. Please try again\n";
										std::cout << "Enter Date Certificate (YYYY/DD/MM): ";
										std::cin >> cer_date[0] >> cer_date[1] >> cer_date[2];
									}
									ls_cer.push_back(new Certificate(_id_cer, _name_cer, _rank, cer_date[0], cer_date[1], cer_date[2]));
									counter++;
								}
								counter = 0;
								break;
							case 2:
								break;
							}
							std::cout << "Enter Graduate Date (YYYY/DD/MM): ";
							std::cin >> gra_date[0] >> gra_date[1] >> gra_date[2];
							while (!manager.isDateValid(gra_date[0], gra_date[1], gra_date[2])) {
								std::cout << "This Date isn't valid. Please try again\n";
								std::cout << "Enter Graduate Date (YYYY/DD/MM): ";
								std::cin >> gra_date[0] >> gra_date[1] >> gra_date[2];
							}
							std::cout << "Enter Graduate Rank: ";
							std::cin.ignore();
							std::getline(std::cin, _rank);
							std::cout << "Enter Education: ";
							std::getline(std::cin, _education);
							if (ls_cer.size() != 0) {
								manager.addEmployee(new Fresher(_id_employee, _full_name, _birthday[0], _birthday[1], _birthday[2], _phone_number, _email,gra_date[0],gra_date[1],gra_date[2],_rank,_education), ls_cer);
							}
							else {
								manager.addEmployee(new Fresher(_id_employee, _full_name, _birthday[0], _birthday[1], _birthday[2], _phone_number, _email, gra_date[0], gra_date[1], gra_date[2], _rank, _education));
							}
							ls_cer.clear();
							break;
					case 'c':
						std::cout << "Enter ID: ";
						std::cin.ignore();
						std::getline(std::cin, _id_employee);
						while (manager.isID_employeeExisted(_id_employee)) {
							std::cout << "This ID was existed. Please try again\n";
							std::cout << "Enter ID: ";
							std::getline(std::cin, _id_employee);
						}
						std::cout << "Enter Full Name: ";
						std::getline(std::cin, _full_name);
						std::cout << "Enter Birthday (YYYY/DD/MM): ";
						std::cin >> _birthday[0] >> _birthday[1] >> _birthday[2];
						while (!manager.isDateValid(_birthday[0], _birthday[1], _birthday[2])) {
							std::cout << "This Date isn't valid. Please try again\n";
							std::cout << "Enter Birthday (YYYY/DD/MM): ";
							std::cin >> _birthday[0] >> _birthday[1] >> _birthday[2];
						}
						std::cout << "Enter Phone Number: ";
						std::cin.ignore();
						std::getline(std::cin, _phone_number);
						while (!manager.isPhoneNumberValid(_phone_number)) {
							std::cout << "This Phone Number isn't valid. Please try again\n";
							std::cout << "Enter Phone Number: ";
							std::getline(std::cin, _phone_number);
						}
						std::cout << "Enter Email: ";
						std::getline(std::cin, _email);
						while (!manager.isEmailValid(_email)) {
							std::cout << "This Email isn't valid. Please try again\n";
							std::cout << "Enter Email: ";
							std::getline(std::cin, _email);
						}
						std::cout << "Select 1: Have Certificate\n";
						std::cout << "Select 2: No\n";
						std::cout << "Your Choice: ";
						std::cin >> option_3;
						switch (option_3) {
							case 1:
								std::cout << "\n-----------------------------------------------------\n";
								std::cout << "Number of Certificate: ";
								int cer_num;
								std::cin >> cer_num;
								while (cer_num <= 0) {
									std::cout << "Number of Certificate must be larger than 0. Please try again\n";
									std::cout << "Number of Certificate: ";
									std::cin >> cer_num;
								}
								while (counter < cer_num) {
									std::cout << "\n-----------------------------------------------------\n";
									std::cout << "ID of Certificate: ";
									std::cin.ignore();
									std::getline(std::cin, _id_cer);
									while (manager.isIdCerExisted(_id_cer)) {
										std::cout << "This ID was existed. Please try again\n";
										std::cout << "ID of Certificate: ";
										std::getline(std::cin, _id_cer);
									}
									std::cout << "Name of Certificate: ";
									std::getline(std::cin, _name_cer);
									std::cout << "Type of Rank: ";
									std::getline(std::cin, _rank);
									std::cout << "Enter Date Certificate (YYYY/DD/MM): ";
									std::cin >> cer_date[0] >> cer_date[1] >> cer_date[2];
									while (!manager.isDateValid(cer_date[0], cer_date[1], cer_date[2])) {
										std::cout << "This Date isn't valid. Please try again\n";
										std::cout << "Enter Date Certificate (YYYY/DD/MM): ";
										std::cin >> cer_date[0] >> cer_date[1] >> cer_date[2];
									}
									ls_cer.push_back(new Certificate(_id_cer, _name_cer, _rank, cer_date[0], cer_date[1], cer_date[2]));
									counter++;
								}
								counter = 0;
								break;
							case 2:
								break;
							}
						std::cout << "Enter Major: ";
						std::cin.ignore();
						std::getline(std::cin, _major);
						std::cout << "Enter Semester: ";
						std::cin >>  _semester;
						std::cout << "Enter University Name: ";
						std::cin.ignore();
						std::getline(std::cin, _university_name);
						if (ls_cer.size() != 0) {
							manager.addEmployee(new Intern(_id_employee, _full_name, _birthday[0], _birthday[1], _birthday[2], _phone_number, _email,_major,_semester,_university_name), ls_cer);
						}
						else {
							manager.addEmployee(new Intern(_id_employee, _full_name, _birthday[0], _birthday[1], _birthday[2], _phone_number, _email, _major, _semester, _university_name));
						}
						ls_cer.clear();
						break;
				}
				break;
			case 2:
				std::cout << "\n-----------------------------------------------------\n";
				std::cout << "Enter ID to delete: ";
				std::cin.ignore();
				std::getline(std::cin, _id_employee);
				manager.deleteEmployee(_id_employee);
				break;
			case 3:
				std::cout << "\n-----------------------------------------------------\n";
				manager.display();
				break;
			case 4:
				std::cout << "\n-----------------------------------------------------\n";
				std::cout << "Enter a: Choose display list of Experience Employee\n";
				std::cout << "Enter b: Choose display list of Fresher Employee\n";
				std::cout << "Enter c: Choose display list of Intern Employee\n";
				char option_4;
				std::cout << "Your choice: ";
				std::cin >> option_4;
				switch (option_4) {
					case 'a':
						manager.display("Experience");
						break;
					case 'b':
						manager.display("Fresher");
						break;
					case 'c':
						manager.display("Intern");
						break;
				}
				break;
			case 5:
				std::cout << "\n-----------------------------------------------------\n";
				std::cout << "Exit\n";
				return(0);
			}
	}
}