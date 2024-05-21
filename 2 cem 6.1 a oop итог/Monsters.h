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

	Monsters(); // ����������� ��� ����������
	Monsters(int coins, int idLocation, int IDMonster, int countMonsters); // ��������� ����������
	//Monsters(const Monsters& change);  // �����������
	//Monsters(Monsters&& change);   // ����������� 
	virtual ~Monsters() override {};

	void fill() override;  // ���������� � ����������
	void print() const override;  // ����� �� ����� 
};
