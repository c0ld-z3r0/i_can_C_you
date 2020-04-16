#include <stdio.h>

void update(int *a,int *b) 
{
    int ans1,ans2;
    ans1 = (*a)+(*b);
    ans2 = (*a)-(*b);
    (*a) = ans1;
    (*b) = abs(ans2);
    printf("%d",ans1);
    printf("%d\n",ans2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

