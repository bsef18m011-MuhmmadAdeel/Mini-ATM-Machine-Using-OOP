#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

/* Mini Project - ATM
   -> Check Balance
   -> Cash withdraw
   -> User Details
   -> Update Mobile No.
*/


class ATM										// class atm 
{
private:										// private member varibles
	long int accountNo;
	string name;
	int PIN;
	double balance;
	string mobileNo;

public:											// public member functions
	ATM()
	{
		accountNo = 123456789;	 // assigning the defaultvalues to the private member variables
		name = " ";
		PIN = 9999;
		balance = 0.0;
		mobileNo = +9287654321;
	}

	//Constructor with all parameters
	ATM(long int a, string n, int pin, double b, string m)
	{
		if (a > 0)		// assigning the formal arguments to the private member variables
		{
			accountNo = a;
		}
		if (n == " ")
		{
			name = n;
		}
		if (pin > 0)
		{
			PIN = pin;
		}
		if (b > 0)
		{
			balance = b;
		}
		if (m == " ")
		{
			mobileNo = m;
		}
		
	}

	// setData function is setting the Data into the private member variables
	void setData(long int a, string n, int pin, double b, string m)
	{
		if (a > 0)		// assigning the formal arguments to the private member variables
		{
			accountNo = a;
		}
		if (n == " ")
		{
			name = n;
		}
		if (pin > 0)
		{
			PIN = pin;
		}
		if (b > 0)
		{
			balance = b;
		}
		if (m == " ")
		{
			mobileNo = m;
		}
	}

	//getAccountNo function is returning the user's account no.
	long int getAccountNo()
	{
		return accountNo;
	}

	//getName function is returning the user's Name
	string getName()
	{
		return name;
	}

	//getPIN function is returning the user's PIN
	int getPIN()
	{
		return PIN;
	}

	//getBalance is returning the user's Bank Balance
	double getBalance()
	{
		return balance;
	}

	//getMobileNo is returning the user's Mobile No.
	string getMobileNo()
	{
		return mobileNo;
	}

	//setMobile function is Updating the user mobile no
	void setMobile(string mobPrev, string mobNew)
	{
		if (mobPrev == mobileNo)						// it will check old Mobile no
		{
			mobileNo = mobNew;						// and Update with new, if old matches
			cout << endl << "Sucessfully Updated Mobile no.";
			_getch();				//getch is to hold the screen ( untill user press any key )																			
		}

		else							// Does not update if old mobile no. does not matches
		{
			cout << endl << "Incorrect !!! Old Mobile no";
			_getch();			  //getch is to hold the screen ( untill user press any key )
		}
	}

	//cashWithDraw function is used to withdraw money from ATM
	void cashWithDraw(int amountA)
	{
		if (amountA > 0 && amountA < balance)		// check entered amount validity
		{
			balance -= amountA;		// balance = balance - amount_a
			cout << endl << "Please Collect Your Cash";
			cout << endl << "Available Balance :" << balance;
			_getch();				//getch is to hold the screen(untill user press any key )
		}
		else
		{
			cout << endl << "Invalid Input or Insufficient Balance";
			_getch();				//getch is to hold the screen ( untill user press any key )
		}
	}
};

int main()
{

	return 0;
}