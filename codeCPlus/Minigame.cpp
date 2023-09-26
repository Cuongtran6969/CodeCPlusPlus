#include<stdio.h>
int main() {
	int n, i=0, j=0;
	for(i=0; i < 6; i++) {
		for(j=0; j < 20; j++) {
			switch(i) {
				case 0:
					if(j==5 || j==13 || j==14 || j==15) {
				      printf(" ");
			        } else {
			          printf("*");	
					}
					if(j==19) {
						printf("\n");
					}
			    break;
					case 1:
					if(j==0 || j==9 || j==15) {
				      printf("*");
			        } else {
			          printf(" ");	
					}
					if(j==19) {
						printf("\n");
					}
			    break;
				case 2:
					if((j>4 && j<9) || (j>9 && j<14) || (j>14 && j<19)) {
				      printf(" ");
			        } else if(j==19) {
			          printf("\n");
					} else {
			          printf("*");	
					}
			    break;
				    case 3:
					if(j==0 || j==9 || j==15) {
				      printf("*");
			        } else {
			          printf(" ");	
					}
					if(j==19) {
						printf("\n");
					}
			    break;
				case 4:
					if(j==0 || j==9 || (j>15 && j<20)) {
				      printf("*");
					} else {
			          printf(" ");	
					}
			    break;		   
			}
		}
	}
}

