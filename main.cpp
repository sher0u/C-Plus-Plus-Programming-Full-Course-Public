#include <iostream>
#include <iomanip>//To use precise in teh value  check the line 7

//Bank account program
//tasks; deposit withdraw and show balance .
double ShowBalncefunction(double balence) {
    std::cout << "Your balence is " << std::setprecision(2)<<std::fixed << balence <<std::endl;
    return 0;
}
double depositFucntion() {
    double amount=0;
    std::cout << "Please enter the amount to deposit: ";
    std::cin >> amount;
    return amount;
}
double withdrawFucntion() {
    double amount=0;
    std::cout << "Please enter the amount to withdraw: ";
    std::cin >> amount;
    return amount;
}

int main() {
    double balance=0;
    int choice=0;
    do {
        std::cout << "Hello World! Welcome To Sbeerbank ATM powered By Abdelkader" << std::endl;
        std::cout <<"Enter Your choice"<< std::endl;
        std::cout << "1. Show Balnce"<< std::endl;
        std::cout << "2. Deposit"<< std::endl;
        std::cout << "3. Withdraw"<< std::endl;
        std::cout << "4. Exit"<< std::endl;
        std::cin >> choice;
        switch (choice) {
            case 1:ShowBalncefunction(balance);
            break;
            case 2:balance=balance+depositFucntion();
            ShowBalncefunction(balance);
            break;
            case 3:balance=balance-withdrawFucntion();
            ShowBalncefunction(balance);
            break;
            case 4:std::cout << "Thanks for Using our bank"<< std::endl;
            break;
            default:
                std::cout << "invalid choice"<< std::endl;
        }
    } while (choice!=4);

    return 0;
}


