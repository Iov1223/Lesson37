// ������������ ������ ������� C++
#include <iostream>
using namespace std;

// ����� ������� ��������� �������� � ������ � ������� begin
template <typename T> int searchIndex(T array[], int L, T key, int begin = 0) {
	for (int i = begin; i < L; i++)
		if (array[i] == key)
			return i;
	return -1;
}
// ����� ����������� ��������� �������� � ������ � ������� begin
template <typename T> int searchLastIndex(T array[], int L, T key, int begin = - 1 ) {
	if (begin == -1)
		begin = L - 1;
	for (int i = begin; i >= 0 ; i--)
		if (array[i] == key)
			return i;
	return -1;
}

// ������ "��������"
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

	// ����� ����������� ��������� �������� � ������ � ������� begin
	/*double a[5] = {5.3, 8.1, 10.0, 5.3, -6.0};
	int index = searchLastIndex(a, 5, 5.3, 3);
	if (index == -1)
		cout << "�������� ��� � �������\n";
	else
		cout << "��������� ������� �������� = " << index << "\n";*/
	// ����� ������� ��������� �������� � ������ � ������� begin
	/*int index = searchIndex(a, 5, 5.3, 2);
	if (index == -1)
		cout << "�������� ��� � �������\n";
	else
		cout << "������� ����� �� " << index << " �������\n";*/

	// ������ "��������"
	cout << "���������� ������:\n";
	char word[8] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	showWord(word, 8);
	cout << "������� ������: ";
	char sym;
	cin >> sym;
	cout << "��������:\n";
	subWord(word, 8, sym);


	return 0;
}