#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int menuprincipal(int x);
int main()
{
    int ticket = 0, reinicio = 0;

    do {
        int i = 0, i2 = 0, menu = 0, principal = 0, cantidad1 = 0, cantidad2 = 0, cantidad3 = 0, volver = 0, calientes = 0, frias = 0, postres = 0, cc1 = 0, cc2 = 0, cc3 = 0, cc4 = 0, cc5 = 0, cf1 = 0, cf2 = 0, cf3 = 0, cf4 = 0, cf5 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, regresar = 0;
        double cappuccino = 1.26, latte = 2.26, espresso = 0.77, americano = 0.59, macchiato = 3.28, affogato = 2.25, iceLatte = 2.75, frappe = 3.25, icecappuccino = 2.55, cafetonic = 3.15, pandulce = 0.25, magdalena = 0.65, dona = 0.85, relampago = 0.75, tresleches = 1.55, cct1 = 0, cct2 = 0, cct3 = 0, cct4 = 0, cct5 = 0, cft1 = 0, cft2 = 0, cft3 = 0, cft4 = 0, cft5 = 0, pt1 = 0, pt2 = 0, pt3 = 0, pt4 = 0, pt5 = 0, iva = 0, subtotal = 0, total = 0;
        char nombre[50], apellido[50];
        system("color F0");

    start:

        menuprincipal(principal);

    menuagain:

        cout << "\t\t\t Ingrese la opcion del menu al cual desea ingresar: ";
        cin >> menu;

        switch (menu) {
        case(-1):
            goto end;
            break;
        case(1):
            system("cls");
            system("color F0");
            cout << "\n\n";
            cout << "                         ***************************************" << "\n";
            cout << "                         *     CAFETERIA BLACK COFFE           *" << "\n";
            cout << "                         ***************************************\n\n";
            cout << "\t\t\t Bebidas calientes: \n" << "\n";
            cout << "\t\t\t 1. Cappuccino - $1.26\n" << "\n";
            cout << "\t\t\t 2. Latte - $2.26\n" << "\n";
            cout << "\t\t\t 3. Espresso - $0.77\n" << "\n";
            cout << "\t\t\t 4. Caffe Americano - $0.59\n" << "\n";
            cout << "\t\t\t 5. Caffe macchiato - $3.28\n" << "\n";
            cout << "\t\t\t-1. Volver al menu principal\n" << "\n";

            cout << "\t\t\t Cuantas bebidas se ordenaron: ";
            cin >> cantidad1;

            if (cantidad1 > 0) {
                while (i < cantidad1) {
                again1:
                    cout << "\t\t\t Ingrese el numero de la opcion de la bebida ordenada: ";
                    cin >> calientes;

                    switch (calientes) {
                    case(-1):
                        system("cls");
                        goto start;
                        break;
                    case(1):
                        cc1++;
                        cct1 = cct1 + cappuccino;
                        break;
                    case(2):
                        cc2++;
                        cct2 = cct2 + latte;
                        break;
                    case(3):
                        cc3++;
                        cct3 = cct3 + espresso;
                        break;
                    case(4):
                        cc4++;
                        cct4 = cct4 + americano;
                        break;
                    case(5):
                        cc5++;
                        cct5 = cct5 + macchiato;
                        break;
                    default:
                        cout << "\t\t\t Ingrese una opcion valida.\n\n";
                        goto again1;
                        break;
                    }

                    i++;
                }

                cout << "\n\t\t\t Si desea regresar al menu principal ingrese -1, sino ingrese 1 para continuar: ";
                cin >> volver;

                if (volver < 0) {
                    system("cls");
                    goto start;
                }
            }
            else if (cantidad1 < 0) {
                system("cls");
                goto start;
            }
            break;
        case(2):
            system("cls");
            cout << "\n\n";
            cout << "                         ***************************************" << "\n";
            cout << "                         *     CAFETERIA BLACK COFFE           *" << "\n";
            cout << "                         ***************************************\n\n";
            cout << "\t\t\t Bebidas frias: \n" << "\n";
            cout << "\t\t\t 1. Affogato - $2.25 \n" << "\n";
            cout << "\t\t\t 2. Ice Latte - $2.75\n" << "\n";
            cout << "\t\t\t 3. Frappe - $3.25\n" << "\n";
            cout << "\t\t\t 4. Ice Cappuccino - $2.55\n" << "\n";
            cout << "\t\t\t 5. Cafe Tonic - $3.15\n" << "\n";
            cout << "\t\t\t-1. Volver al menu principal\n" << "\n";

            cout << "\t\t\t Cuantas bebidas se ordenaron: ";
            cin >> cantidad2;

            if (cantidad2 > 0) {
                while (i2 < cantidad2) {
                again2:
                    cout << "\t\t\t Ingrese el numero de la opcion de la bebida ordenada: ";
                    cin >> frias;

                    switch (frias) {
                    case(-1):
                        system("cls");
                        goto start;
                        break;
                    case(1):
                        cf1++;
                        cft1 = cft1 + affogato;
                        break;
                    case(2):
                        cf2++;
                        cft2 = cft2 + iceLatte;
                        break;
                    case(3):
                        cf3++;
                        cft3 = cft3 + frappe;
                        break;
                    case(4):
                        cf4++;
                        cft4 = cft4 + icecappuccino;
                        break;
                    case(5):
                        cf5++;
                        cft5 = cft5 + cafetonic;
                        break;
                    default:
                        cout << "\t\t\t Ingrese una opcion valida.\n\n";
                        goto again2;
                        break;
                    }

                    i2++;
                }

                cout << "\n\t\t\t Si desea regresar al menu principal ingrese -1, sino ingrese 1 para continuar: ";
                cin >> volver;

                if (volver < 0) {
                    system("cls");
                    goto start;
                }
            }
            else if (cantidad2 < 0) {
                system("cls");
                goto start;
            }
            break;
        case(3):
            system("cls");
            cout << "\n\n\n";
            cout << "                         ***************************************" << "\n";
            cout << "                         *     CAFETERIA BLACK COFFE           *" << "\n";
            cout << "                         ***************************************\n\n";
            cout << "\t\t\t Postres: \n" << "\n";
            cout << "\t\t\t 1. Pan dulce - $0.25\n" << "\n";
            cout << "\t\t\t 2. Magdalena - $0.65\n" << "\n";
            cout << "\t\t\t 3. Dona - $0.85\n" << "\n";
            cout << "\t\t\t 4. Relampago - $0.75\n" << "\n";
            cout << "\t\t\t 5. Tres leches - $1.55\n" << "\n";
            cout << "\t\t\t-1. Regresar al menu principal\n" << "\n";

            cout << "\t\t\t Cuantos postres se ordenaron: ";
            cin >> cantidad3;

            if (cantidad3 > 0) {
                for (int i3 = 0; i3 < cantidad3; i3++)
                {
                again3:
                    cout << "\t\t\t Ingrese el numero de la opcion del postre ordenado: ";
                    cin >> postres;

                    switch (postres) {
                    case(-1):
                        system("cls");
                        goto start;
                        break;
                    case(1):
                        p1++;
                        pt1 = pt1 + pandulce;
                        break;
                    case(2):
                        p2++;
                        pt2 = pt2 + magdalena;
                        break;
                    case(3):
                        p3++;
                        pt3 = pt3 + dona;
                        break;
                    case(4):
                        p4++;
                        pt4 = pt4 + relampago;
                        break;
                    case(5):
                        p5++;
                        pt5 = pt5 + tresleches;
                        break;
                    default:
                        cout << "\t\t\t Ingrese una opcion valida.\n\n";
                        goto again3;
                        break;
                    }
                }

                cout << "\n\t\t\t Si desea regresar al menu principal ingrese -1, sino ingrese 1 para continuar: ";
                cin >> volver;

                if (volver < 0) {
                    system("cls");
                    goto start;
                }
            }
            else if (cantidad3 < 0) {
                system("cls");
                goto start;
            }
            break;
        default:
            cout << "\t\t\t Ingrese una opcion valida.\n\n";
            goto menuagain;
            break;
        }

        cout << "\n\t\t\t Ingrese nombre y apellido del cliente: ";
        cin >> nombre >> apellido;

        subtotal = cct1 + cct2 + cct3 + cct4 + cct5 + cft1 + cft2 + cft3 + cft4 + cft5 + pt1 + pt2 + pt3 + pt4 + pt5;
        iva = subtotal * 0.13;
        total = subtotal + iva;

        ticket = ticket + 1;

        system("cls");
        cout << "\n\n";
        cout << "\t\t\t-------------------------------------------------------------------------" << "\n";
        cout << "\t\t\t\t\t\t     Factura    |   BLACK COFFE   " << "\n";
        cout << "\t\t\t-------------------------------------------------------------------------" << "\n";
        cout << "\t\t\t Sucursal: Santa Ana                    | Fecha de emision: 21/06/2022  " << "\n";
        cout << "\t\t\t Ticket: " << ticket << "                              | Lugar de emision: Itca CC 3   " << "\n";
        cout << "\t\t\t Tipo de documento: ingreso             | Moneda: USD                   " << "\n";
        cout << "\t\t\t Nombre del cliente: " << nombre << " " << apellido << "\n";
        cout << "\t\t\t-------------------------------------------------------------------------" << "\n";
        cout << "\t\t\t             Producto                   |              Costo               " << "\n";
        cout << "\t\t\t-------------------------------------------------------------------------" << "\n";
        cout << "\t\t\t Cantidad | Nombre del producto         | Precio unitario |    Monto " << "\n";
        cout << "\t\t\t-------------------------------------------------------------------------" << "\n";

        if (cc1 > 0) {
            cout << "\t\t\t     " << cc1 << "    | Cappuccino                  |       $" << cappuccino << "     |    $" << fixed << setprecision(2) << cct1 << "\n";
        }

        if (cc2 > 0) {
            cout << "\t\t\t     " << cc2 << "    | Latte                       |       $" << latte << "     |    $" << fixed << setprecision(2) << cct2 << "\n";
        }

        if (cc3 > 0) {
            cout << "\t\t\t     " << cc3 << "    | Espresso                    |       $" << espresso << "     |    $" << fixed << setprecision(2) << cct3 << "\n";
        }

        if (cc4 > 0) {
            cout << "\t\t\t     " << cc4 << "    | Caffe Americano             |       $" << americano << "     |    $" << fixed << setprecision(2) << cct4 << "\n";
        }

        if (cc5 > 0) {
            cout << "\t\t\t     " << cc5 << "    | Caffe macchiato             |       $" << macchiato << "     |    $" << fixed << setprecision(2) << cct5 << "\n";
        }

        if (cf1 > 0) {
            cout << "\t\t\t     " << cf1 << "    | Affogato                    |       $" << affogato << "     |    $" << fixed << setprecision(2) << cft1 << "\n";
        }

        if (cf2 > 0) {
            cout << "\t\t\t     " << cf2 << "    | Ice Latte                   |       $" << iceLatte << "     |    $" << fixed << setprecision(2) << cft2 << "\n";
        }

        if (cf3 > 0) {
            cout << "\t\t\t     " << cf3 << "    | Frappe                      |       $" << frappe << "     |    $" << fixed << setprecision(2) << cft3 << "\n";
        }

        if (cf4 > 0) {
            cout << "\t\t\t     " << cf4 << "    | Ice Cappuccino              |       $" << icecappuccino << "     |    $" << fixed << setprecision(2) << cft4 << "\n";
        }

        if (cf5 > 0) {
            cout << "\t\t\t     " << cf5 << "    | Cafe Tonic                  |       $" << cafetonic << "     |    $" << fixed << setprecision(2) << cft5 << "\n";
        }

        if (p1 > 0) {
            cout << "\t\t\t     " << p1 << "    | Pan dulce                   |       $" << pandulce << "     |    $" << fixed << setprecision(2) << pt1 << "\n";
        }

        if (p2 > 0) {
            cout << "\t\t\t     " << p2 << "    | Magdalena                   |       $" << magdalena << "     |    $" << fixed << setprecision(2) << pt2 << "\n";
        }

        if (p3 > 0) {
            cout << "\t\t\t     " << p3 << "    | Dona                        |       $" << dona << "     |    $" << fixed << setprecision(2) << pt3 << "\n";
        }

        if (p4 > 0) {
            cout << "\t\t\t     " << p4 << "    | Relampago                   |       $" << relampago << "     |    $" << fixed << setprecision(2) << pt4 << "\n";
        }

        if (p5 > 0) {
            cout << "\t\t\t     " << p5 << "    | Tres leches                 |       $" << tresleches << "     |    $" << fixed << setprecision(2) << pt5 << "\n";
        }

        cout << "\t\t\t----------------------------------------|--------------------------------" << "\n"; //fixed << setprecision(2) << 
        cout << "\t\t\t                                        |      Subtotal   |    $" << fixed << setprecision(2) << subtotal << "      " << "\n";
        cout << "\t\t\t                                        |        Iva      |    $" << fixed << setprecision(2) << iva << "      " << "\n";
        cout << "\t\t\t                                        |       Total     |    $" << fixed << setprecision(2) << total << "      " << "\n";
        cout << "\t\t\t-------------------------------------------------------------------------" << "\n\n";

        cout << "\t\t\t Si desea cerrar el sistema ingrese -1, si desea volver a facturar ingrese 1: ";
        cin >> reinicio;
        system("cls");
    } while (reinicio >= 0);


end:

    return 0;
    system("pause");
}

int menuprincipal(int x) {
    int menuinicio = x;
    cout << "\n\n";
    cout << "                         ***************************************" << "\n";
    cout << "                         *     CAFETERIA BLACK COFFE           *" << "\n";
    cout << "                         ***************************************\n\n";
    cout << "\t\t\t MENUS: \n" << "\n";
    cout << "\t\t\t 1. Bebidas calientes\n" << "\n";
    cout << "\t\t\t 2. Bebidas Frias\n" << "\n";
    cout << "\t\t\t 3. Postres\n" << "\n";
    cout << "\t\t\t-1. Salir\n" << "\n";

    return menuinicio;
}