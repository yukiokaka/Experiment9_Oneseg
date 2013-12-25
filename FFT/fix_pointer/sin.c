/*
 
 FIR coeff. out for upto 51-th FIR filter.
 Normalize to signed 14-bit.
 
 N = coeff. count
  
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define	N	51
#define N2	64

int	data[N2];


int main (void)
{
	
    printf("Generate FIR coefficient Verilog file for 51-th FIR filter.\n");
	
	
	int	i, j, k;
	double x, y, z;
	
	char s1[64], s2[64], s3[64];

	for ( i = 0; i < N2; i++)	data[i] = 0;
	
	FILE *fp, *fp2;
		
	printf("Input source filename = ");
	scanf("%s", s1);

	fp = fopen(s1, "r");
	if( fp == NULL )
	{
		printf( "Cannot open %s file", s1 );
		return(-1);
	}

	// read FIR coeff.
	
	for( i=0; i< N; i++)
	{
		
		fscanf(fp, "%d,", &data[i]);
		printf("i=%d, data=%d\n",i,data[i]);
	}
	
	fclose(fp);

	// normalize to 14-bit
	
	k = 0;
	
	for ( i = 0; i < N; i++)
	{
		j = abs(data[i]);
		if ( k < j)	k = j;
	}
	
	z = 8191.0;
	y = (double) k;
	y = z / y;
	
	for ( i = 0; i < N; i++)
	{
		x = (double) (data[i]);
		x *= y;
		data[i] = (int) x;
	}
	
	printf("\n\nOutput filename (does not include '.v') = ");
	scanf("%s", s2);
	
	
	// output FIR coefficient Verilog file

	strcpy(s3,  s2);
	strcat(s3, ".v");
	fp2 = fopen(s3, "w");
	printf("%s opened\n", s3);
		
	fprintf(fp2, "module %s(address, coeff);\n\n", s2);
	fprintf(fp2, "// FIR coefficient table (%d) from %s file\n\n", N, s1);
	fprintf(fp2, "\tinput [5:0] address;\n");
	fprintf(fp2, "\toutput [13:0] coeff; // integer coeff.\n");
	fprintf(fp2, "\n\tfunction [13:0] cout;\n");
	fprintf(fp2, "\t\tinput [5:0] s;\n\n");
	fprintf(fp2, "\t\tbegin\n");
	fprintf(fp2, "\t\t\tcase (s)\n");

	for( i=0; i< N2; i++)
	{
		k = data[i];
		fprintf(fp2, "\t\t\t\t%d: cout = %d;\n", i, k);
	}
	
	fprintf(fp2, "\t\t\tendcase\n");
	fprintf(fp2, "\t\tend\n\n");
	fprintf(fp2, "\tendfunction\n\n");
	fprintf(fp2, "\tassign coeff = cout(address);\n\n");
	fprintf(fp2, "endmodule\n");

	fclose(fp2);

	printf("Process END\n");
	
    return 0;
}
