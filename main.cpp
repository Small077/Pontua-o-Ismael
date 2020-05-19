#include <bits/stdc++.h>

using namespace std;

int main()
{
    char tc;
    double tm;
    int qc,pa,svc,si,sfp;

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
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? " << endl;
    cin >> tc;
    cout << endl;
    cout << "Score de volume de compras = " << endl;
    cout << svc;
    cout << endl;
    cout << "Score de inadimplencia = " << endl;
    cout << "Score de forma de pagamento = " << endl;
    cout << endl;
    cout << "Classificaçao final = " << endl;
    return 0;
}
