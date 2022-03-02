#include "SıcaklıkDönüştürücü.h"
#include<stdio.h>
using namespace std;

SıcaklıkDönüştürücü::SıcaklıkDönüştürücü(double a, double b, double c)
{
	derece = a;
	fahrenhayt = b;
	santigrat = c;
}
double SıcaklıkDönüştürücü::FahrenhaytHesapla()
{
	fahrenhayt = derece * 1.8 + 32;
	return fahrenhayt;
}
double SıcaklıkDönüştürücü::SantigratHesapla()
{
	santigrat = (fahrenhayt-32)*5/9;
	return santigrat;
}