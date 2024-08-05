#include <iostream>

using namespace std;
//função para verificar se a data é válida
bool dataValida (int dd, int mm, int aa){
    //verifica se o ano é válido
    if (aa < 0)
        return false;

    //verifica se o mês é válido
    if (mm < 0 && mm > 12)
        return false;

    //verifica se o dia é válido
    if (dd < 1 && dd > 31)
        return false;
    if (mm == 4 || mm == 6 || mm == 9 || mm == 11){
        if (dd > 30)
            return false;}
    if ((mm == 2) && dd > 29) //completar verificação de bissexto
        return false;


}
//função para continuar ou parar a repetição
bool desejaContinuar(){
    char c;
    cout << "Deseja continuar? ";
    cin >> c;

    return (c == 'S' | c == 's');

}

int main()
{

    int k, dia, mes, ano;
    char c;

    bool continuar = true;

    //loop enquanto continuar é true

    while(continuar){


    cout << "Digite a data: ";
    cin >> dia >> mes >> ano;

    if (dataValida(dia, mes, ano)){
    k = dia + 2 * mes + (3*(mes+1))/5 + ano + ano/4 -
        ano/100 + ano/400 + 2;

    k = k % 7;

    switch(k){

    case 1:
        cout << "Domingo" << endl;
        break;
    case 2:
        cout << "Segunda-feira" << endl;
        break;
    case 3:
        cout << "Terca-feira" << endl;
        break;
    case 4:
        cout << "Quarta-feira" << endl;
        break;
    case 5:
        cout << "Quinta-feira" << endl;
        break;
    case 6:
        cout << "Sexta-feira" << endl;
        break;
    case 7:
        cout << "Sabado-feira" << endl;
        break;
    }//switch

    }//if

    else
        cout << "Data invalida!" << endl;


    continuar = desejaContinuar();
    }//while



}
