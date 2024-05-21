#include "Parent.h"
#include "SecurityCaravan.h"
#include"iostream"
using namespace std;
//� ���������� ������� �����, ���������� �� ���������� �������
//� ������������� ������� � ������ ��������
//� ���������� ����������

void SecurityCaravan::SetCountSecurity(int cs)
{
	countSecurity = cs;
}
int SecurityCaravan::GetCountSecurity()
{
	return countSecurity;
}
void SecurityCaravan::SetIDLocation(int id)
{
	Parent::SetIDLocation(id);
}
void SecurityCaravan::SetCoins(int c)
{
	Parent::SetCoins(c);
}
void SecurityCaravan::GetIDLocation()    ////
{
	Parent::GetIDLocation();
}
void SecurityCaravan::GetCoins()          /////
{
	Parent::GetCoins();
}

SecurityCaravan::SecurityCaravan() :Parent()// ����������� ��� ����������
{
	//Parent::Parent ();
	countSecurity = 1;
}
SecurityCaravan::SecurityCaravan(int coins, int idLocation, int countSecurity) : Parent(coins, idLocation), countSecurity(countSecurity)   // ��������� ����������
{
	//Parent:: Parent(coins, idLocation);
	this->countSecurity = countSecurity;
}
//SecurityCaravan::SecurityCaravan(const SecurityCaravan& change)  // �����������
//{
//	Parent::Parent(change);
//	this->countSecurity = change.countSecurity;
//}
//SecurityCaravan::SecurityCaravan(SecurityCaravan&& change)   // ����������� 
//{
//	Parent::Parent(change);
//	this->countSecurity = change.countSecurity;
//	change.countSecurity = 0;
//}
void SecurityCaravan::fill()  // ���������� � ����������
{
	Parent::fill();
	cout << "count of security: ";
	cin >> this->countSecurity;
	cin.ignore();
}
void SecurityCaravan::print() const  // ����� �� ����� 
{
	Parent::print();
	cout << "cout of security: " << this->countSecurity << endl;
}
