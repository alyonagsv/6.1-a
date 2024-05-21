#include "Parent.h"
#include "RouteCaravan.h"
#include"iostream"
using namespace std;

void RouteCaravan::SetIDLocation(int id)
{
	Parent::SetIDLocation(id);
}
void RouteCaravan::SetCoins(int c)
{
	Parent::SetCoins(c);
}
void RouteCaravan::GetIDLocation()     /////
{
	Parent::GetIDLocation();
}
void RouteCaravan::GetCoins()         //////
{
	Parent::GetCoins();
}


void RouteCaravan::SetIDLocationEnd(int ide)
{
	idLocationEnd = ide;
}
int RouteCaravan::GetIDLocationEnd()
{
	return idLocationEnd;
}
void RouteCaravan::SetTime(int t)
{
	time = t;
}
int RouteCaravan::GetTime()
{
	return time;
}

RouteCaravan::RouteCaravan() :Parent() // конструктор без параметров
{
	//Parent::Parent();
	time = 1;
	idLocationEnd = 1;
}
RouteCaravan::RouteCaravan(int coins, int idLocation, int idLocationEnd, int time) :Parent(coins, idLocation), idLocationEnd(idLocationEnd), time(time) // заданными значени€ми
{
	//Parent::Parent(coins, idLocation);
	this->time = time;
	this->idLocationEnd = idLocationEnd;
	if (idLocationEnd > 10000 || idLocationEnd < 1)
	{
		cout << "incorrect data " << endl;
		cout << "enter id location of end " << endl;
		cin >> idLocationEnd;
		//	RouteCaravan::RouteCaravan(coins, idLocation, idLocationEnd, time);
	}
	this->idLocationEnd = idLocationEnd;
}
//RouteCaravan::RouteCaravan(const RouteCaravan& change)noexcept  // копировани€
//{
//	Parent::Parent(change);
//	this->idLocationEnd = change.idLocationEnd;
//	this->time = change.time;
//}
//RouteCaravan::RouteCaravan(RouteCaravan&& change)   // перемещени€ 
//{
//	Parent::Parent(change);
//	this->idLocationEnd = change.idLocationEnd;
//	this->time = change.time;
//	change.time = 0;
//	change.idLocationEnd = 0;
//}
void RouteCaravan::fill() // заполнени€ с клавиатуры
{
	cout << "the time (sec) (stamp before which the caravan should arrive at its destination) : ";
	cin >> this->time;
	//cin.ignore();

	cout << "id end of location: ";
	cin >> this->idLocationEnd;
	//cin.ignore();
	cout <<"id start of location " ;
	Parent::fill();
}
void RouteCaravan::print() const   // вывод на экран 
{
	cout << "id start of location ";
	Parent::print();
	cout << "id end of location: " << this->idLocationEnd << endl;
	cout << "the time (sec) stamp before which the caravan should arrive at its destination: " << this->time << endl;
}
//Х количество золотых монет, получаемых за выполнение задани€
//Х идентификатор локаций Ц начала маршрута
//Х идентификатор локаций Ц конец маршрута
//Х отметка времени, до которой караван должен прибыть в место назначени€
