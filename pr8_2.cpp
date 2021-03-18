#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;
char* AStart(char* s)
{
	char sep[10] = " ";
	char* istr;
	char* aStart = new char[151];
	//printf("Результат разбиения : \n");
	istr = strtok(s, sep);
	while (istr != NULL)
	{
		if (istr[0] == 'a') {
			aStart = istr;
		}
		printf("%s\n", istr);
		istr = strtok(NULL, sep);
	}
	return aStart;
}
int main()
{
	char* str = new char[151];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "Last Word With Start Of (a) And Result Of Separation: " << AStart(str) << endl;
	return 0;
}