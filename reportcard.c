#include <stdio.h>

struct Student
{
    char name[20];
    float score;
};

int main()
{
    struct Student s;
    printf("输入学生姓名：");
    scanf("%s", s.name);
    printf("输入分数：");
    scanf("%f", &s.score);

    printf("\n====成绩单====\n");
    printf("姓名：%s\n", s.name);
    printf("分数：%.1f\n", s.score);
    return 0;
}