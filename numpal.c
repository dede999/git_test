#inlude <stdio.h>
int pot(int base, int exp){
     int result=1;
     while (exp>0){
        result=result*base;
        exp--;
     }
     return result;
}

int cont (int a){
    int t;
    while (a>0){
        t++;
        a=a/10;
    }
    return t;
}

int main (){
    int a, t, ai=0, b, n[100];
    printf ("Dê o número A e B:\n");
    sacnf ("%d %d", &a. &b);
    t=cont(a);
    for (i=0; i=t-1; i++){
        n[i]=aux%10;
        aux=aux/10;
    }
    for (i=t-1, p=0;i=0;i--,p++){
        ai=ai+n[i]*pot(10,p);
    }
    if (ai==b)
        printf ("Os números %d e %d são palíndromos\n", a, b);
    else
        printf ("Os números %d e %d não são palíndromos\n", a, b);
    retun 0;
}
