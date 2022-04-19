/* Una empresa factura dos artículos, cuyos precios son $23 y $11. Determine mediante un
algoritmo, el precio total a facturar, a partir de las unidades vendidas de cada artículo */

#include "iostream"
using namespace std;

main() {
    int cant1, cant2, total;
    int const producto1 = 23;
    int const producto2 = 11;
    cout << "Ingrese cantidad del producto uno "; 
    cin >> cant1;
    cout << "Ingrese cantidad del producto dos ";
    cin >> cant2;

    total = producto1 * cant1 + producto2 * cant2;
    cout << "Total: " << total;
    
    system("pause");
}
