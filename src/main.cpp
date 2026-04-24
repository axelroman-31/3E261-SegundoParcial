#include <iostream>
#include <Foco.hpp>
#include <SerieFocos.hpp>

using namespace std;

int main(int argc, char const *argv[]) 
{
    Foco foquito;
    foquito.Encender();
    foquito.Apagar();
    SerieFocos serie;
    serie.EncenderFocos();
    serie.MostrarFocos();
    serie.ApagarFocos();
    serie.MostrarFocos();

    cout << "Estado Foco:  " << foquito.LeerEstado() << endl;
    return 0;
}