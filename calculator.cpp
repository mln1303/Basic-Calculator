#include <iostream>
#include <math.h>
using namespace std;
class Calculator {
    double a, b;
public:
    void input() {
        cout << "Enter First Number: ";
        cin >> a;
        cout << "Enter Second Number: ";
        cin >> b;
    }
    double add() {
        return a + b;
    }
    double sub() {
        return a - b;
    }
    double multi() {
        return a * b;
    }
    double divi() {
        if (b == 0) {
            cout << "Divison By Zero gives ";
            return INFINITY;
        }
        else {
            return a / b;
        }
    }
};
int main() {
    int menu;
    Calculator cal; // simple calculator object
    cout << "Enter 1 to Add 2 Numbers"
        << "\nEnter 2 to Subtract 2 Numbers"
        << "\nEnter 3 to Multiply 2 Numbers"
        << "\nEnter 4 to Divide 2 Numbers"
        << "\nEnter 0 To Exit"
        << "\n";
    do {
        cout << "\nEnter Choice: ";
        cin >> menu;
        switch (menu) {
        case 1:
            cal.input();
            cout << "Result od addition: " << cal.add() << endl;
            break;
        case 2:
            cal.input();
            cout << "Result of subtraction: " << cal.sub() << endl;
            break;
        case 3:
            cal.input();
            cout << "Result of multiplication: " << cal.multi() << endl;
            break;
        case 4:
            cal.input();
            cout << "Result of division: " << cal.divi() << endl;
            break;
        }
    } while (menu >= 1 && menu <= 4);
    return 0;
}
