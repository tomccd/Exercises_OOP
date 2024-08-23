#ifndef __STUDENT__
#define __STUDENT__

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
class Student {
	public:
		std::string full_name;
		int birthday_date[3]; // dd/mm/yyyy
		std::string sex;
		std::string phone_number;
		std::string university_name;
		std::string grade_Level;
		Student(std::string _full_name, int _date, int _month, int _year, std::string _sex, std::string _phone_number, std::string _university_name, std::string _grade_level) {
			this->full_name = _full_name;
			this->birthday_date[0] = _date;
			this->birthday_date[1] = _month;
			this->birthday_date[2] = _year;
			this->sex = _sex;
			this->phone_number = _phone_number;
			this->university_name = _university_name;
			this->grade_Level = _grade_level;
		}
		virtual void showMe() = 0;
		virtual double getGpa() const {
			return -1;
		}
		virtual int getToeicGrade() const {
			return -1;
		}
		virtual int getEntryGrade() const {
			return -1;
		}
		virtual std::string getType() const = 0;
		virtual ~Student() {

		}
};

class GoodStudent :public Student {
	public:
		double gpa;
		std::string BestRewardName;
		GoodStudent(std::string _full_name, int _date, int _month, int _year, std::string _sex, std::string _phone_number, std::string _university_name, std::string _grade_level, double _gpa, std::string _BestRewardName) :Student(_full_name, _date, _month, _year, _sex, _phone_number, _university_name, _grade_level) {
			this->gpa = _gpa;
			this->BestRewardName = _BestRewardName;
		}
		void showMe();
		double getGpa() const{
			return this->gpa;
		}
		std::string getType() const;
		~GoodStudent() {

		}
};

class NormalStudent : public Student {
	public:
		int Toeic_Score;
		int entry_Test; //0->10
		NormalStudent(std::string _full_name, int _date, int _month, int _year, std::string _sex, std::string _phone_number, std::string _university_name, std::string _grade_level, int _Toiec_Score, int _entry_Test) :Student(_full_name, _date, _month, _year, _sex, _phone_number, _university_name, _grade_level) {
			this->Toeic_Score = _Toiec_Score;
			this->entry_Test = _entry_Test;
		}
		void showMe();
		int getToeicGrade() const {
			return this->Toeic_Score;
		}
		int getEntryGrade() const {
			return this->entry_Test;
		}
		std::string getType() const;
		~NormalStudent() {

		}
};
#endif