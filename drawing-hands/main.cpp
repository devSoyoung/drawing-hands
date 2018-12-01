// 소스코드를 출력하는 프로그램 만들기

#include <iostream>
#include <string>
using namespace std;

string me = "\"string me = \"int main() { cout << me.substr(1, 12) << me << ' '; cout << me.substr(14, me.length() - 15); return 0; }\"";
int main() { cout << me.substr(1, 12) << me << ' '; cout << me.substr(14, me.length() - 15); return 0; }