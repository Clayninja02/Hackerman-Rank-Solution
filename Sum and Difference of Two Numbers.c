#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int myNum, myAge;
    float myHight, myIncome;

        scanf("%d %d", &myNum, &myAge);
        scanf("%f %f\n", &myHight, &myIncome);

        printf("%d %d\n", myNum+myAge, myNum-myAge);//14 6
        printf("%0.1f %0.1f", myHight+myIncome, myHight-myIncome);//6.0 2.0

    return 0;
}
