// https://m.blog.naver.com/ndb796/221226794899
// https://m.blog.naver.com/ndb796/221226813382
// 퀵 정렬
// 하나의 큰 문제를 두개의 작은 문제로 분할하는 식으로 빠르게 정렬합니다.
// 더 쉽게 말하자면 특정한 값을 기준으로 큰 숫자와 작은 숫자를 서로 교환한 뒤에
// 배열을 반으로 나눕니다.

// 10 * (10+1) / 2 = 55
// N * (N + 1) / 2
// N이 엄청크다고 가정하면 더하거나 나누는것은 무시한다.
// O(N * N)  <= 간략하게 표시하는 빅오표기법

// O(N*logN)

// 선택정렬과 같은 계산 시간이 걸리나 위치를 계속 변경하므로 시간이 많이 걸린다.

#include <stdio.h>

#define debug

void Input_limit(int* a_data, int num, int limit);
void Input_clear(int* a_data, int num, int limit);
void Output(int* a_data, int num);
void Output_Vert(int* a_data, int num);
void swap(int *a, int *b); // a와 b의 위치 변경

void quicksort(int *data, int start, int end);
int Delete_if_equal(int *data, int limit);


int main(void) {
    int number_of_inputs = 6;
    int array[number_of_inputs];
    int number_of_arrays = sizeof(array) / sizeof(int);

    //Input_limit(&array[0], number_of_inputs, 1000);
    Input_clear(&array[0], number_of_inputs, 1000);

    quicksort(&array[0], 0, number_of_arrays - 1);

    number_of_arrays -= Delete_if_equal(&array[0], number_of_arrays);

    Output_Vert(&array[0], number_of_arrays);

    return 0;
}

void Input_limit(int* a_data, int num, int limit) {
    int i;

    for (i = 0; i < num; i++) {
        printf("%d 번째 정수 입력 : ", i+1);
        scanf("%d", &a_data[i]);

        if(a_data[i] > limit) {
            
            printf("%d 번째 정수 재입력 요청\n\r", i+1);
            i--;
        }

    }
}


void Input_clear(int* a_data, int num, int limit) {
    int i;

    for (i = 0; i < num; i++) {
        scanf("%d", &a_data[i]);
    }
}


void Output(int* a_data, int num) {
    int i;

    for (i = 0; i < num; i++) {
        printf("%d ", a_data[i]);
    }
    printf("\n\r");
}

void Output_Vert(int* a_data, int num) {
    int i;

    for (i = 0; i < num; i++) {
        printf("%d ", a_data[i]);
        printf("\n");
    }
    
}

void swap(int *a, int *b) {
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

void quicksort(int *data, int start, int end) {
  if (start >= end) {
    return;
  }

  int key = start;
  int i = start + 1;
  int j = end;
  int temp;

  while (i <= j) { // 엇갈릴 때까지

    while ((i <= end) &&
           (data[i] <= data[key])) { // 키값보다 큰값이 나올때 까지
      i++;
    }

    while ((j > start) &&
           (data[j] >= data[key])) { // 키값보다 작은 값이 나올때 까지
      j--;
    }

    if (i > j) // 엇갈리면 교환
      swap(&data[j], &data[key]);
    else // 엇갈리지 않아 교환
      swap(&data[i], &data[j]);
  }

  quicksort(&data[0], start, j - 1);
  quicksort(&data[0], j + 1, end);
}


int Delete_if_equal(int *data, int limit) {
    int i, j;
    int equal = 0;

    for (i = 0; i < limit - 1; i++) {
        if (data[i] == data[i + 1]) {
            for (j = i; j < limit - 1; j++) {
                data[j] = data[j + 1];
            }
            limit -= 1;
            equal++;
        }
    }
    return equal;
}
