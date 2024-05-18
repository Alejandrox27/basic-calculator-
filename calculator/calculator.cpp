#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int operation;
    double first_number, second_number, result;

    cout << "-----------------------------------\n";
    cout << "Welcome to my calculator program\n";
    cout << "-----------------------------------\n\n";

    cout << "\ntype on the keyboard a number between 1 and 4 to perform a mathematical operation.\n";
    cout << "Basic operations:\n";
    cout << "1. Sum\n";
    cout << "2. Subtract\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n\n";
    cout << "Power functions:\n";
    cout << "5. Pow\n";
    cout << "6. sqrt\n";
    cout << "7. cbrt\n";
    cout << "8. hypot\n";


    cout << ">> ";
    cin >> operation;

    if (0 < operation && operation < 5){    
        cout << "\nType your first number for the operation: ";
        cin >> first_number;

        cout << "\nType your second number for the operation: ";
        cin >> second_number;
    } else if (operation == 5) {
        cout << "\nType your base for the power: ";
        cin >> first_number;

        cout << "\nType the power: ";
        cin >> second_number;
    } else if (operation == 6) {
        cout << "\nType your number for the square root: ";
        cin >> first_number;
    } else if (operation == 7){
        cout << "\nType your number for the cubic root: ";
        cin >> first_number;    
    } else if (operation == 8){
        cout << "\nType the minor leg of the right triangle: ";
        cin >> first_number;

        cout << "\nType the major leg of the right triangle: ";
        cin >> second_number;
    }


    switch (operation)
    {
    case 1:
        result = first_number + second_number;
        cout << "\nThe result of the sum is: " << result;
        break;

    case 2:
        result = first_number - second_number;
        cout << "\nThe result of the substract is: " << result;
        break;

    case 3:
        result = first_number * second_number;
        cout << "\nThe result of the multiplication is: " << result;
        break;

    case 4:
        if (second_number == 0){
            cerr << "\nError: Division by 0";
            return 0;
        }

        result = first_number / second_number;
        cout << "\nThe result of the division is: " << result;
        break;

    case 5:
        result = pow(first_number, second_number);
        cout << "\nThe result of the power is: " << result;
        break;

    case 6:
        if (first_number < 0) {
            cerr << "\nError: square roots must have a positive base.";
            return 0;
        }

        result = sqrt(first_number);
        cout << "\nThe result of the square root is: " << result;
        break;

    case 7:
        result = cbrt(first_number);
        cout << "\nThe result of the cubic root is: " << result;
        break;

    case 8:
        result = hypot(first_number, second_number);
        cout << "\nThe result of the hypot is: " << result;
        break;
    
    default:
        break;
    }

    return 0;
}