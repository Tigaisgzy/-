#define _CRT_SECURE_NO_WARNINGS 1
void menu()
{
	printf("**  1.��        2.��   **\n");
	printf("**  3.��        4.��   **\n");
	printf("**       0.exit        **\n");
}
int ��(int x, int y)
{
	return x + y;
}
int ��(int x, int y)
{
	return x - y;
}
int ��(int x, int y)
{
	return x * y;
}
int ��(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*p[])(int, int) = { 0, ��, ��, ��,�� };
	do
	{
		menu();
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("��������������\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", p[input](x,y));
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("ѡ�������������\n");
		}
	} while (input);
	//char* (*my_strcpy)(char* dest,const char* src);
	//char* (*pf)(char*,const char*) = my_strcpy;
	//char* (*pfAee[4])(char*,const char*) = {my_strcpy};
	return 0;
}