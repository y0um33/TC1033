#include <string>
using namespace std;

class personaje{
private:
    int vida;
    int magia;
    string nombre;
    string raza;
public:
    personaje(): vida(10), magia(0), nombre(""), raza(""){};
    personaje(int v, int m, string n, string r): vida(v), magia(m), nombre(n), raza(r){};
    int get_vida();
    int get_magia();
    string get_nombre();
    string get_raza();

    void set_vida(int);
    void set_magia(int);
    void set_nombre(string);
    void set_raza(string);

    void danio(int danio);
};

int personaje :: get_vida(){
    return vida;
}

int personaje :: get_magia(){
    return magia;
}

string personaje :: get_nombre(){
    return nombre;
}

void personaje :: danio(int danio){
    vida = vida - danio;
}

class Guerrero : public personaje{
public:
    int ataque();
};

int Guerrero :: ataque(){
    return 1000;
}

class Mago : public personaje{
public:
    int hechizo();
};

int Mago :: hechizo(){
    return 20;
}

class Ladron : public personaje{
public:
    int roba();
};

int Ladron :: roba(){
    return 65;
}