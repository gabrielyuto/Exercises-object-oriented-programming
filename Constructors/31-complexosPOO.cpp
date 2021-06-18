//g++ complexoPOO.cpp -p prog.exe

#include <iostream>

class Complexo{
    private:
        int re, im;
    public:
        Complexo (int, int);
        void setReal(int);
        void setImaginario(int);
        int getReal();
        int getImaginario();

        void soma(Complexo);
        void sub(Complexo);
        void mult(Complexo);
        void div(Complexo);
};

//Construtor que recebe dois inteiro a e b e cria um objeto complexo
Complexo::Complexo(int re, int im){
    this->setReal(re);
    this->setImaginario(im);

}

void Complexo::setReal (int re){
    this->re = re;
}

void Complexo::setImaginario(int im){
    this->im = im;
}

int Complexo::getReal(){
    return this->re;
}

int Complexo::getImaginario(){
    return this->im;
}

//Recebe um objeto complexo e o soma com o objeto invocador do método
void Complexo::soma(Complexo c){
    this->setReal(this->getReal() + c.getReal());
    this->setImaginario(this->getImaginario() + c.getImaginario());
}

//Recebe um objeto complexo e o subtrai do objeto invocador do método
void Complexo::sub(Complexo c){
    this->setReal(this->getReal() - c.getReal());
    this->setImaginario(this->getImaginario() - c.getImaginario());
}

//Recebe um objeto complexo e o multplica com o objeto invocador do método 
void Complexo::mult(Complexo complx){
    int a, b, c, d;
    a = this->getReal();
    b = this->getImaginario();
    c = complx.getReal();
    d = complx.getImaginario();
    this->setReal(a*c - b*d);
    this->setImaginario(a*d + b*c);
}

//Recebe um objeto complexo divide o objeto invocador do método
void Complexo::div(Complexo complx){    
    int a, b, c, d;
    a = this->getReal();
    b = this->getImaginario();
    c = complx.getReal();
    d = complx.getImaginario();
    this->setReal((a*c + b*d)/(c*c + d*d));
    this->setImaginario((b*c - a*d)/(c*c + d*d));
}


int main(){
    int re1, im1, re2, im2;
    char op, i;

    //Leitura ate EOF (ctrl+D)
    while(std::cin >> re1 >> im1 >> i >> op >> re2 >> im2 >> i){
        
        //std::cout << "[" << re1 << " " << im1 << " " << op << " " << re2 << " " << im2 << "]\n"; 
        Complexo c1(re1, im1), c2(re2, im2);
        switch(op){
            case '+': c1.soma(c2);
                break;
            case '-': c1.sub(c2);
                break;
            case '*': c1.mult(c2);
                break;
            case '/': c1.div(c2);
                break;
        }
        std::cout << c1.getReal() << " " << c1.getImaginario() << "i\n ";
    }
    return 0;
}



