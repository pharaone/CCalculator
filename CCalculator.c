//
//  main.c
//  CCalculator 0.1
//
//  Created by Emanuele Antonio Faraone on 26/09/17.
//  Copyright © 2017 Emanuele Antonio Faraone. All rights reserved.
//

#include <stdio.h>

int main() {
    int f,s,o,r;
    printf("Write the first number of the operation:");
    scanf("%d",f);
    printf("Write the second number of the operation:");
    scanf("%d",s);
    printf("What are you going to do?");
    scanf("%s",o);
    if (o == "+") {
        r = f + s ;
    }else if (o == "-"){
        r = f - s ;
    }else if (o == "*"){
        r = f * s ;
    }else if (o == "/"){
        r = f / s ;
    }
    printf("The result is %d",r);
}
