#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
//int maximum(int x,int y, int z);
//int main(void) {
//
// cout << "Enter three integer values: ";
//
// int int1, int2, int3;
//
// cin >> int1 >> int2 >> int3;
//
// cout << "The maximum value is: " << maximum(int1, int2, int3) << endl;
//
// return 0;
//}
//int maximum(int x,int y,int z) {
// int maximumValue = x;
// if (y > maximumValue) maximumValue = y;
// if (z > maximumValue) maximumValue = z;
//
// return maximumValue;
//}
//
//int maximum(int x, int y, int z) {
// int maximumValue = x;
// if (y > maximumValue) maximumValue = y;
// if (z > maximumValue) maximumValue = z;
//
// return maximumValue;
//}
//int secondMax(int x, int y, int z, int w);
//int main(void) {
//
// string n;
//
// while (n != "n") {
//
// srand(time(0));
//
// int x = rand() % 90 + 10;
// int y = rand() % 90 + 10;
// int z = rand() % 90 + 10;
// int w = rand() % 90 + 10;
//
// cout << "Generated numbers: " << x << " " << y << " " << z << " " << w << "\n";
// cout << "2nd maximum: " << secondMax(x, y, z, w) << "\n";
// cout << "One more time? (y/n)";
// cin >> n;
// }
// return 0;
//}
//int secondMax(int x, int y, int z, int w) {
// int secondValue = 0;
//
// int max = (x > y) && (x > z) && (x > w) ? x : (y > x) && (y > z) && (y > w) ? y : (z > x) && (z > y) && (z > w) ? z : w;
//
//
// if (max == x) {
// if (y > z && y > w) secondValue = y;
// else if (z > y && z > w) secondValue = z;
// else secondValue = w;
// }
// else if (max == y) {
// if (x > z && x > w) secondValue = x;
// else if (z > x && z > w) secondValue = z;
// else secondValue = w;
// }
// if (max == z) {
// if (y > x && y > w) secondValue = y;
// else if (x > y && x > w) secondValue = x;
// else secondValue = w;
// }
// if (max == w) {
// if (x > y && x > z) secondValue = x;
// else if (y > z && y > x) secondValue = y;
// else secondValue = z;
// }
// return secondValue;
//}
//
//int main(void) {
// int n;
//
// cout << "Enter the number of random numbers to generate (EOF to quit): ";
//
// srand(time(0));
//
// while (cin >> n) {
// int sum = 0,cnt = 0;
//
// int tmp_1 = rand() % 10;
// cnt++;
// cout << tmp_1 << " ";
// while (cnt != n){
// int tmp_2 = rand() % 10;
//
// if (tmp_1 + tmp_2 <= 10) {
// cout << tmp_2 << " ";
// cnt++;
// }
// else {
// cout << "(" << tmp_2 << ") ";
// }
// tmp_1 = tmp_2;
//
// }
// cout << "\n";
// cout << "Enter the number of random numbers to generate (EOF to quit): ";
// }
//
// return 0;
//}

//int main(void) {
//
// int seed;
//
// cout << "input seed: ";
// cin >> seed;
//
// srand(seed);
//
// int cnt_3 = 0, cnt_6 = 0, cnt_9 = 0;
// for (int i = 0; i < 1000; i++) {
// int tmp =  3 * (rand() % 3 + 1);
//
// switch (tmp) {
// case 3: cnt_3++; break;
// case 6: cnt_6++; break;
// case 9: cnt_9++; break;
// }
// }
//
// cout << "frequency of 3: " << cnt_3 << "\n";
// cout << "frequency of 6: " << cnt_6 << "\n";
// cout << "frequency of 9: " << cnt_9 << "\n";
//
// return 0;
//}


unsigned int makeA(unsigned int level);
int makeS(unsigned int level);
unsigned int makeM(unsigned int level);
unsigned int makeD(unsigned int level);


int main(void) {

int seed,level,ans = 0,n;
char type = ' ';

cout << "Enter a seed of random numbers: ";
cin >> seed;

srand(seed);

cout << "Select arithmetic (A, S, M, D) and level (1, 2, 3): ";
cin >> type >> level;


if (type == 'A') ans = makeA(level);
if (type == 'S') ans = makeS(level);
if (type == 'M') ans = makeM(level);
if (type == 'D') ans = makeD(level);


cin >> n;

while (n != -1) {
	if (n == ans) {
	cout << "Correct!\n";
	if (type == 'A') ans = makeA(level);
	if (type == 'S') ans = makeS(level);
	if (type == 'M') ans = makeM(level);
	if (type == 'D') ans = makeD(level);
	}
	else cout << "Wrong answer. Try again.\n? ";

	cin >> n;
}

cout << "Bye!";
return 0;
}

unsigned int makeA(unsigned int level) {
int a = 0, b = 0;
if (level == 1) {
a = rand() % 9 + 1;
b = rand() % 9 + 1;
}
else if (level == 2) {
a = rand() % 90 + 10;
b = rand() % 90 + 10;
}
else if (level == 3) {
a = rand() % 900 + 100;
b = rand() % 900 + 100;
}
cout << a << " + " << b << " = ? (-1 to quit) ";
return a + b;
}

int makeS(unsigned int level) {
int a = 0, b = 0;
if (level == 1) {
a = rand() % 9 + 1;
b = rand() % 9 + 1;
}
else if (level == 2) {
a = rand() % 90 + 10;
b = rand() % 90 + 10;
}
else if (level == 3) {
a = rand() % 900 + 100;
b = rand() % 900 + 100;
}

cout << a << " - " << b << " = ? (-1 to quit) ";
return a - b;
}

unsigned int makeM(unsigned int level) {
int a = 0, b = 0;
if (level == 1) {
a = rand() % 9 + 1;
b = rand() % 9 + 1;
}
else if (level == 2) {
a = rand() % 90 + 10;
b = rand() % 90 + 10;
}
else if (level == 3) {
a = rand() % 900 + 100;
b = rand() % 900 + 100;
}

cout << a << " * " << b << " = ? (-1 to quit) ";
return a * b;
}

unsigned int makeD(unsigned int level) {
int a = 0, b = 0;
if (level == 1) {
a = rand() % 9 + 1;
b = rand() % 9 + 1;
}
else if (level == 2) {
a = rand() % 90 + 10;
b = rand() % 90 + 10;
}
else if (level == 3) {
a = rand() % 900 + 100;
b = rand() % 900 + 100;
}

cout << a << " / " << b << " = ? (-1 to quit) ";
return a / b;
}