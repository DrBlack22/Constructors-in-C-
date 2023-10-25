#include <iostream>
#include <string>
using namespace std;

class CarType{
    public:
        CarType(string b){
        Car = b;
        }
    public:
        void selectcar(string a){
        Car = a;
        };
        string fetchcar(){
        return Car;
        };
    private:
        string Car;
};

int main ()
{
    CarType Car1("Audi");
    cout << Car1.fetchcar() << endl;
    CarType Car2("Royce");
    cout << Car2.fetchcar() << endl;
    return 0;
}
