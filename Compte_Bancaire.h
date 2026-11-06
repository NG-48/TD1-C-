#ifndef COMPTE_BANCAIRE_H
#define COMPTE_BANCAIRE_H

#include <string>

class Compte_Bancaire {
    public:
        Compte_Bancaire(int solde, std::string numero_de_compte);
        bool Retrait(int somme);
        bool Credit(int somme);
        void Transfert(Compte_Bancaire compte, int somme);
        std::string Affichage() const;
        int getSolde() const;
        std::string Numero_De_Compte() const;
    private:
        int solde_;
        std::string numero_de_compte_;
};

#endif
