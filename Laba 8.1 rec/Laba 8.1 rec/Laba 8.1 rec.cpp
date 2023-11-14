#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

bool Find(char* str, int i)
{
	if (str[i + 1] != 0)
		if (str[i] == 'n' && str[i + 1] == 'o'
			|| (str[i] == 'o' && str[i + 1] == 'n'))
			return 1 + Find(str, i + 1);
		else
			return Find(str, i + 1);
	else
		return 0;
}

char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i + 1] != 0)
	{
		if (str[i] == 'n' && str[i + 1] == 'o')
		{
			strcat(t, "***");
			return Change(dest, str, t + 3, i + 2);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}

int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	cout << "String contains no or on: " << boolalpha << Find(str, 0) << endl;

	char* dest1 = new char[151];
	dest1[0] = '\0';
	char* dest2;
	dest2 = Change(dest1, str, dest1, 0);
	cout << "Param:  " << dest1 << endl;
	cout << "Result: " << dest2 << endl;

	delete[] dest1;
	return 0;
}
