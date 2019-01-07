#include <stdio.h>

void main() {
    int a[10], n;
    int l1,l2,i;

    printf("enter number of elements you want in array");
    scanf("%d", &n);
    printf("enter elements");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    l1=a[0];
    for (i = 0; i < n; i++) {
	if (a[i] > l1) {
	    l1 = a[i];
	}
    }
    l2 = a[0];
    for (i = 1; i < n; i++) {
	if (a[i] > l2 && a[i] < l1)
	    l2 = a[i];
    }
    printf("First and second largest number is %d and %d ", l1,l2);
}