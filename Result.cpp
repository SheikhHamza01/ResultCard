#include<iostream>
using namespace std;
void main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	cout << "marks"<<endl;
	cout << "Programming fundamentals=";
	cin >> a;
	cout << "Introduction to computing=";
	cin >> b;
	cout << "Calculas=";
	cin >> c;
	cout << "Applied physics=";
	cin >> d;
	cout << "functional english=";
	cin >> e;
	cout << "Woekshops=";
	cin >> f;
	cout << "Total marks=";
	g = a + b + c + d + e + f;
	cout << g<<endl;
	cout << "Average marks=";
	h = g / 6;
	cout << h << endl;
}