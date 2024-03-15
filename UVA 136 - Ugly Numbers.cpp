#include <stdio.h>

int main() {
    int n, flag, count = 0;
    for (n = 1; count < 1500; n++) 
    {
        int temp = n;
        flag = 1;

        if (temp <= 0) {
            flag = 0;
        } else {
            while (temp != 1) {
                if (temp % 2 == 0) {
                    temp /= 2;
                } else if (temp % 3 == 0) {
                    temp /= 3;
                } else if (temp % 5 == 0) {
                    temp /= 5;
                } else {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 1) {
            count++;
        }
        if(count==1500)
        {
            break;
        }
    }

    printf("The 1500th ugly number is: %d\n", n);

    return 0;
}
