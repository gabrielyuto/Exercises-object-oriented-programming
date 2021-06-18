//g++ 29-racionaisPOO.cpp -o prog.exe

#include <iostream>

class Racional{
    private:
        int num, denom;
    public:
        Racional(int, int);
        void setNum(int);
        void setDenom(int);
        int getNum();
        int getDenom();
        
        int mdc(int, int);
        int reduzn(int, int);
        int reduzd(int, int);
        void racional(Racional);
        void sub(Racional);
        void soma(Racional);
        void mult(Racional);
        void div(Racional);
};

//Construtor
Racional::Racional(int num, int denom){
    this->setNum(num);
    this->setDenom(denom);
}
 
//Métodos Modificadores
void Racional::setNum(int num){
    this->num = num;
}
void Racional::setDenom(int denom){
    this->denom = denom;
}

//Métodos de Acesso
int Racional::getNum(){
    return this->num;
}
int Racional::getDenom(){
    return this->denom;
}

//Funções:
    
// Recebe dois racionais e retorna a adição de ambos.
void Racional::soma(Racional r){
    this->setNum(this->getNum() * r.getDenom() + r.getNum() * getDenom());
    this->setDenom(this->getDenom() * r.getDenom());
}
// Recebe dois racionais e retorna a subtração de ambos.
void Racional::sub(Racional r){
    this->setNum(this->getNum() * r.getDenom() - r.getNum() * getDenom());
    this->setDenom(this->getDenom() * r.getDenom());
}
//Recebe dois racionais e retorna o produto de ambos.
void Racional::mult(Racional r){
    this->setNum(this->getNum() * r.getNum());
    this->setDenom(this->getDenom() * r.getDenom());
}
//Recebe dois racionais e retorna o quociente de ambos.
void Racional::div(Racional r){
    this->setNum(this->getNum() * r.getDenom());
    this->setDenom(this->getDenom() * r.getNum());
} 

int mdc(int a, int b){
    if (b == 0){
        return a;
    }
    return mdc(b, a % b);
}
//Recebe um racional e reduz a fração ao máximo.
int reduzn(int n3, int d3){
    int d = mdc(n3, d3);
    n3 = n3 / d;
    d3 = d3 / d;
    if(d3 < 0){
        n3 = -n3;
    }
    return n3;
}

//Recebe um racional e reduz a fração ao máximo.
int reduzd(int n3, int d3){
    int d = mdc(n3, d3);
    n3 = n3 / d;
    d3 = d3 / d;
    if(d3 < 0){
        d3 = -d3;
    }
    return d3;
}
int main(){
    int n1, d1, n2, d2, n3, d3;
    char op;
    //leitura ate EOF
    while(std::cin >> n1 >> d1 >> op >> n2 >> d2){
        Racional r1(n1, d1), r2(n2, d2), r3(n3, d3);
        switch(op){
            case '+': r1.soma(r2);
                    break;
            case '-': r1.sub(r2);
                    break;
            case '*': r1.mult(r2);
                    break;
            case '/': r1.div(r2);
                    break;            
        }
        n3 = r1.getNum();
        d3 = r1.getDenom();
        int n = reduzn(n3, d3);
        int d = reduzd(n3, d3);
        std:: cout << n << " " << d << "\n";
    }
    return 0;
}  