#include <iostream>
#include <string>
using namespace std;

class User // ����� ��� �������� ����� � ������
{
public:
	string username;
	string password;
};

bool registerUser(User& user) // ������������ ������������
{
	cout << "������� �����" << endl;
	cin >> user.username;
	cout << "������� ������" << endl;
	cin >> user.password;
	cout << "������������ ������� ���������!" << endl;
	return true;
}

bool loginUser(const User& user) // ���� � ������� 
{
	string enteredUsername, enteredPassword;
	cout << "������� �����" << endl;
	cin >> enteredUsername;
	cout << "������� ������" << endl;
	cin >> enteredPassword;
	if (enteredUsername == user.username && enteredPassword == user.password) // �������� �� ������������ ����� ������.
	{
		cout << "���� �������� �������" << endl;
		return true;
	}
	else
	{
		cout << "����������� ������� ����� ��� ������" << endl;
		return false;
	}
}

int main() 
{
	setlocale(LC_ALL, "Rus");
	
	User newUser; // ����� ������������. newUser - ���� ����� ��� �� ������� � ������ ��� ������������.
	registerUser(newUser); // ����� ����� � �������. 
	cout << "� ��� ���� 3 �������" << endl;
	for (int i = 0; i < 3; ++i) // ���-�� ������� �� ���� ������
	{
		if (loginUser(newUser)) // �������� �� ������������ ����� ������
		{
			break;
		}
	}
	return 0;
}