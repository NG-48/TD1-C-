#ifndef Client_H
#define Client_H
#include <string>

class Client{
public:
    Client(std::string firstname, std::string lastname, std::string phone_number, std::string email, std::string location); //definition d'un client 
    std::string firstname() const; //getter 1
    std::string lastname() const;
    std::string phone_number() const; //const pour être sûr que les caractéristiques ne changeront pas
    std::string email() const;
    std::string location() const; //getter 5

    void updatefirstname(std::string new_firstname);  //setter 1
    void updatelastname(std::string new_lastname);
    void updatephone_number(std::string new_phone_number);
    void updateemail(std::string new_email);
    void updatelocation(std::string new_location);  //setter 5

private:
    std::string firstname_;
    std::string lastname_;
    std::string phone_number_;
    std::string email_;
    std::string location_;

};
#endif 

