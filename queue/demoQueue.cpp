#include <iostream>     
using namespace std;
#include <queue>
#include <string.h>

#define BUFFER_SIZE 5
#define DEFAULT_SIZE 10
#define NAME_SIZE 20

typedef struct Stu_Info
{
    int age;
    char sex;
    char name[NAME_SIZE];
} Stu_Info;


/* 对列怎么用 */
int main()
{
    #if 0
    queue<int> myQueue;
    
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        myQueue.push(idx);
    }
    int length = myQueue.size();
    printf("length:%d\n", length);

    int back = myQueue.back();
    printf("back:%d\n", back);

    int frontVal = 0;

    while (!myQueue.empty())
    {
        frontVal = myQueue.front();
        printf("frontVal:%d\n", frontVal);
        myQueue.pop();
    }
    #endif


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


    queue<Stu_Info> myqueue;

    myqueue.push(stu1);
    myqueue.push(stu2);
    myqueue.push(stu3);

    Stu_Info frontVal;
    memset(&frontVal, 0, sizeof(Stu_Info));

    while (!myqueue.empty())
    {
        frontVal = myqueue.front();
        myqueue.pop();
        printf("frontVal age:%d    \n", frontVal.age);
    }
    






    return 0;
}
