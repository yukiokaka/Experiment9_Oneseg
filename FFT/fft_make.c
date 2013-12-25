#include <stdio.h>

int main(void)
{
    int i;
    int m;
    int n;
    printf("case(cnt) begin\n");

    for (i=0;i<16;i++) {
        printf("    6'd%d: begin\n",i);
        printf("        AIN0 <= A%d;\n",i);
        printf("        AIN1 <= A%d;\n",i+16);
        printf("        AIN2 <= A%d;\n",i+32);
        printf("        AIN3 <= A%d;\n",i+48);
        printf("    end\n");

    }
    printf("endcase\n");

    printf("case(cnt) begin\n");
    for (i=0;i<16;i++) {
        printf("    6'd%d: begin\n",i);
        printf("        B%d <= Y0;\n",i);
        printf("        B%d <= Y1;\n",i+16);
        printf("        B%d <= Y2;\n",i+32);
        printf("        B%d <= Y3;\n",i+48);
        printf("    end\n");

    }
    printf("endcase\n");


    printf("case(cnt) begin\n");

    for(n=0;n<=48;n+=16) {
        for(m=0;m<4;m++) {
            i = n+m;
            printf("    6'd%d: begin\n",i);
            printf("        AIN0 <= B%d;\n",i);
            printf("        AIN1 <= B%d;\n",i+4);
            printf("        AIN2 <= B%d;\n",i+8);
            printf("        AIN3 <= B%d;\n",i+12);
            printf("    end\n");
            }
        }
    printf("endcase\n");

    printf("case(cnt) begin\n");

    for(n=0;n<=48;n+=16) {
        for(m=0;m<4;m++) {
            i = n+m;
            printf("    6'd%d: begin\n",i);
            printf("        C%d <= Y0;\n",i);
            printf("        C%d <= Y1;\n",i+4);
            printf("        C%d <= Y2;\n",i+8);
            printf("        C%d <= Y3;\n",i+12);
            printf("    end\n");
            }
        }
    printf("endcase\n");



    printf("case(cnt) begin\n");

    for (i=0;i<64;i+=4) {
        printf("    6'd%d: begin\n",i);
        printf("        AIN0 <= C%d;\n",i);
        printf("        AIN1 <= C%d;\n",i+1);
        printf("        AIN2 <= C%d;\n",i+2);
        printf("        AIN3 <= C%d;\n",i+3);
        printf("    end\n");

    }
    printf("endcase\n");

    printf("case(cnt) begin\n");

    for (i=0;i<64;i+=4) {
        printf("    6'd%d: begin\n",i);
        printf("        YOUT%d <= Y0;\n",i);
        printf("        YOUT%d <= Y1;\n",i+1);
        printf("        YOUT%d <= Y2;\n",i+2);
        printf("        YOUT%d <= Y3;\n",i+3);
        printf("    end\n");

    }
    printf("endcase\n");

    int n0,n1,n2;

    for(n0=0;n0<4;n0++)
        for(n1=0;n1<4;n1++)
            for(n2=0;n2<4;n2++)
                printf("YOUT%d <= YOUT%d;\n", 16*n0+4*n1+n2, 16*n2+4*n1+n0);

    printf("\n\n\n\n\n\n\n");
    printf("wire [10:0] ");
    for(i=0;i<64;i++)
        printf("A%d,",i);
    printf(";\n");
    printf("\n\n\n\n\n\n\n");

    printf("\n\n\n\n\n\n\n");
    printf("reg [10:0] ");
    for(i=0;i<64;i++)
        printf("B%d,",i);
    printf(";\n");
    printf("\n\n\n\n\n\n\n");

    printf("\n\n\n\n\n\n\n");
    printf("reg [10:0] ");
    for(i=0;i<64;i++)
        printf("C%d,",i);
    printf(";\n");
    printf("\n\n\n\n\n\n\n");

    printf("\n\n\n\n\n\n\n");
    printf("output reg [10:0] ");
    for(i=0;i<64;i++)
        printf("YOUT%d,",i);
    printf(";\n");
    printf("\n\n\n\n\n\n\n");


    for(i=0;i<64;i++)
        printf(".A%d(A%d),",i,i);
    printf(";\n");
    printf("\n\n\n\n\n\n\n");



}
