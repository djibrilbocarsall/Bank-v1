// Projet Bank.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include <cstdio>
#include <vector>
#include <fstream>
#include<string>


using namespace std;

// variable globale
unsigned short choix, choice_sous_menu;

struct stClient {
    int code_client;
    char Nom[100];
    char prenom[100];

};
struct stDate {
    int jour;
    int mois;
    int annee;
};
struct stCompte {
    int code_compte;
    int code_client;
    stDate DateCompte;
};

stCompte comptes[100];
stClient clients[100];

void gerer_client(int choice_client) {
    stClient client;
    fstream Myfiles;
    string fillName = "files.txt";

    if (choice_client == 1) // Ajouter clients
    {
        Myfiles.open(fillName, ios::out | ios::app);

        if (Myfiles.is_open()) {

            cout << "code client : " << endl;
            cin >> client.code_client;
            Myfiles << client.code_client << endl;

            cout << "Nom : " << endl;
            cin >> client.Nom;
            Myfiles << client.Nom << endl;

            cout << "Prenom : " << endl;
            cin >> client.prenom;
            Myfiles << client.prenom << endl;
        }
        Myfiles.close();

    }
    else if (choice_client == 4) // afficher les clients
    {

       

    };
    else if () { // Modifier les clients 

    }
    else if () { // Supprimer un client 

    }
}
void sous_menu(int choice) {

    if (choice == 1) // Gestion des clients 
    {
        cout << "1-Ajouter" << endl;
        cout << "2-Modifier" << endl;
        cout << "3-Supprimer" << endl;
        cout << "4-Afficher" << endl;
        cout << "5-Retour" << endl;
        cout << "Choisir un sous-menu" << endl;
        cin >> choice_sous_menu;
        // function client
        gerer_client(choice_sous_menu);

    }
    else if (choice == 2) // Gestion du compte
    {
        cout << "1-Ajouter" << endl;
        cout << "2-Rechercher" << endl;
        cout << "3-Afficher la liste " << endl;
        cout << "4-Supprimer" << endl;
        cout << "5-Retour" << endl;
        cout << "Choisir un sous-menu" << endl;
        cin >> choice_sous_menu;
        // function compte

    }
    else if (choice == 3) {
        cout << "1-Retrait" << endl;
        cout << "2-Afficher le compte Apres l ' operations " << endl;
        cout << "3-Retour" << endl;
        cout << "Choisir un sous-menu" << endl;
        cin >> choice_sous_menu;
        // function operation

    }
    else if (choice == 4) {
        return;
    }
    else {
        cout << "Mauvais Choix " << endl;
    }

}
void menu() {
    cout<<"1-Gestion des clients "<<endl;
    cout<<"2-Gestion des Comptes "<<endl;
    cout<<"3-Gestion des operations "<<endl;
    cout<<"4-Quitter le programme "<<endl;
    cin >> choix;
    sous_menu(choix);

}

int main()
{
    menu();
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
