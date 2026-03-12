#include <iostream>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"

int main() {
    Player* player = nullptr;
    int job_choice = 0;

    std::cout << "직업을 선택 해주세요." << std::endl;
    std::cout << "1.전사 2.마법사 3.도적 4.궁수" << std::endl;
    std::cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior();
        break;

    case 2:
        player = new Magician();
        break;

    case 3:
        player = new Thief();

        break;

    case 4:
        player = new Archer();
        break;

    default:
        std::cout << "다시 선택해 주세요." << std::endl;
        break;
    }

    if (player != nullptr) {
        player->attack();
        player->printPlayerStatus();

        delete player;
    }

    return 0;
}
