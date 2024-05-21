#pragma once
#include "Parent.h"
//���������� ������� �����, ���������� �� ���������� �������
//� ������������� ������� ������������ ��������
// 
//� ������������� ������� ������������ ���������
//� ������������� ������������� ��������
class DeliveryItem :public Parent
{
	int item; // ������������� ������������� ��������
	int idLocationCustomer; //������������� ������� ���������
	//idLocation ������������� ������� ������������ ��������
public:

	void SetIDLocation(int id);
	void SetCoins(int c);
	void GetIDLocation();
	void GetCoins();

	int GetItem();
	int GetIDLocationCustomer();
	void SetItem(int i);
	void SetIDLocationCustomer(int id);

	DeliveryItem(); // ����������� ��� ����������
	DeliveryItem(int coins, int idLocation, int item, int idLocationCustomer);  // ��������� ����������
	//DeliveryItem(const DeliveryItem& change)noexcept;  // �����������
	//DeliveryItem(DeliveryItem&& change);   // ����������� 
	~DeliveryItem() override {};

	void fill() override;  // ���������� � ����������
	void print() const override;  // ����� �� ����� 
};
