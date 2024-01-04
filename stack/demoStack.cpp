#include <iostream>     
using namespace std;
#include <stack>       // 栈
#include <string>
#include <string.h>

#define DEFAULT_SIZE 10
#define NAME_SIZE 20

typedef struct Stu_Info
{
    int age;
    char sex;
    char name[NAME_SIZE];
} Stu_Info;

int main()
{
#if 0
    stack<int> myStack;

    for (int idx = 0; idx < DEFAULT_SIZE; idx++)
    {
        myStack.push(idx+1);
    }

    printf("length:%ld\n", myStack.size());

    while (!myStack.empty())
    {
        printf("pop:%d\n", myStack.top());
        myStack.pop();
    }
#endif

#if 1
    Stu_Info stu1, stu2, stu3;
    stu1.age = 10;
    // stu1.name = "zhangsan\0"; 为什么不能这样做？
    strncpy(stu1.name, "zhangsan", sizeof(stu1.name) - 1);
    stu1.sex = 'm';
    
    stu2.age = 12;
    strncpy(stu2.name, "lisi", sizeof(stu2.name) - 1);
    stu2.sex = 'f';

    stu3.age = 14;
    strncpy(stu3.name, "wangwu", sizeof(stu3.name) - 1);
    stu3.sex = 'm';


    stack<Stu_Info*> myStack;
    myStack.push(&stu1);
    myStack.push(&stu2);
    myStack.push(&stu3);
    
    Stu_Info* tmpInfo;
    while (!myStack.empty())
    {
        tmpInfo = myStack.top();
        printf("age:%d\tname:%s\tsex:%c\n", tmpInfo->age, tmpInfo->name, tmpInfo->sex);
        myStack.pop();
    }

#endif

    

    return 0;
}