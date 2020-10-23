
/*
For reference, remember that the data types are int, double, char, bool.

PideDatos = askfor data

Entre el radio de la base del cilindro = enter the cylinder's base radius.

Radio invalido = Invalid radius

Entre altura = Enter height

Altura invalida = invalid height
*/
//No arguments to the fucntions, keep it void, 
X PideDatos (X, X) {
    double h;
    double r;
    cout<< "Entre el radio de la base del cilindro: ";
    cin>>r;
    while(r<= 0.0) {
        cout<<"Radio invalido, Re-entre: ";
        cin>>r;
    }

    cout<<"Entre la altura del cilindro: ";
    cin>>h;
    while(h <= 0.0) {
        cout<<"Altura invalidia. Re-entre: ";
    }
    //No return value as return type is void
    return X;
}

/*
-------------------------Sample------------------
void PideDatos (void) {
    double h;
    double r;
    cout<< "Entre el radio de la base del cilindro: ";
    cin>>r;
    while(r <= 0.0) {

        cout<<"Radio invalido, Re-entre: ";
        cin>>r;
    }

    cout<<"Entre la altura del cilindro: ";
    cin>>h;
    while(h <= 0.0) {

        cout<<"Altura invalidia. Re-entre: ";
        cin>>h;
    }
}
*/



