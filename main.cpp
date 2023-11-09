#include <iostream>
using namespace std;
#include "fruta.h"
#include "vegetales.h"
#include "juegos.h"

int main(){

    int opcion;
    int answer_1;

    cout << "Buenas, Eres cliente o staff? Si eres cliente escriba 1. Si eres staff escriba 2." << endl; //identificar el usuario
    cin >> answer_1;

    if (answer_1 == 1){ //utilizar objeto fruta,vegetal,juego

        cout << " " << endl;

        cout << "Bienvenido a nuestro super mercado" << endl;
        cout << "Ahorita estamos disponibles los siguientes productos: " << endl;

        cout << " " << endl;
        
        cout << "-----Frutas----- " << endl;

        fruta fruta_1(24, "Noviembre", 2023, 8);
        cout << "Manzana: " << fruta_1.get_cantidad() << endl;
        fruta fruta_2(36, "Noviembre", 2023, 8);
        cout << "Platano: " << fruta_2.get_cantidad() << endl;
        fruta fruta_3(11, "Noviembre", 2023, 8);
        cout << "Papaya: " << fruta_3.get_cantidad() << endl;
        fruta fruta_4(5, "Noviembre", 2023, 8);
        cout << "Fresa: " << fruta_4.get_cantidad() << endl;

        cout << " " << endl;

        cout << "-----Vegetales-----" << endl;

        vegetal veg_1(56, "Noviembre", 2023, 8);
        cout << "Pepino: " << veg_1.get_value() << endl;
        vegetal veg_2(123, "Noviembre", 2023, 8);
        cout << "Jitomate: " << veg_2.get_value() << endl;
        vegetal veg_3(448, "Noviembre", 2023, 8);
        cout << "Lechuga: " << veg_3.get_value() << endl;
        vegetal veg_4(69, "Noviembre", 2023, 8);
        cout << "Chile: " << veg_4.get_value() << endl;
        
        cout << " " << endl;

        cout << "-----Juegos-----" << endl;

        juego jue_1(5, "Noviembre", 2023, 8);
        cout << "Mario Kart: " << jue_1.get_quantity() << endl;

        juego jue_2(1, "Noviembre", 2023, 8);
        cout << "Fortnite: " << jue_2.get_quantity() << endl;

        juego jue_3(2, "Noviembre", 2023, 8);
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

            fruta fruta_1(24, "Noviembre", 2023, 8);
            cout << "Manzana: " << fruta_1.get_cantidad() << endl;
            cout << "Fecha de modificacion: " << fruta_1.get_month ();
            cout << " " << fruta_1.get_day ();
            cout << " " << fruta_1.get_year () << endl;

            cout << " " << endl;

            fruta fruta_2(36, "Noviembre", 2023, 8);
            cout << "Platano: " << fruta_2.get_cantidad() << endl;
            cout << "Fecha de modificacion: " << fruta_2.get_month ();
            cout << " " << fruta_2.get_day ();
            cout << " " << fruta_2.get_year () << endl;

            cout << " " << endl;

            fruta fruta_3(11, "Noviembre", 2023, 8);
            cout << "Papaya: " << fruta_3.get_cantidad() << endl;
            cout << "Fecha de modificacion: " << fruta_3.get_month ();
            cout << " " << fruta_3.get_day ();
            cout << " " << fruta_3.get_year () << endl;

            cout << " " << endl;

            fruta fruta_4(5, "Noviembre", 2023, 8);
            cout << "Fresa: " << fruta_4.get_cantidad() << endl;
            cout << "Fecha de modificacion: " << fruta_4.get_month ();
            cout << " " << fruta_4.get_day ();
            cout << " " << fruta_4.get_year () << endl; //Despues de mostrar los datos, se va desplegar una pregunta para obtener el valor modificado

        } else if (opcion == 2){

            cout << "-----Vegetales-----" << endl;
            cout << " " << endl;

            vegetal veg_1(56, "Noviembre", 2023, 8);
            cout << "Pepino: " << veg_1.get_value() << endl;
            cout << "Fecha de modificacion: " << veg_1.get_mes ();
            cout << " " << veg_1.get_di ();
            cout << " " << veg_1.get_yar () << endl;
            
            cout << " " << endl;

            vegetal veg_2(123, "Noviembre", 2023, 8);
            cout << "Jitomate: " << veg_2.get_value() << endl;
            cout << "Fecha de modificacion: " << veg_2.get_mes ();
            cout << " " << veg_2.get_di ();
            cout << " " << veg_2.get_yar () << endl;

            cout << " " << endl;

            vegetal veg_3(448, "Noviembre", 2023, 8);
            cout << "Lechuga: " << veg_3.get_value() << endl;
            cout << "Fecha de modificacion: " << veg_3.get_mes ();
            cout << " " << veg_3.get_di ();
            cout << " " << veg_3.get_yar () << endl;

            cout << " " << endl;

            vegetal veg_4(69, "Noviembre", 2023, 8);
            cout << "Chile: " << veg_4.get_value() << endl;
            cout << "Fecha de modificacion: " << veg_4.get_mes ();
            cout << " " << veg_4.get_di ();
            cout << " " << veg_4.get_yar () << endl;} //Despues de mostrar los datos, se va desplegar una pregunta para obtener el valor modificado
            
        else if (opcion == 3){

            cout << "-----Juegos-----" << endl;
            cout << " " << endl;

            juego jue_1(5, "Noviembre", 2023, 8);
            cout << "Mario Kart: " << jue_1.get_quantity() << endl;
            cout << "Fecha de modificacion: " << jue_1.get_mon ();
            cout << " " << jue_1.get_day ();
            cout << " " << jue_1.get_yearth ();

            cout << " " << endl;

            juego jue_2(1, "Noviembre", 2023, 8);
            cout << "Fortnite: " << jue_2.get_quantity() << endl;
            cout << "Fecha de modificacion: " << jue_2.get_mon ();
            cout << " " << jue_2.get_day ();
            cout << " " << jue_2.get_yearth ();

            cout << " " << endl;

            juego jue_3(2, "Noviembre", 2023, 8);
            cout << "Kirby: " << jue_3.get_quantity() << endl;
            cout << "Fecha de modificacion: " << jue_3.get_mon ();
            cout << " " << jue_3.get_day ();
            cout << " " << jue_3.get_yearth ();
            
            cout << " " << endl; //Despues de mostrar los datos, se va desplegar una pregunta para obtener el valor modificado
            } 
            
            else{
            cout << "Perdon, no está válida tu opción :(" << endl;
        }

    } else {
        cout << "Perdon, no te podemos reconocer :(" << endl;
    }

}
