#include <stdio.h>
#include <string.h>
struct traversal
{
    int var;
    char ch;
};
int main() 
{
    struct traversal arr[5] = {
        {1,'a'},
        {2,'b'},
        {3,'c'},
        {4,'d'},
        {5,'e'}
    };
    for(int i=0; i<5; i++)
    {
        printf("%d %c \n",arr[i].var, arr[i].ch);
    }
    return 0;
}
