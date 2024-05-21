#pragma once
#include "Parent.h"
class Monsters :public Parent
{
	//int coins;
	//int idLocation;
	int countMonsters;
	int IDMonster;
public:
	int GetCoutMonsters();
	int GetIDMonster();
	void SetCoutMonsters(int id);
	void SetIDMonster(int m);

	void SetIDLocation(int id);
	void SetCoins(int c);
	void GetIDLocation();
	void GetCoins();

	Monsters(); // конструктор без параметров
	Monsters(int coins, int idLocation, int IDMonster, int countMonsters); // заданными значениями
	//Monsters(const Monsters& change);  // копирования
	//Monsters(Monsters&& change);   // перемещения 
	virtual ~Monsters() override {};

	void fill() override;  // заполнения с клавиатуры
	void print() const override;  // вывод на экран 
};
