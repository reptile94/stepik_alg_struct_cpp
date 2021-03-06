// priority_queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


//// Task 1
////int n = 6;
////std::vector<int> A = { 7, 6, 5, 4, 3, 2 };
//std::vector<int> A;
//std::vector<std::pair<int, int>> swaps;
//
//
//int left(int i) {
//	return (i + 1) * 2 - 1;
//}
//
//int right(int i) {
//	return (i + 1) * 2;
//}
//
//
//void SiftDown(int i, int n) {
//	int maxIndex = i;
//	
//	int l = left(i);
//	if (l < n && A[l] < A[maxIndex])
//		maxIndex = l;
//	
//	int r = right(i);
//	if (r < n && A[r] < A[maxIndex])
//		maxIndex = r;
//
//	if (i != maxIndex)
//	{
//		std::swap(A[i], A[maxIndex]);
//		swaps.push_back(std::make_pair(i, maxIndex));
//		SiftDown(maxIndex, n);
//	}
//}

////Task2

class Processor
{
public:
	long index;
	long time;
	Processor(long index, long time) : index(index), time(time) {}
};

class myComparator
{
public:
	int operator() (const Processor& p1, const Processor& p2)
	{
		if (p1.time == p2.time)
			return p1.index > p2.index;
		else
			return p1.time > p2.time;
	}
};

int main()
{
	//// Task 1

	//int n;
	//std::cin >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	int a;
	//	std::cin >> a;
	//	A.push_back(a);
	//}


	//for (int i = (n - 1) / 2; i > -1; i--)
	//	SiftDown(i, n);

	//std::cout << swaps.size() << '\n';
	//for (auto swap : swaps)
	//	std::cout << swap.first << ' ' << swap.second << '\n';

	////Task 2

	priority_queue <Processor, vector<Processor>, myComparator > pq;

	//int n = 2, m = 15;
	//vector<int> T = { 0, 0, 1, 0, 0, 0, 2, 1, 2 ,3, 0, 0, 0, 2, 1 };
	
	long n, m;
	vector<long> T;
	cin >> n;
	cin >> m;

	for (long i = 0; i < m; ++i)
	{
		long t;
		cin >> t;
		T.push_back(t);
	}
		

	for (long i = 0; i < n; ++i)
		pq.push(Processor(i, 0));

	for (long i = 0; i < m; ++i)
	{
		long index = pq.top().index;
		long time = pq.top().time;
		cout << index << ' ' << time << '\n';
		pq.pop();
		pq.push(Processor(index, time+T[i]));
	}
		
	
    return 0;
}

