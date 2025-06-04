#include <iostream>
using namespace std;

void showMenu() {
cout << "\nCurrency Converter Menu:"<<endl;
cout << "1. INR to USD"<<endl;
cout << "2. INR to EUR"<<endl;
cout << "3. INR to GBP"<<endl;
cout << "4. USD to INR"<<endl;
cout << "5. EUR to INR"<<endl;
cout << "6. GBP to INR"<<endl;
cout << "7. Exit"<<endl;
cout << "Choose an option (1-7): ";
}

int main() 
{
int choice;
float amount;
while (true) 
{
showMenu();
cin >> choice;
if (choice == 7) 
{
cout << "Exiting Currency Converter."<<endl;
break;
}
cout << "Enter the amount: ";
 cin >> amount;
switch (choice)
    {
 case 1:
cout << "INR " << amount << " = USD " << amount / 83.0 << endl;
break;
case 2:
cout << "INR " << amount << " = EUR " << amount / 89.0 << endl;
break;
case 3:
 cout << "INR " << amount << " = GBP " << amount / 102.0 << endl;
break;
case 4:
cout << "USD " << amount << " = INR " << amount * 83.0 << endl;
break;
case 5:
cout << "EUR " << amount << " = INR " << amount * 89.0 << endl;
break;
case 6:
cout << "GBP " << amount << " = INR " << amount * 102.0 << endl;
break;
default:
cout << "Invalid choice. Please try again."<<endl;
}
}
return 0;
}
