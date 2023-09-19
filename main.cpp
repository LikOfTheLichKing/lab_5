#include <stdio.h>
int main(){
    bool a=true;
    bool b=false;
    if(!b&&(!a||b)){
        printf("true");
    }
    else{
        printf("false");
    }
}
