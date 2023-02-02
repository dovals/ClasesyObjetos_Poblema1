/*
Defina la clase Empleado, seg ́un las especificaciones que se dan m ́as abajo. Posteriormente,
en un programa de aplicaci ́on, declare los objetos JefePlanta y JefePersonal usando la clase
previamente definida. El programa debe permitir al usuario, por medio de men ́us:
1. Cambiar el domicilio de uno de los dos empleados declarados. Los datos ingresados por
el usuario ser ́an la clave del empleado y su nuevo domicilio.
2. Actualizar el sueldo de un empleado. Los datos ingresados por el usuario ser ́an la clave
del empleado y el porcentaje de incremento a aplicar al sueldo.
3. Imprimir los datos de un empleado. El usuario proporcionar ́a la clave del empleado elegido.
4. Cambiar el nombre de la persona a quien reporta uno de los empleados.
*/

#include <iostream>
#include <string.h>
#define MAX 50
using namespace std;


class Empleado
{
    private:
        int ClaveEmpleado1 = 1;
        char Nombre1[MAX] = "Donovan";
        char Domicilio1[MAX] = "cucei";
        float Sueldo1 = 25000;
        char ReportA1[MAX] = "Planta";

        int ClaveEmpleado2 = 2;
        char Nombre2[MAX] = "Fernando";
        char Domicilio2[MAX] = "cucea";
        float Sueldo2 = 22000;
        char ReportA2[MAX] = "Personal";

        char Domicilio[MAX] = " ";
        char Reportara[MAX] = " ";

    public:

        void Menu()
        {
            int opc;
            cout<<"\n1.-Cambiar Domicilio \n2.-Actualizar el Sueldo\n3.-Imprimir Datos\n4.-Cambiar a quien reporta"<<endl;
            cin>>opc;
            system("cls");
            switch(opc)
            {
                case 1:
                    system("cls");
                    cout<<"Ingrese el nuevo domicilio  "<<endl;
                    cin>>Domicilio;
                    CambiaDomic(Domicilio);
                break;

                case 2:
                    system("cls");
                    float po;
                    cout<<"Ingrese el porcentaje de sueldo"<<endl;
                    cin>>po;
                    ActualSueldo(po);
                break;

                case 3:
                    system("cls");
                    Imprime();
                break;

                case 4:
                    system("cls");
                    cout<<"Ingrese a quien reportara"<<endl;
                    cin>>Reportara;
                    CambiaReportA(Reportara);
                break;
            }


        }

         void CambiaDomic (char Domicilio[])
        {
            system("cls");
            int Clave;
            std::cout<<Domicilio<<endl;
            cout<<"Ingrese el numero de Empleado"<<endl;
            cin>>Clave;
            switch(Clave)
            {
                case 1:
                    strcpy(Domicilio1, Domicilio);
                break;

                case 2:
                    strcpy(Domicilio2, Domicilio);
                break;

                default:
                    system("cls");
                    cout<<"Numero incorrecto o inexistente"<<endl;
                break;
            }

        }//Termina CambiaDomic

        void ActualSueldo(float po)
        {
            system("cls");
            int aux,Clave;
            po = po / 100;
            std::cout<<"Ingrese el numero del empleado"<<endl;
            cin>>Clave;
            if(Clave == 1)
            {
                aux = Sueldo1 * po;
                Sueldo1 = Sueldo1 + aux;
            }

            if(Clave == 2)
            {
                aux = Sueldo2 * po;
                Sueldo2 = Sueldo2 + aux;
            }
        }//termina ActualSueldo

        void Imprime()
        {
            system("cls");
            int opc;
            cout<<"Ingrese el numero de Empleado"<<endl;
            cin>>opc;
            switch(opc)
            {
                case 1:
                    system("cls");
                    cout<<"Clave de Empleado:"<<ClaveEmpleado1<<endl;
                    cout<<"Nombre:"<<Nombre1<<endl;
                    cout<<"Domicilio:"<<Domicilio1<<endl;
                    cout<<"Sueldo:"<<Sueldo1<<endl;
                    cout<<"Reporta a:"<<ReportA1<<endl;
                break;

                case 2:
                    system("cls");
                    cout<<"Clave de Empleado:"<<ClaveEmpleado2<<endl;
                    cout<<"Nombre:"<<Nombre2<<endl;
                    cout<<"Domicilio:"<<Domicilio2<<endl;
                    cout<<"Sueldo:"<<Sueldo2<<endl;
                    cout<<"Reporta a:"<<ReportA2<<endl;
                break;
            }

        }

        void CambiaReportA(char Reportara[])
        {
            int Clave;
            std::cout<<Reportara<<endl;
            cout<<"Ingrese el numero de Empleado"<<endl;
            cin>>Clave;
            switch(Clave)
            {
                case 1:
                    system("cls");
                    strcpy(ReportA1, Reportara);
                break;

                case 2:
                    system("cls");
                   strcpy(ReportA2, Reportara);
                break;

                default:
                    system("cls");
                    cout<<"Numero incorrecto o inexistente"<<endl;
                break;
            }
        }
};




int main()
{
    Empleado JefePlanta;
    Empleado JefePersonal;

    do
    {
        JefePersonal.Menu();
    }while(true);
    return 0;
}
