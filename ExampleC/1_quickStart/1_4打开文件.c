/*
输入路径打开文本文件
不存在就输出error
*/
#include <stdio.h>
int main()
{
    char path[260]; //路径长度限制为260;
    int ch;
    printf("请输入文件:");
    scanf("%s", &path);
    printf("\n");
    FILE *fp = fopen(path, "r");
    if (fp != NULL)
    {
        //fp文件指针
        //fp=NULL时，表示打开失败
        //printf("%d",fp!=NULL);
        //fgetc(fp)为EOF 表示读取结束
        while ((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
            //输出字符
        }
    }
    else{
        printf("找不到此文件，请确认输入");
    }
    fclose(fp);
    return 0;
}