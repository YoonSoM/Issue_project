#include <iostream>
using namespace std;
int main() {
	int i = 1;
	int sum = 0;
	/*
	while (i <= 2023) {
	if (i % 2 == 1)//i가 홀수일 때
	sum = sum + i;
	//sum += i;
	i++;
	}
	*/
	while (i <= 2023) {
		sum += i;
		i = i + 2;
	}
	cout << "1부터 2023까지의 홀수인 정수의 합은 " << sum << "입니다" << endl;
	return 0;
}