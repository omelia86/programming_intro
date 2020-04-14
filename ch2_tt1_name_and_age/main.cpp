#include <iostream>

using namespace std;

int main()
{
    cout << "Please, enter your name and age\n";
    string first_name;
    cin >> first_name;

    double age_years;
    cin >> age_years;

    double age_months;
    age_months = 12 * age_years;
    cout << "\n";
    cout << "\n";
    cout << age_months;
    cout << "\n";
    cout << "\n";
}
