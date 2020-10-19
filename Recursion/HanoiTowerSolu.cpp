#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to) {
	if (num == 1) {
		printf("원반1을 %c에서 %c로 이동 \n", from, to);
	}
	else {
		// 1. 작은 원반들을 B로 이동한다.
		HanoiTowerMove(num - 1, from, to, by);
		// 2. 큰원반을 A에서 C로 이동한다.
		printf("원반%d을(를) %c에서 %c로 이동 \n", num, from, to);
		// 3. 작은원반 n-1개를 B에서 C로 이동한다.
		HanoiTowerMove(num - 1, by, from, to);
	}
}

int main(void) {
	// 막대 A의 원반 3개를 막대 B를 경유하여 막대 C로 옮기기
	HanoiTowerMove(3, 'A', 'B', 'C');
	return 0;
}