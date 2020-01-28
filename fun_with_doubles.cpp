// chap 4 drill

#include <iostream>
using namespace std;

double number1 = -1;
double number2 = -2;

int main()
{

    while (number1 && number2 != !cin) {
        cout << "Please enter two numbers seperated by a space: \n";
        cin >> number1 >> number2;
        if (cin.fail())
            break;
        else if (number1 > number2)
        {
            cout << "\n" << number1 << ' ' << number2 << "\n";
            cout << "the smaller value is: " << number2 << "\n";
            cout << "the larger value is: " << number1 << "\n";
            if (number1 - number2 < 1.0 / 100)
            {
                cout << "the numbers are almost equal \n";
            }
            else
                continue;
        }
        else if (number1 == number2)
        {
            cout << "\n" << number1 << ' ' << number2 << "\n";
            cout << "the numbers are equal \n";
        }
        else if (number1 < number2)
        {
            cout << "\n" << number1 << ' ' << number2 << "\n";
            cout << "the smaller value is: " << number1 << "\n";
            cout << "the larger value is: " << number2 << "\n";
            if (number2 - number1 < 1.0 / 100)
            {
                cout << "the numbers are almost equal \n";
            }
            else
                continue;
        }
    }
}