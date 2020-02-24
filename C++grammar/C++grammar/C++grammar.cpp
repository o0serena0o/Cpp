#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a(10);
	a = 5;//초기화에는 a()사용가능. 대입에는 안됨.
	int b(a);

	cout << a << endl;
	cout << b << endl;

	//범위기반for문. 배열 내에서 for문 사용
	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };
	
	//for (int i = 0; i < 10; i++)
	//{
		//cout << arr[i] << endl;
		//}

	for (int n : arr)
	{
		cout << n << endl;
	}

	for (int& n : arr)
	{
		cout << n << ' ';
		n++;
	}

	//rvalue(&&) 불변값
	//lvalue(&) 가변값
	int a(5);
	int &r1 = a;
	int&& r2 = 3;
	int&& r3 = a * a;
}