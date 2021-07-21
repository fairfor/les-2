#include <iostream>
#include <fstream>

    // =========================

class Person {
protected:
    std::string name{};
    unsigned short age{};
    unsigned short weight{};
    unsigned int cursor{};
    unsigned short time{};
    int sex{}; 
    bool gender{}; // if gender = false (man), else if gender = true (woman)
public:
    void initHuman() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
        std::cout << "Enter weight: ";
        std::cin >> weight;
        std::cout << "Enter training time: ";
        std::cin >> time;
        std::cout << "Choose gender (1 = woman, -1 = man): ";
        std::cin >> sex;
        if (sex == 1) {
            gender = true;
        }
        else {
            gender = false;
        }
    }
};

class Student : public Person {
    std::string S_name{};
    unsigned short S_age{};
    unsigned short S_weight{};
    bool S_sex{};
    unsigned short S_time{};
public:
    void initStudent()
    {
        std::ofstream f;
        f.open("students.txt");
        if (f.is_open())
        {
            S_name = name;
            S_age = age;
            S_weight = weight;
            S_sex = gender;
            S_time = time;
            f << "ID: " << cursor++ << std::endl << "Name: " << S_name << std::endl << "Age: " << S_age << std::endl << "Weight: " << S_weight << std::endl << "Gender: " << S_sex << std::endl << "Time: " << S_time << std::endl << std::endl;
            std::cout << std::endl << "Your ID is " << cursor;
        }
        f.close();
    }
};

    void task1() {
        Person h;
        Student s;
        h.initHuman();
        s.initStudent();
        std::cin.get();
    }

    // =========================

    class Fruit {
public:
        std::string name{};
        std::string color{};
    };

    class Banana : public Fruit {
    public:
        std::string getName() {
            return name = "banana";
        }
        std::string getColor() {
            return color = "yellow";
        }
    };

    class Apple : public Fruit {
    public:
        Apple(std::string col) {
            color = col;
        }
        std::string getName() {
            return name = "apple";
        }
        std::string getColor() {
            return color;
        }
        Apple() = default;
        ~Apple() {}
};
    class GrannySmith : public  Apple {
        std::string G_color{};
    public:
//        GrannySmith() : Apple(0) {}
//        GrannySmith(std::string i) : Apple(i) {}
        std::string getName() {
            return  name = "GrannySmith apple";
        }
        std::string getColor() {
            return G_color = "green";
        }
    };

    void task2() {
        Apple a("red");
        Banana b;
        GrannySmith c;

        std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
        std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
        std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
    }

    // =========================

    class Card {
        std::string peaks = "peaks";
        std::string worms = "worms";
        std::string baptize = "baptize";
        std::string tambourine = "tambourine";
    };

    class Player : public Card {

    };

    class Deck : public Card {
        int deck = 52;
        int c1 = 4;
        int c2 = 4;
        int c3 = 4;
        int c4 = 4;
        int c5 = 4;
        int c6 = 4;
        int c7 = 4;
        int c8 = 4;
        int c9 = 4;
        int c10 = 12;
        int c11 = 4;

    };

    class Dealer : public Card {

    };

    class Game : public Dealer, public Deck, public Player, public Card {
        int gameOverNumber = 21;
        unsigned int cursorPl = 0;
        unsigned int cursorDl = 0;
        bool GameOver = false;

        
    };

    void init() {
        
    }

    // =========================
    int main()
    {
//        task1();
//        task2();
        return 0;
    }