#include "../header/Student_Classify.hpp"

/*In_Service_Student*/
void In_service_Student::showMe() const{
    std::cout << "Personal Information: ";
    std::cout << "ID: " << this->id_student << " | " << "Full Name: " << this->full_name << " | " << "Birthday: " << this->birthday_date[0] << "/" << this->birthday_date[1] << "/" << this->birthday_date[2] << " | " << "Type Student: " << this->getType() << " | " << "Year Onboard: " << this->year_onboard << " | " <<  "Passed Score:" << this->passed_score << " | " <<"Training Link Address: " << this->training_link_addr <<std::endl;
}

/*Regular_Student*/
void Regular_Student::showMe() const{
    std::cout << "Personal Information: ";
    std::cout << "ID: " << this->id_student << " | " << "Full Name: " << this->full_name << " | " << "Birthday: " << this->birthday_date[0] << "/" << this->birthday_date[1] << "/" << this->birthday_date[2] << " | " << "Type Student: " << this->getType() << " | " << "Year Onboard: " << this->year_onboard << " | " <<  "Passed Score:" << this->passed_score << " | " <<"Training Link Address: " << std::endl;
}