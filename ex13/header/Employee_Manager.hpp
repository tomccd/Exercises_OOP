#ifndef __MANAGER__
#define __MANAGER__

#include "./Employee_Classify.hpp"

class Employee_Manager {
	private:
		std::vector<Employee*>list_employee;
	public:
		//Check Valid

		/*Check if Email Valid*/
		bool isEmailValid(std::string email);
		/*Check if Phone Number Valid*/
		bool isPhoneNumberValid(std::string phoneNumber);
		/*Check if Date Valid*/
		bool isDateValid(int year, int date, int month);

		//
		/*Change Information of Employee*/
		void changeInformationOfEmployee(Employee *employee);
		/*Check if ID of Employee was existed*/
		bool isID_employeeExisted(std::string _id);
		/*Check if ID of Certificate was existed*/
		bool isIdCerExisted(std::string _id);
		/*Add New Employee hasn't certificate*/
        void addEmployee(Employee* _employee);
		/*Add New Employee has certificate*/
		void addEmployee(Employee* _employee, std::vector<Certificate*>_certificate);
		/*Add Certificate*/
		void addCertificate(Certificate* _certificate);
		/*Delete Employee using id*/
		void deleteEmployee(std::string _id);
		/*Display all Employee*/
		void display();
		/*Display Employee by Type Employee*/
		void display(std::string type);
		~Employee_Manager() {
			for (auto employee : list_employee) {
				delete(employee);
			}
		}
};

#endif