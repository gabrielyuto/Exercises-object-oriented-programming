//g++ 23-bissextoStruct.cpp -o prog.exe

#include <iostream>


int main(){
    int ano;

    std::cin >> ano;
    //São bissextos todos os múltiplos de 4 e não múltiplos de 100
    if((ano%4==0) && (ano%100!=0)){
        std::cout << "ANO BISSEXTO";
    }
    
    //Para melhor entender são bissextos todos os anos múltiplos de 400
    else if(ano%400 == 0){
        std:: cout << "ANO BISSEXTO";
    }

    //Não são bissextos todos os demais anos.
    else{
        std::cout << "ANO NAO BISSEXTO";
    }
    return 0;
}