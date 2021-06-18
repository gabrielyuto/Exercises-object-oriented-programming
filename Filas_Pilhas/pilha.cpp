//g++ pilhaEstatica.cpp -o prog.exe

#include <iostream>

class Pilha{
    private:
        int *itens;
        int tamanho;
        int topo;

    public:
        Pilha(int); //Construtor
        ~Pilha(); //Destrutor

        //Criar métodos "set" e "get"
        void setTamanho(int);
        void setTopo(int);
        void setItens(int, int);
        int getTamanho();
        int getTopo();
        int getItens(int);

        bool vazia();
        bool cheia();
        void printBottomUp();
        void printTopDown();

        void empilhar(int);
        int desempilhar(); 

};
//Construtor
Pilha::Pilha(int tamanho){
    this->setTamanho(tamanho);
    this->itens = new int [tamanho];
    this->setTopo(-1); //inicialmente pilha vazia
}

Pilha::~Pilha(){
    delete[] this->itens;
}

void Pilha::setTamanho(int tam){
    this->tamanho = tam;
}
void Pilha::setTopo(int topo){
    this->topo = topo;
}
void Pilha::setItens(int i, int x){
    this->itens[i] = x;
}

int Pilha::getTamanho(){
    return this->tamanho;
}
int Pilha::getTopo(){
    return this->topo;
}
int Pilha::getItens(int i){
    return this->itens[i];
}

bool Pilha::vazia(){
    return this->getTopo() == -1;
}
bool Pilha::cheia(){
    return this->getTopo() == this->getTamanho();
}

void Pilha::printBottomUp(){
    int i;
    for(i = 0; i <=this->getTopo(); i++){
        std::cout << this->getItens(i) << "\n";
    }
}

void Pilha::printTopDown(){
    int i;
    for(i = this->getTopo();i >= 0; i--){
        std::cout << this->getItens(i) << "\n";
    }
}

//Assume pilha nao cheia
void Pilha::empilhar (int x){
    this->setTopo(this->getTopo() + 1);
    this->setItens(this->getTopo(), x);
}

//Assume pilha nao vazia
int Pilha::desempilhar (){
    int x = this->getItens(this->getTopo());
    this->setTopo(this->getTopo() - 1);
    return x;
}

int main(){
    int n, x;
    char op;
    std::cin >> n;
    Pilha pilha(n);
    //Leitura ate EOF (ctrl+D)
    while(std::cin >> op ){
        switch(op){
            case 'E': std::cin >> x;
                    if(!pilha.cheia()){
                        pilha.empilhar(x);
                    }
                    break;
            case 'D':if(!pilha.vazia()){
                        pilha.desempilhar();          
                    }
                    break;
            case 'T': pilha.printTopDown();
                    break;
            case 'B': pilha.printBottomUp();
                    break;                        
        }
    }
    return 0;
}