 #include "header.h"
 void pattern(int num){
     int c= 97;
    if(num%10==0){
    goto label;
    }
    else{
    return;
    }
    
    label :
    	
    	for(int i=4,j=0;i>0,j<5;i--,j++){
    
        for (int z=i;z>0;z--){
            printf(" ");
        }
        
        for (int q=0,d=97;q<=j,d<=c;q++,d++){
            printf("%c",d);
            
        }
        ++c;
        printf("\n");
    }
}
