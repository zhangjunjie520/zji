#include <stdio.h>




int is_perfect_number(int num) {
    int sum = 0;
    int i;
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int i, m, n;
    int o=0;
    if (scanf("%d,%d", &m, &n) != 2 || m < 1 || m > 9999 || n < 1 || n > 9999) {
        printf("error");
        return 0;}
    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }
    for ( i = m; i <= n; i++) {
        if (is_perfect_number(i)) {if(o==1){printf(",");
		}
            printf("%d", i);o=1;
        }
    }
  

  
    
    
    return 0;
}
