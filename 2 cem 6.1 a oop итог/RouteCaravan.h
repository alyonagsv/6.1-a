#pragma once
#include "Parent.h"
class RouteCaravan :public Parent
{
	int time; // ������� �������, �� ������� ������� ������ ������� � ����� ���������� 
	int idLocationEnd; //������������� ������� ������
	// idLocation �������������� ������� �����
public:
	void SetIDLocationEnd(int ide);
	int GetIDLocationEnd();
	void SetTime(int t);
	int GetTime();

	void SetIDLocation(int id);
	void SetCoins(int c);
	void GetIDLocation();
	void GetCoins();

	RouteCaravan(); // ����������� ��� ����������
	RouteCaravan(int coins, int idLocation, int idLocationEnd, int time);  // ��������� ����������
	//RouteCaravan(const RouteCaravan& change)noexcept;  // �����������
	//RouteCaravan(RouteCaravan&& change);   // ����������� 
	virtual ~RouteCaravan() override {};

	void fill()override;  // ���������� � ����������
	void print() const override;  // ����� �� ����� 
};
//� ���������� ������� �����, ���������� �� ���������� �������
//� ������������� ������� � ������ ��������
//� ������������� ������� � ����� ��������
//� ������� �������, �� ������� ������� ������ ������� � ����� ����������