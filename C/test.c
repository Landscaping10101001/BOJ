#include <stdio.h>

//함수 선언
int get_num_and_list(int original_list[], int input_num);
void get_positive_integer_and_multiple_integer(int before_multiple_list[], int after_multiple_list[], int len);
void claculate_two_end_values(int before_multiple_list[], int after_multiple_list[], int len);

/*
함수 이름: main
기능:	정수 하나를 입력받고 그 수 만큼 정수 리스트의 각 값을 입력받아서 배열에 저장 한다.
		배수 조건에 사용될 양의 정수 하나와 곱해질 정수 하나를 입력받는다. 처음 입력받은 배열의 요소 중 입력받은 양의 정수의 배수에 해당하지 않는 수에 입력받은 수를 곱한 후 수정 후 배열에 저장한다.
		특정 정수를 입력받고 수정 후 배열의 모든 값에 대해서 특정 정수와의 값 차이를 배열에 저장하고 배열 중 차이가 가장 크고 작은 정수를 출력한다.
인자: 없음
반환값: 0 -> 함수 종료
작성 날짜: 2021/11/10
*/
int main(void)
{

	int original_list[10];
	int modified_list[10];
	int input_number = 0;

	int len = get_num_and_list(original_list, input_number);

	get_positive_integer_and_multiple_integer(original_list, modified_list, len);

	claculate_two_end_values(original_list, modified_list, len);

	return 0;

}

/*
함수 이름: get_num_and_list
기능: 정수 하나를 입력받고 그 수 만큼 정수 리스트의 각 값을 입력받아서 배열에 저장
인자:	int original_list[]: 입력받은 수만큼 정수를 저장할 리스트
		int input_num: 입력받을 정수
반환값: input_num: 배열의 길이(len) 전달
작성 날짜: 2021/11/11
*/
int get_num_and_list(int original_list[], int input_num)
{

	printf("입력 받을 정수의 수를 입력하시오 : ");
	scanf("%d", &input_num);

	while (input_num < 3 || input_num > 10)// 입력 범위를 벗어날 시 다시 입력하도록 한다.
	{

		printf("다시 입력해주세요");
		printf("\n");
		printf("입력 받을 정수의 수를 입력하시오 : ");
		scanf("%d", &input_num);

	}

	printf("리스트에 저장할 정수 값을 모두 입력하시오 : ");

	for (int i = 0; i < input_num; i++)// 입력받은 수 만큼 정수를 입력받아 배열에 저장한다.
	{

		scanf("%d", &original_list[i]);

	}

	return input_num;

}

/*
함수 이름: get_positive_integer_and_multiple_integer
기능: 배수 조건에 사용될 양의 정수 하나와 곱해질 정수 하나를 입력받는다. 처음 입력받은 배열의 요소 중 입력받은 양의 정수의 배수에 해당하지 않는 수에 입력받은 수를 곱한 후 수정 후 배열에 저장한다.
인자:	int before_multiple_list[]: 수정 전 배열
		int after_multiple_list[]: 수정 후 배열
		int len: 배열의 길이
반환값: 없음
작성 날짜: 2021/11/11
*/
void get_positive_integer_and_multiple_integer(int before_multiple_list[], int after_multiple_list[], int len)
{

	int positive_multiple_integer;// 배수 조건을 위한 양의 정수
	int multiply_integer;// 배수에 해당하지 않는 수에 곱할 정수

	printf("배수 조건에 사용될 양의 정수 하나와 곱해질 정수 하나를 입력하시오 : ");
	scanf("%d %d", &positive_multiple_integer, &multiply_integer);

	for (int i = 0; i < len; i++)// 배수 조건에 해당하지 않는 수에 정수를 곱한 후 수정 후 배열에 저장
	{

		if (before_multiple_list[i] % positive_multiple_integer != 0)
		{

			after_multiple_list[i] = before_multiple_list[i] * multiply_integer;

		}

		else
		{

			after_multiple_list[i] = before_multiple_list[i];

		}

	}

}

/*
함수 이름: calculate_two_end_values
기능: 특정 정수를 입력받고 수정 후 배열의 모든 값에 대해서 특정 정수와의 값 차이를 difference_between_target에 저장하고 그 중 차이가 가장 크고 작은 정수들을 출력한다.
인자:	int origin_list[]: 수정되기 전의 정수 리스트
		int modified_list[]: 수정된 후의 정수 리스트
		int len: 리스트의 길이
반환값: 없음
작성 날짜: 2021/11/11
*/
void claculate_two_end_values(int origianl_list[], int modified_list[], int len)
{

	int max;// 특정 정수와 수정 후 배열의 차의 최댓값
	int min;// 특정 정수와 수정 후 배열의 차의 최솟값
	int target;// 특정 정수
	int difference_between_target[10];// 수정 후 배열과 특정 정수 사이의 차를 저장할 배열

	printf("특정 정수를 입력하세요 : ");
	scanf("%d", &target);

	printf("특정 정수와 리스트의 수정된 각 정수와의 값 차이 : ");
	for (int i = 0; i < len; i++)// 수정 후 배열과 특정 정수 사이의 차를 배열에 저장
	{

		if (target > modified_list[i])
		{

			difference_between_target[i] = target - modified_list[i];
			printf("%d ", difference_between_target[i]);

		}

		else
		{

			difference_between_target[i] = modified_list[i] - target;
			printf("%d ", difference_between_target[i]);

		}

	}
	printf("\n");

	if (target > modified_list[0])// 처음 최솟값과 최댓값을 difference_between_target[0]으로 설정
	{

		max = difference_between_target[0];
		min = difference_between_target[0];

	}

	else
	{

		max = difference_between_target[0];
		min = difference_between_target[0];

	}

	for (int i = 0; i < len; i++)// difference_between_target의 요소들을 현재의 최댓값과 최솟값과 비교해 가며 최댓값과 최솟값을 수정한다.
	{

		if (target > modified_list[i])
		{

			if (max < difference_between_target[i])
			{

				max = difference_between_target[i];

			}

			if (min > difference_between_target[i])
			{

				min = difference_between_target[i];

			}

		}


		else
		{

			if (max < difference_between_target[i])
			{

				max = difference_between_target[i];

			}

			if (min > difference_between_target[i])
			{

				min = difference_between_target[i];

			}

		}

	}

	printf("특정 정수와의 값 차이가 가장 큰 (수정되기 전의) 정수 : ");
	for (int i = 0; i < len; i++)// difference_between_target에서 최댓값과 같은 수와 같은 순서에 있는 수정 전 배열의 요소를 모두 출력한다.
	{

		if (target > modified_list[i])
		{

			if (max == difference_between_target[i])
			{

				printf("%d", origianl_list[i]);

			}

		}

		else
		{

			if (max == difference_between_target[i])
			{

				printf("%d", origianl_list[i]);

			}

		}

	}
	printf("\n");

	printf("특정 정수와의 값 차이가 가장 작은 (수정되기 전의) 정수 : ");
	for (int i = 0; i < len; i++)// difference_between_target에서 최솟값과 같은 수와 같은 순서에 있는 수정 전 배열의 요소를 모두 출력한다.
	{

		if (target > modified_list[i])
		{

			if (min == difference_between_target[i])
			{

				printf("%d", origianl_list[i]);

			}

		}

		else
		{

			if (min == difference_between_target[i])
			{

				printf("%d ", origianl_list[i]);

			}

		}

	}

}