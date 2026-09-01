 #include <stdio.h>

void dtob(int n) {
    int binaryNum[32]; 
    int i = 0;

  
    if (n == 0) {
        printf("0");
        return;
    }


    while (n > 0) {
        binaryNum[i] = n % 2; 
        n = n / 2;           
        i++;
    }

	int j;
    for ( j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int decimalNum = 27;
    printf("Binary is: ", dtob);
    dtob(decimalNum); 
    return 0;
}

