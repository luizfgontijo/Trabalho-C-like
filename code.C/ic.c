int main (){
    int a,b,x,r; //A= primeiro n�mero; B=Segundo n�mero; R= resultado;X= vari�vel para escolher a opera��o;//
    printf ("\nInsira o primeiro numero: "); //Entre com o primeiro dado (N�mero 1)//
    scanf ("%d",&a); // Armazene o primeiro dado//
    printf ("\nInsira o segundo numero: "); //Entre com o segundo dado (N�mero 2)//
    scanf ("%d",&b); //Armazene o segundo dado//
    printf ("\nQual operacao deseja realizar? (1)Soma (2)Subtracao (3)Multiplicacao (4)Divisao? ");//Entre com o terceiro dado(escolha da opera��ao)//
    scanf ("%d",&x);//Armazene o terceiro dado//
    switch (x)// processe o terceiro dado//
    {
    case 1: r=a+b;//receba o resultado da opera��o e e atribua um valor � vari�vel R//
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
