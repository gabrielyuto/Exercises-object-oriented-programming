#include <iostream>

struct tData {
    int dia, mes, ano;
};

bool bissexto(int a){
    if((a % 400 == 0) || (a % 4 == 0 & a%100 !=0)){
        return true;
    }
    else{
        return false;
    }
}

bool verificaAnoMesDiaBi(int a, int m, int d){
    if(a > 1500 && a < 2500){
        if (m > 0 && m < 12){
            if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
                if( d > 0 && d <= 31){
                    return true;
                }
                else{
                    return false;
                }
            }
            else if(m == 4 || m == 6 || m == 9 || m == 11){
                if(d > 0 && d <= 30){
                    return true;
                }
                else{
                    return false;
                }
            }
            else if(m == 2){
                if(d > 0 && d <=29){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }   
        else{
            return false;
        }
    }
    else{
            return false;
    }

}

bool verificaAnoMesDia(int a, int m, int d){
    if(a > 1500 && a < 2500){
        if (m > 0 && m <= 12){
            if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
                if( d > 0 && d <= 31){
                    return true;
                }
                else{
                    return false;
                }
            }
            else if(m == 4 || m == 6 || m == 9 || m == 11){
                if(d > 0 && d <= 30){
                    return true;
                }
                else{
                    return false;
                }
            }
            else if(m == 2){
                if(d > 0 && d <=28){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }   
        else{
            return false;
        }
    }
    else{
            return false;
    }

}

int main(){
    int n, d, m, a;
    
    std::cin >> n;
    struct tData *vetData;
    vetData = new struct tData[n];

    for(int i=0; i<n; i++){
        std:: cin >> vetData[i].dia >> vetData[i].mes >>vetData[i].ano;
    }

    for(int i=0; i<n; i++){
        bool validaAnoBi = bissexto(vetData[i].ano);
        bool validaDataBi = verificaAnoMesDiaBi(vetData[i].ano,vetData[i].mes, vetData[i].dia );
        bool validaData = verificaAnoMesDia(vetData[i].ano,vetData[i].mes, vetData[i].dia );
        //Ano Bissexto
        if(validaAnoBi == true){
            if(validaDataBi == true){
                std::cout << "DATA VALIDA\n";
            }
            else{
                std::cout << "DATA INVALIDA\n";
            }
        }
        //Ano nao Bissexto
        else{
            if(validaData == true){
                std::cout << "DATA VALIDA\n";
            }        
            else{
                std::cout << "DATA INVALIDA\n";
            }
        }    
    }
    return 0;
}