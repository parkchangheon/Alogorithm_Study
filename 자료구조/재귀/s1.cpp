/* �Ǻ���ġ

#include<iostream>

using namespace std;


int fibo(int n) {
	if (n < 2)
		return n;

	else {
		int i, tmp, current = 1, last = 0;
		for (i = 2; i <= n; i++) {
			tmp = current;
			current += last;
			last = tmp;
		}
		return current;
	}

}


int main() {
	int n;
	cout << "���� �Է��ϼ��� : ";
	cin >> n;

	int res = fibo(n);
	cout << "����� :  " << res;

}


*/




/*
//�ϳ��� ž

#include<stdio.h>
#include<iostream>

using namespace std;

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		cout << "���� 1��"<< from<<"����"<< to<<"�� �ű��"<<endl;

	else {
		hanoi_tower(n - 1, from, to,tmp);
		cout << "���� "<< n<<"��"<< from<< "����"<< to<< "�� �ű��"<<endl;
		hanoi_tower(n - 1, tmp, from, to);
	}
}


int main() {
	hanoi_tower(4, 'A', 'B', 'C');
}

*/