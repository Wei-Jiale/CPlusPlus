//有一只兔子，从出生后第3个月起每个月都生一只兔子。
//小兔子长到第三个月后每个月又生一只兔子，假如兔子都不死，问每个月的兔子总数为多少？

#include<iostream>
using namespace std;

int main(){
	int month;
	while (cin >> month){
		// 前两个月只有一只兔子（第三个月才生小兔子）
		int first = 1;
		int second = 1;
		int result = 1;
		// 第三个月开始
		for (int i = 3; i <= month; i++){
			result = first + second;
			first = second;
			second = result;
		}
		cout << result << endl;
	}
	return 0;
}