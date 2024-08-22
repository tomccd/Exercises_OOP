#ifndef __EMPLOYEE_CLASSIFY
#define __EMPOYEE_CLASSIFY

#include "./Certificate.hpp"

/*Employee*/
class Employee {
	public:
		std::string id;
		std::string full_name;
		int birthday[3]; //YYYY-DD-MM
		std::string phone_number;
		std::string email;
		std::vector<Certificate*>list_certificate;
		Employee(std::string _id, std::string _full_name, int _year, int _date, int _month, std::string _phone_number, std::string _email) {
			this->id = _id;
			this->full_name = _full_name;
			this->birthday[0] = _year;
			this->birthday[1] = _date;
			this->birthday[2] = _month;
			this->phone_number = _phone_number;
			this->email = _email;
		}
		/*Adding Certificate*/
		void addCertificate(Certificate* certificate);
		/*Check If this Certificate existed*/
		bool isIdCerExisted(std::string _id);
		/*Get type*/
		virtual std::string getType() const = 0;
		/*Display*/
		virtual void showMe() = 0;
		virtual~ Employee() {

		}
};

/*Experience*/
class Experience :public Employee {
	public:
		int expInYear;
		std::string pro_skill;
		Experience(std::string _id, std::string _full_name, int _year, int _date, int _month, std::string _phone_number, std::string _email, int _expInYear, std::string _pro_skill):Employee(_id,_full_name,_year,_date,_month,_phone_number,_email) {
			this->expInYear = _expInYear;
			this->pro_skill = _pro_skill;
		}
		std::string getType() const;
		void showMe();
		~Experience() {
			for (auto cer : this->list_certificate) {
				delete(cer); // release obj
			}
		}
};

/*Fresher*/
class Fresher :public Employee {
	public:
		int graduateDate[3]; //YYYY-MM-DD
		std::string graduateRank;
		std::string Education;
		Fresher(std::string _id, std::string _full_name, int _year, int _date, int _month, std::string _phone_number, std::string _email, int _graduate_year, int _graduate_date, int _graduate_month, std::string _graduate_rank, std::string _education) :Employee(_id, _full_name, _year, _date, _month, _phone_number, _email) {
			this->graduateDate[0] = _graduate_year;
			this->graduateDate[1] = _graduate_date;
			this->graduateDate[2] = _graduate_month;
			this->graduateRank = _graduate_rank;
			this->Education = _education;
		}
		std::string getType() const;
		void showMe();
		~Fresher() {
			for (auto cer : this->list_certificate) {
				delete(cer); // release obj
			}
		}
};

/*Intern*/
class Intern :public Employee {
	public:
		std::string major;
		int semester;
		std::string university_name;
		Intern(std::string _id, std::string _full_name, int _year, int _date, int _month, std::string _phone_number, std::string _email, std::string _major, int _semester, std::string _university_name) :Employee(_id, _full_name, _year, _date, _month, _phone_number, _email) {
			this->major = _major;
			this->semester = _semester;
			this->university_name = _university_name;
		}
		std::string getType() const;
		void showMe();
		~Intern() {
			for (auto cer : this->list_certificate) {
				delete(cer); // release obj
			}
		}
};
#endif