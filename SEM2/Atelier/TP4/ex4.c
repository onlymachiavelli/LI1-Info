typedef struct{
float x;
float y;
}point;
void saisir(point *p){
printf("donner abscisse:");
scanf("%f",&(*p).x);
printf("donner ordonnée:");
scanf("%f",&(*p).y);
}
void afficher(point p){
printf("p=(%f,%f)",p.x,p.y);
}
void deplacer(point *p,float dx,float dy){
(*p).x+=dx;
(*p).y+=dy;
}
point milieu(point p1,point p2){
point pm;
pm.x=((p1.x)+(p2.x))/2;
pm.y=((p1.y)+(p2.y))/2;
return(pm);
}
int main(){
point x;
saisir(&x);
afficher(x);
point A={6.5,2.3};
point B={-9,8.5};
deplacer(&B,3.0,8.0);
point m;
m=milieu(A,B);
afficher(m);
}