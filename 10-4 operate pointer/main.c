//
//  main.c
//  10-4 operate pointer
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ary[5] = {10, 20, 30, 40, 50};
    int *pa = ary;
    int *pb = pa + 3;
    
    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);
    
    pa++;
    printf("pb - pa : %ld\n", pb - pa);
    
    printf("앞에 있는 배열 요소의 값 출력 : ");
    
    if (pa < pb) printf("pa : %d\n", *pa);
    else printf("pb : %d\n", *pb);
    
    return 0;
}
