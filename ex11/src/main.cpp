#include "../header/QL_SoPhuc.hpp"

int main(){
    QL_SoPhuc manager;
    double _phanthuc;
    double _phanao;
    int number_1;
    int number_2;
    while(1){
        std::cout << "\n-----------------------------------\n";
        std::cout << "Application Complex Numberic Manager\n";
        std::cout << "Select 1: To insert Complex Number\n";
        std::cout << "Select 2: To add 2 Complex Number\n";
        std::cout << "Select 3: To multiple 2 Complex Number\n";
        std::cout << "Select 4: To show all Complex Numberic\n";
        std::cout << "Select 5: To exit\n";
        std::cout << "Your choice: ";
        int option;
        std::cin >> option;
        switch (option)
        {
        case 1:
            std::cout << "\n-----------------------------------\n";
            std::cout << "Enter Real Number: ";
            std::cin >> _phanthuc;
            std::cout << "Enter Imaginary Number: ";
            std::cin >> _phanao;
            manager.vct_sophuc.push_back(new So_Phuc(_phanthuc,_phanao));
            break;
        case 2:
            std::cout << "\n-----------------------------------\n";
            std::cout << "Select 2 Real Number in the list: \n";
            manager.display();
            std::cout << "Enter index of First Real Number: ";
            std::cin >> number_1;
            while(number_1 <0 || number_1>=manager.vct_sophuc.size()){
                std::cout << "Select index between " << 0 << " and " << manager.vct_sophuc.size()-1 << ". Please try again\n";
                std::cout << "Enter index of First Real Number: ";
                std::cin >> number_1;
            }
            std::cout << "Enter index of Second Real Number: ";
            std::cin >> number_2;
            while(number_2 <0 || number_2>=manager.vct_sophuc.size()){
                std::cout << "Select index between " << 0 << " and " << manager.vct_sophuc.size()-1 << ". Please try again\n";
                std::cout << "Enter index of Second Real Number: ";
                std::cin >> number_2;
            }
            std::cout << "Result: ";
            manager.display(manager.add_2_Complex_Num(manager.vct_sophuc[number_1],manager.vct_sophuc[number_2]));
            std::cout << "\n";
            break;
        case 3:
            std::cout << "\n-----------------------------------\n";
            std::cout << "Select 2 Real Number in the list: \n";
            manager.display();
            std::cout << "Enter index of First Real Number: ";
            std::cin >> number_1;
            while(number_1 <0 || number_1>=manager.vct_sophuc.size()){
                std::cout << "Select index between " << 0 << " and " << manager.vct_sophuc.size()-1 << ". Please try again\n";
                std::cout << "Enter index of First Real Number: ";
                std::cin >> number_1;
            }
            std::cout << "Enter index of Second Real Number: ";
            std::cin >> number_2;
            while(number_2 <0 || number_2>=manager.vct_sophuc.size()){
                std::cout << "Select index between " << 0 << " and " << manager.vct_sophuc.size()-1 << ". Please try again\n";
                std::cout << "Enter index of Second Real Number: ";
                std::cin >> number_2;
            }
            std::cout << "Result: ";
            manager.display(manager.multi_2_Complex_Num(manager.vct_sophuc[number_1],manager.vct_sophuc[number_2]));
            std::cout << "\n";
            break;
        case 4:
            std::cout << "\n-----------------------------------\n";
            std::cout << "List Real Number: \n";
            manager.display();
            break;
        case 5:
            std::cout << "\n-----------------------------------\n";
            std::cout << "Exit\n";
            return 0;
        }
    }
}