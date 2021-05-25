#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	int maru[1000];
	int fg = 0;

	cin >> a >> b;

	int n1,n2,n;
	n1 = a.size();
	n2 = b.size();
	if(n1 > n2)
		n = n1;
	else
		n = n2;

	if(n1 > n2)
	{
		for(int i = 0; i < n;i++)
		{
			if(a[i] == b[i])
			{
				maru[fg] = 1;
				fg++;
			}

			else if(a[i] != b[i])
			{
				maru[fg] = 0;
				fg++;
				b.insert(i," ");
			}
		}
		cout << a << endl;
		cout << b << endl;
	}	
	
	else if(n1 < n2)
	{
		for(int i = 0; i < n;i++)
		{
			if(b[i] == a[i])
			{
				maru[fg] = 1;
				fg++;
			}
		
			else if(b[i] != a[i])
			{
				maru[fg] = 0;
				fg++;
				a.insert(i," ");
			}
		}
		cout << a << endl;
		cout << b << endl;
	}

	for(int i = 0; i < n; i++)
	{
		if(maru[i] == 1)
			cout << "○";
		else
			cout << "✗";
	}
	cout << endl;
}

