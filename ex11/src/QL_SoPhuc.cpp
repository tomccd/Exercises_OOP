#include "../header/QL_SoPhuc.hpp"

/*Hien thi so phuc*/
void QL_SoPhuc::display(){
    if(vct_sophuc.size()!=0){
        for(int i=0;i<vct_sophuc.size();i++){
            if(vct_sophuc[i]->PhanAo >=0){
                std::cout << i << ": " << vct_sophuc[i]->PhanThuc << " + j" << vct_sophuc[i]->PhanAo  << std::endl;
            }
            else{
                std::cout << i << ": " << vct_sophuc[i]->PhanThuc << " - j" << vct_sophuc[i]->PhanAo*(-1) << std::endl;
            }
        }
    }
    else{
        std::cout << "List is empty\n";
    }
}

void QL_SoPhuc::display(So_Phuc* cplx){
    if(cplx->PhanAo >=0 ){
        std::cout << cplx->PhanThuc << " + j" << cplx->PhanAo << std::endl;
    }
    else{
        std::cout << cplx->PhanThuc << " - j" << cplx->PhanAo*(-1) << std::endl;
    }
    delete(cplx);
}

/*Them so phuc*/
void QL_SoPhuc::insert_Complex_Num(So_Phuc* cplx){
    vct_sophuc.push_back(cplx);
}

/*Cong 2 so phuc*/
So_Phuc* QL_SoPhuc::add_2_Complex_Num(So_Phuc* cplx_1, So_Phuc* cplx_2){
    return new So_Phuc(cplx_1->PhanThuc+cplx_2->PhanThuc,cplx_1->PhanAo+cplx_2->PhanAo);
}

/*Nhan 2 so phuc*/
So_Phuc* QL_SoPhuc::multi_2_Complex_Num(So_Phuc* cplx_1, So_Phuc* cplx_2){
    return new So_Phuc((cplx_1->PhanThuc*cplx_2->PhanThuc)-(cplx_1->PhanAo*cplx_2->PhanAo),(cplx_1->PhanThuc*cplx_2->PhanAo)+(cplx_1->PhanAo*cplx_2->PhanThuc));
}