#include <iostream>
#include <string>
class zoo {
public:
    int age;
    std::string name_of_animal;
    std::string diet;
    std::string color;
    void feed() {
        std::cout << "You fed " << name_of_animal << " with " << diet;
    };

    void drink() {
        std::cout << "You got drink " << name_of_animal << " with water";
    };
    void kill() {
        std::cout << "You killed" << name_of_animal;
    }
};
class bears : public zoo {
public:
    int weight;
    int hight;
    int dangerous;
    void make_angry() {
        std::cout << "You made " << name_of_animal << " angry";
    };
    void call()
    {
        std::cout << "You called"<<name_of_animal;
    };
    void take_a_picture()
    {
        std::cout << "You took a picture with" << name_of_animal;
    };
    
};
class rabbits : public zoo {
public:
    int cute;
    std::string type;
    std::string mother;
    void pet() {
        std::cout << "You petted " << name_of_animal;
    };
    void stole(){
        std::cout << "You have stole "<< name_of_animal;
    };
    void cut(){
        std::cout << "You cutted " << name_of_animal;
    };
};
class hourses : public zoo {
public:
    int weight;
    int height;
    int speed;
    void ride() {
        std::cout << "You rode " << name_of_animal;
    };
    void shoe(){
        std::cout << "You shoed "<< name_of_animal;
    };
    void rid1() {
        std::cout << "You rode " << name_of_animal;
    };
};
int main() {
    std::string animal, action;
    bears Dan;
    Dan.name_of_animal = "Dan";
    Dan.age = 15;
    Dan.diet = "meat";
    Dan.color = "black";
    Dan.dangerous = 10;
    Dan.hight = 15;
    Dan.weight = 90;
    rabbits Richard;
    Richard.color = "white";
    Richard.cute = 10;
    Richard.mother = "luci";
    Richard.type = "right";
    Richard.name_of_animal = "Richard";
    Richard.age = 2;
    Richard.diet = "carrot";
    hourses Milana;
    Milana.color = "brown";
    Milana.height = 2;
    Milana.weight = 50;
    Milana.speed = 40;
    Milana.name_of_animal = "Milana";
    Milana.age = 10;
    Milana.diet = "millet";
    std::cout << "Choose an animal from bear,rabbit, horse:";
    std::cin >> animal;
    if (animal == "bear")
    {
        std::cout << "Bear's name is " << Dan.name_of_animal << ".";
        std::cout << " Choose action from feed, drink, make_an_angry, call, take a picture, kill: ";
        std::cin >> action;
        if (action == "feed") {
            Dan.feed();
        }
        else if (action == "drink") {
            Dan.drink();
        }
        else if (action == "make_an_angry") {
            Dan.make_angry();
        }
        else if (action == "call"){
            Dan.call();
        }
        else if (action =="take a picture"){
            Dan.take_a_picture();
        }
        else if (action == "kill") {
            Dan.kill();
        }
    }
    else if (animal == "rabbit") {
        std::cout << "Rabbit's name is " << Richard.name_of_animal << ".";
        std::cout << " Choose action from feed, drink, pet, kill, cut, stole: ";
        std::cin >> action;
        if (action == "feed") {
            Richard.feed();
        }
        else if (action == "drink") {
            Richard.drink();
        }
        else if (action == "pet") {
            Richard.pet();
        }
        else if (action == "kill"){
            Richard.kill();
        }
        else if (action == "cut") {
            Richard.cut();
        }
        else if (action == "stole"){
            Richard.stole();
        }
    }
    else if (animal == "horse") {
        std::cout << "Hors's name is " << Milana.name_of_animal << ".";
        std::cout << " Choose action from feed, drink, ride, shoe, kill ";
        std::cin >> action;
        if (action == "feed") {
            Milana.feed();
        }
        else if (action == "drink") {
            Milana.drink();
        }
        else if (action == "ride") {
            Milana.ride();
        }
        else if (action == "kill") {
            Milana.kill();
        }
        else if (action == "shoe"){
            Milana.shoe();
        }
        else if (action == "ride") {
            Milana.ride();
        }
    }
};