// ����� 1

//#include <stdio.h>
//#include <Windows.h>
//
//void main()
//{
//	int a, b, min, max;
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("������� ������ ����� = ");
//	scanf_s("%d", &a);
//	printf("������� ������ ����� = ");
//	scanf_s("%d", &b);
//	if (a < b) {
//		min = a;
//		max = b;
//	}
//	else {
//		min = b;
//		max = a;
//	}
//	printf("�o����� ����� = %d\n", max);
//	printf("������� ����� = %d\n", min);
//}


//#include <stdio.h>
//void main()
//{
//	int v1, v2, v3;
//	int max;
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	
//	printf("������� 3 �����: ");
//	scanf_s("%d%d%d", &v1, &v2, &v3);
//
//	max = v1;
//	if (v2 > max) {
//		max = v2;
//	}
//
//	if (v3 > max) {
//		max = v3;
//	}
//
//	printf("max=%d", max);
//}


//#include <stdio.h>
//#include <Windows.h>
//
//void main() 
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	int t;
//	scanf_s("%d", &t);
//
//	if (t < 18) {
//		printf("�������");
//	}
//	if ((18 <= t) && ( t < 22)) {
//		printf("���������");
//	}
//	if ((22 <= t) && (t < 26)) {
//		printf("�����");
//	}
//	if (t >= 26) {
//		printf("�����");
//	}
//}


//#include <stdio.h>
//#include <Windows.h>
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int temp;
//    printf("������� ����������� ���� � ׸���� ����: ");
//    scanf_s("%d", &temp);
//
//    if (temp < 18) {
//        printf("����� - ������� ������� ��� �������!");
//    }
//    if (temp >= 18 && temp < 23) {
//        printf("������� - ������ ��� ����������!");
//    }
//    if (temp >= 23 && temp < 26) {
//        printf("����� - ���������� �����������");
//    }
//    if (temp >= 26) {
//        printf("����� - �������� ��� �������!");
//    }
//}


//#include <stdio.h>
//#include <Windows.h>
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int price;
//    printf("������� ��������� �����: ");
//    scanf_s("%d", &price);
//
//    if (price < 300) {
//        printf("������ - ��������");
//    }
//    if (price >= 300 && price < 600) {
//        printf("��������� - ��������� ����");
//    }
//    if (price >= 600 && price < 900) {
//        printf("������ - ��������");
//    }
//    if (price >= 900) {
//        printf("���� ������ - �������� �������");
//    }
//}


// ����� 2


//#include <stdio.h>
//void main()
//{
//	int i;
//	int n;
//
//	printf("n = ");
//	scanf_s("%d", &n);
//
//	i = 1;
//	do {
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= n);
//}


//#include <stdio.h>
//void main() {
//	int i;
//	int stepen;
//	
//	stepen = 1;
//	i = 0;
//
//	do {
//		printf("2^%d = %d\n", i, stepen);
//		stepen = stepen * 2;
//		i = i + 1;
//	} while (i <= 5);
//}


//#include <stdio.h>
//void main() {
//	int i;
//	int n;
//
//	printf("n = ");
//	scanf_s("%d", &n);
//
//	i = 2;
//	do {
//		printf("%d ", i);
//		i = i + 2;
//	} while (i<=n*2);
//}


//#include <stdio.h>
//void main() {
//	int N;
//	int A;
//	int i;
//
//	printf("N = ");
//	scanf_s("%d", &N);
//	printf("A = ");
//	scanf_s("%d", &A);
//
//	i = A;
//
//	do {
//		printf("%d ", i);
//		i = i + A;
//	} while (i <= N * 2);
//}
