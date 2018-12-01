# Drawing Hands
���츮�� �ڸ��ڸ��� ������ �׸�. ������ �д� �˰����̶�� å�� �д� �߿�, P�� ����ϴ� ���α׷� P�� ����� ����� �Բ� �Ұ��Ǿ� �־ �� �� ���� �����ô�. ���α׷� ���ο��� "�� ����� �� �����µ�, "�� ������� �ʰ� "�� ����ϴ� ���� ����ϴ� ������ ����־���.


## ���� �ذ�
**const char * ������ ���� ����Ͽ� char * ������ ����Ƽ�� �ʱ�ȭ�� �� �����ϴ�.**
vs�� ������Ʈ �Ǹ鼭 C, C++�� ȥ���Ͽ� ���� ������ ���� ������ ����ٰ� �Ѵ�.
char*�� string�� �ٲ��ִ� ������ �������. [(����ũ)](https://siriusp.tistory.com/284)

### v1
```c++
string me = "\"string me = \"int main() { cout << me.substr(1, 12) << me << ' '; cout << me.substr(14, me.length() - 15); return 0; }\"";
int main() { cout << me << ' '; cout << me.substr(14, me.length() - 15); return 0; }
```

������ : �� ó�� **string me =** �� ����� ��µ��� �ʴ´�.
�ذ��� : string me �κ��� ���� �� �� ���������.


### v2
```c++
string me = "\"string me = \"int main() { cout << me.substr(1, 12) << me << ' '; cout << me.substr(14, me.length() - 15); return 0; }\"";
int main() { cout << me.substr(1, 12) << me << ' '; cout << me.substr(14, me.length() - 15); return 0; }
```

������ : �̽������� ���ڰ� ����� ��µ��� �ʴ´�.
�ذ��� : [putchar()](https://www.programiz.com/cpp-programming/library-function/cstdio/putchar) �Լ��� ����Ѵ�.


### v3
```c++
string me = "string me = int main() { cout << me.substr(0, 12); putchar(34); cout << me; putchar(34); cout << ';' << endl << me.substr(12, me.length() - 12) << endl; return 0; }";
int main() { cout << me.substr(0, 12); putchar(34); cout << me; putchar(34); cout << ';' << endl << me.substr(12, me.length() - 12) << endl; return 0; }
```
������ �ذ��ϰ� �ٹٲ޵� �߰����־���.