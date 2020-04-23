#include <iostream>

using namespace std;

int main()
{   cout << "Welcome to FlashFlyer Airlines\n";
    cout <<"Please, enter your surname, name, middle name\n";
    string surname, name,  middle_name;
    cin >> surname >> name >> middle_name;
    cout << "Please, enter your booking number\n";
    string booking_number;
    cin >>booking_number;
    string x = "SU70494";
    cout << "Your flight number is " << x << " Memphis-Trenton\n";
    cout << "Your full name: " + surname + " " + name + middle_name + "\n";
    cout << "Your booking number: " + booking_number +"\n";
    cout << "Please, choose your seat A B C\n";
    string seat;
    cin >> seat;
    cout << "Your flight number is " << x << " Memphis-Trenton\n";
    cout << "Your full name is: " + surname + " " + name + middle_name + "\n";
    cout << "Your booking number" + booking_number+"\n";
    cout << "Your seat number: " + seat +"\n";
    cout << "Your number flight SU70494 \n";
    cout << "Welcome to FlashFlyer Airlines\n";
}
