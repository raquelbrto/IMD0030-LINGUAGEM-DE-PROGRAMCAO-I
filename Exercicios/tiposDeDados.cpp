#include <iostream>

using namespace std;

int main(void){

    //TIPO NOME;
    //TIPO NOME = VALOR;

    int vidas = 0;//ex: 10,25,34,-30...
    char letra = 'b';// 1 caractere: 'b'
    //char letras[20];//passa a ser um vetor e posso colocar um texto
    double decimal = 2.1; //2,499999, é mais preciso que o float
    float decimal2 = 5.2;//2.5
    bool vivo = true;//true=verdadeiro=1 / false=falso=0
    string nome = "Raquel";// vai receber um texto "raquel"
 
    cout << vidas << "\n";
    cout << letra << "\n";
    //cout << letras << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";

    cin >> nome;//cin usado para entrada
    cout << "nome digitado: " << nome << "\n";

    return 0;
}