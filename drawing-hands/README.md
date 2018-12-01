# Drawing Hands
마우리츠 코르넬리스 에셔의 그림. 누워서 읽는 알고리즘이라는 책을 읽던 중에, P를 출력하는 프로그램 P를 만드는 내용과 함께 소개되어 있어서 한 번 직접 만들어봤다. 프로그램 내부에서 "를 사용할 수 없었는데, "를 사용하지 않고 "를 출력하는 것을 고민하는 과정이 재미있었다.


## 오류 해결
**const char * 형식의 값을 사용하여 char * 형식의 엔터티를 초기화할 수 없습니다.**
vs가 업데이트 되면서 C, C++을 혼용하여 쓰면 다음과 같은 에러가 생긴다고 한다.
char*를 string로 바꿔주니 에러가 사라졌다. [(참고링크)](https://siriusp.tistory.com/284)

### v1
```c++
string me = "\"string me = \"int main() { cout << me.substr(1, 12) << me << ' '; cout << me.substr(14, me.length() - 15); return 0; }\"";
int main() { cout << me << ' '; cout << me.substr(14, me.length() - 15); return 0; }
```

문제점 : 맨 처음 **string me =** 이 제대로 출력되지 않는다.

해결방법 : string me 부분을 먼저 한 번 출력해주자.


### v2
```c++
string me = "\"string me = \"int main() { cout << me.substr(1, 12) << me << ' '; cout << me.substr(14, me.length() - 15); return 0; }\"";
int main() { cout << me.substr(1, 12) << me << ' '; cout << me.substr(14, me.length() - 15); return 0; }
```

문제점 : 이스케이프 문자가 제대로 출력되지 않는다.

해결방법 : [putchar()](https://www.programiz.com/cpp-programming/library-function/cstdio/putchar) 함수를 사용한다.


### v3
```c++
string me = "string me = int main() { cout << me.substr(0, 12); putchar(34); cout << me; putchar(34); cout << ';' << endl << me.substr(12, me.length() - 12) << endl; return 0; }";
int main() { cout << me.substr(0, 12); putchar(34); cout << me; putchar(34); cout << ';' << endl << me.substr(12, me.length() - 12) << endl; return 0; }
```
에러를 해결하고 줄바꿈도 추가해주었다.
