// Персональный шаблон проекта C++
#include <iostream>
using namespace std;

// Поиск первого вхождения элемента в массив с позиции begin
template <typename T> int searchIndex(T array[], int L, T key, int begin = 0) {
	for (int i = begin; i < L; i++)
		if (array[i] == key)
			return i;
	return -1;
}
// Поиск последнегно вхождения элемента в массив с позиции begin
template <typename T> int searchLastIndex(T array[], int L, T key, int begin = - 1 ) {
	if (begin == -1)
		begin = L - 1;
	for (int i = begin; i >= 0 ; i--)
		if (array[i] == key)
			return i;
	return -1;
}

// Задача "Подслово"
void showWord(char array[], int L) {
	for (int i = 0; i < L; i++)
	cout << array[i];
	cout << endl;
}
void subWord(char word[], int L, char sym) {
	int index = searchIndex(word, L, sym);
	if (index != -1) {
		for (int i = index; i < L; i++)
			cout << word[i];
		cout << endl;
	}
	else
		cout << "ERROR\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Поиск последнегно вхождения элемента в массив с позиции begin
	/*double a[5] = {5.3, 8.1, 10.0, 5.3, -6.0};
	int index = searchLastIndex(a, 5, 5.3, 3);
	if (index == -1)
		cout << "Элемента нет в массиве\n";
	else
		cout << "Последняя позиция элемента = " << index << "\n";*/
	// Поиск первого вхождения элемента в массив с позиции begin
	/*int index = searchIndex(a, 5, 5.3, 2);
	if (index == -1)
		cout << "Элемента нет в массиве\n";
	else
		cout << "Элемент стоит на " << index << " позиции\n";*/

	// Задача "Подслово"
	cout << "Символьный массив:\n";
	char word[8] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	showWord(word, 8);
	cout << "Введите символ: ";
	char sym;
	cin >> sym;
	cout << "Подслово:\n";
	subWord(word, 8, sym);


	return 0;
}