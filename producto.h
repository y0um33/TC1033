#include <string>
using namespace std;

class producto{
private:
    float precio;
    string origen;
public:
    producto(): precio(0.0), origen(""){};
    producto(float pre, string ori): precio(pre), origen(ori){};

    float get_precio();
    string get_origen();

    void set_precio(float);
    void set_origen(string);
};

float producto::get_precio(){
    return precio;
}

string producto::get_origen(){
    return origen;
}

void producto::set_precio(float pre){
    precio = pre;
};

void producto::set_origen(string ori){
    origen = ori;
}
