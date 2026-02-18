#include<stdio.h>
int main(){
    int x,n,somme=0,cpt=0,somme1=0;    float moy;
    do{
    printf("saisir n entiers:");
    scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
        do{
            puts("veuillez saisir un entier negatif:");
        scanf("%d",&x);
        }while(x>0);
        if(x%2==0){
            somme=somme+x;
            cpt++;
        }else{
            somme1=somme1+x;
        }
    }
    moy=(float) somme/cpt;
    moy=(float) somme1/cpt;
    printf("le moyenne est %.2f",moy);
    printf("le nombre de nombre impaire %d",n-cpt);
    printf("le nombre de nombres impaires est:%f",moy);



return 0 ;
}
