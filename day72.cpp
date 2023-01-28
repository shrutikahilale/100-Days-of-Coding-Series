#include <iostream>
using namespace std;

void addStr(string &s, int i, string substr)
{
	int n = s.size();
	string temp = "";

	for (int j = 0; j < i; j++)
	{
		temp += s[j];
	}

	temp = temp + substr;

	for (int j = i; j < n; j++)
	{
		temp += s[j];
	}

	s = temp;
}

void printStr(string s, int i, int len)
{
	for (int j = i - 1; j < i + len; j++)
	{
		cout << s[j];
	}
	cout << "\n";
}

int main()
{
	int q;
	cin >> q;
	string s = "";

	while (q--)
	{
		char symbol;
		int i;
		string substr;
		int len;

		cin >> symbol >> i;

		if (symbol == '+')
		{
			cin >> substr;
			addStr(s, i, substr);
		}
		else
		{
			cin >> len;
			printStr(s, i, len);
		}
	}
	return 0;
}