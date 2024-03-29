#include <bits/stdc++.h>
using namespace std;


struct meeting {
	int start;
	int end;
	int pos;
};

bool comparator(struct meeting m1, meeting m2)
{
	return (m1.end < m2.end);
}

void maxMeeting(int s[], int f[], int n)
{
	struct meeting meet[n];
	for (int i = 0; i < n; i++)
	{
		meet[i].start = s[i];

		meet[i].end = f[i];

		meet[i].pos = i + 1;
	}

	sort(meet, meet + n, comparator);

	vector<int> m;

	m.push_back(meet[0].pos);

	int time_limit = meet[0].end;

	for (int i = 1; i < n; i++) {
		if (meet[i].start >= time_limit)
		{
			m.push_back(meet[i].pos);

			time_limit = meet[i].end;
		}
	}

	for (int i = 0; i < m.size(); i++) {
		cout << m[i] << " ";
	}
}

int main()
{
	int s[] = { 1, 3, 0, 5, 8, 5 };

	int f[] = { 2, 4, 6, 7, 9, 9 };

	int n = sizeof(s) / sizeof(s[0]);

	maxMeeting(s, f, n);

	return 0;
}
