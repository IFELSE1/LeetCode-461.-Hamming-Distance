#include"stdio.h"
#include <math.h>


int hammingDistance(int x, int y) {
    unsigned char xbin[32]={0};
	unsigned char ybin[32]={0};	
	unsigned char i=0,ibin=0;
	int Dis = 0;
	if ((x<0)||(y > pow(2,31))){
		/*error hander*/
	}
	else{
	    /*将数字转换为二进制，二进制的每个位存储在数组中*/
	   	while(x>0)
    	{
    		xbin[ibin] = x%2;
    		x = x/2;
    		ibin++;
    	}
    	ibin=0;
	    while(y>0)
    	{
    		ybin[ibin] = y%2;
    		y = y/2;
    		ibin++;
    	}
		for (i=0;i<32;i++){
			if ( xbin[i] != ybin[i]){
				Dis++;
			}
		}
	}
	return Dis;
}
/**************for local test**************/
int main(void)  
{  
	printf("%d\n",hammingDistance(1,4));
	printf("%d\n",hammingDistance(54654,4121));
}  














































