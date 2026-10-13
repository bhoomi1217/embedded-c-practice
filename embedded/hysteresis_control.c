#include <stdio.h>
int main(){

 int temperatures[] = {28, 31, 29, 24};
int fan=0;
for(int i=0;i<4;i++){

    int x=temperatures[i];

if(x>=30){
    fan=1;
}
else if(x<=25){
    fan=0;
    }
if(fan==1){
    printf("turn the fan on\n");
}
else{
    printf("turn the fan off\n");
}
}
       return 0;
}
