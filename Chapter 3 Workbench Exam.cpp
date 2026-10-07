#include <iostream>
#include <string>
using namespace std;

int main()
{
	double max_credit;
	double credit_used;
	double available_credit;

    cout << "Enter the maximum credit limit: ";
    cin >> max_credit;

	cout << "Enter the amount of credit used: ";
	cin >> credit_used;
	
	available_credit = max_credit - credit_used;
	cout << "Your available credit is: " << available_credit << endl;
	return 0;

}


