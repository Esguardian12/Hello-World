#include <iostream>

namespace first{
    int e = 1;
}
namespace second{
    int e = 2;
}

int main(){
    std::cout << "I like pizza!" << std::endl;       //std::cout starts the line.         std::endl ends the line.
    std::cout << "It's really good!" << std::endl;
    std::cout << "I'm learning C++" << '\n';         //'\n' can be used but std::endl good to flush the ouput buffer.
    std::cout << "Hello World" << std::endl;

     int x = 5;
    int y = 6;
    int sum = x + y;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << '\n';

    //integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << days << std::endl;
    std::cout << price << std::endl;

    //single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << initial << '\n';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    //String (objects that represent a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << name << '\n';
    std::cout << "Hello " << name << std::endl;
    std::cout << "It's " << day << '\n';
    std::cout << "You are " << age << " years old" << '\n';

     /* Namespace = provides a solution for preventing name conflicts in large projects.
    *              Each entity needs a unique name. A namespace allows for identically 
    *              named entities as long as the namespace are different.
    */

    // int e = 0;
    // std::cout << first:: e << '\n';
    // std::cout << second:: e;

//    using namespace second;
//    using namespace std;           // The reason people use this in typing 
    using std::cout;              // This is a better alternative than using namespace, the namespace is there for an example.
    using std::string;

    std::cout << first::e << '\n';

    std::cout << "Hello " << name;

    return 0;
}