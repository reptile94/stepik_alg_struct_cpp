// Week 1

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
#include <assert.h>
#include <map>
#include <vector>
#include <algorithm>

////Task 1

//int isBalanced(std::string str) {
//
//	std::stack<char> Stack;
//	std::stack<int> first_stack;
//	int first_in = -1;
//	int i = 0;
//	for (; i < str.length(); ++i) {
//		char c = str[i];
//		if (c == '(' || c == '[' || c == '{') {
//			Stack.push(c);
//			first_stack.push(i + 1);
//		}
//		else if(c == ')' || c == ']' || c == '}')
//		{
//			if (Stack.empty())
//				return i+1;
//			char top = Stack.top();
//			Stack.pop();
//			first_stack.pop();
//			if (top == '[' && c != ']' || top == '(' && c != ')' || top == '{' && c != '}')
//				return i + 1;
//		}
//	}
//	if (Stack.empty())
//		return 0;
//	else
//		return first_stack.top();
//}

////Task 2
//
//std::map<int, int> Map;
//int* pars = new int[100000];
//
//int getDepth(int par) {
//	if (par == -1)
//		return 1;
//	if (Map.find(par) == Map.end())
//		return getDepth(pars[par])+1;
//	else
//		return Map[par]+1;
//}


////Task 5

//class StackWithMax
//{
//	// main stack
//	std::stack<int> mainStack;
//
//	// tack to keep track of max element
//	std::stack<int> trackStack;
//
//public:
//	void push(int x)
//	{
//		mainStack.push(x);
//		if (mainStack.size() == 1)
//		{
//			trackStack.push(x);
//			return;
//		}
//
//		// If current element is greater than
//		// the top element of track stack, push
//		// the current element to track stack
//		// otherwise push the element at top of
//		// track stack again into it.
//		if (x > trackStack.top())
//			trackStack.push(x);
//		else
//			trackStack.push(trackStack.top());
//	}
//
//	int getMax()
//	{
//		return trackStack.top();
//	}
//
//	int pop()
//	{
//		int top = mainStack.top();
//		mainStack.pop();
//		trackStack.pop();
//		return top;
//	}
//
//	int top()
//	{
//		return mainStack.top();
//	}
//
//	bool empty()
//	{
//		return mainStack.empty();
//	}
//
//	int size()
//	{
//		return mainStack.size();
//	}
//
//};

int main()
{
	////Task 1

	//std::string str;
	//std::cin >> str;
	//int err = isBalanced(str);
	//if (err == 0)
	//	std::cout << "Success";
	//else
	//	std::cout << err;
	//

	//assert(isBalanced("([](){([])})") == 0);
	//assert(isBalanced("()[]}") == 5);
	//assert (isBalanced("{{[()]]") == 7);
	//assert (isBalanced("{{{[][][]") == 3);
	//assert (isBalanced("{*{{}") == 3);
	//assert (isBalanced("[[*") == 2);
	//assert (isBalanced("{*}") == 0);
	//assert (isBalanced("{{") == 2);
	//assert (isBalanced("{}") == 0);
	//assert (isBalanced("") == 0);
	//assert (isBalanced("}") == 1);
	//assert (isBalanced("*{}") == 0);
	//assert (isBalanced("{{{**[][][]") == 3);

	////

	////Task 1


	//int n;
	//std::cin >> n;
	//
	//for (int i = 0; i < n; ++i)
	//	std::cin >> pars[i];
	//for (int i = 0; i < n; ++i)
	//{
	//	int par = pars[i];
	//	if (par == -1)
	//		Map[i] = 1;
	//	else
	//		Map[i] = getDepth(par);
	//}

	//int max = 1;
	//for (auto it = Map.cbegin(); it != Map.cend(); ++it)
	//	if (it->second > max)
	//		max = it->second;

	//std::cout << max;

	////


	////Task 4

	//std::stack<int> maxStack;
	//int q;
	//std::cin >> q;
	//for (int i = 0; i < q; ++i)
	//{
	//	std::string str;
	//	std::cin >> str;
	//	if (str == "push") {
	//		int v;
	//		std::cin >>v;
	//		if (maxStack.empty() || v > maxStack.top())
	//			maxStack.push(v);
	//		else
	//			maxStack.push(maxStack.top());
	//	}
	//	if (str == "pop")
	//		maxStack.pop();
	//	if (str == "max")
	//		std::cout << maxStack.top() << '\n';
	//}

	////Task 5

	//std::vector<int> A;
	//std::vector<int> out;

	//int n;
	//std::cin >> n;
	//

	//for (int i = 0; i < n; ++i)
	//{
	//	int a;
	//	std::cin >> a;
	//	A.push_back(a);
	//}

	//int m;
	//std::cin >> m;

	////int n = 15;
	////int m = 7;
	////std::vector<int> A = { 73, 65, 24, 14, 44, 20, 65, 97, 27, 6, 42, 1, 6, 41, 16 };

	//StackWithMax inStack;
	//StackWithMax outStack;

	//for (int i = 0; i < n; ++i)
	//{
	//	int a = A[i];
	//	inStack.push(a);
	//	if (inStack.size() + outStack.size() == m)
	//	{
	//		if (outStack.empty())
	//			while (!inStack.empty())
	//			{
	//				outStack.push(inStack.top());
	//				inStack.pop();
	//			}
	//		if (inStack.empty())
	//			std::cout << outStack.getMax() << ' ';
	//		else
	//			std::cout << std::max(outStack.getMax(), inStack.getMax()) << ' ';
	//		outStack.pop();
	//	}
	//}


    return 0;
}