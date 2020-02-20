//
//  main.c
//  ilkharfbuyuk
//
//  Created by Mert Kacir on 20.02.2020.
//  Copyright © 2020 Ömer Kacır. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char cumle[100];
    int i;
    printf("Deneme yapalım bakalım olucak mı tamam mı bakıyım afferim.");
    gets(cumle);
    for (i=0;i<cumle;i++){
        if(cumle[i] == ' '){
            printf("%c",toupper(cumle[i+1]));
            i++;
        } else {
            printf("%c",cumle[i]);
        }
    }
            
        
        
    
    
    return 0;
}
