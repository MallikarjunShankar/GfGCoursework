#include <iostream>
using namespace std;
int main(){
    int input;
    float temp, finalTemp;
    cout << "Temperature Converter" << endl;
    do {
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> input;
        if (input == 1){
            cout << "Enter the temperature in Celcius: ";
            cin >> temp;
            finalTemp = (temp * 1.8) + 32;
            cout << "Temperature in Fahrenheit: " << finalTemp << endl; 
        }
        else if (input == 2){
            cout << "Enter the temperature in Farenheit: ";
            cin >> temp;
            finalTemp = (temp - 32) * 0.55556;
            cout << "Temperature in Celcius: " << finalTemp << endl;
        }
        else {
            if (input != 3) {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    } while (input != 3);
    return 0;
}
