#include <string>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		
		if (s[i]=='0') {
			s[i] = '1';
		}
	}
	cout << s;



}

