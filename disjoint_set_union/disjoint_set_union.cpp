// disjoint_set_union.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

////Task1

//vector<int> parent;
//vector<int> table_size;
//int max_table_size;
//
//void make_set(int v, int s) {
//	parent.push_back(v);
//	table_size.push_back(s);
//}
//
//int find_set(int v) {
//	if (v == parent[v])
//		return v;
//	return parent[v] = find_set(parent[v]);
//}
//
//int union_sets(int a, int b) {
//	a = find_set(a);
//	b = find_set(b);
//	if (a != b)
//	{
//		parent[b] = a;
//		table_size[a] += table_size[b];
//		table_size[b] = 0;
//		if (table_size[a] > max_table_size)
//			max_table_size = table_size[a];
//	}
//	
//	return max_table_size;
//}

////Task2
vector<int> parent;

void make_set(int v) {
	parent.push_back(v);
}

int find_set(int v) {
	if (v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
	a = find_set(a);
	b = find_set(b);
	if (a != b)
		parent[b] = a;
}

bool equal(int a, int b) {
	a = find_set(a);
	b = find_set(b);
	return a == b;
}


int main()
{
	////Task1

	//int n = 6;
	//vector<int> V = { 10,  0,  5,  0,  3,  3 };
	//for (int i = 0; i < n; i++)
	//	make_set(i, V[i]);
	//max_table_size = 10;

	//union_sets(5, 5);
	//union_sets(5, 4);
	//union_sets(4, 3);
	//union_sets(3, 2);

	//int n, m;
	//max_table_size = 0;
	//cin >> n >> m;
	//for (int i = 0; i < n; i++)
	//{
	//	int s;
	//	cin >> s;
	//	if (s > max_table_size)
	//		max_table_size = s;
	//	make_set(i, s);
	//}

	//vector<int> answer;
	//for (int i = 0; i < m; ++i)
	//{
	//	int d, s;
	//	cin >> d >> s;
	//	answer.push_back(union_sets(d - 1, s - 1));
	//}

	//for (auto i : answer)
	//	cout << i << '\n';

	////Task2

	int n, e, d;
	cin >> n >> e >> d;
	for (int i = 0; i < n; ++i)
		make_set(i);

	for (int i = 0; i < e; ++i)
	{
		int a, b;
		cin >> a >> b;
		union_sets(a-1, b-1);
	}

	for (int i = 0; i < d; ++i)
	{
		int a, b;
		cin >> a >> b;
		if (equal(a-1, b-1))
		{
			cout << 0;
			return 0;
		}
	}

	cout << 1;

    return 0;
}

