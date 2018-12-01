// 소스코드를 출력하는 프로그램 만들기

#include <iostream>
#include <string>
using namespace std;

string me = "string me = int main() { cout << me.substr(0, 12); putchar(34); cout << me; putchar(34); cout << ';' << endl << me.substr(12, me.length() - 12) << endl; return 0; }";
int main() { cout << me.substr(0, 12); putchar(34); cout << me; putchar(34); cout << ';' << endl << me.substr(12, me.length() - 12) << endl; return 0; }