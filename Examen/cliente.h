#ifndef CLIENTE_H
#define CLIENTE_H
#include<string>

using std::string;

class Cliente
{
    string name;
public:
    Cliente(string);
    Cliente(const Cliente&);
    ~Cliente();
    string GetName()const;
    void SetName(string);
};

#endif // CLIENTE_H
