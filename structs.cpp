#include <iostream>

using namespace std;

struct data{

    unsigned short int dia;
    unsigned short int mes;
    unsigned short int ano;

};

struct pessoa{

    string nome;
    unsigned int altura;
    float peso;
    struct data datanasc;   //uma estrutura dentro de outra estrutura
    double notas[3];

};

struct pessoa aluno;        //podemos dizer que aluno é do tipo pessoa
struct pessoa professor;    // podemos dizer que professor é do tipo pessoa


int main(){

    aluno[0].nome = "João";     //nome é um campo que faz parte da estrutura pessoa
    aluno[0].datanasc.dia = 9;
    aluno[0].datanasc.mes = 9;
    aluno[0].datanasc.ano = 2021;
    aluno[0].notas[0] = 8;
    aluno[0].notas[1] = 7;
    aluno[0].notas[2] = 10;

    aluno[1].nome = "Xico";
    aluno[1].datanasc.dia = 9;
    aluno[1].datanasc.mes = 9;
    aluno[1].datanasc.ano = 2021;
    aluno[1].notas[0] = 8;
    aluno[1].notas[1] = 7;
    aluno[1].notas[2] = 10;

    aluno[2].nome = "Roger";
    aluno[2].datanasc.dia = 9;
    aluno[2].datanasc.mes = 9;
    aluno[2].datanasc.ano = 2021;
    aluno[2].notas[0] = 8;
    aluno[2].notas[1] = 7;
    aluno[2].notas[2] = 10;

return 0;
}
