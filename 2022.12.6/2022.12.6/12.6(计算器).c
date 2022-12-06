#define _CRT_SECURE_NO_WARNINGS 1
void menu()
{
	printf("**  1.¼Ó        2.¼õ   **\n");
	printf("**  3.³Ë        4.³ı   **\n");
	printf("**       0.exit        **\n");
}
int ¼Ó(int x, int y)
{
	return x + y;
}
int ¼õ(int x, int y)
{
	return x - y;
}
int ³Ë(int x, int y)
{
	return x * y;
}
int ³ı(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*p[])(int, int) = { 0, ¼Ó, ¼õ, ³Ë,³ı };
	do
	{
		menu();
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("ÇëÊäÈëÁ½¸öÊı×Ö\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", p[input](x,y));
		}
		else if (input == 0)
		{
			printf("ÍË³ö\n");
		}
		else
		{
			printf("Ñ¡Ôñ´íÎó£¬ÖØĞÂÊäÈë\n");
		}
	} while (input);
	//char* (*my_strcpy)(char* dest,const char* src);
	//char* (*pf)(char*,const char*) = my_strcpy;
	//char* (*pfAee[4])(char*,const char*) = {my_strcpy};
	return 0;
}