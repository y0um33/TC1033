#include <string>
using namespace std;

class fruta{
private:
    int cantidad;
   
public:
    fruta(): cantidad(0){};
    fruta(int can): cantidad(can){};

    int get_cantidad();

    void set_cantidad(int);
    
};

int fruta::get_cantidad(){
    return cantidad;
}

void fruta::set_cantidad(int can){
    cantidad = can;
};

