#ifndef GAME_H
#define GAME_H


#include <iostream>
#include <windows.h>

using std::cout;
using std::endl;
using std::cin;
using str = std::string;

/*NAMING SYNTAX:

constructor xxx of class xxx:       cls_xxx
struct xxx:                         stc_xxx
class xxx:                          cls_xxx
object xxx:                         obj_xxx
int fct xxx:                        fct_int_xxx
set int xxx:                        set_int_xxx
get int xxx:                        get_int_xxx
int pointer xxx:                    ptr_int_xxx

string var xxx:                     str_xxx
int var xxx:                        int_xxx
unsigned int var xxx:               uint_xxx
const str var xxx:                  STR_xxx
const int var xxx:                  INT_xxx
const uint var xxx:                 UINT_xxx

fct int arg xxx:                    int_aXxx
*/


/*-----------* CLASSES CREATIONS *-----------*/

class cls_items // [MISC] Items properties set
{

private:

	/*Items stats creation*/

	str str_item_name;
	str str_item_rarity;

	int int_item_heal_stat;
	int int_item_mana_stat;

public:

	/*Constructor to faster items creation*/

	cls_items(str str_aItem_name, str str_aItem_rarity, int int_aItem_heal_stat, int int_aItem_mana_stat)
	{

		setStr_item_name(str_aItem_name);
		setStr_item_rarity(str_aItem_rarity);

		setInt_item_heal_stat(int_aItem_heal_stat);
		setInt_item_mana_stat(int_aItem_mana_stat);

	}


	void setStr_item_name(str str_aItem_name)
	{
		str_item_name = str_aItem_name;
	}

	str getStr_item_name()
	{

		return str_item_name;
	}


	void setStr_item_rarity(str str_aItem_rarity)
	{
		str_item_rarity = str_aItem_rarity;
	}

	str getStr_item_rarity()
	{

		return str_item_rarity;
	}


	void setInt_item_heal_stat(int int_aItem_heal_stat)
	{
		int_item_heal_stat = int_aItem_heal_stat;
	}

	int getInt_item_heal_stat()
	{

		return int_item_heal_stat;
	}


	void setInt_item_mana_stat(int int_aItem_mana_stat)
	{
		int_item_mana_stat = int_aItem_mana_stat;
	}

	int getInt_item_mana_stat()
	{

		return int_item_mana_stat;
	}

};

class cls_entities // [MISC] Entities properties set
{

private:

	/*Entities stats creation*/

	str str_entity_name;
	str str_entity_class;
	str str_entity_race;

	int int_entity_lvl;
	float float_entity_xp;

	int int_entity_health;
	int int_entity_max_health;
	int int_entity_mana;
	int int_entity_max_mana;

	int int_entity_base_atk;
	int int_entity_base_heal;
	int int_entity_base_speed;

public:

	/*Constructor to faster entities creation*/

	cls_entities(str str_aEntity_name, str str_aEntity_class, str str_aEntity_race, int int_aEntity_lvl, float float_aEntity_xp, int int_aEntity_health, int int_aEntity_max_health, int int_aEntity_mana, int int_aEntity_max_mana, int int_aEntity_base_atk, int int_aEntity_base_heal, int int_aEntity_base_speed)
	{

		setStr_entity_name(str_aEntity_name);
		setStr_entity_class(str_aEntity_class);
		setStr_entity_race(str_aEntity_race);

		setInt_entity_lvl(int_aEntity_lvl);
		setFloat_entity_xp(float_aEntity_xp);

		setInt_entity_health(int_aEntity_health);
		setInt_entity_max_health(int_aEntity_max_health);
		setInt_entity_mana(int_aEntity_mana);
		setInt_entity_max_mana(int_aEntity_max_mana);

		setInt_entity_base_atk(int_aEntity_base_atk);
		setInt_entity_base_heal(int_aEntity_base_heal);
		setInt_entity_base_speed(int_aEntity_base_speed);

	}


	void setStr_entity_name(str str_aEntity_name)
	{
		str_entity_name = str_aEntity_name;
	}

	str getStr_entity_name()
	{

		return str_entity_name;
	}


	void setStr_entity_class(str str_aEntity_class)
	{
		str_entity_class = str_aEntity_class;
	}

	str getStr_entity_class()
	{

		return str_entity_class;
	}


	void setStr_entity_race(str str_aEntity_race)
	{
		str_entity_race = str_aEntity_race;
	}

	str getStr_entity_race()
	{

		return str_entity_race;
	}


	void setInt_entity_lvl(int int_aEntity_lvl)
	{
		int_entity_lvl = int_aEntity_lvl;
	}

	int getInt_entity_lvl()
	{

		return int_entity_lvl;
	}


	void setFloat_entity_xp(float float_aEntity_xp)
	{
		float_entity_xp = float_aEntity_xp;
	}

	float getFloat_entity_xp()
	{

		return float_entity_xp;
	}


	void setInt_entity_health(int int_aEntity_health)
	{
		int_entity_health = int_aEntity_health;
	}

	int getInt_entity_health()
	{

		return int_entity_health;
	}


	void setInt_entity_max_health(int int_aEntity_max_health)
	{
		int_entity_max_health = int_aEntity_max_health;
	}

	int getInt_entity_max_health()
	{

		return int_entity_max_health;
	}


	void setInt_entity_mana(int int_aEntity_mana)
	{
		int_entity_mana = int_aEntity_mana;
	}

	int getInt_entity_mana()
	{

		return int_entity_mana;
	}


	void setInt_entity_max_mana(int int_aEntity_max_mana)
	{
		int_entity_max_mana = int_aEntity_max_mana;
	}

	int getInt_entity_max_mana()
	{

		return int_entity_max_mana;
	}


	void setInt_entity_base_atk(int int_aEntity_base_atk)
	{
		int_entity_base_atk = int_aEntity_base_atk;
	}

	int getInt_entity_base_atk()
	{

		return int_entity_base_atk;
	}


	void setInt_entity_base_heal(int int_aEntity_base_heal)
	{
		int_entity_base_heal = int_aEntity_base_heal;
	}

	int getInt_entity_base_heal()
	{

		return int_entity_base_heal;
	}

	void setInt_entity_base_speed(int int_aEntity_base_speed)
	{
		int_entity_base_speed = int_aEntity_base_speed;
	}

	int getInt_entity_base_speed()
	{
		return int_entity_base_speed;
	}




	void fct_void_display_character_stats(cls_entities obj_character)
	{

		cout << "Your stats are:" << endl;

		cout << "LVL: " << obj_character.getInt_entity_lvl() << endl;
		cout << "Health: " << obj_character.getInt_entity_max_health() << endl;
		cout << "Mana: " << obj_character.getInt_entity_max_mana() << endl;
		cout << "Attack: " << obj_character.getInt_entity_base_atk() << endl;
		cout << "Heal: " << obj_character.getInt_entity_base_heal() << endl;
		cout << "Speed: " << obj_character.getInt_entity_base_speed() << "\n" << endl;

	}

	void fct_void_display_opponent_stats(cls_entities obj_opponent)
	{

		cout << "Your opponent's stats are:" << endl;

		cout << "LVL: " << obj_opponent.getInt_entity_lvl() << endl;
		cout << "Health: " << obj_opponent.getInt_entity_max_health() << endl;
		cout << "Mana: " << obj_opponent.getInt_entity_max_mana() << endl;
		cout << "Attack: " << obj_opponent.getInt_entity_base_atk() << endl;
		cout << "Heal: " << obj_opponent.getInt_entity_base_heal() << endl;
		cout << "Speed: " << obj_opponent.getInt_entity_base_speed() << "\n" << endl;

	}


	void fct_void_character_deal_damage(cls_entities obj_character, cls_entities obj_opponent) // [MAIN] For an entity to deal damage
	{

		obj_opponent.setInt_entity_health(obj_opponent.getInt_entity_health() - obj_character.getInt_entity_base_atk());

		cout << "You dealt " << obj_character.getInt_entity_base_atk() << " dmg\n" << endl;

	}

	void fct_void_character_take_damage(cls_entities obj_character, cls_entities obj_opponent) // [MAIN] For an entity to take damage
	{

		obj_character.setInt_entity_health(obj_character.getInt_entity_health() - obj_opponent.getInt_entity_base_atk());

		cout << "You received " << obj_opponent.getInt_entity_base_atk() << " dmg\n" << endl;

	}


	void fct_void_character_heal(cls_entities obj_character, cls_items item) // [MAIN] For an entity to heal
	{

		obj_character.setInt_entity_health(obj_character.getInt_entity_health() + item.getInt_item_heal_stat());

		cout << "You healed " << item.getInt_item_heal_stat() << " hp\n" << endl;

	}

	void fct_void_opponent_heal(cls_entities obj_opponent, cls_items item) // [MAIN] For an entity to heal
	{

		obj_opponent.setInt_entity_health(obj_opponent.getInt_entity_health() + item.getInt_item_heal_stat());

		cout << "Your opponent healed " << item.getInt_item_heal_stat() << " hp\n" << endl;

	}


	void fct_void_character_death(cls_entities obj_character)
	{

		cout << "You died" << endl;
		cout << "Respawning..." << endl;

		obj_character.setInt_entity_health(obj_character.getInt_entity_max_health());

	}

	void fct_void_opponent_death(cls_entities obj_opponent)
	{

		cout << "You killed your opponent" << endl;

	}

};

/*-----------* OBJECTS CREATIONS *-----------*/

/*Creating characters with stats set*/

cls_entities obj_gakutan("Gakutan", "[Assassin]", "???", 1, 0, 50, 50, 20, 20, 70, 0, 170);

cls_entities obj_elva("Elva", "[Priest]", "angel", 1, 0, 150, 150, 20, 20, 15, 35, 100);

cls_entities obj_dain("Dain", "[Warrior]", "dwarf", 1, 0, 200, 200, 20, 20, 30, 0, 60);

cls_entities obj_character("No name", "No class", "No race", 0, 0, 0, 0, 0, 0, 0, 0, 0);

/*Creating ennemies with stats set*/

cls_entities obj_slime("No name", "No class", "slime", 1, 0, 30, 30, 20, 20, 5, 0, 70);

cls_entities obj_goblin("No name", "No class", "goblin", 1, 0, 40, 40, 20, 20, 15, 0, 80);

cls_entities obj_ghost("No name", "No class", "ghost", 1, 0, 55, 55, 20, 20, 25, 0, 90);

cls_entities obj_oni("No name", "No class", "oni", 30, 0, 200, 200, 20, 20, 70, 0, 70);

cls_entities obj_kirin("No name", "No class", "kirin", 50, 0, 190, 190, 20, 20, 110, 30, 150);

cls_entities obj_opponent("No name", "No class", "No race", 0, 0, 0, 0, 0, 0, 0, 0, 0);

/*Creating items with stats set*/

cls_items obj_heal_potion("Heal potion", "Common", 20, 0);

cls_items obj_mana_potion("Mana potion", "Common", 0, 5);

cls_items item("No name", "No rarity", 0, 0);

/*-----------* GAME STARTS *-----------*/

void fct_void_character_fight_inventory()
{



}

void fct_void_opponent_fight_choice()
{

	int int_fight_turn;

	int_fight_turn = 2;

	cout << "*Your opponent's turn...*\n" << endl;

	system("pause");

	obj_character.fct_void_character_take_damage(obj_character, obj_opponent);

	obj_character.fct_void_display_character_stats(obj_character);
	obj_opponent.fct_void_display_opponent_stats(obj_opponent);

}

void fct_void_character_fight_choice()
{

	int int_character_fight_choice;
	int int_fight_turn; // 1: player turn, 2: opponent turn


	int_fight_turn = 1;

	cout << "Your turn..." << endl;

	cout << "\nPlease choose your action:" << endl;
	cout << "[1] Attack" << endl;
	cout << "[2] Escape" << endl;
	cout << "[3] Inventory" << endl;

	cin >> int_character_fight_choice;

	if (int_character_fight_choice == 1)
	{

		obj_character.fct_void_character_deal_damage(obj_character, obj_opponent);

		int_fight_turn = 2;
		system("pause");

	}
	else if (int_character_fight_choice == 2) {

		cout << "TO ADD IN CODE: escape from fight" << endl;

		int_fight_turn = 2;

	}
	else if (int_character_fight_choice == 3) {

		cout << "TO ADD IN CODE: open inventory" << endl;

		fct_void_character_fight_inventory();

	}
	else {

		cout << "Invalid choice, please enter the number corresponding to your desired choice" << endl;

		fct_void_character_fight_choice();

	}

	obj_character.fct_void_display_character_stats(obj_character);
	obj_opponent.fct_void_display_opponent_stats(obj_opponent);

}

int fct_int_fight(cls_entities obj_character, cls_entities obj_opponent)
{

	do
	{

		if (obj_character.getInt_entity_base_speed() > obj_opponent.getInt_entity_base_speed())
		{

			fct_void_character_fight_choice();


		}
		else if (obj_opponent.getInt_entity_base_speed() > obj_character.getInt_entity_base_speed()) {

			fct_void_opponent_fight_choice();

		}
		else {

			cout << "TO ADD IN CODE: to define" << endl;

		}

	} while (obj_character.getInt_entity_health() > 0 && obj_opponent.getInt_entity_health() > 0);



	if (obj_opponent.getInt_entity_health() <= 0 && obj_character.getInt_entity_health() > 0)
	{

		obj_opponent.fct_void_opponent_death(obj_opponent);

		return 1;

	}
	else if (obj_character.getInt_entity_health() <= 0 && obj_opponent.getInt_entity_health() > 0) {

		obj_character.fct_void_character_death(obj_character);

		return 0;

	}
	else if (obj_character.getInt_entity_health() <= 0 && obj_opponent.getInt_entity_health() <= 0) {

		obj_opponent.fct_void_opponent_death(obj_opponent);
		obj_character.fct_void_character_death(obj_character);

		return 0;

	}
	else {

		cout << "what?" << endl;

	}

}

/*-----------* FIGHT *-----------*/

void fct_void_direction_choice() // [MAIN] Choose direction from plain
{

	str str_current_place = "Plain";
	int int_direction_choice;
	int int_fight_result;

	int int_old_man_talk_choice;

	int int_enter_forest_choice;

	int int_slime_choice;
	int int_enter_cave_choice;
	int int_wander_choice;

	if (str_current_place == "Plain")
	{

		cout << "Choose where to go:" << endl;
		cout << "[1] Farm" << endl;
		cout << "[2] Road" << endl;
		cout << "[3] River" << endl;
		cout << "[999] Close the game" << endl;

		cin >> int_direction_choice;

		if (int_direction_choice == 1) // If player chooses to go to farm
		{

			str_current_place = "Farm";

			cout << "You approach the farm slowly and you see an old man sat on a chair" << endl;

			system("pause");;

			cout << "Do you want to go talk to him?" << endl;
			cout << "[1] Yes" << endl;
			cout << "[2] No" << endl;

			cin >> int_old_man_talk_choice;

			if (int_old_man_talk_choice == 1) // If players chooses to talk to old man
			{

				cout << "You approached the old man and he turns at you" << endl;

				system("pause");

				cout << "-Ay young man, what's you doing in a place like that! You lost?" << endl;
				cout << "[1] Nod" << endl;
				cout << "[2] Deny" << endl;

				cin >> int_old_man_talk_choice;

				if (int_old_man_talk_choice == 1) // If players tells old man lost
				{

					cout << "Well, lemme help ya real quick!" << endl;

					system("pause");

					cout << "The river you see next to my farm leads to a cave after the which you'll be able to join Remieu, the nearest village" << endl;

					system("pause");

					cout << "The road right there however is a no go if ya want my opinion, strange rumors say the hazy forest where it leads is full of powerful and mysterious creatures" << endl;

					system("pause");

					cout << "Hopping to see ya again soon ma guy!" << endl;

					cout << "You go back to where you awakened" << endl;

					system("pause");

					fct_void_direction_choice();

				}
				else if (int_old_man_talk_choice == 2) { // If players tells old man not lost

					cout << "Well, I won't keep you there longer, see ya!" << endl;

					cout << "You go back to where you awakened" << endl;

					system("pause");

					fct_void_direction_choice();

				}
				else { // If players writes invalid answer

					cout << "Dunno what language you're talking here!" << endl;

					cout << "TO ADD IN CODE: restart talk choice" << endl;

				}

			}
			else if (int_old_man_talk_choice == 2) { // If players chooses not to talk to old man

				cout << "You go back to where you awakened" << endl;

				system("pause");

				fct_void_direction_choice();

			}
			else { // If players writes invalid answer

				cout << "Please enter the number corresponding to you desired choice" << endl;

				fct_void_direction_choice();

			}

		}
		else if (int_direction_choice == 2) { // If player chooses to go to road

			str_current_place = "Forest";

			cout << "After some time walking, you stumble upon a hazy and eerie forest" << endl;

			system("pause");

			cout << "Do you want to enter it?" << endl;
			cout << "[1] Yes" << endl;
			cout << "[2] No" << endl;

			cin >> int_enter_forest_choice;

			if (int_enter_forest_choice == 1) // If player enters forest
			{

				cout << "You enter prudently the forest..." << endl;

				system("pause");

				cout << "You see a strange figure from afar, but before you understand what it is, it approaches you quickly\n" << endl;

				obj_opponent = obj_oni;

				system("pause");

				cout << "The enormous entity is attacking you!\n" << endl;

				system("pause");

				int_fight_result = fct_int_fight(obj_character, obj_opponent);

				if (int_fight_result == 1)
				{

					//abc 

				}
				else if (int_fight_result == 0) {

					system("pause");

					fct_void_direction_choice();

				}
				else {

					cout << "what?" << endl;

				}

			}
			else if (int_enter_forest_choice == 2) { // If player doesn't enter forest

				cout << "You go back to where you awakened" << endl;

				system("pause");

				fct_void_direction_choice();

			}
			else {

				cout << "Please enter the number corresponding to you desired choice" << endl;

				cout << "TO ADD IN CODE: restart forest enter choice" << endl;

			}

		}
		else if (int_direction_choice == 3) { // If player chooses to go to river

			str_current_place = "River";

			cout << "After some time following the river, you encounter a green mass of what seems to be a non newtonian fluid" << endl;

			system("pause");

			cout << "Do you want to approach it?" << endl;
			cout << "[1] Yes" << endl;
			cout << "[2] No" << endl;

			cin >> int_slime_choice;

			if (int_slime_choice == 1)
			{

				cout << "You approach it slowly, but it starts to clinge to your arm, you throw it away hastily" << endl;

				system("pause");

				cout << "However, it come backs and seems to be unfriendly" << endl;

				obj_opponent = obj_slime;

				system("pause");

				cout << "The green mass is attacking you!\n" << endl;

				system("pause");

				int_fight_result=fct_int_fight(obj_character, obj_opponent);

				if (int_fight_result == 1)
				{

					//abc

				}
				else if (int_fight_result == 2) {

					system("pause");

					fct_void_direction_choice();

				}
				else {

					cout << "what?" << endl;

				}

			}
			else if (int_slime_choice == 2) {


				cout << "You decide to spread out a bit of the river and notice 2 other similar specimens alongside it" << endl;

				system("pause");

				cout << "As you acknowledge the environment around you, you spot on top of a high mountain far away what seems to be a flying creature, surprisingly large enough for you to notice it" << endl;

				system("pause");

				cout << "After some time walking, you arrive to a cave entry" << endl;

				system("pause");

				cout << "Do you want to enter it, continue your way or go back?" << endl;
				cout << "[1] Enter" << endl;
				cout << "[2] Pass by" << endl;
				cout << "[3] Go back" << endl;

				cin >> int_enter_cave_choice;

				if (int_enter_cave_choice == 1) // If player enters cave
				{

					cout << "You enter the cave walking carefully because of the lack of light..." << endl;

					system("pause");

					cout << "The cave seems to go deep down to the point you can't even see the light anymore as you feel a freezing cold breeze" << endl;

					system("pause");

					cout << "After a long time walking carefully so as to avoid falling, you notice you're slowly going up again and you soon perceive a weak light while the temperature seems to continue dropping"<< endl;

					system("pause");

					cout << "You finally get out of the cave, it seems the night has already fallen and a blizzard arrived, you see a village near the exit of the cave and you rush to it" << endl;

					system("pause");

					cout << "Once in the village, you remark that everything is in ruin, people are standing frozen, others have been cut in half " << endl;

					system("pause");

					cout << "You enter a house only to find more dead bodies, and you cover yourself with blankets that you find and try to understand what happened" << endl;

					system("pause");

					cout << "You decide to wait for the blizzard to pass as sleeping in that temperature could be dangerous" << endl;

					system("pause");

					cout << "You start to feel nauseous as the blood scent floods your nose, but you notice the blizzard stops in a timespand of 5 seconds" << endl;

					system("pause");

					cout<< "The dawn coming, you finally convince yourself to go outside"<< endl;

					system("pause");

					cout <<"In front of you, halves of corpses and crimson stains scattered on the angelic white snow, and a blazing Sun ascending as if nothing happened"<< endl;

				}
				else if (int_enter_cave_choice == 2) { // If player passes by the cave

					cout << "You decide to continue your way, pass by the cave, and wander behind it" << endl;

					system("pause");

					cout << "As the river entered the cave, you have no landmark to follow or anywhere to go, you feel like its been a long time since you passed the cave and start to lose hope, do you want to try to come back?" << endl;
					cout << "[1] Yes" << endl;
					cout << "[2] No" << endl;

					cin >> int_wander_choice;

					if (int_wander_choice == 1)
					{

						cout << "You turn back and try to visualize the way you took until here" << endl;

						system("pause");

						cout << "After some time, you start figuring out the way to the cave, and run towards it" << endl;

						system("pause");

						cout << "However, you soon realize the darkness starts to overlay the sky" << endl;

						system("pause");

						cout << "As the night comes in a glimpse of an eye, the temperature around you seems to fall drastically, a blizzard appears and the grass becomes frozen" << endl;

						system("pause");

						cout << "Before you even have time to notice, your legs froze as you were standing and realizing what seemed to happen, a disaster just like in those novels you-" << endl;

						system("pause");

						obj_character.fct_void_character_death(obj_character);

						Sleep(5000);

						fct_void_direction_choice();

					}
					else if (int_wander_choice == 2) {

						cout << "You decide to continue wandering, but you soon realize the darkness starts to overlay the sky" << endl;

						system("pause");

						cout << "As the night comes in a glimpse of an eye, the temperature around you seems to fall drastically, a blizzard appears and the grass becomes frozen" << endl;

						system("pause");

						cout << "Before you even have time to notice, your legs froze as you were standing and realizing what seemed to happen, a disaster just like in those novels you-" << endl;

						system("pause");

						obj_character.fct_void_character_death(obj_character);

						Sleep(5000);

						fct_void_direction_choice();

					}
					else {

						cout << "Please enter the number corresponding to you desired choice" << endl;

						cout << "TO ADD IN CODE: restart wander choice" << endl;

					}

				}
				else if (int_enter_cave_choice == 3) {

					cout << "You go back to where you awakened" << endl;

					system("pause");

					fct_void_direction_choice();

				}
				else { // If player writes invalid choice

					cout << "Please enter the number corresponding to you desired choice" << endl;

					cout << "TO ADD IN CODE: restart cave enter choice" << endl;

				}

			}
			else {

				cout << "Please enter the number corresponding to you desired choice" << endl;

				cout << "TO ADD IN CODE: restart slime choice" << endl;

			}

		}
		else if (int_direction_choice == 999) {

			cout << "Exiting the game" << endl;
			exit(EXIT_SUCCESS);

		}
		else {

			cout << "Invalid choice,please enter the number corresding to your desired choice" << endl;

			fct_void_direction_choice();

		}


	}
	else if (str_current_place == "Remieu") {

		//abc

	}


}

/*-----------* CHARACTER CHOICE *-----------*/

void fct_void_character_choice() // [MAIN] Creates obj_characters with stats and choose obj_character
{

	int int_character_choice;
	int int_character_choice_confirm;

	cout << "Choose your character:\n" << endl; // Gives to the player the option to choose its obj_character
	cout << "[1]: " << obj_gakutan.getStr_entity_class() << " " << obj_gakutan.getStr_entity_name() << endl;
	cout << "[2]: " << obj_elva.getStr_entity_class() << " " << obj_elva.getStr_entity_name() << endl;
	cout << "[3]: " << obj_dain.getStr_entity_class() << " " << obj_dain.getStr_entity_name() << endl;
	cout << "[999]: Close the game" << endl;

	cin >> int_character_choice;

	if (int_character_choice == 1) // If player chooses gakutan
	{

		obj_character = obj_gakutan;

		cout << "You chose " << obj_gakutan.getStr_entity_class() << " " << obj_gakutan.getStr_entity_name() << " the " << obj_gakutan.getStr_entity_race() << "\n" << endl;

		obj_character.fct_void_display_character_stats(obj_character);

	}
	else if (int_character_choice == 2) { // If player chooses elva

		obj_character = obj_elva;

		cout << "You chose" << obj_elva.getStr_entity_class() << " " << obj_elva.getStr_entity_name() << " the " << obj_elva.getStr_entity_race() << "\n" << endl;

		obj_elva.fct_void_display_character_stats(obj_character);

	}
	else if (int_character_choice == 3) { // If player chooses dain

		obj_character = obj_dain;

		cout << "You chose" << obj_dain.getStr_entity_class() << " " << obj_dain.getStr_entity_name() << " the " << obj_dain.getStr_entity_race() << "\n" << endl;

		obj_dain.fct_void_display_character_stats(obj_character);

	}
	else if (int_character_choice == 999) {

		cout << "Exiting the game" << endl;

		exit(EXIT_SUCCESS);

	}
	else {

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		fct_void_character_choice();

	}


	cout << "Do you want to continue?\n" << endl;
	cout << "[1] Yes" << endl;
	cout << "[2] No" << endl;

	cin >> int_character_choice_confirm;


	if (int_character_choice_confirm == 1) { // If player confirms character choice

		cls_entities obj_character = obj_gakutan;

	}
	else if (int_character_choice_confirm == 2) { // If player comes back on character choice

		fct_void_character_choice();

	}
	else {

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		cout << "TO ADD IN CODE: restart character confirm choice" << endl;

	}

}

/*-----------* MENUS *-----------*/

void fct_void_settings() // [SUB] Settings menu
{

	int int_player_settings_choice;

	cout << "Choose the setting you want to change:\n" << endl;
	cout << "[1] TO ADD IN CODE: setting" << endl;
	cout << "[2] TO ADD IN CODE: setting" << endl;
	cout << "[3] Go back" << endl;

	cin >> int_player_settings_choice;

	if (int_player_settings_choice == 1) // If player chooses setting 1
	{

		cout << "TO ADD IN CODE: setting" << endl;

	}
	else if (int_player_settings_choice == 2) { // If player chooses setting 2

		cout << "TO ADD IN CODE: settings" << endl;

	}
	else if (int_player_settings_choice == 3) { // If player chooses to go back

		cout << "TO ADD IN CODE: go back to main menu" << endl;

	}
	else {

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		fct_void_settings();

	}

}

void fct_void_main_menu() // [MAIN] Main menu 
{

	int int_main_menu_choice;

	cout << "Welcome to Memoris, choose your action:\n" << endl;
	cout << "[1] Start the game" << endl;
	cout << "[2] Go to settings" << endl;
	cout << "[999] Close the game" << endl;

	cin >> int_main_menu_choice;


	if (int_main_menu_choice == 1) // If player chooses to start the game
	{

		//continues

	}
	else if (int_main_menu_choice == 2) { // If player chooses to go to settings

		fct_void_settings();

	}
	else if (int_main_menu_choice == 999) { // If player chooses to close the game

		cout << "Exiting the game..." << endl;
		exit(EXIT_SUCCESS);

	}
	else {

		cout << "Invalid choice, please enter the number corresponding to your desired choice" << endl;

		fct_void_main_menu();

	}

}













#endif