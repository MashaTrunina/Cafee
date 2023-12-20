#include "character.h"
#include "Cafer.h"
#include "staff.h"
#include "food.h"
#include "pie.h"
#include "drink.h"
#include "tea.h"
#include "coffee.h"
#include "money.h"

int main() {
    setlocale(LC_ALL, "RU");

    Character character;
    std::cout << " Choose the character`s name: ";
    std::cin >> character.name;
    character.displayInfo();

    int cafeChoice;
    std::cout << " Choose a cafe: 1.TEA or 2.COFFEE" << std::endl;
    std::cin >> cafeChoice;

    Money money;
    money.generateMoney();
    money.transfer();

    if (cafeChoice == 1) {         

        Cafe tea("TEA");
        tea.get_info();

        int baristaChoice;
        std::cout << "Choose a barista: 1.Ivan or 2.Kate" << std::endl;
        std::cin >> baristaChoice;

        std::cout << "Good Afternoon, what would u like? We have: 1.Green tea(10@), 2.Black tea(30@), 3. Berry pie(50@), 4.apple pie(60@). " << std::endl;

        if (baristaChoice == 1) {
            Staff number1("Ivan", "Good at preparing green tea and berry pie");
            number1.take_info();

            int drinkChoice, foodChoice;
            std::cout << "Choose a drink : ";
            std::cin >> drinkChoice;
            std::cout << "Choose a meal: ";
            std::cin >> foodChoice;

            if ((drinkChoice == 1 && foodChoice == 3) || (drinkChoice == 1 && foodChoice == 4)) {
                Tea Greentea("Green");
                Greentea.prepare();
                Greentea.serve();

                Pie pie1("Berry Pie");
                pie1.prepare();
                pie1.serve();




                std::cout << "Ivan made a good tea and pie, you have enjoyed" << std::endl;
            }
            else {
                std::cout << "Ivan couldn`t make a tasty order, you are not satisfying" << std::endl;
                std::cout << "Game over" << std::endl;
            }
        }
        else if (baristaChoice == 2) {
            Staff number2("Kate", "Good at preparing black tea and apple pie");
            number2.take_info();

            int drinkChoice, foodChoice;
            std::cout << "Choose a drink: ";
            std::cin >> drinkChoice;
            std::cout << "Choose a meal: ";
            std::cin >> foodChoice;

            if ((drinkChoice == 2 && foodChoice == 3) || (drinkChoice == 2 && foodChoice == 3)) {
                Tea Blacktea("Black");
                Blacktea.prepare();
                Blacktea.serve();

                Pie pie2("Apple pie");
                pie2.prepare();
                pie2.serve();

                std::cout << "Kate made a good tea and pie, you have enjoyed" << std::endl;
            }
            else {
                std::cout << "Kate couldn`t make a tasty order, you are not satisfying" << std::endl;
            }
        }
    }
    else if (cafeChoice == 2) {
        Cafe coffee("COFFEE");
        coffee.get_info();

        int baristaChoice;
        std::cout << "Choose a barista : 1.Mary  or   2.Anastasia" << std::endl;
        std::cin >> baristaChoice;

        std::cout << "  Good Afternoon, what would u like? We have: 1.Cappuccino(10@), 2.Latte(30@), 3.Cinnamon bun(50@), 4.Croissant(60@)" << std::endl;

        if (baristaChoice == 1) {
            Staff number1("Mary", "Good at preparing Cappuccino and Cinnamon bun");
            number1.take_info();

            int drinkChoice, foodChoice;
            std::cout << "Choose a drink: ";
            std::cin >> drinkChoice;
            std::cout << "Choose a meal: ";
            std::cin >> foodChoice;

            if ((drinkChoice == 1 && foodChoice == 3) || (drinkChoice == 1 && foodChoice == 4)) {
                Coffee Cappuccino("Cappuccino");
                Cappuccino.prepare();
                Cappuccino.serve();

                Pie bun1("Cinnamon bun");
                bun1.prepare();
                bun1.serve();

                std::cout << "Mary made a good coffee and bun, you have enjoyed" << std::endl;
            }
            else {
                std::cout << "Mary couldn`t make a tasty order, you are not satisfying" << std::endl;
            }
        }
        else if (baristaChoice == 2) {
            Staff number2("Anastasia", "Good at preparing Latte or Croissant");
            number2.take_info();

            int drinkChoice, foodChoice;
            std::cout << "Choose a drink: ";
            std::cin >> drinkChoice;
            std::cout << "Choose a meal";
            std::cin >> foodChoice;

            if ((drinkChoice == 2 && foodChoice == 3) || (drinkChoice == 2 && foodChoice == 4)) {
                Coffee Latte("Latte");
                Latte.prepare();
                Latte.serve();

                Pie bun2("Croissant");
                bun2.prepare();
                bun2.serve();

                std::cout << "Anastasia made a good coffee and bun, you have enjoyed " << std::endl;
            }
            else {
                std::cout << "Anastasia couldn`t make a tasty order, you are not satisfying " << std::endl;
            }
        }
    }

    return 0;
}