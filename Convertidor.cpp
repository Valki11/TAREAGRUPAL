#include <iostream>
using namespace std;
int main()
{
  int num;
  string Resultado = "";
  cout << "Ingrese un numero porfavor no mayor a 4 cifras: ";
  cin >> num;
  if (num == 0)
	{
	  cout<<"cero";
	  return 0;
	}
  string unidades[] ={ "", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho","nueve" };
  string decenas[] ={ "", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta","setenta", "ochenta", "noventa" };
  string centenas[] ={ "", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos","seiscientos", "setecientos", "ochocientos", "novecientos" };
  string unidadDeMillar[] ={ "", "mil", "dos mil", "tres mil", "cuatro mil", "cinco mil", "seis mil","siete mil", "ocho mil", "nueve mil" };

  int unidad = num % 10;
  int decena = (num / 10) % 10;
  int centena = (num / 100) % 10;
  int unidadMillar = (num / 1000);

  if (unidadMillar > 0)
	{
	  Resultado += unidadDeMillar[unidadMillar] + " ";
	}
  if (centena > 0)
	{
	  Resultado += centenas[centena] + " ";
	}
  if (decena == 1)
	{
	  switch (unidad)
		{
		case 0:
		  Resultado += "diez";
		  break;
		case 1:
		  Resultado += "once";
		  break;
		case 2:
		  Resultado += "doce";
		  break;
		case 3:
		  Resultado += "trece";
		  break;
		case 4:
		  Resultado += "catorce";
		  break;
		case 5:
		  Resultado += "quince";
		  break;
		case 6:
		  Resultado += "dieciseis";
		  break;
		case 7:
		  Resultado += "diecisiete";
		  break;
		case 8:
		  Resultado += "dieciocho";
		  break;
		case 9:
		  Resultado += "diecinueve";
		  break;
		}
	}
  else if (decena > 0)
	{
	  Resultado += decenas[decena] + " ";

	  if (unidad > 0)
		{
		  Resultado += " y " + unidades[unidad];
		}
	}
  else if (unidad > 0)
	{
	  Resultado += unidades[unidad];
	}
  cout<< "El numero en letras es: " + Resultado;
  return 0;
}
