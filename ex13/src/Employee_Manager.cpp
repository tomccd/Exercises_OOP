#include "../header/Employee_Manager.hpp"

/*Check Valid*/

/*Check if Email Valid*/
bool Employee_Manager::isEmailValid(std::string email) {
    if (email.length() != 0) {
        /*Check if the first character of the email is alphabet or not*/
        if ((*(email.begin()) < 65 || *(email.begin()) > 90)) {
            if (*(email.begin()) > 90) {
                if ((*(email.begin()) < 97 || *(email.begin()) > 122)) {
                    return false;
                }
            }
            if (*(email.begin()) < 65) {
                return false;
            }
        }
        if ((*(email.end() - 1) < 65 || *(email.end() - 1) > 90)) {
            if (*(email.end() - 1) > 90) {
                if ((*(email.end() - 1) < 97 || *(email.end() - 1) > 122)) {
                    return false;
                }
            }
            if (*(email.end() - 1) < 65) {
                return false;
            }
        }
        std::vector<int>vct_pacom;
        std::vector<int>vct_pdot;
        /*Find the position of @ and dot "."*/
        for (int i = 0; i < email.length(); i++) {
            if (email[i] == '@') {
                vct_pacom.push_back(i);
            }
            else if (email[i] == '.') {
                vct_pdot.push_back(i);
            }
        }
        /*Check Condition*/
        //If doesn't exist @ or dot -> invalid
        if (vct_pacom.size() == 0 || vct_pdot.size() == 0) {
            return false;
        }
        //If exist 2 or higher @ -> invalid
        if (vct_pacom.size() > 1) {
            return false;
        }
        //If pacom - pdot == 1 or pdot-pacon == 1 -> invalid
        for (auto pcom : vct_pacom) {
            for (auto pdot : vct_pdot) {
                if (pdot - pcom == 1 || pcom - pdot == 1) {
                    return false;
                }
            }
        }
        //Check if 2 dot contiguous
        for (int i = 0; i < vct_pdot.size() - 1; i++) {
            if (vct_pdot[i + 1] - vct_pdot[i] == 1) {
                return false;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

/*Check If Phone Number Valid*/
bool Employee_Manager::isPhoneNumberValid(std::string phoneNumber) {
    /*If Length of Phone Number smaller or larger than 10 character -> invalid*/
    if (phoneNumber.length() == 10) {
        //std::string sub_str = phoneNumber.substr(0,2);
        //If first character is not 0 -> invalid
        if (phoneNumber[0] != '0') {
            return false;
        }
        for (auto myChar : phoneNumber) {
            if (myChar < 48 || myChar >57) {
                return false;
            }
        }
        return true;
    }
    return false;
}

/*Check If Date Valid*/
bool Employee_Manager::isDateValid(int year, int date, int month) {
    if (year > 1900 && year <= 2024) {
        if (year % 4 != 0) {
            if (month >= 1 && month <= 12) {
                switch (month) {
                case 1:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 2:
                    if (date < 1 || date > 28) {
                        return false;
                    }
                    break;
                case 3:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 4:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 5:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 6:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 7:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 8:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 9:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 10:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 11:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 12:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                default:
                    return false;
                }
                return true;
            }
        }
        else {
            if (month >= 1 && month <= 12) {
                switch (month) {
                case 1:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 2:
                    if (date < 1 || date > 29) {
                        return false;
                    }
                    break;
                case 3:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 4:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 5:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 6:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 7:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 8:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 9:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 10:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                case 11:
                    if (date < 1 || date > 30) {
                        return false;
                    }
                    break;
                case 12:
                    if (date < 1 || date > 31) {
                        return false;
                    }
                    break;
                default:
                    return false;
                }
                return true;
            }
        }
    }
    return false;
}

/*Check if ID of Employee was existed*/
bool Employee_Manager::isID_employeeExisted(std::string _id) {
    if (list_employee.size() != 0) {
        for (auto employee : list_employee) {
            if (employee->id == _id) {
                return true;
            }
        }
    }
    return false;
}

/*Check if ID of Certificate was existed*/
bool Employee_Manager::isIdCerExisted(std::string _id) {
    if (list_employee.size() != 0) {
        for (auto employee : list_employee) {
            if (employee->isIdCerExisted(_id)) {
                return true;
            }
        }
    }
    return false;
}

/*Add New Employee hasn't certificate*/
void Employee_Manager::addEmployee(Employee* _employee) {
    if (!this->isID_employeeExisted(_employee->id)) {
        list_employee.push_back(_employee);
    }
    else {
        std::cout << "This Employee's ID was existed\n";
    }
}

/*Add New Employee has certificate*/
void Employee_Manager::addEmployee(Employee* _employee, std::vector<Certificate *>_list_certificate) {
    if (!this->isID_employeeExisted(_employee->id)) {
        /*Check each of certificate*/
        for (auto cer : _list_certificate) {
            if (this->isIdCerExisted(cer->id)) {
                std::cout << "This Certificate's ID was existed. Please Try Again\n";
                return;
            }
        }
        /*Add certificate*/
        for (auto cer : _list_certificate) {
            _employee->list_certificate.push_back(cer);
        }
        list_employee.push_back(_employee);
    }
    else {
        std::cout << "This Employee's ID was existed\n";
    }
}

/*Delete Employee using id*/
void Employee_Manager::deleteEmployee(std::string _id) {
    if (this->isID_employeeExisted(_id)) {
        for (int i = 0; i < list_employee.size(); i++) {
            if (list_employee[i]->id == _id) {
                list_employee.erase(list_employee.begin() + i);
            }
        }
    }
    else {
        std::cout << "Can't find this Employee\n";
    }
}

/*Display all Employee*/
void Employee_Manager::display() {
    if (list_employee.size() != 0) {
        for (auto employee : list_employee) {
            employee->showMe();
        }
    }
    else {
        std::cout << "This List is empty\n";
    }
}

/*Display Employee with Type Employee*/
void Employee_Manager::display(std::string type) {
    if (list_employee.size() != 0) {
        int counter = 0;
        for (auto employee : list_employee) {
            if (employee->getType() == type) {
                employee->showMe();
                counter++;
            }
        }
        if (counter == 0) {
            std::cout << "This List doesn't contain Employee with " << type << " type" << std::endl;
        }
    }
    else {
        std::cout << "This List is empty\n";
    }
}
