#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to) {
	if (num == 1) {
		printf("����1�� %c���� %c�� �̵� \n", from, to);
	}
	else {
		// 1. ���� ���ݵ��� B�� �̵��Ѵ�.
		HanoiTowerMove(num - 1, from, to, by);
		// 2. ū������ A���� C�� �̵��Ѵ�.
		printf("����%d��(��) %c���� %c�� �̵� \n", num, from, to);
		// 3. �������� n-1���� B���� C�� �̵��Ѵ�.
		HanoiTowerMove(num - 1, by, from, to);
	}
}

int main(void) {
	// ���� A�� ���� 3���� ���� B�� �����Ͽ� ���� C�� �ű��
	HanoiTowerMove(3, 'A', 'B', 'C');
	return 0;
}