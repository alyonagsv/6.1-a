#include<iostream>
#include<iomanip>
#include<cstring>
#include"Parent.h"
using namespace std;

void Parent::SetIDLocation(int id)
{
	idLocation = id;
}
void Parent::SetCoins(int c)
{
	coins = c;
}
int Parent::GetCoins()
{
	return coins;
}
int Parent::GetIDLocation()
{
	return idLocation;
}

Parent::Parent()   
{
	idLocation = 1;
	coins = 1;
}
Parent::Parent(int coins, int idLocation) :coins(coins), idLocation(idLocation) // ????????? ??????? 
{
	this->idLocation = idLocation;
	this->coins = coins;
	if (idLocation > 1000000 || idLocation < 1)
	{
		cout << "incorrect data" << endl;
		cout << "enter id of location" << endl;
		cin >> idLocation;
	}
	this->idLocation = idLocation;
}

//Parent::Parent(const Parent& change) noexcept // копирования
//{
//	this->idLocation = change.idLocation;
//	this->coins = change.coins;
//}
// Parent::Parent(Parent&& change)  // ??????????? 
//{
//	 this->idLocation = change.idLocation;
//	 this->coins = change.coins;
//
//	 change.idLocation=NULL;
//	 change.coins=NULL;
//}

void Parent::fill() 
{
	cin.ignore();
	cout << "enter ID location: ";
	cin >> this->idLocation;
	cin.ignore();

	cout << "enter golden coins: ";
	cin >> this->coins;
	cin.ignore();
}

void Parent::print() const 
{
	cout << "id location: " << this->idLocation << endl;
	cout << "golden coins: " << this->coins << endl;
}
