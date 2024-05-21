#pragma once

class Parent
{
protected:
	int coins; // ���������� ������� �����, ���������� �� ���������� �������
	int idLocation; //������������� �������
public:

	void SetIDLocation(int id);
	void SetCoins(int c);
	int GetIDLocation();
	int GetCoins();

	Parent(); // ����������� ��� ����������
	Parent(int coins, int idLocation);  // ��������� ����������
	//Parent(const Parent& change)noexcept;  // �����������
	//Parent(Parent&& change);   // ����������� 
	virtual ~Parent() {};

	virtual void fill();  // ���������� � ����������
	virtual void print() const;  // ����� �� ����� 
};
