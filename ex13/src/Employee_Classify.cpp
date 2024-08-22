#include "../header/Employee_Classify.hpp"
/*Adding Certificate*/
void Employee::addCertificate(Certificate* certificate) {
	if (!this->isIdCerExisted(certificate->id)) {
		this->list_certificate.push_back(certificate);
	}
	else {
		std::cout << "This Certificate's ID was existed\n";
	}
}
/*Check If this Certificate existed*/
bool Employee::isIdCerExisted(std::string _id) {
	if (list_certificate.size() != 0) {
		for (auto certificate : list_certificate) {
			if (certificate->id == _id) {
				return true;
			}
		}
	}
	return false;
}

/*Experience*/
std::string Experience::getType() const {
	return "Experience";
}

void Experience::showMe() {
	if (list_certificate.size() != 0) {
		std::cout << "Person Information: \n";
		std::cout << "ID: " << this->id << " | " << "Full Name: " << this->full_name << " | " << "Type: " << this->getType() << " | " << "Birthday: " << birthday[0] << "/" << birthday[1] << "/" << birthday[2] << " | " << "Phone Number: " << this->phone_number << " | " << "Email: " << this->email << " | " << "Year Experience: " << this->expInYear << " | " << "Pro Skill: " << this->pro_skill << std::endl;
		std::cout << "Certificate Information: \n";
		for (auto cer : list_certificate) {
			cer->display();
		}
		std::cout << std::endl;
	}
	else {
		std::cout << "Person Information: \n";
		std::cout << "ID: " << this->id << " | " << "Full Name: " << this->full_name << " | " << "Type: " << this->getType() << " | " << "Birthday: " << birthday[0] << "/" << birthday[1] << "/" << birthday[2] << " | " << "Phone Number: " << this->phone_number << " | " << "Email: " << this->email << " | " << "Year Experience: " << this->expInYear << " | " << "Pro Skill: " << this->pro_skill << std::endl;
		std::cout << std::endl;
	}
}

/*Fresher*/
std::string Fresher::getType() const {
	return "Fresher";
}

void Fresher::showMe() {
	if (list_certificate.size() != 0) {
		std::cout << "Person Information: \n";
		std::cout << "ID: " << this->id << " | " << "Full Name: " << this->full_name << " | " << "Type: " << this->getType() << " | " << "Birthday: " << birthday[0] << "/" << birthday[1] << "/" << birthday[2] << " | " << "Phone Number: " << this->phone_number << " | " << "Email: " << this->email << " | " << "Graduate Date: " << this->graduateDate[0] << "/" << this->graduateDate[1] << "/" << this->graduateDate[2] << " | " << "Graduate Rank: " << this->graduateRank << " | " << "Education: " << this->Education << std::endl;
		std::cout << "Certificate Information: \n";
		for (auto cer : list_certificate) {
			cer->display();
		}
	}
	else {
		std::cout << "Person Information: \n";
		std::cout << "ID: " << this->id << " | " << "Full Name: " << this->full_name << " | " << "Type: " << this->getType() << " | " << "Birthday: " << birthday[0] << "/" << birthday[1] << "/" << birthday[2] << " | " << "Phone Number: " << this->phone_number << " | " << "Email: " << this->email << " | " << "Graduate Date: " << this->graduateDate[0] << "/" << this->graduateDate[1] << "/" << this->graduateDate[2] << " | " << "Graduate Rank: " << this->graduateRank << " | " << "Education: " << this->Education << std::endl;
	}
}

/*Intern*/
std::string Intern::getType() const {
	return "Experience";
}

void Intern::showMe() {
	if (list_certificate.size() != 0) {
		std::cout << "Person Information: \n";
		std::cout << "ID: " << this->id << " | " << "Full Name: " << this->full_name << " | " << "Type: " << this->getType() << " | " << "Birthday: " << birthday[0] << "/" << birthday[1] << "/" << birthday[2] << " | " << "Phone Number: " << this->phone_number << " | " << "Email: " << this->email << " | " << "Major: " << this->major << " | " << "Semester: " << this->semester << " | " << "University Name: " << this->university_name << std::endl;
		std::cout << "Certificate Information: \n";
		for (auto cer : list_certificate) {
			cer->display();
		}
	}
	else {
		std::cout << "Person Information: \n";
		std::cout << "ID: " << this->id << " | " << "Full Name: " << this->full_name << " | " << "Type: " << this->getType() << " | " << "Birthday: " << birthday[0] << "/" << birthday[1] << "/" << birthday[2] << " | " << "Phone Number: " << this->phone_number << " | " << "Email: " << this->email << " | " << "Major: " << this->major << " | " << "Semester: " << this->semester << " | " << "University Name: " << this->university_name << std::endl;
	}
}