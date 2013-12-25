#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("input_number\n");
        return 1;
    }
    char *k_num = argv[1];
    int k = atoi(argv[1]);
    int i=0;
    printf("function signed [16:0] func_k%s_sin;\n", k_num);
    printf("    input[6:0] select;\n");
    printf("    begin\n");
    printf("    case(select)\n");
    for(i = 0;i < 64 ;i++) {
               int val = sin((double)(-i*k*M_PI*2/64))*65535;
        printf("        7'd%d: func_k%s_sin = %d;\n",i ,k_num, val);
    }
    printf("        default: func_k%s_sin = 0;\n", k_num);
    printf("    endcase\n");
    printf("    end\n");
    printf("endfunction\n\n");

    printf("function [16:0] func_k%s_cos;\n", k_num);
    printf("    input[6:0] select;\n");
    printf("    begin\n");
    printf("    case(select)\n");
    for(i = 0;i < 64 ;i++) {
        int val = cos((double)(-i*k*M_PI*2/64))*65535;
        printf("        7'd%d: func_k%s_cos = %d;\n",i ,k_num, val);
    }
    printf("        default: func_k%s_cos = 0;\n", k_num);
    printf("    endcase\n");
    printf("    end\n");
    printf("endfunction\n\n");

}
