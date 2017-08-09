#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char a = 129;
    printf("%d\n", a);
    return 0;
}


// <===================OUTPUT===================>
// /Users/hfeng/github/wlh/questions/test1.cc:7:14: warning: implicit conversion from 'int' to 'char' changes value from 129 to -127 [-Wconstant-conversion]
//     char a = 129;
//          ~   ^~~
// 1 warning generated.
// -127
