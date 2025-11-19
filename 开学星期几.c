#include <stdio.h>
//小S知道原计划星期X开学，通知开学时间延期N天，请问开学日期是星期几（星期日用7表示）？ 
int main() {
	int X, N;
	scanf("%d %d", &X, &N);
	int new_day = (X - 1 + N) % 7;
	int final_day = new_day + 1;
	printf("%d\n",final_day);
	return 0;
}
