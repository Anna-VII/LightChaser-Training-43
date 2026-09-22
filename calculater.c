#include <stdio.h>
int main()
{
    double a, b;
    char op;
    printf("输入算式（例：15 + 3）：");
    scanf("%lf %c %lf", &a, &op, &b);

    switch(op)
    {
        case '+': printf("结果：%.2f\n", a + b); break;
        case '-': printf("结果：%.2f\n", a - b); break;
        case '*': printf("结果：%.2f\n", a * b); break;
        case '/':
            if(b == 0)
                printf("错误：除数不能为0！\n");
            else
                printf("结果：%.2f\n", a / b);
            break;
        default: printf("运算符非法\n");
    }
    return 0;
}