#include <iostream>
#include <string>
class zoo {
public:
    int age;
    std::string name_of_animal;
    std::string diet;

    void feed() {
        std::cout << "You fed " << name_of_animal << " with " << diet;
    };

    void drink() {
        std::cout << "You got drink " << name_of_animal << " with water";
    };
};
class bears: public zoo{
    public:
        void make_angry(){
            std::cout<<"You made "<<name_of_animal<<" angry";
        };
};
class rabbits: public zoo{
    public:
        void pet(){
            std::cout<<"You petted "<<name_of_animal;
        };
};
class hourses: public zoo{
    public:
    void ride(){
        std::cout<<"You rode "<<name_of_animal;
    };
};
int main(){
    std::string animal, action;
    bears Dan;
    Dan.name_of_animal="Dan";
    Dan.age=15;
    Dan.diet="meat";
    rabbits Richard;
    Richard.name_of_animal="Richard";
    Richard.age=2;
    Richard.diet="carrot";
    hourses Milana;
    Milana.name_of_animal="Milana";
    Milana.age=10;
    Milana.diet="millet";
    std::cout<<"Choose an animal from bear,rabbit, horse:";
    std::cin>>animal;
    if (animal=="bear")
    { std::cout<<"Bear's name is "<<Dan.name_of_animal<<".";
      std::cout<<" Choose action from feed, drink, make_an_angry:";
      std::cin>>action;
      if (action=="feed"){
          Dan.feed();
      }
      else if(action=="drink"){
          Dan.drink();
      }
      else if(action=="make_an_angry"){
          Dan.make_angry();
      }
    }
    else if (animal=="rabbit"){
        std::cout<<"Rabbit's name is "<<Richard.name_of_animal<<".";
        std::cout<<" Choose action from feed, drink, pet:";
        std::cin>>action;
        if (action=="feed"){
            Richard.feed();
        }
        else if(action=="drink"){
            Richard.drink();
        }
        else if(action=="pet"){
            Richard.pet();
        }
    }
    else if (animal=="horse"){
        std::cout<<"Hors's name is "<<Milana.name_of_animal<<".";
        std::cout<<" Choose action from feed, drink, ride:";
        std::cin>>action;
        if (action=="feed"){
            Milana.feed();
        }
        else if(action=="drink"){
            Milana.drink();
        }
        else if(action=="ride"){
            Milana.ride();
        }
    }
};



