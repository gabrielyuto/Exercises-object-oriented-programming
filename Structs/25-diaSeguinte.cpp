#include <iostream>

struct tData {
    int dia, mes, ano;
};

bool bissexto(int a){
    if((a % 400 == 0) || (a % 4 == 0 && a%100 !=0)){
        return true;
    }
    else{
        return false;
    }
}

void verificaAnoMesDiaBi(int a, int m, int d){

    if(a > 1500 && a < 2500){
        if (m > 0 && m <= 12){
            if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10){
                if( d > 0 && d < 31){
                    d = d + 1;
                    std::cout << d << " " << m << " " << a << "\n";
                }
                else if(d == 31){
                    d = 1;
                    m = m+1;
                    std::cout << d << " " << m << " " << a << "\n";
                }
                else{
                    std::cout << " ";
                }
            }

            else if(m == 4 || m == 6 || m == 9 || m == 11){
                 if( d > 0 && d < 30){
                    d = d + 1;
                    std::cout << d << " " << m << " " << a << "\n";
                }
                else if(d == 30){
                    d = 1;
                    m = m+1;
                    std::cout << d << " " << m << " " << a << "\n";
                }
                else{
                    std::cout << " ";
                }
            }

            else if(m == 2){
                if(d > 0 && d <29){
                    d = d + 1;
                    std::cout << d << " " << m << " " << a << "\n";
                }
                else if(d == 29){
                    d = 1;
                    m = m+1;
                    std::cout << d << " " << m << " " << a << "\n";
                }
                else{
                    std::cout << " ";
                }
            }
            else{
                 if(d > 0 && d <31){
                    d = d + 1;
                    std::cout << d << " " << m << " " << a << "\n";
                }
                else if(d == 31){
                    d = 1;
                    m = 1;
                    a = a + 1;
                    std::cout << d << " " << m << " " << a << "\n";
                }
                else{
                    std::cout << " ";
                }
            }    
        }
    }
}



int main(){
    struct tData Data;

    std:: cin >> Data.dia >> Data.mes >>Data.ano;

        bool validaAnoBi = bissexto(Data.ano);
        //Ano Bissexto
        if(validaAnoBi == true){
            verificaAnoMesDiaBi(Data.ano,Data.mes, Data.dia);
        }
}