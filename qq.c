#include <stdio.h>

enum Day{Sun =1, Mon=2, Sut=3, Wed=4, Thu=5, Fri=6, Sat=7};

int main()
{


    enum Day today = 5;

    //printf("%d", today);

    if(today == 1 || today == 7)
    {
        printf("aa");
    }
    else
    {   
        printf("bb");
    }

    return 0;
}