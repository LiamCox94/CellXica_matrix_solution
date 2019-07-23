#include <stdio.h>
int main()
{
double matrixA[2][3];
double matrixB[3][2];
double matrixC[2][2];
double answer = 0;
//Populate matrix A 
printf("Enter matrix A values (row major order)\n");
	for(int i = 0; i < 2; i++){
		for(int x = 0; x < 3; x++){
			scanf("%lf", &matrixA[i][x]);
		}
	}
//Populate matrix B 
printf("Enter matrix B values (row major order)\n");
	for(int i = 0; i < 3; i++){
		for(int x = 0; x < 2; x++){
			scanf("%lf", &matrixB[i][x]);
		}
	}
//Calculate & print answer
	for(int x = 0; x < 2; x++){
		for(int y = 0; y < 2; y++){
			for(int i = 0; i <3; i++){
				answer = answer + matrixA[x][i] * matrixB[i][y];
			}
			matrixC[x][y] = answer;
			printf("matrix result: %lf \n", matrixC[x][y]);
			answer = 0;
		}
	}
return 0;
}
