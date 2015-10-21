#include <iostream>
#include <string>
using namespace std;
class bank

{

private:
	string name;
	string account_number;
	int balance;
	
public:
	
	
	void set_name(string name_return)
	{
		name=name_return;
	}
	void set_account_number(string account_number_return)
	{
		account_number=account_number_return;
	}
	string get_account_number()
	{
		return account_number;
	}
	int deposit (int deposit_value)
	{
		balance=balance+deposit_value;
		return balance;
	}
	int withdraw (int withdraw_value)
	{
		if(withdraw_value>balance)
		{cout<<"request denied"<<endl;}
			else
			{
			balance=balance-withdraw_value;
			return balance;
		}	
	}
	int get_balance()
	{
		return balance;
	}
	bank()
	{	account_number=rand()%100;
		cout<<"please give a valid Account Name"<<endl;
		cin>>name;
		cout<<"please give a valid balance"<<endl;
		cin>>balance;
	}

};
void main(void)
{	
	
	bank bank1;
	
}
