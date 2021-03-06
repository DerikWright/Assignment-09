	// Assignment_09.cpp : Defines the entry point for the console application.
	//Derik Wright 
	//Create a new console project C++ program that uses more than one function.
	//Create two functions, one normal transaction, one hacked transaction.
	//Print the original funds and balance for both accounts.
	//Pass funds in a normal transaction using integers parameters.
	//Print the funds and balance showing this normal transaction should change nothing.
	//Now pass the account balance by reference to the hacked transaction.
	//In the hacked transaction swap the bank balances.
	//Print out the new balances.
	//Add any more functions that you may need.
	//Your main function should control all the other functions.
	//Comment your source code file(.CPP) well.
	//Once the program is working have tested it a few times, create a new repository in your GitHub account for your program.
	//Add your solution and files to your new Repository on GitHub.
	//Take a screenshot of this project in GitHub.
	//Take a screenshot of the program working.

#include "stdafx.h"
#include <iostream>

	using namespace std;
//functions decleration 
void safeviewAccountBalanceTransaction(int accountBalanceOne, int accountBalanceTwo);// takes a value of the input values, so no changes remain after function ends (pass by value)
void hackViewAccountBalanceTransaction(int& accountBalanceOne, int& accountBalanceTwo);// takes a reference of the input values, so it can make lasting changes (pass by reference)


int main()
{

	int terroristAccountBalance = 0; //Initialize & declare variable starting value of 1,000,000
	int joesCoffeeShopAccountsBalance = 1000000; //Initialize & declare variable starting value of 0
	cout << "Original values \n";
	cout << "---------------\n";
	cout << "Terrorist Account Balance: " << terroristAccountBalance << "\n";
	cout << "Joes Coffee Shop Accounts Balance: " << joesCoffeeShopAccountsBalance << "\n\n";

	cout << "Calling Normal Transaction\n";
	cout << "---------------\n";
	safeviewAccountBalanceTransaction(terroristAccountBalance, joesCoffeeShopAccountsBalance); //calls function 
	cout << "Terrorist Account Balance: " << terroristAccountBalance << "\n";
	cout << "Joes Coffee Shop Accounts Balance: " << joesCoffeeShopAccountsBalance << "\n\n";

	cout << "Calling Hacked Transaction\n";
	cout << "---------------\n";
	hackViewAccountBalanceTransaction(terroristAccountBalance, joesCoffeeShopAccountsBalance);//calls function 
	cout << "Terrorist Account Balance: " << terroristAccountBalance << "\n";
	cout << "Joes Coffee Shop Accounts Balance: " << joesCoffeeShopAccountsBalance << "\n";


	system("pause");
	return 0;
}

void safeviewAccountBalanceTransaction(int accountBalanceOne, int accountBalanceTwo)// This takes a copy of the values passed into it and swaps them. The pass by value ensures the original values are not changed.
{
	int temp = accountBalanceOne;
	accountBalanceOne = accountBalanceTwo;
	accountBalanceTwo = temp;
}


void hackViewAccountBalanceTransaction(int& accountBalanceOne, int& accountBalanceTwo)// This takes a reference of the provided variables and swaps them. The pass by reference ensures the original values are changed.
{
	int temp = accountBalanceOne;
	accountBalanceOne = accountBalanceTwo;
	accountBalanceTwo = temp;
}