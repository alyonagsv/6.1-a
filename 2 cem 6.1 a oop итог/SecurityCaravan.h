#pragma once
#include "Parent.h"
//• количество золотых монет, получаемых за выполнение задания
//• идентификатор локаций – начала маршрута
//• количество охранников
class SecurityCaravan : public Parent
{
	int countSecurity; //количество охранников
public:

	void SetCountSecurity(int cs);
	int GetCountSecurity();

	void SetIDLocation(int id);
	void SetCoins(int c);
	void GetIDLocation();
	void GetCoins();

	SecurityCaravan(); // конструктор без параметров
	SecurityCaravan(int coins, int idLocation, int countSecurity);  // заданными значениями
	//SecurityCaravan(const SecurityCaravan& change);  // копирования
	//SecurityCaravan(SecurityCaravan&& change);   // перемещения 
	virtual ~SecurityCaravan() override {};

	void fill();  // заполнения с клавиатуры
	void print() const;  // вывод на экран 
};