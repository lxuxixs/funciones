# incluye  < iostream >

int x, y, factorial;


int  main 
{
    cout << " Ingrese un numero " << endl;
    cin >> x;
    factorial = 1 ;
    para (y = 1 ; y <= x; y ++)
    {
         factorial = y * factorial;
    }

    cout << " El factorial de " << x << " es: " << factorial << endl;


    return  0 ;
}