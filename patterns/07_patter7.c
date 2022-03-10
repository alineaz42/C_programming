
#include<stdio.h>

void print_char();
void print_char2();
void print_char3();
//void print_char4();
int main(){
    //printf("Hello World\n");
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    print_char();
    print_char2();
    print_char3();

    return 0;
}


void print_char()
{
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",i+64);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c",i+64);
        }
        printf("\n");
    }

}
void print_char2()
{
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }

}

void print_char3()
{
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--){
        for(j=1;j<n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    /*
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    */

}
