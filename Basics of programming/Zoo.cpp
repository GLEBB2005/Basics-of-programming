#include <iostream>
#include <string>
class zoo {
public:
    std::string animal;
    std::string food;
    std::string age;

    void feed() {
        if (animal == "lion") {
            std::cout << "You fed the lion with " << food;
        } else if (animal == "rabbit") {
            std::cout << "You fed the rabbit with " << food;
        } else if (animal == "monkey") {
            std::cout << "You fed the monkey with " << food;
        }
    }

    void drink() {
        std::cout << "You got drink " << animal << " with water";
    }

    void caress() {
        if (animal == "lion") {
            std::cout << "The lion took a bite your arm";
        } else {
            std::cout << "You caress " << animal;
        }
    }
};
int main(){
    std::string animal1, action;
    zoo Alex;
    Alex.animal="lion";
    Alex.food="meat";
    Alex.age="13";
    zoo Richard;
    Richard.animal="rabbit";
    Richard.food="carrot";
    Richard.age="2";
    zoo Lula;
    Lula.animal="monkey";
    Lula.food="banana";
    Lula.age="10";
    std::cout<<"You can choose animal: Alex(lion),Richard(rabbit), Lula(Monkey). Enter the name of the selected animal: ";
    std::cin>>animal1;
    if (animal1=="Alex"){
        std::cout<<"You can choose action: feed, drink , caress. Enter the name of the selected action: ";
        std::cin>>action;
        if (action=="feed"){
            Alex.feed();
        }
        else if (action=="drink"){
            Alex.drink();
        }
        else if (action=="caress"){
            Alex.caress();
        }
    }
    else if(animal1=="Richard"){
        std::cout<<"You can choose action: feed, drink , caress. Enter the name of the selected action: ";
        std::cin>>action;
        if (action=="feed"){
            Richard.feed();
        }
        else if (action=="drink"){
            Richard.drink();
        }
        else if (action=="caress"){
            Richard.caress();
        }
    }
    else if(animal1=="Lula"){
        std::cout<<"You can choose action: feed, drink , caress. Enter the name of the selected action: ";
        std::cin>>action;
        if (action=="feed"){
            Lula.feed();
        }
        else if (action=="drink"){
            Lula.drink();
        }
        else if (action=="caress"){
            Lula.caress();
        }
    }
}






