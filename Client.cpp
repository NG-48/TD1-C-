#include "Client.h"
#include <string> 




Client::Client(std::string firstname, std::string lastname, std::string phone_number, std::string email, std::string location){

    firstname_ = firstname;  //donne au privé la valeur du paramètre 1 
    lastname_ = lastname;
    phone_number_ = phone_number;
    email_ = email;
    location_ = location; //donne au privé la valeur du paramètre 5 

}
std::string Client::firstname() const{
        return firstname_; // La fonction retourne l'attribut  1
}; //getter 1 
std::string Client::lastname() const{
        return lastname_;
};
std::string Client::phone_number() const{
        return phone_number_;
}; //const pour être sûr que les caractéristiques ne changeront pas
std::string Client::email() const{
        return email_;
};
std::string Client::location() const{
        return location_;  // La fonction retourne l'attribut  5
}; //getter 5

    void updatefirstname(std::string new_firstname);  //setter 1
    void updatelastname(std::string new_lastname);
    void updatephone_number(std::string new_phone_number);
    void updateemail(std::string new_email);
    void updatelocation(std::string new_location);  //setter 5

