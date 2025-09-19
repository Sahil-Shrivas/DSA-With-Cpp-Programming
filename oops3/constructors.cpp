// #include <iostream>
// using namespace std;

// class Bike{
// public: 
//     int tyreSize;
//     int engineSize;
//     //default constructor
//     Bike (int tyreSize, int engineSize){
//         this->tyreSize = tyreSize;
//         this->engineSize = engineSize;
//     }
// };

// int main() {
//     Bike tvs(tyreSize: 12, engineSize: 100);
//     Bike honda(tyreSize: 13, engineSize: 150);
//     Bike royalEnfield(tyreSize: 15, engineSize: 350);
//     cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
//     cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
//     cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
// }





#include <iostream>
using namespace std;

class Bike {
public:
    int tyreSize;
    int engineSize;

    // Constructor
    Bike(int tyreSize, int engineSize) {
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
};

int main() {
    Bike tvs(12, 100);
    Bike honda(13, 150);
    Bike royalEnfield(15, 350);

    cout << tvs.tyreSize << " " << tvs.engineSize << endl;
    cout << honda.tyreSize << " " << honda.engineSize << endl;
    cout << royalEnfield.tyreSize << " " << royalEnfield.engineSize << endl;

    
}
