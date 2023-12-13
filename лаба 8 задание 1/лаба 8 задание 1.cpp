#include <iostream>
#include <clocale>
#include <string>

using namespace std;

/*
* Лабораторная работа 8. Поливцев Михаил, ИВТ-31. Задание 1. Индивидуальный вариант задания 16.
* Дан символ С и строка S. Сформировать из строки S строку S1,
* в которой после каждого вхождения С вставить цифру 0.
*/

int main() {
	setlocale(LC_ALL, "ru");

	string s, s1;
	char c;

	cout << "Введите строку S >> ";
	getline(cin, s);
	cout << "Введите символ С >> ";
	cin >> c;

	s1 = s;
	int j = 1;
	for (int i = 0; i < size(s); i++) {
		if (s[i] == c) {
			s1.insert(i + j, "0");
			j++;
		}
	}

	cout << s1 << endl;
}