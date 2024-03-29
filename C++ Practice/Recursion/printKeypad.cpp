#include <bits/stdc++.h>
using namespace std;


vector<string> letterCombinationsUtil(const int number[], int n, const string table[])
{
	vector<string> list;

	queue<string> q;
	q.push("");

	while (!q.empty()) {
		string s = q.front();
		q.pop();


		if (s.length() == n)
			list.push_back(s);
		else

			
			for (auto letter : table[number[s.length()]])
				q.push(s + letter);
	}

	
	return list;
}


void letterCombinations(const int number[], int n)
{


	string table[10]
		= { "0", "1", "abc", "def", "ghi",
			"jkl", "mno", "pqrs", "tuv", "wxyz" };

	vector<string> list
		= letterCombinationsUtil(number, n, table);

	// Print the contents of the vector
	for (auto word : list)
		cout << word << " ";

	return;
}


int main()
{
	int number[] = { 3, 4 };
	int n = sizeof(number) / sizeof(number[0]);

	
	letterCombinations(number, n);

	return 0;
}
