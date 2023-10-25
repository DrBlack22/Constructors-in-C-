#include <iostream>
#include <string>
using namespace std;
class hispeedclass{
    public:
        hispeedclass(string z){
        selectmodel(z);
        };
    public:
        void selectmodel(string x){
        model = x;
        };
        string getmodel(){
        return model;
        };
    private:
        string model;
};
int main(){
    hispeedclass car("Mercedes");
    cout << car.getmodel() << endl;

    hispeedclass car1("Kia");
    cout << car1.getmodel() << endl;
    return 0;
}

/* CONSTRUCTORS

- A constructor is a function that gets
called automatically as soon as you
create an object.

- Constructors never have a return type.

- Constructors have the same name as the
class name.

- Constructors are used to give variables
an initial value.

- A Constructor consists of Name(exactly
  same as the name of your class) and
  parameters i.e. variables of your class.

 - Whenever you create an object from a class,
 each object has its own variables.

 - Changing value of variable in one object
 does not affect value of variable in the
 other object.

 */
