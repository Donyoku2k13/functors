#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<Windows.h>
#include<fstream>
#include<list>
#include <iterator>
#include <algorithm>
#include <time.h>
using namespace std;

//class aBegin {
//	char z;
//public:
//	aBegin(char z) { this->z = z; }
//	bool operator()(const string s) { return s[0] == z; }
//};
class A {
	int x;
public:
	A(int x) { this->x = x; }
	virtual void f() {};
};
class B :public A {

public:
	B(int x) :A(x) {};
	 void f()override {};
};
class C :public A {
public:
	C(int x) :A(x) {};
	 void f()override {};
};



void main() 
{

	//1
	/*list<string>l = {"sdsqs","qwert","asdg","sdf","aqwa"};

	//l.remove_if(aBegin('a'));
	l.remove_if([](const string &s) {
		return s[0] == 'a';
	});
	copy(begin(l), end(l), ostream_iterator<string>(cout, " "));*/

	//2
	/*int a;
	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	cout << "enter the number";
	cin >> a;
	for_each(begin(v), end(v), [a](int &i) {
		i /= a;
	});
	for (double i : v)
		cout << i << "\t";
	cout << endl;*/


	//3
	/*vector<int> nc;
	vector<int> ch;
	vector<int> v3(20);

	generate_n(begin(v3), 20,[]() {
		return 1 + rand() % 100;
	});
	ch.resize(
	count_if(begin(v3), end(v3), [](int &i) {
		return i % 2 == 0;
	}));
	copy_if(begin(v3), end(v3), ch.begin(), [](int i) {
		return i % 2 == 0;
	});

	nc.resize(v3.size()-ch.size());
	copy_if(begin(v3), end(v3), ch.begin(), [](int i) {
		return !(i % 2) == 0;
	});*/

	//4//check sort time
	/*vector<int> v(1000);
	vector<int> v2(1000);
	generate_n(begin(v), 1000, []() {
		return 1 + rand() % 100;
	});generate_n(begin(v2), 1000, []() {
		return 1 + rand() % 100;
	});
	size_t c1 = clock();
	for (int pass = 0; pass < v.size() - 1; pass++)
	{
		for (int i = 0; i < v.size() - 1; i++)
		{
			if (v[i], v[i + 1] == 1)
				swap(v[i], v[i + 1]);
		}

	}
	/*for (auto i : v) {
		cout << i << "  ";
	}
	size_t c2 = clock();
	cout << "cycle for bubble: " << double(c2 - c1) / 1000 << "seconds\n";
	size_t c3 = clock();
	sort(begin(v2), end(v2));
	size_t c4 = clock();
	cout << "cycle for sort: " << double(c4 - c3) / 1000 << "seconds\n";*/

	//5


	vector<A*> a;
	a.push_back(&A(5));
	a.push_back(&A(15));
	a.push_back(&A(4));
	a.push_back(&B(2));
	a.push_back(&B(3));
	a.push_back(&B(7));
	a.push_back(&C(10));
	a.push_back(&C(8));
	a.push_back(&C(9));
	a.push_back(&A(5));

	int cnt = count_if(begin(a), end(a), [](auto i) 
	{
		bool a = false;
		if (string(typeid(*i).name()).substr(6).compare("C") == 0))
		{
			a = true;
		}
		return a;
	});

	system("pause");
}
