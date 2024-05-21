#pragma once
#include "Parent.h"
//� ���������� ������� �����, ���������� �� ���������� �������
//� ������������� ������� � ������ ��������
//� ���������� ����������
class SecurityCaravan : public Parent
{
	int countSecurity; //���������� ����������
public:

	void SetCountSecurity(int cs);
	int GetCountSecurity();

	void SetIDLocation(int id);
	void SetCoins(int c);
	void GetIDLocation();
	void GetCoins();

	SecurityCaravan(); // ����������� ��� ����������
	SecurityCaravan(int coins, int idLocation, int countSecurity);  // ��������� ����������
	//SecurityCaravan(const SecurityCaravan& change);  // �����������
	//SecurityCaravan(SecurityCaravan&& change);   // ����������� 
	virtual ~SecurityCaravan() override {};

	void fill();  // ���������� � ����������
	void print() const;  // ����� �� ����� 
};