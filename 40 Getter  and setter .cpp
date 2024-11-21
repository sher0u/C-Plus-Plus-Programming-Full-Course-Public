#include <iostream>
#include <ostream>

class stove {
    private:// if  we change it private so no one will have Acces for it
    int temperature =0;

public:
    int gettemperature() { // get just for reading
        return temperature;
    }
    void settemperature(int temp) { //set just for reading
        if (temp < 0) {
            this->temperature = 0;
        }
        else if (temp > 10) {
            this->temperature = 10;
        }
        else {
            this->temperature = temp;
        }
    }
};

int main() {
    stove aaa;
    aaa.settemperature(-12); // to set a new temp
    std::cout << aaa.gettemperature(); // to get a temp
    return 0;
}
