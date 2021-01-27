#include <math.h>
int a,b,c,d;
int sum(a,b){
    return a+b;
}
int difference(a,b){
    return a-b;
}
int divide(a,b){
    if(b!=0)
        return a/b;
    else
        return 0;
}
int multiply (a,b){
    return a*b;
}
int simpleInterest(a,b,c){
    return (a*b*c/100);
}
int fibo(a){
    if (a==0)
        return 0;
    else if (a==1)
        return 1;
    else
        return (fibo(a-1)+fibo(a-2));
}
int isPrime(a){
    c=0;

    for (b=2; b<a; b++){
        if (a%b==0)
            c=c+1;
        if (c>0)
            return 0;
        else
            return 1;
    }

}
int Strong(a){
    b=0;
    for(c=a; a>0; c++){
        int last = a%10;
        b=b+factorial(last);
        a=a/10;
    }
    return b;

}
int factorial(a){
    if (a==1 || a==0)
        return 1;
    else
        return (a*factorial(a-1));
}
int rootQuadratic(a,b,c){
    if ((b*b - (4*a*c))<=0)
        return 0;
    else
        return 1;
}
