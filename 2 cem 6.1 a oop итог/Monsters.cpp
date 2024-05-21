#include "Parent.h"
#include "Monsters.h"
#include"iostream"
using namespace std;
int Monsters::GetCoutMonsters()
{
	return countMonsters;
}
int Monsters::GetIDMonster()
{
	return IDMonster;
}
void Monsters::SetCoutMonsters(int id)
{
	countMonsters = id;
}
void Monsters::SetIDMonster(int m)
{
	IDMonster = m;
}

void Monsters::SetIDLocation(int id)
{
	Parent::SetIDLocation(id);
}
void Monsters::SetCoins(int c)
{
	Parent::SetCoins(c);
}
void Monsters::GetIDLocation()
{
	Parent::GetIDLocation();
}
void Monsters::GetCoins()
{
	Parent::GetCoins();
}

Monsters::Monsters() :Parent() 
{
	//Parent::Parent();
	countMonsters = 1;
	IDMonster = 1;
}
Monsters::Monsters(int coins, int idLocation, int IDMonster, int countMonsters)  // заданными значениями
	: Parent(coins, idLocation), IDMonster(IDMonster), countMonsters(countMonsters) {

	if (IDMonster > 200 || IDMonster < 1)
	{
		cout << "incorrect data " << endl;
		cout << "1.enter count of monsters and 2.id monster " << endl;
		cin >> countMonsters; cout << '\t';
		cin >> IDMonster;
	}
	this->IDMonster = IDMonster;
	this->countMonsters = countMonsters;
}
//Monsters::Monsters(const Monsters& change)  // ???????????
//{
//	Parent::Parent(change);
//	this->IDMonster = change.IDMonster;
//	this->countMonsters = change.countMonsters;
//}
//
//Monsters::Monsters(Monsters&& change): Parent(change) // ??????????? 
//{
//	//Parent::Parent(change);
//	this->IDMonster = change.IDMonster;
//	this->countMonsters = change.countMonsters;
//
//	change.IDMonster = 0;
//	change.countMonsters = 0;
//}

void Monsters::fill()  // ?????????? ? ??????????
{
	Parent::fill();
	cout << "count of monsters: ";
	cin >> this->countMonsters;
	cin.ignore();

	cout << "ID of monster: ";
	cin >> this->IDMonster;
	cin.ignore();
}
void Monsters::print() const  // ????? ?? ????? 
{
	Parent::print();
	cout << "id of monster: " << this->IDMonster << endl;
	cout << "count of monsters: " << this->countMonsters << endl;
}
