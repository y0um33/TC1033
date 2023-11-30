#include <iostream>
using namespace std;
#include "fruta.h"
#include "vegetales.h"
#include "juego.h"
#include "descuento.h"

int main(){

    //objetos declarados en main.cpp
    int opcion; 
    int answer_1; 
    int pin;
    int cantidad;

    int vegetales;
    int frutales;
    int quan;

    string respuesta;

    //guardando valores en setter de discount
    discount disc1("60%","Invierno");
    discount disc2("15%","Otono");
    discount disc3("50%","Verano");
    discount disc4("20%","Primavera"); 

    //valores de clases vegetal y fruta
    vegetal vegetal1;
    vegetal vegetal2;
    vegetal vegetal3;
    vegetal vegetal4;

    fruta fruta1;
    fruta fruta2;
    fruta fruta3;
    fruta fruta4;

    cout << "Bienvenidos a nuestro supermercado" << endl;
    cout << "Eres cliente o staff?" << endl;
    cout << "Si eres cliente escriba 1. \nSi eres staff escriba 2." << endl; //identificar el usuario
    
    cin >> answer_1; //dependiendo de la respuesta se va ir a consumidor o staff

    if (answer_1 == 1){ //consumidor

        cout << "Bienvenido a nuestro super mercado" << endl;
        cout << "Ahorita estamos disponibles los siguientes productos: " << endl;

        cout << " " << endl;
        
        cout << "-----Frutas----- " << endl;

        fruta fruta_1(23.99, "Mexico", 24); //valores en setter de fruta
        cout << "Manzana: " << fruta_1.get_cantidad() << endl; //regresar los valores guardadas en fruta
        cout << "Precio: " << fruta_1.get_precio() << endl;
        cout << "Origen: " << fruta_1.get_origen() << endl;
        cout << "" << endl;
        fruta fruta_2(12.56, "India", 36);
        cout << "Platano: " << fruta_2.get_cantidad() << endl;
        cout << "Precio: " << fruta_2.get_precio() << endl;
        cout << "Origen: " << fruta_2.get_origen() << endl;
        cout << "" << endl;
        fruta fruta_3(35.50, "Hawaii", 11);
        cout << "Papaya: " << fruta_3.get_cantidad() << endl;
        cout << "Precio: " << fruta_3.get_precio() << endl;
        cout << "Origen: " << fruta_3.get_origen() << endl;
        cout << "" << endl;
        fruta fruta_4(50.45, "China", 5);
        cout << "Fresa: " << fruta_4.get_cantidad() << endl;
        cout << "Precio: " << fruta_4.get_precio() << endl;
        cout << "Origen: " << fruta_4.get_origen() << endl;

        cout << " " << endl;

        cout << "-----Vegetales-----" << endl;

        vegetal veg_1(11.23, "Corea", 56); //valores en setter de vegetal
        cout << "Pepino: " << veg_1.get_value() << endl; //regresar los valores guardadas en vegetal
        cout << "Precio: " << veg_1.get_precio() << endl;
        cout << "Origen: " << veg_1.get_origen() << endl;
        cout << "" << endl;
        vegetal veg_2(5.69, "Estados Unidos", 123);
        cout << "Jitomate: " << veg_2.get_value() << endl;
        cout << "Precio: " << veg_2.get_precio() << endl;
        cout << "Origen: " << veg_2.get_origen() << endl;
        cout << "" << endl;
        vegetal veg_3(2.33, "California" ,448);
        cout << "Lechuga: " << veg_3.get_value() << endl;
        cout << "Precio: " << veg_3.get_precio() << endl;
        cout << "Origen: " << veg_3.get_origen() << endl;
        cout << "" << endl;
        vegetal veg_4(7.89, "Mexico", 69);
        cout << "Chile: " << veg_4.get_value() << endl;
        cout << "Precio: " << veg_4.get_precio() << endl;
        cout << "Origen: " << veg_4.get_origen() << endl;
        cout << "" << endl;
        cout << "-----Juegos-----" << endl;
        cout << "*AVISO IMPORTANTE*: Para comprar un juego necesitan que llamar al numero 442 123 456" << endl;
        
        game jue_1(125.99, "Japón", "Las aventuras de dos fontaneros, Mario y Luigi, quienes deben rescatar a la Princesa Peach"); //valores en setter de juego
        cout << "Mario" << endl;
        cout << "Precio: " << jue_1.get_precio() << endl; //regresar los valores guardadas en juego
        cout << "Origen: " << jue_1.get_origen() << endl;
        cout << "Descripcion: " << jue_1.get_description() << endl;
        cout << "" << endl;
        game jue_2(369.99, "Carolina Del Norte", "juego de tipo batalla real en el que compiten hasta cien jugadores en solitario, dúos, tríos o escuadrones");
        cout << "Fortnite" << endl;
        cout << "Precio: " << jue_2.get_precio() << endl;
        cout << "Origen: " << jue_2.get_origen() << endl;
        cout << "Descripcion: " << jue_2.get_description() << endl;
        cout << "" << endl;
        game jue_3(599.99, "Francia", "aventura con combates por turnos y grandes dosis de estrategia");
        cout << "Rabidds" << endl;
        cout << "Precio: " << jue_3.get_precio() << endl;
        cout << "Origen: " << jue_3.get_origen() << endl;
        cout << "Descripcion: " << jue_3.get_description() << endl;

        cout << "" << endl;

        cout << "Quieres observar las ofertas que tenemos? y/n"<< endl;
        cin >> respuesta;
        if (respuesta == "y"){
            cout << "Tenemos diferentes descuentos en cada periodo." << endl;
            cout << disc1.get_Season().get_period() << ":Tenemos un descuento de Navidad por " << disc1.get_number() << "!!!" << endl; //composición
            cout << disc2.get_Season().get_period() << ":Tenemos un descuento de Thanksgiving por " << disc2.get_number() << "!!!" << endl;
            cout << disc3.get_Season().get_period() << ":Tenemos un descuento de regreso a la escuela por " << disc3.get_number() << "!!!" << endl;
            cout << disc4.get_Season().get_period() << ":Tenemos un descuento de Pascua por " << disc4.get_number() << "!!!" << endl;

        } else{
            cout << "Gracias!" << endl;
        }

    }

    else if (answer_1 == 2){ //staff
        cout << " " << endl;
        cout << "Bienvenido Staff, Que producto quieres agregar o quitar" << endl;
        cout << "Cual es el PIN?: " << endl;
        cin >> pin;
        if (pin == 8596){ //nip del staff
            cout << "Cual seccion necesitas que modificar?: " << endl;
            cout << "1. Fruta" << endl;
            cout << "2. Vegetal" << endl;
        
            cin >> opcion;

            cout << " " << endl;

            if (opcion == 1){
            
                cout << "-----Frutas----- " << endl;
                cout << " " << endl;

                fruta fruta_1(23.99, "Mexico", 24); //constructor de fruta
                 cout << "Manzana: " << fruta_1.get_cantidad() << endl; //getter de frutas
        
                fruta fruta_2(12.56, "India", 36);
                cout << "Platano: " << fruta_2.get_cantidad() << endl;
        
                fruta fruta_3(35.50, "Hawaii", 11);
                cout << "Papaya: " << fruta_3.get_cantidad() << endl;
        
                fruta fruta_4(50.45, "China", 5);
                cout << "Fresa: " << fruta_4.get_cantidad() << endl;

                cout << "Cual producto quieres modificar?" << endl;
                cout << "1. Manzana" << endl;
                cout << "2. Platano" << endl;
                cout << "3. Papaya" << endl;
                cout << "4. Fresa" << endl;
                cout << "5. Nada" << endl;
                cin >> frutales;

                if (frutales == 1){
                    cout << "Cuanta cantidad se queda?: " << endl;
                    cin >> quan;
                    fruta1.set_cantidad(quan); //se guarda el nuevo valor que ingreso el usuario
                    cout << "El valor modificado de Manzana es: "<< fruta1.get_cantidad() << endl;
                }
                else if(frutales == 2){
                    cout << "Cuanta cantidad se queda?: " << endl;
                    cin >> quan;
                    fruta2.set_cantidad(quan);
                    cout << "El valor modificado de Platano es: "<< fruta2.get_cantidad() << endl;
                }
                else if(frutales == 3){
                    cout << "Cuanta cantidad se queda?: " << endl;
                    cin >> quan;
                    fruta3.set_cantidad(quan);
                    cout << "El valor modificado de Papaya es: "<< fruta3.get_cantidad() << endl;
                }
                else if(frutales == 4){
                    cout << "Cuanta cantidad se queda?: " << endl;
                    cin >> quan;
                    fruta4.set_cantidad(quan);
                    cout << "El valor modificado de Fresa es: "<< fruta4.get_cantidad() << endl;
                }
                else if(frutales == 5){
                    cout << "Adios" << endl;
                }

            } else if (opcion == 2){

                cout << "-----Vegetales-----" << endl;
                cout << " " << endl;

                vegetal veg_1(11.23, "Corea", 56); //constructor de vegetal
                cout << "Pepino: " << veg_1.get_value() << endl; //getter de vegetal
                cout << "" << endl;
                vegetal veg_2(5.69, "Estados Unidos", 123);
                cout << "Jitomate: " << veg_2.get_value() << endl;
                cout << "" << endl;
                vegetal veg_3(2.33, "California" ,448);
                cout << "Lechuga: " << veg_3.get_value() << endl;
                cout << "" << endl;
                vegetal veg_4(7.89, "Mexico", 69);
                cout << "Chile: " << veg_4.get_value() << endl;

                cout << "Cual producto quieres modificar?" << endl;
                cout << "1. Pepino" << endl;
                cout << "2. Jitomate" << endl;
                cout << "3. Lechuga" << endl;
                cout << "4. Chile" << endl;
                cout << "5. Nada" << endl;
                cin >> vegetales;

                if (vegetales == 1){
                    cout << "Cuanta cantidad se queda?: " << endl;
                    cin >> quan; //recibir el valor llamado quan
                    vegetal1.set_value(quan); //guardar quan en el setter de vegetales
                    cout << "El valor modificado de Pepino es: "<< vegetal1.get_value() << endl;
                }
                else if(vegetales == 2){
                    cout << "Cuanta cantidad se queda?: " << endl;
                    cin >> quan;
                    vegetal2.set_value(quan);
                    cout << "El valor modificado de Jitomate es: "<< vegetal2.get_value() << endl;
                }
                else if(vegetales == 3){
                    cout << "Cuanta cantidad se queda?: " << endl;
                    cin >> quan;
                    vegetal3.set_value(quan);
                    cout << "El valor modificado de Lechuga es: "<< vegetal3.get_value() << endl;
                }
                else if(vegetales == 4){
                    cout << "Cuanta cantidad se queda?: " << endl;
                    cin >> quan;
                    vegetal4.set_value(quan);
                    cout << "El valor modificado de Chile es: "<< vegetal4.get_value() << endl;
                }
                else if(vegetales == 5){
                    cout << "Adios" << endl;
                }
            };
        }else if(pin != 8596)
        {
            cout << "Es incorrecto el PIN, porfavor reinicia el codigo";}
    else{
            cout << "Perdon, no es valida tu opción :(" << endl;
        }

    } else {
        cout << "Perdon, no te podemos reconocer :(" << endl;
    }

}