#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d", &t);
	
	int n,k;
	
	while(t--){
	    scanf("%d%d", &n,&k);
	    
	    if( 1+n <= k ){
	        printf("Yes \n");
	    }
	    else {
	        printf("No \n");
	    }
	}
	return 0;
}

