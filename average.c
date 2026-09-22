#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("请输入数字个数：");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL) 
    {
        printf("内存申请失败！\n");
        return 1;
    }

    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        printf("输入第%d个数字：", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];//累加求和
    }
    double avg = sum / n;
    printf("平均值 = %.2f\n", avg);//%.2f表示保留两位小数

    free(arr);    //释放内存
    arr = NULL;   //置空防止野指针
    return 0;
}