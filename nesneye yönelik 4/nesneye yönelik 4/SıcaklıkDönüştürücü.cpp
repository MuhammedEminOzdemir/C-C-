#include "S�cakl�kD�n��t�r�c�.h"
#include<stdio.h>
using namespace std;

S�cakl�kD�n��t�r�c�::S�cakl�kD�n��t�r�c�(double a, double b, double c)
{
	derece = a;
	fahrenhayt = b;
	santigrat = c;
}
double S�cakl�kD�n��t�r�c�::FahrenhaytHesapla()
{
	fahrenhayt = derece * 1.8 + 32;
	return fahrenhayt;
}
double S�cakl�kD�n��t�r�c�::SantigratHesapla()
{
	santigrat = (fahrenhayt-32)*5/9;
	return santigrat;
}