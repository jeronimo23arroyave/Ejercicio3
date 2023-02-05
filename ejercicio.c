
int main(){

    printf("Hola mundo");printf("Bienvenido a este Calculador de Conicas\n");
    double pi = 3.141592;
    float radio, altura;
    printf("Radio del cono:\n"); scanf("%f",&radio);
    printf("Altura del cono:"); scanf("%f",&altura);
   
    float radio2 = radio*radio; float vol= (pi*radio2*altura)/3;
    
    printf("Volumen de tu cono:%f",vol);
    return 0;
}