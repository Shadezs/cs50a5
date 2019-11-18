#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int user_inputdata[20];
    int* user_data;
    int user_input=0;
    printf_s("please enter 20 interger \n");

    scanf("d%",&user_inputdata[0]);



    for (int j = 0; j < 20; j++) {
        printf_s("the Numbers you enter are: d%",user_inputdata[j]);
    }
    return 0;
}
void foo( double a,double b,double *c,double *d)
{
    *c=(a/ b);
    *d=a*b;




}