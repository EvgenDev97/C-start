 #include <stdio.h>
 
 int main (void){
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    int res;
    scanf("%d; %d", &w, &h);
    res = (rect_width / w) * (rect_height / h);
    printf("%d",res);
   
    return 0;
 }
 
