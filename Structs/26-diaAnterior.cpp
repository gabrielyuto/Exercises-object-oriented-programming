#include <iostream>

int main(){
    int d, m, a;
    std:: cin >> d >> m >> a;
    
    //Ano Bissexto
    if((a % 400 == 0) || (a % 4 == 0 && a%100 !=0)){

        if(a > 1500 && a < 2500){
            if (m > 0 && m <= 12){
                if(m == 12){
                    if( d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 30;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }

                else if(m == 11){
                    if( d > 1 && d <= 30){
                        d = d- 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }

                else if(m == 10){
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 30;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 9){
                    if(d > 1 && d <= 30){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 8){
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 7){
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 30;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 6){
                    if(d > 1 && d <= 30){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 5){
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 30;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 4){
                    if(d > 1 && d <= 30){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 3){
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 29;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 2){
                    if(d > 1 && d <= 29){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = 12;
                        a = a-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }                  
            }
        }
    }
    //Ano Nao Bissexto
    else{
          if(a > 1500 && a < 2500){
            if (m > 0 && m <= 12){
                if(m == 12){
                    if( d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 30;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }

                else if(m == 11){
                    if( d > 1 && d <= 30){
                        d = d- 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }

                else if(m == 10){
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 30;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 9){
                    if(d > 1 && d <= 30){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 8){
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 7){
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 30;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 6){
                    if(d > 1 && d <= 30){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 5){
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 30;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 4){
                    if(d > 1 && d <= 30){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 3){
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 28;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else if(m == 2){
                    if(d > 1 && d <= 28){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = m-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    if(d > 1 && d <= 31){
                        d = d - 1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else if(d == 1){
                        d = 31;
                        m = 12;
                        a = a-1;
                        std::cout << d << " " << m << " " << a << "\n";
                    }
                    else{
                        return 0;
                    }
                }                  
            }
        }
    }
}

  