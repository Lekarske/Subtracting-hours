//Ejercio de resta de horas formato 24h SIN CONDICIONALES NI BUCLE
#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,w,x,y,z,m;
	char n;
	bool o;
	cout<<"¿Usted trabaja de un dia hasta el dia siguiente? (s/n): ";
	cin>>n;
	o=n=='s';
	cout<<"Ingrese la hora exacta de inicio en (hh/mm/ss) todo junto y sin el / (slash)\n"; 
// otra opcion era que ingrese los datos uno por uno, hh primero despues mm y por ultimo ss
	cin >> d;
	a=d/10000;
	b=(d%10000)/100;
	c=d%100;
	cout<<"Ahora ingrese la hora de salida en (hh/mm/ss) todo junto y sin el / (slash)\n";
	cin >> z;	
	w=z/10000+o*24;
	x=(z%10000)/100;
	y=z%100;
	m=w*3600+x*60+y-a*3600-b*60-c;
	cout << "El tiempo total de trabajo fue:\n";
	cout << m/3600 << "hh " << (m%3600)/60 << "mm " << (m%3600)%60<<"ss";
	return 0;
}