#include <iostream>
#include "ani.h"
#include "hum.h"
#include "bird.h"
#include "fish.h"
using namespace std;
int main() {
	animal a;
	human b;
	fish c;
	a.eat();
	b.eat();
	c.eat();
	b.walk();
	c.swim();
	cout << " b " << b.nLegs << "\n";
	return 123;
}