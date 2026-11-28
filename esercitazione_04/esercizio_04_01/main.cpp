#include <iostream>
#include "stampa.h"
using namespace std;

int main() {
  stampa_pattern(2, 30, '*');  
  cout << endl;
  cout << "Impostazione di un evento" << endl;
  cout << endl;
  stampa_pattern(2, 30, '*');

  cout << endl;
  int g, m, a, o, min, s;
  cout << "Inserire la data" << endl;
  cout << "Giorno: ";
  cin >> g;
  cout << "Mese: ";
  cin >> m; 
  cout << "Anno: ";
  cin >> a;
  cout << endl;
  cout << "Inserire la data" << endl;
  cout << "Ora: ";
  cin >> o;
  cout << "Minuto: ";
  cin >> min; 
  cout << "Secondo: ";
  cin >> s;
  cout << endl;

  stampa_pattern(2, 30, '*');  
  cout << endl;
  cout << "Evento inserito" << endl;
  cout << endl;
  cout << "Data: ";
  stampa_data(g, m, a);
  cout << endl;
  cout << "Ora: ";
  stampa_ora(o, min, s);
  cout << endl << endl;
  stampa_pattern(2, 30, '*');

  return 0;
}

