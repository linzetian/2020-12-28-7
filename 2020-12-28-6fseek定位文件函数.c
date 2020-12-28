//fseek定位文件函数123
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* spread = fopen("F:\\c语言基础\\test1.txt","r");
	if (spread == NULL)
	{
		printf("%s\n",strerror(errno));
		return 0;
	}
	//定位文件指针，用fseek
	//进行只读操作
	fseek(spread, 2, SEEK_SET);
	int ch = fgetc(spread);
	printf("%c",ch);
	fclose(spread);
	spread = NULL;
	return 0;
}