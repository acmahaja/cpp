#include <cstdio>

int main()
{
    bool t = true;
    bool f = false;
    printf("!true:\t%d\n", !t);
    printf("true\t&&\tfalse:\t%d\n",t && f);
    printf("true\t&&\t!false:\t%d\n",t && !f);
    printf("true\t||\tfalse:\t%d\n",t || f);
    printf("false\t&&\tfalse:\t%d\n",f || f);

}