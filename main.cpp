#include <iostream>

void afficherTableau(int* tableau,int size){
    for(int i=0;i<size;i++){
        
    std::cout<<tableau[i]<< std::endl;
    }
}

int main(){
    
    int nbr = 0;
    std::cin>>nbr;
    std::cin.ignore();
    
    int* tableau = new int [nbr];
    for(int i=0;i<nbr;i++){
        tableau[i]=i;
    }
    afficherTableau(tableau,nbr);
    std::cin.ignore();
    delete[] tableau;
    int a =0;
    float b = 0;

    int*  p_int = &a;
    float* p_float = &b;//pas de modification

    std::cout<<"valeur de a : " << a << std::endl;
    std::cout<< "valeur de b : " << b << std::endl;

    std::cout<< "adresse de a : " << p_int << std::endl;
    std::cout<< "adresse de b : " <<p_float << std::endl;

    std::cout<< "adresse de a : " << *p_int <<std::endl;
    std::cout <<"adresse de b: " << *p_float <<std::endl;
 
}

