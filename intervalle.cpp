// intervale.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "inter.h"
using namespace std;
using namespace math;
int main()
{
    double var = 6.9;
    intervalle a(5.2, 8.5, true, false);
    intervalle b(3, 9);
    a.afficher();
    b.afficher();
    cout << " le min de a " << a.min() << " le max " << a.max() << endl;
    cout << " le min de b " << b.min() << " le max " << b.max() << endl;
    a.operator[](var);
    intervalle c = a + b;
    c.afficher();
    intervalle d = a * b;
    d.afficher();
    //std::cout << "Hello World!\n";
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
