#include <stdio.h>

int main() {
	
	int i,j,t,n[20];
	
	for(i=0; i<20; i++) {
		printf("\n%d. sayiyi giriniz:", (i +1));
		scanf("%d",&n[i]);
	}
	
	for(i=0; i<19; i++) {
		for(j=i+1; j<20; j++) {
			if(n[i] > n[j]) {
				t = n[i];
				n[i] = n[j];
				n[j] = t;
			}
		}
	}
	
	printf("\n SIRALI LISTE:");
	
	for(i=0; i<20; i++) {
		printf("\n %d. sayi %d",(i+1), n[i]);
	}

	return 0;	 
	
	
}
