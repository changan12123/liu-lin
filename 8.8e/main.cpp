#include<stdio.h>

int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[4];
    int row,col;
    p=a;            /*ָ��pָ��Ԫ��Ϊ4������*/

    /*��ӡ�������ָ��pָ��������ֵ*/
    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
            printf("a[%d,%d]=%-4d",row,col, *(*(p+row)+col));
        printf("\n");
    }
    /*ͨ���ı�ָ��p�޸�����a���е�ַ,�ı�col��ֵ�޸�����a���е�ַ*/
    for(p=a,row=0;p<a+3;p++,row++)
    {
        for(col=0;col<4;col++)
            printf("(*p[%d])[%d]=%p",row,col,((*p)+col));
        printf("\n");
    }
}

