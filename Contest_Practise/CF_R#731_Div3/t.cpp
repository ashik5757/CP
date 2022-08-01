#include<bits/stdc++.h>
using namespace std;
string s;
int t;
int main()
{
	// cin >> t;
	// while (t--)
	// {
		cin >> s;
		int l = s.size();
		int It = 0, rt = l - 1;
		bool f = 1;
		while (l != 0)
		{
			if (s[It] == l + 'a' - 1)
			{
				It++;
			}
			else if (s[rt] == l + 'a' - 1)
			{
				rt--;
			}
			else
			{
				f = 0;
				break;
			}
			l--;
		}
		if (f == 0)
		{
			cout << "NO" << "\n";
		}
		else
		{
			cout << "YES" << "\n";
		}
	//}
    system("pause");
	return 0;
}