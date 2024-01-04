#include <iostream>     
using namespace std;
#include <string>
#include <string.h>






int main()
{
    #if 0
    bool a = true;// bool占一个字节
    int len  = sizeof(a);
    printf("%d\n", len );
    #endif

    #if 0
    string s = "hello world!";

    printf("s: %s\n", s.c_str());
    printf("len: %d\n", (int)strlen(s.c_str()));
    #endif


    #if 1
    string s = "hello";
    char tmp;
    while (!s.empty())
    {
        
        tmp = s.back();
        printf("%c\n", tmp);
        s.pop_back();
    }
    #endif
    return 0;
}
