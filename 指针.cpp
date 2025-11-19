#include <stdio.h>
#include <string.h>
#include <limits.h>
/**/链接：https://ac.nowcoder.com/acm/contest/118654/D
来源：牛客网

eli拿到了一个仅由小写字母组成的字符串。
她想截取一段连续子串，这个子串包含至少 
𝑘

k  个相同的某个字母。
她想知道，子串的长度最小值是多少？
注：所谓连续子串，指字符串删除头部和尾部的部分字符（也可以不删除）剩下的字符串。例如：对于字符串
“
𝑎
𝑟
𝑐
𝑎
𝑒
𝑎
”
“arcaea”而言，
“
𝑎
𝑟
𝑐
”
“arc”、
“
𝑟
𝑐
𝑎
𝑒
”
“rcae”都是其子串。而
“
𝑐
𝑎
𝑟
”
“car”、
“
𝑎
𝑎
”
“aa”则不是它的子串。
输入描述:
第一行输入两个正整数 
𝑛

n  和 
𝑘

k  
（
1
≤
𝑘
≤
𝑛
≤
200000
）

（1≤k≤n≤200000） 
输入仅有一行，为一个长度为 
𝑛

n  的、仅由小写字母组成的字符串。
输出描述:
如果无论怎么取都无法满足条件，输出 
−
1

−1  。
否则输出一个正整数，为满足条件的子串长度最小值。
示例1
输入
复制
5 2
abeba
输出
复制
3
说明
选择
“
𝑏
𝑒
𝑏
”
“beb”子串，长度为3，其中包含相同的两个'b'*/

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	char s[200001];
	scanf("%s", s);
	
	int min_len = INT_MAX;
	
	// 对每个小写字母分别处理
	for (char c = 'a'; c <= 'z'; c++) {
		int left = 0;
		int count = 0;
		
		// 滑动窗口右指针
		for (int right = 0; right < n; right++) {
			if (s[right] == c) {
				count++;
			}
			
			// 当窗口中包含至少k个目标字符时，尝试收缩左边界
			while (count >= k) {
				// 更新最小长度
				int current_len = right - left + 1;
				if (current_len < min_len) {
					min_len = current_len;
				}
				
				// 尝试移动左指针，缩小窗口
				if (s[left] == c) {
					count--;
				}
				left++;
			}
		}
	}
	
	// 如果找到有效子串则输出最小长度，否则输出-1
	if (min_len == INT_MAX) {
		printf("-1\n");
	} else {
		printf("%d\n", min_len);
	}
	
	return 0;
}

