#include "../header/University.hpp"

/*Display All Student in each department*/
void University::displayAllStudent() const{
    if(list_department.size() !=0 ){
        for(auto deparment:list_department){
            deparment->displayStudent();
        }
    }
    else{
        std::cout << "This University is empty\n";
    }
}

/*Display Student by finding training_link address in each Department*/
void University::displayStudent(std::string _training_link_addr) const{
    if(list_department.size() !=0 ){
        for(auto deparment:list_department){
            deparment->displayStudent(_training_link_addr);
        }
    }
    else{
        std::cout << "This University is empty\n";
    }
}

/*Display Student by finding passed score (required > 8.0) in each Department*/
void University::displayStudent(double _passed_score) const{
    if(list_department.size() !=0 ){
        for(auto deparment:list_department){
            deparment->displayStudent(_passed_score);
        }
    }
    else{
        std::cout << "This University is empty\n";
    }
}

/*Display all Semester in each Department*/
void University::displaySemester() const{
    if(list_department.size() !=0 ){
        for(auto deparment:list_department){
            std::cout << "Department " << deparment->name_department << " list all semester";
            deparment->displaySemester();
            std::cout << "\n";
        }
    }
    else{
        std::cout << "This University is empty\n";
    }
}

/*Check if this Department is Existed*/
bool University::isDepartmentExisted(std::string _name_department){
    if(list_department.size() != 0){
        for(auto department:list_department){
            if(department->name_department == _name_department){
                return true;
            }
        }
    }
    return false;
}

/*Adding Department into University*/
void University::addDeparment(Department *deparment){
    if(!this->isDepartmentExisted(deparment->name_department)){
        list_department.push_back(deparment);
    }
    else{
        std::cout << "This Department was existed\n";
    }
}
        
/*Adding Student into which Department*/
void University::addStudentIntoDepartment(Student *student, std::string _name_department){
    if(list_department.size() !=0){
        /*Check Name Department existed*/
        if(this->isDepartmentExisted(_name_department)){
            /*Check Student's ID was existed*/
            if(!this->isStuIdExisted(student->id_student)){
                for(auto department:list_department){
                    if(department->name_department == _name_department){
                        department->addStudentIntoDepartment(student);
                        break;
                    }
                }
            }
            else{
                std::cout << "This Student's ID was existed\n";
            }
        }
        else{
            std::cout << "This Department wasn't existed\n";
        }
    }
    else{
        std::cout << "This University is empty\n";
    }
}

/*Adding Student into Semester*/
void University::addResultReportIntoSemester(Result_Report *result, std::string _name_department, std::string _semester_name){
    if(list_department.size() != 0){
        //Check if Uninversity has result's id student
        if(this->isStuIdExisted(result->id_student)){
            //Check if department existed
            if(this->isDepartmentExisted(_name_department)){
                int counter = 0;
                //Check if Semester is Existed
                for(auto department:list_department){
                    if(department->isSemesterExisted(_semester_name)){
                        counter ++;
                        department->addResultReportIntoSemester(result,_semester_name);
                        break;
                    }
                }
                if(counter == 0){
                    std::cout << "This Semester wasn't existed\n";
                }
                
            }
            else{
                std::cout << "This Department wasn't existed\n";
            }
        }
        else{
            std::cout << "This ID wasn't existed\n";
        }
    }
    else{
        std::cout << "This University is empty\n";
    }
}

/*Adding Semester into which Department*/
void University::addSemester(std::string _name_department,Semester *_semester){
    if(list_department.size()!=0){
        int counter = 0;
        for(auto department:list_department){
            if(department->name_department == _name_department){
                department->addSemester(_semester);
                counter ++;
            }
        }
        if(counter == 0){
            std::cout << "Can't find that Semester\n";
        }
    }
    else{
        std::cout << "This University is empty\n";
    }
}

/*Check if this Student was existed by id in each Department*/
bool University::isStuIdExisted(std::string _id){
    if(this->list_department.size() != 0){
        for(auto department:list_department){
            if(department->isStuIdExisted(_id)){
                return true;
            }
        }
    }
    return false;
}

/*Show Number of Student by Type Student in each Department*/
int University::totalStudentByType(std::string _type) const{
    int sum = 0;
    for(auto department:list_department){
        sum+=department->totalStudentByType(_type);
    }
    return sum;
}

/*Find Students whose average score is highest in each semester in each Department*/
void University::findStudent_Average_Score_Highest_In_Semester(){
    if(list_department.size() != 0){
        for(auto department:list_department){
            std::cout << "Department " <<department->name_department << " list all Highest Average Score Student in each Semester\n";
            department->findStudent_Average_Score_Highest_In_Semester();
            std::cout << "\n\n";
        }
    }
    else{
        std::cout << "This University is empty\n";
    }
}

/*Find Students whoses passed score is highest in each department*/
void University::findStudent_Passed_Score_Highest(){
    if(list_department.size() != 0){
        for(auto department:list_department){
            department->findStudent_Passed_Score_Highest();
        }
    }
    else{
        std::cout << "This University is empty\n";
    }
}

/*Check if the Date is Valid*/
bool University::isDateValid(int date, int month, int year) {
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

/*Display all Department name in this University*/
void University::displayDepartmentName() const{
    for(int i=0;i<list_department.size();i++){
        std::cout << i << " : " << list_department[i]->name_department << std::endl;
    }
}

/*Display Semesters in Specific Department*/
void University::displaySemester(Department *department) const{
    department->showNameDepartment();
}