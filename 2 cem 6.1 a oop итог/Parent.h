#pragma once

class Parent
{
protected:
	int coins; // количество золотых монет, получаемых за выполнение задания
	int idLocation; //идентификатор локации
public:

	void SetIDLocation(int id);
	void SetCoins(int c);
	int GetIDLocation();
	int GetCoins();

	Parent(); // конструктор без параметров
	Parent(int coins, int idLocation);  // заданными значениями
	//Parent(const Parent& change)noexcept;  // копирования
	//Parent(Parent&& change);   // перемещения 
	virtual ~Parent() {};

	virtual void fill();  // заполнения с клавиатуры
	virtual void print() const;  // вывод на экран 
};
