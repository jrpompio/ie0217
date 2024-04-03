/*  -Herencia multinivel
    -Herencia múltiple
    -Herencia jerárquica
    -Polimorfismo 
    -Herencia virtual
*/

#include <iostream>

using namespace std;

// Se heradará esta condición de ser una integral
class Integral {
    public:

        Integral(){
            cout << "-Soy una integral" << endl;
        }

        // Mediante polimorfismo la función showtype
        // dirá que tipo de integral es, ya que se especificará
        // para cada función 

        void showtype(){
            cout << "---> abarco todos los tipos\n" << endl; 
        }
};

// Las integrales heredarán ser una integral y además su constructor indica 
// especificaciones de dicho tipo de integral

// acá se hace herencia jerarquica, ya que tanto las propias como 
// las impropias heredan a Integral
class IntegralPropia : public Integral {
    public:      
        IntegralPropia (){
            cout << "-No poseo asintotas verticales, "
            << "tampoco limites de integración" 
            << " que tienden al infinito" << endl;
        }

        void showtype(){
            cout << "---> Soy una integral propia\n" << endl;
        }

        
};

// Acá hereda virtualmente a Integral para no activar el constructor de este  
// 2 veces y que no diga "soy una integral" 2 veces.

class IntegralImpropia1 : virtual public Integral { 
    public:      
        IntegralImpropia1 (){
            cout << "-Poseo limites de integración "
            << "que tienden al infinito" << endl;
        }

        void showtype(){
            cout << "---> Soy una integral impropia de primera especie\n"
            << endl;
        }

};

class IntegralImpropia2 : virtual public Integral {
    public:      
        IntegralImpropia2 (){
            cout << "-Poseo una asintota vertical" 
            << " dentro de mis limites de integración" << endl;
            }

        void showtype(){
            cout << "---> Soy una integral de segunda especie\n" << endl;
        }
                
};

// Acá se hace herencia multiple herencia multinivel 
// Por lo qué no es necesario especificar para esta clase
// ya que sus especificaciones las hereda de los anteriores niveles y no tiene
// nuevas especificaciones

class IntegralImpropia3 : public IntegralImpropia1, public IntegralImpropia2 {
    public:      
        IntegralImpropia3 (){
            
        }

        void showtype(){
            cout << "---> Soy una integral de tercera especie\n" << endl;
        }
        
        
};





int main() {
    Integral a;
    a.showtype();        // Usando polomorfismo, cada objeto dará un mensaje
                        // diferente
    IntegralPropia b;
    b.showtype();

    IntegralImpropia1 c;
    c.showtype();

    IntegralImpropia2 d;
    d.showtype();

    IntegralImpropia3 e;
    e.showtype();
return 0;
}
