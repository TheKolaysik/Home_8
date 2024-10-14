#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");
	int n, m, k, s;
	s = 0;
	k = 1;
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = m; i >= n; i--) {
		s += i;
		printf("выполнено %d раз\n", k++);
	}
	printf("результат %d", s);
}