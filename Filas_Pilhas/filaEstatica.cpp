//g++ filaEstatica.cpp -o prog.exe

#include <iostream>

class Fila{
    private:
        int *itens;
        int tamanho;
        int inicio, fim;

    public:
        Fila(int); //Construtor
        ~Fila(); //Destrutor

        //Criar métodos "set" e "get"
        void setTamanho(int);
        void setInicio(int);
        void setFim(int);
        void setItens(int, int);
        int getTamanho();
        int getInicio();
        int getFim();
        int getItens(int);

        bool vazia();
        bool cheia();
        void mostra();

        void enfileirar(int);
        int desenfileirar();

};

//Construtor
Fila::Fila(int tam){
    this->setTamanho(tam);
    this->itens = new int [tam];
    this->setInicio(-1);
    this->setFim(-1);
}

Fila::~Fila(){
    delete[] this->itens;
}

void Fila::setTamanho(int t){
    this->tamanho = t;
}
void Fila::setInicio(int i){
    this->inicio = i;
}
void Fila::setFim(int f){
    this->fim = f;
}
void Fila::setItens(int i, int x){
    this->itens[i] = x;
}

int Fila::getTamanho(){
    return this->tamanho;
}
int Fila::getInicio(){
    return this->inicio;
}
int Fila::getFim(){
    return this->fim;
}
int Fila::getItens(int i){
    return this->itens[i];
}

bool Fila::vazia(){
    return this->getInicio() == -1 || (this->getInicio() > this->getFim());
}
bool Fila::cheia(){
    return this->getFim() == this->getTamanho() - 1;
}

void Fila::mostra(){
    if (!this->vazia()){
        int i;
        for(i = this->getInicio(); i <= this->getFim(); i++){
            std::cout << this->getItens(i) << "\n";
        }
    }
}

//Assume fila nao cheia
void Fila::enfileirar (int x){
    if(this->vazia()){
        this->setInicio(0);
        this->setFim(0);
        this->setItens(this->getFim(), x);
    }
    else{
        this->setFim(this->getFim() + 1);
        this->setItens(this->getFim(), x);
    }
}

//Assume fila nao vazia
int Fila::desenfileirar (){
    int x = this->getItens(this->getInicio());
    this->setInicio(this->getInicio() + 1);
    //resetar inicio e fim da fila quando ela ficar vazia
    if(this->getInicio() > this->getFim()){
        this->setInicio(-1);
        this->setFim(-1);
    }
    return x;
}

int main(){
    int n, x;
    char op;
    std::cin >> n;
    Fila fila(n);
    //Leitura ate EOF (ctrl+D)
    while(std::cin >> op){
        switch(op){
            case 'E': std::cin >> x;
                    if(!fila.cheia()){
                        fila.enfileirar(x);
                    }
                    break;
            case 'D':if(!fila.vazia()){
                        x = fila.desenfileirar();
                        std::cout << x << "\n";          
                    }
                    break;
            case 'M': if(!fila.vazia()){
                        fila.mostra();
                    }    
                    break;
                               
        }
    }
    return 0;
}