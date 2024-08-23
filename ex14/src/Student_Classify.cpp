#include "../header/Student_Classify.hpp"

/*Normal Student*/
void NormalStudent::showMe() {
	std::cout << "Full Name: " << this->full_name << " | " << "Birthday: " << this->birthday_date[0] << "/" << this->birthday_date[1] << "/" << this->birthday_date[2] << " | " << "Sex: " << this->sex << " | " << "Phone Number: " << this->phone_number << " | " << "University Name: " << this->university_name << " | " << "Grade Level: " << this->grade_Level << " | " << "Toiec Score: " << this->Toeic_Score << " | " << "Entry Test: " << this->entry_Test << std::endl;
}

std::string NormalStudent::getType() const {
	return "NormalStudent";
}

/*Good Student*/
void GoodStudent::showMe() {
	std::cout << "Full Name: " << this->full_name << " | " << "Birthday: " << this->birthday_date[0] << "/" << this->birthday_date[1] << "/" << this->birthday_date[2] << " | " << "Sex: " << this->sex << " | " << "Phone Number: " << this->phone_number << " | " << "University Name: " << this->university_name << " | " << "Grade Level: " << this->grade_Level << " | " << "Gpa: " << this->gpa << " | " << "Best Reward Name: " << this->BestRewardName << std::endl;
	std::cout << "\n";
}
std::string GoodStudent::getType() const {
	return "GoodStudent";
}
