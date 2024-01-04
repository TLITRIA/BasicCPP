#include <iostream>     // 输入输出流
using namespace std;
#include <vector>       // 动态数组
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
    vector<int> myvec;
    myvec.push_back(5);         // 插入数据
    int length = myvec.size();     // 查询数据
    printf("length:%d\n", length);

    int capacity = myvec.capacity();
    printf("capacity:%d\n", capacity);

    for (int idx = 0; idx < DEFAULT_SIZE; idx++)
    {
        myvec.push_back(idx);
    }
    length = myvec.size();     
    printf("length:%d\n", length);
    capacity = myvec.capacity();
    printf("capacity:%d\n", capacity);

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

    vector<Stu_Info> myvec;
    myvec.push_back(stu1);
    myvec.push_back(stu2);
    myvec.push_back(stu3);
    int length = myvec.size();  
    printf("length:%d\n", length);
    int capacity = myvec.capacity();
    printf("capacity:%d\n", capacity);

    Stu_Info tmpInfo;
    memset(&tmpInfo, 0, sizeof(tmpInfo));
    for (int idx = 0; idx < length; idx++)
    {
        // tmpInfo = myvec[idx];
        tmpInfo = myvec.at(idx);
        printf("age:%d\tname:%s\tsex:%c\n", tmpInfo.age, tmpInfo.name, tmpInfo.sex);
    }

#endif

    return 0;
}
