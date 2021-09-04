#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,flg = 0;
	unsigned long ans = 0;
	cin >> n;
	flg = n;
	vector<int> a(3*n);
	vector<vector<int>> data(n, vector<int>(3));

	for(int i = 0; i < 3 * n; i++)
	{
		cin >> a.at(i);
	}

	sort(a.begin(), a.end(), greater<int>());

	for(int i = 0; i < 3; i++)
	{
		for(int k = 0; k < n; k++)
		{
			data.at(k).at(i) = a.at(i * n + k);
		}
	}
				
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << data.at(i).at(j);
			cout << " ";
		}
		cout << endl;
	}

	for(int i = 0; i < n; i++)
	{
		ans += data.at(i).at(1);
	}

	cout << ans << endl;

}
