//g++ 22-racionaisStruct.cpp -o prog.exe

#include <iostream>

typedef struct tRacional {
    int num, denom;
}Racional;

int mdc(int a, int b){
    if (b==0){
        return a;
    }
    return mdc(b, a % b);
}

//  Recebe dois inteiros numerador e denominador e retorna o racional
Racional racional(int a, int b){
    Racional r;
    r.num = a;
    r.denom = b;
    return r; //Nao esquecer de devolver
}; 

//Recebe um racional e retorna o seu negativo.
Racional negativo(Racional r){
    r.num = -r.num;
    return r;
};  

//Recebe um racional e reduz a fração ao máximo.
Racional reduz(Racional r){
    Racional r3;
    int d = mdc(r.num, r.denom);
    r3.num = r.num / d;
    r3.denom = r.denom/d;
    if(r3.denom < 0){
        r3.num = -r3.num;
        r3.denom = -r3.denom;
    }
    return r3;
};      
// Recebe dois racionais e retorna a adição de ambos.
Racional soma(Racional r1, Racional r2){
    Racional r3;
    r3.num = r1.num*r2.denom + r2.num*r1.denom;
    r3.denom = r1.denom * r2.denom;
    return r3;
};

//Recebe dois racionais e retorna o produto de ambos.
Racional mult(Racional r1, Racional r2){
    Racional r3;
    r3.num = r1.num * r2.num;
    r3.denom = r1.denom * r2.denom;
    return r3;
};

//Recebe dois racionais e retorna o quociente de ambos.
Racional div(Racional r1, Racional r2){
    Racional r3;
    r3.num = r1.num * r2.denom;
    r3.denom = r1.denom * r2.num;
    return r3;
}; 

int main(){
    int n1, d1, n2, d2;
    char op;
    //leitura ate EOF
    while(std::cin >> n1 >> d1 >> op >> n2 >> d2){
        //std:: cout << "[" << n1 << " " << d1 << " " << op << " " << n2 << " " << d2 << "]\n";
        Racional r1 = racional (n1, d1), r2 = racional(n2, d2), r3;
        switch(op){
            case '+': r3 = soma(r1, r2);
                    break;
            case '-': r3 = soma (r1, negativo(r2));
                    break;
            case '*': r3 = mult (r1, r2);
                    break;
            case '/': r3 = div (r1, r2);
                    break;            
        }
        r3 = reduz(r3);
        std:: cout << r3.num << " " << r3.denom << "\n";
    }
    return 0;
}  