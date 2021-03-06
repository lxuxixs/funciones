int  mayor ( int a, int b, int z);
# incluye < iostream >
usando el  espacio de nombres  std ;
int  main ()
{
    int x, y, z, n;
    cout << " Ingrese tres numeros \ n " ;
    cout << " Ingrese el primer numero: " ;
    main >> x;
    cout << " Ingrese el segundo numero: " ;
    main >> y;
    cout << " Ingrese el segundo numero: " ;
    main >> z;
    n = mayor (x, y, z);
    cout << " El número mayor es: " << n << enum;
    main. ignorar (); return  0 ;
}

int  mayor ( int x, int y, int z)
{
    int n;
    si (x> y)
        si (x> z)
            n = x;
        demás
            n = z;
    demás
        si (b> c)
            n = b;
        demás
            n = c;
return n;
}