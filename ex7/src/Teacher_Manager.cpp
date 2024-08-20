#include "../header/Teacher_Manager.hpp"

/*Check if the Id was existed*/
bool Teacher_Manager::checkIDExisted(std::string _id){
    if(list_teacher.size()!=0){
        for(auto teacher:list_teacher){
            if(teacher->id == _id){
                return true;
            }
        }
    }
    return false;
}

/*Add Teacher*/
void Teacher_Manager::addTeacher(Teacher *teacher){
    if(!this->checkIDExisted(teacher->id)){
        list_teacher.push_back(teacher);
    }
    else{
        std::cout << "This ID was existed\n";
    }
}

/*Display*/
void Teacher_Manager::display(){
    if(list_teacher.size()!=0){
        for(auto teacher:list_teacher){
            teacher->display();
        }
    }
    else{
        std::cout << "This list is empty\n";
    }
}

/*Delete*/
void Teacher_Manager::deleteTeacher(std::string _id){
    if(list_teacher.size()!=0){
        if(this->checkIDExisted(_id)){
            for(int i=0;i<list_teacher.size();i++){
                if(list_teacher[i]->id == _id){
                    list_teacher.erase(list_teacher.begin()+i);
                }
            }
        }
        else{
            std::cout << "This Id wasn't existed\n";
        }
    }
    else{
        std::cout << "This list is empty\n";
    }
}