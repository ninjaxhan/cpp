// https://m.blog.naver.com/ndb796/221226794899
// 삽입 정렬
// 적절한 위치를 찾아 넣는다.
// 각 위치에서 앞의 것들 사이에 어디에 넣는지 다 비교해서 넣는다.
// 모든 정렬 알고리즘 중에서 효율이 가장 떨어지는 정렬 방법

// 10 * (10+1) / 2 = 55
// N * (N + 1) / 2
// N이 엄청크다고 가정하면 더하거나 나누는것은 무시한다.
// O(N * N)  <= 간략하게 표시하는 빅오표기법
// O(N^2)
// 선택정렬과 같은 계산 시간이 걸리나 위치를 계속 변경하므로 시간이 많이 걸린다.

#include <stdio.h>

#define dInput
#define debug

void swap(int *a, int *b);  // a와 b의 위치 변경

int main(void) {
	int i, j, k, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

	#ifdef dInput
    for (i = 0; i < 10; i++) {
        printf("%d 번째 정수 입력 : ", i+1);
        scanf("%d", &array[i]);
    }
	#endif

    for (i = 0; i < 9; i++) {
    j = i;

    while (array[j] > array[j + 1]) {
        swap(&array[j], &array[j + 1]);
        j--;
    }

    #ifdef debug
    for (k = 0; k < 10; k++) {
    printf("%d ", array[k]);
    }
    printf("\n\r ");
    #endif      

  }

  // 출력
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

  return 0;
}

void swap(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
