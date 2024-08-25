#include "../header/Department.hpp"

/*Display all Student after Sorting via Type Student (Ascending) and Year Onboard (Descending)*/
void Department::displayStudent() const{
    if(list_student.size()!=0){
        //Display
        for(auto student:list_student){
            student->showMe();
        }
    }
    else{
        std::cout << "Department " << this->name_department << " is empty\n";
    }
}

/*Display Student by finding training_link address*/
void Department::displayStudent(std::string _training_link_addr) const{
    if(list_student.size() != 0){
        for(auto student:list_student){
            if(student->getType() == "In_service_Student"){
                if(student->getTraining_Link_Addr() == _training_link_addr){
                    student->showMe();
                }
            }
        }
    }
    else{
        std::cout << "Department " << this->name_department << " is empty\n";
    }
}


/*Display Student by finding passed score (required > 8.0)*/
void Department::displayStudent(double _passed_score) const{
    if(list_student.size()!=0){
        for(auto student:list_student){
            if(student->passed_score >= _passed_score){
                student->showMe();
            }
        }
    }
    else{
        std::cout << "Department " << this->name_department << " is empty student\n";
    }
}

/*Adding Student into Department*/
void Department::addStudentIntoDepartment(Student *student){
    if(!this->isStuIdExisted(student->id_student)){
        list_student.push_back(student);
        /*Sorting After Add Student into Department*/
        if(list_student.size() > 1){
            std::sort(list_student.begin(),list_student.end(),[](Student *a,Student *b){
                    if(a->getType().compare(b->getType())>0){
                        /*Descending order Year Onboard*/
                        return a->year_onboard > b->year_onboard;
                    }
                    else{
                        /*Ascending order Type Student*/
                        return a->getType().compare(b->getType()) < 0;
                    }
                });
        }
    }
    else{
        std::cout << "This Student's ID was existed\n";
    }
}
        
/*Adding Student into Semester*/
void Department::addResultReportIntoSemester(Result_Report *result, std::string _semester_name){
    //Check if id_student of result report existed
    if(this->isStuIdExisted(result->id_student)){
        //Check if this Semester Existed
        int counter = 0;
        for(auto semester:list_semester){
            if(semester->showName() == _semester_name){
                semester->add_Result_Report(result);
            }
            counter ++;
        }
        if(counter == 0){
            std::cout << "This Semester Name wasn't existed\n";
        }
    }
    else{
        std::cout << "This Student's ID wasn't Existed\n";
    }
}

/*Adding Semester into Department*/
void Department::addSemester(Semester *_semester){
    if(!this->isSemesterExisted(_semester->showName())){
        list_semester.push_back(_semester);
    }
    else{
        std::cout << "This Semester Name was existed\n";
    }
}


/*Check if this Student was existed by id*/
bool Department::isStuIdExisted(std::string _id){
    if(list_student.size()!=0){
        for(auto student:list_student){
            if(student->id_student == _id){
                return true;
            }
        }
    }
    return false;
}

/*Check if this Semester is existed*/
bool Department::isSemesterExisted(std::string _semester_name){
    if(this->list_semester.size()!=0){
        for(auto semester:list_semester){
            if(semester->showName() == _semester_name){
                return true;
            }
        }
    }
    return false;
}

/*Show Name of Department*/
std::string Department::showNameDepartment() const{
    return this->name_department;
}

/*Show Number of Student by Type Student*/
int Department::totalStudentByType(std::string _type) const{
    int counter = 0;
    if(list_student.size() !=0){
        for(auto student:list_student){
            if(student->getType() == _type){
                counter++;
            }
        }
        return counter;
    }
    return counter; 
}

/*Find Student whose average score is highest in semester*/
void Department::findStudent_Average_Score_Highest_In_Semester(std::string _semester){
    if(list_semester.size() != 0){
        std::string _id = "";
        for(auto semester:list_semester){
            if(semester->showName() == _semester){
                std::cout << "Semester " << semester->showName() << " Highest Average Score " << std::endl;
                _id = semester->findIdHighestScore();
                break;
            }
        }
        if(_id != ""){
            for(auto student:list_student){
                if(student->id_student == _id){
                    student->showMe();
                    break;
                }
            }
        }
        else{
            std::cout << "Semester " << _semester << "'s Result Report List is empty\n";
        }
    }
    else{
        std::cout << "Department " << this->name_department << " is empty\n";
    }
}
        
/*Find Students whose average score is highest in each semester*/
void Department::findStudent_Average_Score_Highest_In_Semester(){
    for(auto semester:list_semester){
        this->findStudent_Average_Score_Highest_In_Semester(semester->showName());
    }
}

/*Find Student whose passed score is highest*/
void Department::findStudent_Passed_Score_Highest(){
    if(list_student.size()!=0){
        double max = -1;
        //Finding the max
        for(auto student:list_student){
            if(student->passed_score > max){
                max = student->passed_score;
            }
        }
        //Display information
        for(auto student:list_student){
            if(student->passed_score == max){
                student->showMe();
            }
        }
    }
    else{
        std::cout << "Department " << this->name_department << " is empty\n";
    }
}

/*Display Semester*/
void Department::displaySemester() const{
    if(list_semester.size()!=0){
        for(auto semester:list_semester){
            semester->display();
        }
    }
    else{
        std::cout << ": Semester List is empty\n";
    }
}

/*Show Name of Semester*/
void Department::showNameSemester() const{
    if(list_semester.size() !=0){
        for(int i=0;i<list_semester.size();i++){
            std::cout << i << " : " << list_semester[0]->showName() << std::endl;
        }
    }
}

/*Check if list Semester is empty*/
bool Department::isListSemesterEmpty() const{
    return (list_semester.size() == 0)?true:false;
}

/*Check if list Student is empty*/
bool Department::isListStudentEmpty() const{
    return (list_student.size() == 0)?true:false;
}