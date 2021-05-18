/* 피보나치

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
	cout << "값을 입력하세요 : ";
	cin >> n;

	int res = fibo(n);
	cout << "결과는 :  " << res;

}


*/




/*
//하노이 탑

#include<stdio.h>
#include<iostream>

using namespace std;

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		cout << "원판 1을"<< from<<"에서"<< to<<"로 옮긴다"<<endl;

	else {
		hanoi_tower(n - 1, from, to,tmp);
		cout << "원판 "<< n<<"을"<< from<< "에서"<< to<< "로 옮긴다"<<endl;
		hanoi_tower(n - 1, tmp, from, to);
	}
}


int main() {
	hanoi_tower(4, 'A', 'B', 'C');
}

*/