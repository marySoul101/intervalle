#pragma once
#include<iostream>

namespace math {
	class intervalle
	{
	private:
		//la borne min
		double b_min;
		//la borne max
		double b_max;
		//false si l'acolade est fermante true sinon
		bool acol_gauche;
		bool acol_droit;
	public:
		intervalle(double val1,double val2,bool l_ac,bool r_ac);
		intervalle(double val1, double val2);
		bool appartient(double val) const ;
		double min() const ;
		double max() const ;
		intervalle& operator+(const intervalle& a);
		intervalle& operator*(const intervalle& a);
		void operator[](double a) const;
		void afficher() const;

	};
};
double MIN(double a, double b) ;
double MAX(double a, double b) ;