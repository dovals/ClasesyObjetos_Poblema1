#include <iostream>
#include <string.h>


class Empleado {
private:
  char *nombre;
  char *domicilio;
  float sueldo;
  int clave;
  char *jefe;

public:
  Empleado(char *nombre, char *domicilio, float sueldo, int clave, char *jefe)
    : nombre(nombre), domicilio(domicilio), sueldo(sueldo), clave(clave), jefe(jefe) {}

  void CambiaDomic(char *nd) {
      domicilio = nd;
  }

  void CambiaReportA(char *nuevoJefe) {
      std::cout<<"Este es el nuevo jefe: \t"<<nuevoJefe<<std::endl;
      jefe = nuevoJefe;
  }

  void ActualSueldo(float porcentajeIncremento) {
    sueldo += sueldo * porcentajeIncremento / 100;
  }

  void Imprime() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Domicilio: " << domicilio << std::endl;
    std::cout << "Sueldo: " << sueldo << std::endl;
    std::cout << "Clave: " << clave << std::endl;
    std::cout << "Jefe: " << jefe << std::endl;
}
};

int main() {
  Empleado JefePlanta("Luis", "Calle1", 10000, 1, "Planta");
  Empleado JefePersonal("Fernando", "Calle4", 8000, 2, "Personal");
  int opc,clave;
  do
  {
      std::cout<<"\n1.-Cambiar Domicilio \n2.-Actualizar el Sueldo\n3.-Imprimir Datos\n4.-Cambiar a quien reporta"<<std::endl;
      std::cin>>opc;
      std::cout<<"Ingrese la clave del empleado"<<std::endl;
      std::cin>>clave;
      switch(opc)
      {
          case 1:
            char nd[50];
            std::cout<<"Ingrese el nuevo Domicilio"<<std::endl;
            std::cin>>nd;
            if (clave == 1)
            {
                JefePlanta.CambiaDomic(nd);
            }

            if (clave == 2)
            {
                JefePersonal.CambiaDomic(nd);
            }

            break;

          case 2:
              float porcentajeIncremento;
              std::cout<<"Ingrese el porcentaje del sueldo"<<std::endl;
              std::cin>>porcentajeIncremento;
              if (clave == 1)
                JefePlanta.ActualSueldo(porcentajeIncremento);
              if(clave == 2)
                JefePersonal.ActualSueldo(porcentajeIncremento);
            break;

          case 3:
            if (clave == 1)
                JefePlanta.Imprime();
            if(clave == 2)
                JefePersonal.Imprime();
            break;

          case 4:
              char *nuevoJefe;
              std::cout<<"Ingrese el nuevo Jefe"<<std::endl;
              std::cin>>nuevoJefe;
              if (clave == 1)
                JefePersonal.CambiaReportA(nuevoJefe);
              if(clave == 2)
                JefePlanta.CambiaReportA(nuevoJefe);
         break;
      }//termina switch del menu
    }
  while(true);
  return 0;
}
