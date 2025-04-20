#include <stdio.h>

void towerOfHanoi(int n, char beg, char aux, char end) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", beg, end);
        return;
    }
    
    towerOfHanoi(n - 1, beg, end, aux);  // Move n-1 disks from 'beg' to 'aux' using 'end'
    printf("Move disk %d from %c to %c\n", n, beg, end);
    towerOfHanoi(n - 1, end, aux, beg);  // Move n-1 disks from 'aux' to 'end' using 'beg'
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    
    printf("Steps to solve Tower of Hanoi:\n");
    towerOfHanoi(n, 'A', 'B', 'C');  // A = beg, B = aux (center), C = end
    
    return 0;
}
