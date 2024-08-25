# include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	int i, j;

	for (i = 0; i < 6; i++)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", lotto_nums + i);

		for (j = 0; j < i; j++) {

			while (*(lotto_nums + i) == *(lotto_nums + j)) // ���� ���ڰ� ���� ���
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				printf("��ȣ �Է� : ");
				scanf("%d", lotto_nums + i); 		// ��ȣ ������ ��ȿȭ
			}
		}
	}
}

void print_nums(int* lotto_nums)
{
	int i;
	printf("�ζ� ��ȣ : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d  ", lotto_nums[i]);
	}
}