#include <iomanip>
#include <iostream>

// Name Spaces:  we use the name spaces to avoid the conflict between two variable having the same name
namespace first { // declaration the first name space
    int x=1;
}

namespace second {
    int x=2;
}

int main() {
    using namespace first; //First method of calling
    using namespace std; // we can use the name space to avoid writing the std every time 
    cout << x << std::endl;

    std::cout <<second::x <<std::endl; //Second method of calling
    return 0;
}
