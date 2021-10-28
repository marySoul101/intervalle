#include "inter.h"

using namespace math;
using namespace std;


math::intervalle::intervalle(double val1, double val2, bool l_ac, bool r_ac)
{
	this->b_min = val1;
	this->b_max = val2;
	this->acol_gauche = l_ac;
	this->acol_droit = r_ac;
}

math::intervalle::intervalle(double val1, double val2)
{
	this->b_min = val1;
	this->b_max = val2;
	this->acol_droit = false;
	this->acol_gauche = false;
}

bool math::intervalle::appartient(double val) const
{

	//si l'acolade gauche est ouvrante
	if (this->acol_gauche)
	{
		if (val >this->b_min)
		{
			//si l'acolade droit est ouvrante
			if (this->acol_droit)
			{
				if (val < this->b_max)return true;
			}
			//si l'acolade droit est fermante
			else
			{
				if (val <= this->b_max)return true;
			}
		}
	}
	else
	{
		if (val >= this->b_min)
		{
			//si l'acolade droit est ouvrante
			if (this->acol_droit)
			{
				if (val < this->b_max)return true;
			}
			//si l'acolade droit est fermante
			else
			{
				if (val <= this->b_max)return true;
			}
		}

	}
	return false;
}

double math::intervalle::min() const
{
	if(this->acol_gauche)return (this->b_min + 0.1);
	return this->b_min;
}

double math::intervalle::max() const
{
	if (this->acol_droit) return (this->b_max - 0.1);
	return this->b_max;
}

double MIN(double a,double b) 
{
	if (a<=b)return a;
	return b;
}

double MAX(double a,double b) 
{
	if (a>=b) return a;
	return b;
}

intervalle& math::intervalle::operator+(const intervalle& a)
{

	intervalle i = intervalle(MIN(this->b_min,a.b_min), MAX(this->b_max, a.b_max));
	return i;
}

intervalle& math::intervalle::operator*(const intervalle& a)
{
	intervalle i =intervalle(MAX(this->b_min,a.b_min), MIN(this->b_max,a.b_max));
	return i;
}

void math::intervalle::operator[](double a) const
{
	if (this->appartient(a))
	{
		cout << a << " appartient a l'intervalle ";
		this->afficher();
		cout << endl;
	}
	else
	{
		cout << a << " n'appartient pas a l'intervalle ";
		this->afficher();
		cout << endl;
	}
}

void math::intervalle::afficher() const
{
	cout << "[" << this->b_min << ";" << this->b_max << "]" << endl;
}
