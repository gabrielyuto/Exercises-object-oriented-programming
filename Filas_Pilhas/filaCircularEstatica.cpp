//g++ filaCircularEstatica.cpp -o prog.exe

#include <iostream>

class FilaCircular{
    private:
        int *itens;
        int tamanho;
        int inicio, fim;

    public:
        FilaCircular(int); //Construtor
        ~FilaCircular(); //Destrutor

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
FilaCircular::FilaCircular(int tam){
    this->setTamanho(tam);
    this->itens = new int [tam];
    this->setInicio(0);
    this->setFim(0);
}

FilaCircular::~FilaCircular(){
    delete[] this->itens;
}

void FilaCircular::setTamanho(int tam){
    this->tamanho = tam;
}
void FilaCircular::setInicio(int ini){
    this->inicio = ini;
}
void FilaCircular::setFim(int fim){
    this->fim = fim;
}
void FilaCircular::setItens(int i, int x){
    this->itens[i] = x;
}

int FilaCircular::getTamanho(){
    return this->tamanho;
}
int FilaCircular::getInicio(){
    return this->inicio;
}
int FilaCircular::getFim(){
    return this->fim;
}
int FilaCircular::getItens(int i){
    return this->itens[i];
}

bool FilaCircular::vazia(){
    return this->getInicio() == this->getFim();
}
bool FilaCircular::cheia(){
    return ((this->getFim() + 1) % this->getTamanho()) == this->getInicio();
}

//Assume que ha espaco na fila
void FilaCircular::enfileirar (int x){
        this->setItens(this->getFim(), x);
        this->setFim((this->getFim() + 1) % this->getTamanho());
}

//Assume fila nao vazia
int FilaCircular::desenfileirar (){
    int x = this->getItens(this->getInicio());
    this->setInicio((this->getInicio() + 1) % this->getTamanho());
    return x;
}

void FilaCircular::mostra(){
    if (!this->vazia()){
        int i = this->getItens(this->getInicio());
        while(i != this->getFim()){
            std::cout << "[" << this->getItens(i) << "]\n"; 
            i = (i + 1) % this->getTamanho(); 
        }
    }
}

int main(){
    int n, x;
    char op;
    std::cin >> n;
    FilaCircular fila(n);
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
            case 'M':fila.mostra();    
                    break;
                               
        }
    }
    return 0;
}