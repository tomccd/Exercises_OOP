#include "../header/manage_officer.hpp"

/*Definition of addOffice method*/
void QLCB::addOffice(CanBo *cb){
    officer_list.push_back(cb);
}

/*Definition of searchOfficer method*/
CanBo *QLCB::searchOfficer(std::string name){
    if(size(officer_list) !=0){
        for(int i=0;i<officer_list.size();i++){
            if(officer_list[i]->name == name){
                return officer_list[i];
            }
        }
    }
    return nullptr;
}

/*Definition of displayOfficer method*/
void QLCB::displayOfficer(){
    if(officer_list.size() > 0){
        for(int i=0;i<officer_list.size();i++){
            /*Check if type of obj that pointer point to is the same as Class Cong Nhan*/
            if(typeid(*(officer_list[i])) == typeid(CongNhan)){
                    /*Downcast from Base Class to Derived Class*/
                    CongNhan *cn = dynamic_cast<CongNhan*>(officer_list[i]);
                    std::cout << "Name : " << cn->name << " | " << "Age : " << cn->age << " | " << "Gender : " << cn->gender << " | " << "Address : " <<  cn->address << " | " << "Worker Level : " <<  cn->level << std::endl;
            } 
            else if(typeid(*(officer_list[i])) == typeid(NhanVien)){
                    /*Downcast from Base Class to Derived Class*/
                    NhanVien *nv = dynamic_cast<NhanVien*>(officer_list[i]);
                    std::cout  << "Name : " << nv->name << " | " << "Age : " << nv->age << " | " << "Gender : " << nv->gender << " | " << "Address : " << nv->address << " | " << "Type Employee : " <<  nv->typeJob << std::endl;
            }
            else if(typeid(*(officer_list[i])) == typeid(KySu)){
                    /*Downcast from Base Class to Derived Class*/
                    KySu *ks = dynamic_cast<KySu*>(officer_list[i]);
                    std::cout << "Name : " <<  ks->name << " | " << "Age : " << ks->age << " | " << "Gender : " << ks->gender << " | " << "Address : " << ks->address << " | " << "Engineering Major : " << ks->major << std::endl;
            }
        }
    }
    else{
        std::cout << "The list is empty\n";
    }
}

/**/
void QLCB::displayOfficer(CanBo *cb){
    if(size(officer_list) == 0){
        std::cout << "The list is empty\n";
    }
    else{
        if(cb == nullptr){
            std::cout << "\nCannot find the name of officer that match given name\n";
        }
        else{
            if(typeid(*cb) == typeid(CongNhan)){
                CongNhan *cn = dynamic_cast<CongNhan *>(cb);
                std::cout << cn->name << " | " << cn->age << " | " << cn->gender << " | " << cn->address << " | " << cn->level << std::endl;
            }
            else if(typeid(*cb) == typeid(NhanVien)){
                NhanVien *nv = dynamic_cast<NhanVien *>(cb);
                std::cout  << nv->name << " | " << nv->age << " | " << nv->gender << " | " << nv->address << " | " << nv->typeJob << std::endl;
            }
            else if(typeid(*cb) == typeid(KySu)){
                KySu *ks = dynamic_cast<KySu *>(cb);
                std::cout << ks->name << " | " << ks->age << " | " << ks->gender << " | " << ks->address << " | " << ks->major << std::endl;
            }
        }
    }
}