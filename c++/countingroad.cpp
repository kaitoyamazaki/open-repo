#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,a,b,t = 0,fg1 = 0,fg2 = 0;
	cin >> n >> m;

	vector<vector<int>> data(n,vector<int>(n));

	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < n; j++)
		{
			data.at(i).at(j) = 0;
		}

	}
/*
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout <<data.at(i).at(j);
		}
		cout << endl;

	}
*/

	while(fg1 < m)
	{
		cin >> a >> b;
		a = a-1;
		b = b-1;
		data.at(a).at(b)++;
		data.at(b).at(a)++;
		fg1++;
	}


	for(int i = 0; i < n;i++)
	{
		int road = 0;
		for(int j = 0; j < n; j++)
		{
			//cout <<data.at(i).at(j);
			if(data.at(i).at(j) > 0)
				road += data.at(i).at(j);
		}	
		cout << road << endl;

	}




}

