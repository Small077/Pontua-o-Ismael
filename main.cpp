#include <bits/stdc++.h>

using namespace std;

int main()
{
    char tc,cf;
    double tm;
    int qc,pa,svc,si,sfp,D,C,B;

    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl;
    cout << endl;
    cout << "Quantas compras o cliente fez no ultimo ano? " << endl;
    cin >> qc;
    cout << "Qual o ticket medio? " << endl;
    cin >> tm;
    if (qc<=0){
        svc=0;
    }
    else if (qc<=2 && tm<=3000){
        svc=20;
    }
    else if (qc>2 && tm<=3000){
        svc=40;
    }
    else if (tm>3000){
        svc=60;
    }
    cout << endl;
    cout << "Quantas vezes o cliente atrasou o pagamento? " << endl;
    cin >> pa;
     if (pa==1){
        si=15;
    }
    else if (pa==0){
        si=30;
    }
    else if (pa>1){
        si=0;
    }
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? " << endl;
    cin >> tc;
    if (tc=='D'){
        sfp=5;
    }
    else if (tc=='C' || tc=='B'){
        sfp=10;
    }
    cout << endl;
    cout << "Score de volume de compras = " << endl;
    cout << svc << " pontos";
    cout << endl;4
    cout << "Score de inadimplencia = " << endl;
    cout << si << " pontos";
    cout << endl;
    cout << "Score de forma de pagamento = " << endl;
    cout << sfp << " pontos";
    cout << endl;
    cout << "Classifica�ao final = ";
    if (svc+si+sfp<25){
       cout << "Cliente BRONZE";
    }
    else if (25<svc+si+sfp<75){
         cout << "Cliente PRATA";
    }
     else if (svc+si+sfp>75){
        cout << "Cliente OURO";
    }
    cout << endl;
    return 0;
}
