// #include <iostream>
// using namespace std;
// class Book{
//     char name;
//     int price;
//     int noOfPages;

//     int countBooks(int p){
//         if(price<p)
//         return 1;

//         else 
//         return 0;
//     }

//     bool isBookPresent(char Book){
//         if(name==Book)
//         return true;
//         else
//         return false;
//     }
// };

// int main(){
//     Book harryPotter;
//     harryPotter.name = 'H';
//     harryPotter.price = 1000;
//     harryPotter.noOfPages = 500;

//     cout<<harryPotter.countBooks(100);
//     cout<<harryPotter.isBookPresent('H');
// }







#include <iostream>
using namespace std;

class Book {
public:
    char name;  // If you want to store a single character for name
    int price;
    int noOfPages;

    // If you need to keep it private, call it within the class or make it public.
    int countBooks(int p) {
        if (price < p)
            return 1;
        else
            return 0;
    }

    bool isBookPresent(char bookName) { // Changed argument name to avoid confusion
        if (name == bookName)
            return true;
        else
            return false;
    }
};

int main() {
    Book harryPotter;
    harryPotter.name = 'H';
    harryPotter.price = 1000;
    harryPotter.noOfPages = 500;

    cout << harryPotter.countBooks(100) << endl;
    cout << harryPotter.isBookPresent('H') << endl;

    return 0;
}
