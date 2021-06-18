//g++ les.cpp -o prog.exe

#include <iostream>

class Lista
{
    private:
        int *itens;
        int tamanho;
        int quantidade;

    public:
        Lista(int); //Construtor - Aloca memoria
        ~Lista(); //Destrutor - Libera memoria

        //Metodos Modificadores
        void setTamanho(int);
        void setQuantidade(int);
        void setItens(int, int);
        //Metodos de Acesso
        int getTamanho();
        int getQuantidade();
        int getItens(int);

        //Métodos
        bool cheia();
        bool vazia();
        void mostra();

        int busca(int);
        void inserir(int);
        int remover(int);
};
//Construtor
Lista::Lista(int tamanho){
    this->setTamanho(tamanho);
    this->setQuantidade(0);
    this->itens = new int[tamanho]; //Alocacao de Memoria
}

//Destrutor
Lista::~Lista(){
    delete [] this->itens;
}

void Lista::setTamanho(int t){
    this->tamanho = t;
}

void Lista::setQuantidade(int q){
    this->quantidade = q;
}
void Lista::setItens(int i, int x){
    this->itens[i] = x;
}

int Lista::getTamanho(){
    return this->tamanho;
}

int Lista::getQuantidade(){
    return this->quantidade;
}

int Lista::getItens(int i){
    return this->itens[i];
}

bool Lista:: cheia(){
    return this->getQuantidade() == this->getTamanho();
}

bool Lista:: vazia(){
    return this->getQuantidade() == 0;
}

void Lista::mostra(){
    int i;
    for (i = 0; i < this->getQuantidade(); i++){
        std::cout << this->getItens (i) << "\n";
    }
}
//Recebe a chave x e devolve a posicao de "insercao"
int Lista::busca(int x){
    int i;
    for (i = 0; i < this->getQuantidade() && this->getItens(i) < x; i++);
    return i;
}

void Lista::inserir(int x){
    //Caso 1: Lista vazia
    if(this->vazia()){
        this->setItens(0, 0);
        this->setQuantidade(1);
    }
    //Caso 2: Lista nao vazia
    else{
        //Procura posicao insercao
        int i = this->busca(x);
        //Verifica se a chave nao é repetida?
        if(!(i < this->getQuantidade() && this->getItens(i) == x )){
            //insere x na posicao i:
            //1) desloca elementos para direita
            int j;
            for (j = this->getQuantidade() - 1; j >= i; j--){
                this->setItens(j+1, this->getItens(j));
            }
            //2)insere x na posicao i
            this->setItens(i, x);
            this->setQuantidade(this->getQuantidade() + 1);
        }
    }
}
//Recebe chave x.
//Remove chave x caso exista.
//Se removeu x da lista, devolve o valor de x >= 0.
//Caso constrario, devolve -1.
int Lista::remover(int x){
    if(!this->vazia()){
        int i = this->busca(x);
        //se encontrar a chave x, remove esta chave da lista
        if(i < this->getQuantidade () && this->getItens(i) == x){
            //desloca elementos para a esquerda para "tapar" o buraco
            int j;
            for (j = i; j < this->getQuantidade () - 1; j++){
                this->setItens(j, this->getItens(j+1));
            }
            //decrementa quantidade
            this->setQuantidade (this->getQuantidade() - 1);
            return x;
        }
    }
        return -1;
}

int main(){
    int q, i, x;
    char op;
    std::cin >> q;
    Lista lista (q);
    for(i = 0; i < q; i++){
        std::cin >> op >> x; 
        switch(op){
            case 'I': lista.inserir(x);
                break;
            case 'E': lista.remover(x);
                break;       
        }  
    }
    lista.mostra();
    return 0;
}