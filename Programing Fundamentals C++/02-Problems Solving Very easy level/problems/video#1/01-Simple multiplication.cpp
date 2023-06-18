int simpleMultiplication(int a){
    return a % 2 ? 9*a : 8*a;
}

//other way

int simpleMultiplication(int a)
{
    return a * ( 8 + ( a & 1 ) );
}