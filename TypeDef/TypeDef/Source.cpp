#include <iostream>
#include <string>
using namespace std;
using si_t = short int; //just better syntax than typedef(alias)
int sum(int a, int b) {
	return a + b;
}
float sum(float a, float b) {

	return a + b;
}
typedef unsigned long long ull_t; //type def
unsigned long long smth = 10l;
ull_t num2 = 100l;
ull_t sum(ull_t a, ull_t b) {

	return a + b;
}
int main() {
	setlocale(LC_ALL, "Russian");

	return 0;
}
