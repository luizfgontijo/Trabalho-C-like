int main (){
    int a,b,x,r; //A= primeiro número; B=Segundo número; R= resultado;X= variável para escolher a operação;//
    printf ("\nInsira o primeiro numero: "); //Entre com o primeiro dado (Número 1)//
    scanf ("%d",&a); // Armazene o primeiro dado//
    printf ("\nInsira o segundo numero: "); //Entre com o segundo dado (Número 2)//
    scanf ("%d",&b); //Armazene o segundo dado//
    printf ("\nQual operacao deseja realizar? (1)Soma (2)Subtracao (3)Multiplicacao (4)Divisao? ");//Entre com o terceiro dado(escolha da operaçãao)//
    scanf ("%d",&x);//Armazene o terceiro dado//
    switch (x)// processe o terceiro dado//
    {
    case 1: r=a+b;//receba o resultado da operação e e atribua um valor à variável R//
    break;
    case 2: r=a-b;
    break;
    case 3: r=a*b;
    break;
    case 4: r=a/b;
    break;
    }
    printf ("\nResultado: %d",r);
}
