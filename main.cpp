#include <iostream>
using namespace std;
#include "fruta.h"
#include "vegetales.h"

int main(){

    int opcion;
    int answer_1;

    cout << "Bienvenidos a nuestro supermercado" << endl;
    cout << "Eres cliente o staff?" << endl;
    cout << "Si eres cliente escriba 1. \nSi eres staff escriba 2." << endl; //identificar el usuario
    cin >> answer_1;

    if (answer_1 == 1){ //utilizar objeto fruta,vegetal,juego

        cout << " " << endl;

        cout << "Bienvenido a nuestro super mercado" << endl;
        cout << "Ahorita estamos disponibles los siguientes productos: " << endl;

        cout << " " << endl;
        
        cout << "-----Frutas----- " << endl;

        fruta fruta_1(24);
        cout << "Manzana: " << fruta_1.get_cantidad() << endl;
        fruta fruta_2(36);
        cout << "Platano: " << fruta_2.get_cantidad() << endl;
        fruta fruta_3(11);
        cout << "Papaya: " << fruta_3.get_cantidad() << endl;
        fruta fruta_4(5);
        cout << "Fresa: " << fruta_4.get_cantidad() << endl;

        cout << " " << endl;

        cout << "-----Vegetales-----" << endl;

        vegetal veg_1(56);
        cout << "Pepino: " << veg_1.get_value() << endl;
        vegetal veg_2(123);
        cout << "Jitomate: " << veg_2.get_value() << endl;
        vegetal veg_3(448);
        cout << "Lechuga: " << veg_3.get_value() << endl;
        vegetal veg_4(69);
        cout << "Chile: " << veg_4.get_value() << endl;
        
        cout << " " << endl;

        cout << "-----Juegos-----" << endl;

        juego jue_1(5);
        cout << "Mario Kart: " << jue_1.get_quantity() << endl;

        juego jue_2(1);
        cout << "Fortnite: " << jue_2.get_quantity() << endl;

        juego jue_3(2);
        cout << "Kirby: " << jue_3.get_quantity() << endl;
    } 

    else if (answer_1 == 2){
        cout << " " << endl;
        cout << "Bienvenido Staff, Que producto quieres agregar o quitar" << endl;
        cout << "Cual producto quieres modificar?: " << endl;
        cout << "1. Fruta" << endl;
        cout << "2. Vegetales" << endl;
        cout << "3. Otras" << endl;
        
        cin >> opcion;

        cout << " " << endl;

        if (opcion == 1){
            
            cout << "-----Frutas----- " << endl;
            cout << " " << endl;

            fruta fruta_1(24);
            cout << "Manzana: " << fruta_1.get_cantidad() << endl;

            cout << " " << endl;

            fruta fruta_2(36);
            cout << "Platano: " << fruta_2.get_cantidad() << endl;

            cout << " " << endl;

            fruta fruta_3(11);
            cout << "Papaya: " << fruta_3.get_cantidad() << endl;

            cout << " " << endl;

            fruta fruta_4(5);
            cout << "Fresa: " << fruta_4.get_cantidad() << endl;

        } else if (opcion == 2){

            cout << "-----Vegetales-----" << endl;
            cout << " " << endl;

            vegetal veg_1(56);
            cout << "Pepino: " << veg_1.get_value() << endl;
            
            cout << " " << endl;

            vegetal veg_2(123);
            cout << "Jitomate: " << veg_2.get_value() << endl;

            cout << " " << endl;

            vegetal veg_3(448);
            cout << "Lechuga: " << veg_3.get_value() << endl;

            cout << " " << endl;

            vegetal veg_4(69);
            cout << "Chile: " << veg_4.get_value() << endl; //Despues de mostrar los datos, se va desplegar una pregunta para obtener el valor modificado
        
        } else if (opcion == 3){

            cout << "-----Juegos-----" << endl;
            cout << " " << endl;

            juego jue_1(5);
            cout << "Mario Kart: " << jue_1.get_quantity() << endl;

            cout << " " << endl;

            juego jue_2(1);
            cout << "Fortnite: " << jue_2.get_quantity() << endl;

            cout << " " << endl;

            juego jue_3(2);
            cout << "Kirby: " << jue_3.get_quantity() << endl;
            
            cout << " " << endl; //Despues de mostrar los datos, se va desplegar una pregunta para obtener el valor modificado
            } 
            
            else{
            cout << "Perdon, no está válida tu opción :(" << endl;
        }

    } else {
        cout << "Perdon, no te podemos reconocer :(" << endl;
    }

}
