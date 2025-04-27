#include <iostream>
using namespace std;

int main() {
    int hufflepuff = 0, slytherin = 0, ravenclaw = 0, gryffindor = 0;
    int respuesta;

    
    cout<< "Si te enfrentas a un desafio dificil, ¿como reaccionas?"<<endl;
    cout<<"1) Intentas resolverlo de manera justa y en equipo." <<endl;
    cout<<"2) Buscas una estrategia astuta para superarlo." <<endl;
    cout<<"3) Investigas y analizas antes de actuar." <<endl;
    cout<<"4) Lo enfrentas con valentia, sin importar el riesgo." <<endl;
    cin>> respuesta;
    if (respuesta ==1) {
        hufflepuff++;
    } else if (respuesta== 2) {
        slytherin++;
    } else if (respuesta==3) {
        ravenclaw++;
    } else if (respuesta== 4) {
        gryffindor++;
    }
    
    cout<<"Que cualidad valoras mas en tus amigos?" <<endl;
    cout<<"1) Lealtad y amabilidad." <<endl;
    cout<< "2) Determinacion y ambicion." <<endl;
    cout<<"3) Inteligencia y creatividad." <<endl;
    cout<<"4) Coraje y determinacion." <<endl;
    cin>>respuesta;
    if (respuesta == 1) {
        hufflepuff++;
    } else if(respuesta==2) {
        slytherin++;
    } else if(respuesta==3) {
        ravenclaw++;
    } else if(respuesta==4) {
        gryffindor++;
    }

    
    cout<< "Si tuvieras acceso a un objeto magico poderoso, ¿que harias con el?" <<endl;
    cout<<"1) Lo usarias para ayudar a los demas."<<endl;
    cout<<"2) Lo utilizarias para alcanzar tus metas."<<endl;
    cout<< "3) Lo estudiarias para entenderlo mejor." <<endl;
    cout<<"4) Lo usarias para hacer algo emocionante y heroico." <<endl;
    cin>>respuesta;
    if (respuesta == 1) {
        hufflepuff++;
    } else if (respuesta== 2) {
        slytherin++;
    } else if (respuesta==3) {
        ravenclaw++;
    } else if (respuesta==4) {
        gryffindor++;
    }

    
    cout << "Elige un lugar en Hogwarts donde pasarias la mayor parte del tiempo:"<<endl;
    cout << "1) La sala comun, relajandome con amigos."<<endl;
    cout << "2) La sala de trofeos, admirando logros."<<endl;
    cout << "3) La biblioteca, investigando nuevos conocimientos."<<endl;
    cout << "4) El campo de Quidditch, viviendo aventuras." <<endl;
    cin >> respuesta;
    if (respuesta==1) {
        hufflepuff++;
    } else if (respuesta==2) {
        slytherin++;
    } else if (respuesta==3) {
        ravenclaw++;
    } else if (respuesta==4) {
        gryffindor++;
    }
    
    cout << "Tu casa de Hogwarts es: ";
    if (hufflepuff >= slytherin && hufflepuff >= ravenclaw && hufflepuff >= gryffindor) cout << "Hufflepuff!" << endl;
    else if (slytherin >= hufflepuff && slytherin >= ravenclaw && slytherin >= gryffindor) cout << "Slytherin!" << endl;
    else if (ravenclaw >= hufflepuff && ravenclaw >= slytherin && ravenclaw >= gryffindor) cout << "Ravenclaw!" << endl;
    else cout << "Gryffindor!" << endl;

    return 0;
}
