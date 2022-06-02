#include <stdio.h>

int main()
{
    int c;
    scanf("%d",&c);
    (c==1|| c==3|| c ==5|| c ==7|| c == 8|| c ==10|| c==12)?printf("%d",31):(c==4|| c ==6||c ==9||c ==11)?printf("%d",30):(c==2)?printf("%d",28):printf("Wrong Input!!");
}