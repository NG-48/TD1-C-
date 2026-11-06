#include "Compte_Bancaire.h"

#include <string>

Compte_Bancaire::Compte_Bancaire(int solde, std::string numero_de_compte){
    solde_ = solde;
    numero_de_compte_ = numero_de_compte;    
};

bool Retrait(int somme){

    if(somme>0 && (solde_ - somme) >= 0){
        solde_ = solde_ - somme;
        return true;
    }
    return false;
}; 

bool Credit(int somme){
    if(somme>0){
        solde_ = solde_ + somme;
        return true;
    }
    return false;
};

void Transfert(Compte_Bancaire compte, int somme){
    Retrait(somme);
    compte::Credit(somme);
};

std::string Affichage() const{
    std::string txt = "Il y a actuellement " + std::to_string(solde_)  + "€ sur le compte " + numero_de_compte_ ;
    return txt;
};

int getSolde() const{
    return solde_;
};

std::string Numero_De_Compte() const{
    return numero_de_compte_;
};