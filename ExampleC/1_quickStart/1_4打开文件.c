/*
����·�����ı��ļ�
�����ھ����error
*/
#include <stdio.h>
int main()
{
    char path[260]; //·����������Ϊ260;
    int ch;
    printf("�������ļ�:");
    scanf("%s", &path);
    printf("\n");
    FILE *fp = fopen(path, "r");
    if (fp != NULL)
    {
        //fp�ļ�ָ��
        //fp=NULLʱ����ʾ��ʧ��
        //printf("%d",fp!=NULL);
        //fgetc(fp)ΪEOF ��ʾ��ȡ����
        while ((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
            //����ַ�
        }
    }
    else{
        printf("�Ҳ������ļ�����ȷ������");
    }
    fclose(fp);
    return 0;
}