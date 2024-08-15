#include <iostream>
#include <vector>
#include <iostream>
#include <typeinfo>
#include <string>
#ifndef  __CLASSIFY__
#define __CLASSIFY__
#endif

//Can Bo
class CanBo{
    public:
        std::string name;
        std::string gender;
        short age;
        std::string address;
        CanBo(std::string _name,std::string _gender,short _age,std::string _address){
            this->name = _name;
            this->gender = _gender;
            this->age = _age;
            this->address = _address;
        }
        virtual void display() = 0;
        virtual ~CanBo(){

        }
};

//Cong Nhan
class CongNhan:public CanBo{
    public:
        /*Level of Worker 1->10*/
        int level;
        CongNhan(std::string _name,std::string _gender, short _age,std::string _address, int _level):CanBo(_name,_gender,_age,_address){
            _level = _level%10;
            this->level = _level;
        }
        void display() {
            std::cout << "Name : " << this->name << " | " << "Age : " << this->age << " | " << "Gender : " << this->gender << " | " << "Address : " << this->address << " | " << "Worker Level : " << this->level << std::endl;
        }
        ~CongNhan(){

        }
};

//KySu
class KySu:public CanBo{
    public:
        std::string major;
        KySu(std::string _name, std::string _gender, short _age, std::string _address,std::string _major):CanBo(_name,_gender,_age,_address){
            this->major = _major;
        }
        void display() {
            std::cout << "Name : " << this->name << " | " << "Age : " << this->age << " | " << "Gender: " << this->gender << " | " << "Address: " << this->address << " | " << "Major: " << this->major << std::endl;
        }
        ~KySu(){

        }
};

//Nhan Vien
class NhanVien:public CanBo{
    public:
        std::string typeJob;
        NhanVien(std::string _name, std::string _gender, short _age, std::string _address,std::string _typeJob):CanBo(_name,_gender,_age,_address){
            this->typeJob = _typeJob;
        }
        void display() {
            std::cout << "Name: " << this->name << " | " << "Age: " << this->age << " | " << "Gender: " << this->gender << " | " << "Address: " << this->address << " | " << "Type Job: " << this->typeJob << std::endl;
        }
        ~NhanVien(){

        }
};