#include <iostream>

class Data{
    private:
        int dia, mes, ano;

        public: 
            Data (int, int, int); //Construtor
            void setDia(int);
            void setMes(int);
            void setAno(int);
            int getDia();
            int getMes();
            int getAno();
            bool isBissexto();
            bool isValida();
};

//Devolve true se a data deste objeto é valida, false caso contrário.
bool Data::isBissexto (){
    return (this->getAno() % 4 == 0 && this->getAno() % 100!= 0) || this->getAno() % 400 == 0;
}  

//Devolve true se o ano deste objeto é bissexto, false caso contrário.
bool Data::isValida (){
    //dias do mes
    //                     1   2   3   4   5   6   7   8   9  10  11  12 
    int diasDoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isBissexto()){
        diasDoMes[2]++; //29 dias em Fevereiro
    }
    //Verifica dias entre 1 e maxDia
    if(this->getDia() >= 1 && this->getDia() <= diasDoMes[this->getMes()] && 
    //Verifica Mes entre 1 e 12
    this->getMes() >= 1 && this->getMes() <= 12){
        return 1; //True
    }
    return 0; //False

} 

//Construtor
Data::Data (int dia, int mes, int ano){
    this->setDia (dia);
    this->setMes (mes);
    this->setAno (ano);
}

//Metodos Modificadores
void Data::setDia (int d) { 
    this->dia = d; 
}
void Data::setMes (int m) { 
    this->mes = m; 
}
void Data::setAno (int a) {
    this->ano = a; 
}

//Metodos de Acesso
int Data::getDia () { 
    return this->dia; 
}
int Data::getMes () { 
    return this->mes; 
}
int Data::getAno () { 
    return this->ano; 
}
  
int main(){
    
    int n, i;
    std::cin >> n;
    for (i = 0; i < n; i++){
        int dia, mes, ano;
        std::cin >> dia >> mes >> ano;
        Data data(dia, mes, ano);

        if(data.isValida()){
            std::cout << "DATA VALIDA\n";
        }
        else{
            std::cout << "DATA INVALIDA\n";
        }
    }
    return 0;
}