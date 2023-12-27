#include <iostream>
using namespace std;

void NameDevelopers()
{
	cout << "Привет всем кто проверяет данную работу" << endl;
	cout << "Работу делали:" << endl;
	cout << "Данил Куликов, " << "Влад Колесниченко, " << "Николай Леванов.";
}

int main()
{
	setlocale(LC_ALL, "Rus");
	NameDevelopers();
}