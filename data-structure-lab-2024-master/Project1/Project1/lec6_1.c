#include <stdio.h>

void hanoi(int n, int start, int work, int target) {
	if (n == 1)
		printf(" %c���� ���� %d��(��) %c�� �ű�\n", start, n, target);
	else {
		hanoi(n - 1, start, target, work);
		printf(" %c���� ���� %d��(��) %c�� �ű�\n", start, n, target);
		hanoi(n - 1, work, start, target);
	}
}

int main(void) {
	hanoi(3, 'A', 'B', 'C');
	return 0;
}