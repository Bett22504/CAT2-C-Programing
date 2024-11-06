//2D Array named scores
/*Aurthor :Immanuel Bett
Reg No:CT101/G/22504/24
*/
#include <stdio.h>
int main(){
	int i,j;
int scores[2][2]={
{65,92},
{84,72}
};
for( i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("%d\n",scores[i][j]);
	}
}
	printf("\n");
	return 0;
}