#include <iostream>
#include <string>

using namespace std;

class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // Constructeur par défaut
    Voiture() : marque("Inconnue"), modele("Inconnu"), annee(0), kilometrage(0.0), vitesse(0.0) {}

    // Constructeur avec paramètres
    Voiture(const string& ma, const string& mo, int an, float km, float vi)
        : marque(ma), modele(mo), annee(an), kilometrage(km), vitesse(vi) {}

    // Méthode pour accélérer
    void accelerer(float valeur) {
        vitesse += valeur;
        cout << "La vitesse a été augmentée à " << vitesse << " km/h.\n";
    }

    // Méthode pour freiner
    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) {
            vitesse = 0;
        }
        cout << "La vitesse a été réduite à " << vitesse << " km/h.\n";
    }

    // Méthode pour afficher les informations de la voiture
    void afficherInfo() const {
        cout << "Marque: " << marque << "\n"
             << "Modèle: " << modele << "\n"
             << "Année: " << annee << "\n"
             << "Kilométrage: " << kilometrage << " km\n"
             << "Vitesse: " << vitesse << " km/h\n";
    }

    // Méthode pour avancer
    void avancer(float distance) {
        kilometrage += distance;
        cout << "La voiture a avancé de " << distance << " km. Nouveau kilométrage: " << kilometrage << " km.\n";
    }

    // Destructeur
    ~Voiture() {
        cout << "La voiture " << marque << " " << modele << " est détruite.\n";
    }
};

int main() {
    // Exemple d'utilisation
    Voiture v1("Toyota", "Corolla", 2020, 15000, 120);
    v1.afficherInfo();
    v1.accelerer(30);
    v1.freiner(50);
    v1.avancer(100);
    v1.afficherInfo();

    return 0;
}