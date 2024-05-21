#pragma once
#include "Parent.h"
#include "DeliveryItem.h"
#include"iostream"
using namespace std;
//количество золотых монет, получаемых за выполнение задани€
//Х идентификатор локации расположени€ предмета
// 
//Х идентификатор локации расположени€ заказчика
//Х идентификатор заказываемого предмета

void DeliveryItem::SetIDLocation(int id)
{
	Parent::SetIDLocation(id);
}
void DeliveryItem::SetCoins(int c)
{
	Parent::SetCoins(c);
}
void DeliveryItem::GetIDLocation() //////
{
	Parent::GetIDLocation();

}
void DeliveryItem::GetCoins()      //////
{
	Parent::GetCoins();
}

int DeliveryItem::GetItem()
{
	return item;
}
int DeliveryItem::GetIDLocationCustomer()
{
	return idLocationCustomer;
}
void DeliveryItem::SetItem(int i)
{
	item = i;
}
void DeliveryItem::SetIDLocationCustomer(int id)
{
	idLocationCustomer = id;
}

DeliveryItem::DeliveryItem() :Parent()// конструктор без параметров
{
	//Parent::Parent();
	item = 1;
	idLocationCustomer = 1;
}
DeliveryItem::DeliveryItem(int coins, int idLocation, int item, int idLocationCustomer) : idLocationCustomer(idLocationCustomer), item(item), Parent(coins, idLocation) // заданными значени€ми
{
	//Parent::Parent(coins, idLocation);
	//Parent::Parent(32,80);
	this->item = item;
	this->idLocationCustomer = idLocationCustomer;
	if (item > 10000 || item < 1)
	{
		cout << "incorrect data " << endl;
		cout << "enter item " << endl;
		cin >> item;
		//DeliveryItem::DeliveryItem(coins, idLocation, item, idLocationCustomer);
	}
	this->item = item;
}
//DeliveryItem::DeliveryItem(const DeliveryItem& change)noexcept // копировани€
//{	
//	Parent::Parent(change);
//	this->item = change.item;
//	this->idLocationCustomer = change.idLocationCustomer;
//}
//DeliveryItem::DeliveryItem(DeliveryItem&& change)   // перемещени€ 
//{
//	Parent::Parent(change);
//	this->item = change.item;
//	this->idLocationCustomer = change.idLocationCustomer;
//
//	change.item = 0;
//	change.idLocationCustomer = 0;
//}

void DeliveryItem::fill()   // заполнени€ с клавиатуры
{
	Parent::fill();
	cout << "enter item: ";
	cin >> this->item;
	cin.ignore();

	cout << "enter id Location of Customer: ";
	cin >> this->idLocationCustomer;
	cin.ignore();
}
void DeliveryItem::print() const  // вывод на экран 
{
	Parent::print();
	cout << "item: " << this->item << endl;
	cout << "id Location of Customer: " << this->idLocationCustomer << endl;
}

