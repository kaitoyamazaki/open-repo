#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> p(n);
	vector<int> q(n);

	for(int i = 0; i < n; i++)
	{
		cin >> p.at(i);
		q.at(p.at(i) - 1) = i + 1;
		cout << q.at(i) << " ";
	}
	
	cout << endl;

	/*
	for(int i = 0; i < n; i++)
	{
		q.at(p.at(i) - 1) = i + 1;
	}

	for(int i = 0; i < n; i++)
	{
		cout << q.at(i) << " ";
	}

	cout << endl;

	*/
}


