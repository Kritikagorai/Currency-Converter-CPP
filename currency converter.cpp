#include <iostream>
using namespace std;

int main() {
    int choice;
    float amount, converted;

    cout << "\n------------------------------------CURRENCY CONVERTER-------------------------\n";
    cout << "Convert FROM Indian Rupees (INR) TO:\n";
    cout << " 1. US Dollar (USD)\n";
    cout << " 2. Euro (EUR)\n";
    cout << " 3. British Pound (GBP)\n";
    cout << " 4. Japanese Yen (JPY)\n";
    cout << " 5. Australian Dollar (AUD)\n";
    cout << " 6. Canadian Dollar (CAD)\n";
    cout << " 7. Chinese Yuan (CNY)\n";
    cout << " 8. Russian Ruble (RUB)\n";
    cout << " 9. UAE Dirham (AED)\n";
    cout << "10. Indian Rupee (INR)\n";

    cout << "\nEnter your choice (1 to 10): ";
    cin >> choice;

    cout << "Enter amount in INR: ";
    cin >> amount;

    // Conversion logic
    if (choice == 1)
        converted = amount * 0.012;     // USD
    else if (choice == 2)
        converted = amount * 0.011;     // EUR
    else if (choice == 3)
        converted = amount * 0.0094;    // GBP
    else if (choice == 4)
        converted = amount * 1.78;      // JPY
    else if (choice == 5)
        converted = amount * 0.018;     // AUD
    else if (choice == 6)
        converted = amount * 0.016;     // CAD
    else if (choice == 7)
        converted = amount * 0.088;     // CNY
    else if (choice == 8)
        converted = amount * 1.05;      // RUB
    else if (choice == 9)
        converted = amount * 0.044;     // AED
    else if (choice == 10)
        converted = amount;             // INR to INR
    else {
        cout << "\n❌ Invalid choice! Please enter between 1 and 10.\n";
        return 0;
    }

    cout << "\n✅ Converted Amount: " << converted << endl;
    cout << "=======================================\n";
    return 0;
}