///week11-2.cpp
///���F�ѨM SOTT107_ADVANCE_009�o�D
///�ڭ̵y���Ʋ߭�֪k
#include <stdio.h>
int main()
{
    printf("�п�J�@�Ӽ�(ex. 183) ");
    int n;
    scanf("%d", &n);///Ū�J n
    int ans = 0; ///�Q���̤j�o��

    while(n>0){///while�^�W,�@�����
        if(n%10 > ans) ans = n%10; ///��j����,��s����
        printf("��� %d\n", n%10);
        n = n / 10; ///�駹��, n�ܤp
    }
    printf("�̤j���֬O %d\n", ans);
}
