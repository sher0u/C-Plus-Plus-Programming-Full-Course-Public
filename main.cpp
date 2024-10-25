#include <iostream>

// Pass Array to fucntion;
double GetTheSomme(double prices[],int size) {
    double sum=0;
    for(int i=0;i<size;i++) {
        sum+=prices[i];
    }
    return sum;
}

int main() {

    double price[5]={43.00,11.00,75.00,342.00,12.00};
    int razmer=0;
    double somme=0;

    razmer=sizeof(price)/sizeof(price[0]);

    somme=GetTheSomme(price,razmer);
    std::cout<<somme;

    return 0;
}

