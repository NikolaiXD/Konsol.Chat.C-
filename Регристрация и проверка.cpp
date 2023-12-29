#include <iostream>
#include <string>
using namespace std;

class User // класс где хронится Логин и Пароль
{
public:
	string username;
	string password;
};

bool registerUser(User& user) // Регристрация пользователя
{
	cout << "Введите Логин" << endl;
	cin >> user.username;
	cout << "Введите Пароль" << endl;
	cin >> user.password;
	cout << "Регристрация успешно завершена!" << endl;
	return true;
}

bool loginUser(const User& user) // Вход в аккаунт 
{
	string enteredUsername, enteredPassword;
	cout << "Введите Логин" << endl;
	cin >> enteredUsername;
	cout << "Введите Пароль" << endl;
	cin >> enteredPassword;
	if (enteredUsername == user.username && enteredPassword == user.password) // Проверка на правильность ввода данных.
	{
		cout << "Вход выполнен успешно" << endl;
		return true;
	}
	else
	{
		cout << "Неправильно введено Логин или Пароль" << endl;
		return false;
	}
}

int main() 
{
	setlocale(LC_ALL, "Rus");
	
	User newUser; // вызов регристрации. newUser - тоже самое что мы вводили в начале при регристрации.
	registerUser(newUser); // вызов входа в аккаунт. 
	cout << "У вас есть 3 попытки" << endl;
	for (int i = 0; i < 3; ++i) // Кол-во попыток на ввод данных
	{
		if (loginUser(newUser)) // Проверка на правильность ввода данных
		{
			break;
		}
	}
	return 0;
}