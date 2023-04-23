#ifndef MAIN_H
#define MAIN_H


#include <iostream>
#include <windows.h>

#include "cls_entities.h"

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


/*-----------* FIGHT *-----------*/

void fct_void_player_fight_inventory()
{



}

void fct_void_opponent_fight_choice() // Algorithm for opponent to act on fight turn
{

	cout << "*Your opponent's turn...*\n" << endl;

	system("pause");

	obj_character.fct_void_character_take_damage(obj_character, obj_opponent);

	// Displays stats of fighters to inform player of current situation

	obj_character.fct_void_display_character_stats(obj_character);
	obj_opponent.fct_void_display_opponent_stats(obj_opponent);

}

void fct_void_player_fight_choice() // Algorithm for player to act on fight turn
{

	int int_player_fight_choice; // Represents player fight turn choice

	cout << "Your turn..." << endl;

	// Displays fight turn choices

	cout << "\nPlease choose your action:" << endl;
	cout << "[1] Attack" << endl;
	cout << "[2] Escape" << endl;
	cout << "[3] Inventory" << endl;

	cin >> int_player_fight_choice;

	if (int_player_fight_choice == 1) // If player tries to attacks
	{

		obj_character.fct_void_character_deal_damage(obj_character, obj_opponent);

		system("pause");

	}
	else if (int_player_fight_choice == 2) { // If player tries to escape

		cout << "TO ADD IN CODE: escape from fight" << endl;

	}
	else if (int_player_fight_choice == 3) { // If player opens inventory

		cout << "TO ADD IN CODE: open inventory" << endl;

		fct_void_player_fight_inventory();

	}
	else { // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice" << endl;

		fct_void_player_fight_choice();

	}

	// Displays stats of fighters to inform player of current situation

	obj_character.fct_void_display_character_stats(obj_character);
	obj_opponent.fct_void_display_opponent_stats(obj_opponent);

}

void fct_void_fight(cls_entities obj_character, cls_entities obj_opponent)
{

	str str_fight_turn; // Represents fight turns (player or opponent)


	if (obj_character.getInt_entity_base_speed() > obj_opponent.getInt_entity_base_speed())
	{

		str_fight_turn = "player";

	}
	else if (obj_opponent.getInt_entity_base_speed() > obj_character.getInt_entity_base_speed())
	{

		str_fight_turn = "opponent";

	}

	do // Checks speeds of fighters to set fight turn and calls fight functions while both fighters aren't dead
	{

		if (str_fight_turn=="player")
		{

			fct_void_player_fight_choice();

			str_fight_turn = "opponent";

		}
		else if (str_fight_turn == "opponent") {
			
			fct_void_opponent_fight_choice();

			str_fight_turn = "player";

		}
		else { // If speeds are equal

			cout << "TO ADD IN CODE: to define" << endl;

		}

	} while (obj_character.getInt_entity_health() > 0 && obj_opponent.getInt_entity_health() > 0);

	// Calling functions depending on healths to show player the result of the fight

	if (obj_opponent.getInt_entity_health() <= 0 && obj_character.getInt_entity_health() > 0)
	{

		obj_opponent.fct_void_opponent_death(obj_opponent);

	}
	else if (obj_character.getInt_entity_health() <= 0 && obj_opponent.getInt_entity_health() > 0) {

		obj_character.fct_void_character_death(obj_character);

	}
	else if (obj_character.getInt_entity_health() <= 0 && obj_opponent.getInt_entity_health() <= 0) {

		obj_opponent.fct_void_opponent_death(obj_opponent);
		obj_character.fct_void_character_death(obj_character);

	}
	else { // If none of the cases above happened

		cout << "Fight result problem" << endl;

	}

}

/*-----------* CHARACTER CHOICE *-----------*/

void fct_void_character_choice() // Displaying character choices and setting obj_character to player choice
{

	int int_character_choice; // Represents character choice of player
	int int_character_choice_confirm;// Represents confirming choice of character

	// Displays character selection choices

	cout << "Choose your character:\n" << endl;
	cout << "[1]: " << obj_gakutan.getStr_entity_class() << " " << obj_gakutan.getStr_entity_name() << endl;
	cout << "[2]: " << obj_elva.getStr_entity_class() << " " << obj_elva.getStr_entity_name() << endl;
	cout << "[3]: " << obj_dain.getStr_entity_class() << " " << obj_dain.getStr_entity_name() << endl;
	cout << "[999]: Close the game" << endl;

	cin >> int_character_choice;

	if (int_character_choice == 1) // If player chooses character Gakutan
	{

		obj_character = obj_gakutan; // Sets obj_character stats to Gakutan stats

		cout << "You chose " << obj_gakutan.getStr_entity_class() << " " << obj_gakutan.getStr_entity_name() << " the " << obj_gakutan.getStr_entity_race() << "\n" << endl;

		obj_character.fct_void_display_character_stats(obj_character);

	}
	else if (int_character_choice == 2) { // If player chooses character Elva

		obj_character = obj_elva; // Sets obj_character stats to Elva stats

		cout << "You chose " << obj_elva.getStr_entity_class() << " " << obj_elva.getStr_entity_name() << " the " << obj_elva.getStr_entity_race() << "\n" << endl;

		obj_elva.fct_void_display_character_stats(obj_character);

	}
	else if (int_character_choice == 3) { // If player chooses character Dain

		obj_character = obj_dain; // Sets obj_character stats to Dain stats

		cout << "You chose " << obj_dain.getStr_entity_class() << " " << obj_dain.getStr_entity_name() << " the " << obj_dain.getStr_entity_race() << "\n" << endl;

		obj_dain.fct_void_display_character_stats(obj_character);

	}
	else if (int_character_choice == 999) { // If player chooses to exit the game

		cout << "Exiting the game" << endl;

		exit(EXIT_SUCCESS);

	}else{ // If player writes an invalid choice

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		fct_void_character_choice();

	}

	// Displays character selection confirming choices

	cout << "Do you want to continue?\n" << endl;
	cout << "[1] Yes" << endl;
	cout << "[2] No" << endl;

	cin >> int_character_choice_confirm;

	if (int_character_choice_confirm==1) // If player confirms character choice
	{

		// fct_void_plain_script called in main.cpp

	}
	else if (int_character_choice_confirm == 2) { // If player wants to change character choice

		fct_void_character_choice();

	}else { // If player writes an invalid choice

	cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

	fct_void_character_choice();

	}


}

/*-----------* MENUS *-----------*/

void fct_void_settings() // Displaying settings menu
{

	int int_player_settings_choice; // Represents settings choices
	
	// Displays settings choices

	cout << "Choose the setting you want to change:\n" << endl;
	cout << "[1] TO ADD IN CODE: setting" << endl;
	cout << "[2] TO ADD IN CODE: setting" << endl;
	cout << "[3] Go back" << endl;

	cin >> int_player_settings_choice;

	switch(int_player_settings_choice)
	{

	case 1: // If player chooses to change setting1
	
		cout << "TO ADD IN CODE: setting1" << endl;

	case 2: // If player chooses to change setting2

		cout << "TO ADD IN CODE: setting2" << endl;

	case 3: // If player chooses to go back to main menu

		cout << "TO ADD IN CODE: go back to main menu" << endl;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		fct_void_settings();

	}

}

void fct_void_main_menu() // Displaying main menu 
{

	int int_main_menu_choice; // Represents main menu choices

	// Displays main menu choices

	cout << "Welcome to Memoris, choose your action:\n" << endl;
	cout << "[1] Start the game" << endl;
	cout << "[2] Go to settings" << endl;
	cout << "[999] Close the game" << endl;

	cin >> int_main_menu_choice;

	switch (int_main_menu_choice)
	{

	case 1: // If player chooses to start the game

		// fct_void_character_choice called in main.cpp

		break;

	case 2: // If player chooses to go to settings

		fct_void_settings();

		fct_void_main_menu();

		break;

	case 999: // If player chooses to close the game

		cout << "Exiting the game..." << endl;
		exit(EXIT_SUCCESS);

	default: // If player writes and invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice" << endl;

		fct_void_main_menu();

	}

}

/*-----------* DIRECTIONS *-----------*/

void fct_void_remieu_script()
{

	cout << "You enter the cave walking carefully because of the lack of light..." << endl;

	system("pause");

	cout << "The cave seems to go deep down to the point you can't even see the light anymore as you feel a freezing cold breeze" << endl;

	system("pause");

	cout << "After a long time walking carefully so as to avoid falling, you notice you're slowly going up again and you soon perceive a weak light while the temperature seems to continue dropping" << endl;

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

	cout << "The dawn coming, you finally convince yourself to go outside" << endl;

	system("pause");

	cout << "In front of you, halves of corpses and crimson stains scattered on the angelic white snow, and a blazing Sun ascending as if nothing happened" << endl;

}

void fct_void_after_cave_script()
{

	int int_wander_further_choice; // Represents player choice of wandering further after wandering or not


	cout << "You decide to continue your way, pass by the cave, and wander behind it" << endl;

	system("pause");

	// Displays choices to continue wandering further or try to come back

	cout << "As the river entered the cave, you have no landmark to follow or anywhere to go, you feel like its been a long time since you passed the cave and start to lose hope, do you want to try to come back?" << endl;
	cout << "[1] Yes" << endl;
	cout << "[2] No" << endl;

	cin >> int_wander_further_choice;

	switch (int_wander_further_choice)
	{

	case 1: // If player chooses to try to come back: dies of Blizzard

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

	case 2: // If player chooses to continue wandering: dies of Blizzard

		cout << "You decide to continue wandering, but you soon realize the darkness starts to overlay the sky" << endl;

		system("pause");

		cout << "As the night comes in a glimpse of an eye, the temperature around you seems to fall drastically, a blizzard appears and the grass becomes frozen" << endl;

		system("pause");

		cout << "Before you even have time to notice, your legs froze as you were standing and realizing what seemed to happen, a disaster just like in those novels you-" << endl;

		system("pause");

		obj_character.fct_void_character_death(obj_character);

		Sleep(5000);

	default: // If player writes an invalid choice

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		fct_void_after_cave_script();

	}

}

void fct_void_cave_script()
{

	int int_enter_cave_choice; // Represents player choice of entering cave after slimes or not


	cout << "You decide to spread out a bit of the river and notice 2 other similar specimens alongside it" << endl;

	system("pause");

	cout << "As you acknowledge the environment around you, you spot on top of a high mountain far away what seems to be a flying creature, surprisingly large enough for you to notice it" << endl;

	system("pause");

	cout << "After some time walking, you arrive to a cave entry" << endl;

	system("pause");

	// Displays choices to enter cave, pass by or go back to plain

	cout << "Do you want to enter it, continue your way or go back?" << endl;
	cout << "[1] Enter" << endl;
	cout << "[2] Pass by" << endl;
	cout << "[3] Go back" << endl;

	cin >> int_enter_cave_choice;

	switch (int_enter_cave_choice)
	{

	case 1: // If player enters cave: arrives to Remieu while Blizzard starts

		fct_void_remieu_script();

	case 2: // If player passes by cave: wanders after it without finding anything, dies of Blizzard no matter the choices made after

		fct_void_after_cave_script();

	case 3: // If player chooses to go back to plain

		cout << "You go back to where you awakened" << endl;

		system("pause");

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		fct_void_cave_script();

	}

}

void fct_void_river_script()
{

	int int_slime_choice; // Represents player choice of approaching slimes after river or not


	cout << "After some time following the river, you encounter a green mass of what seems to be a non newtonian fluid" << endl;

	system("pause");

	// Displays choices to approach slimes or not

	cout << "Do you want to approach it?" << endl;
	cout << "[1] Yes" << endl;
	cout << "[2] No" << endl;

	cin >> int_slime_choice;

	switch (int_slime_choice)
	{

	case 1: // If player approaches slimes: scripted encounter and fight with Slimes

		cout << "You approach it slowly, but it starts to clinge to your arm, you throw it away hastily" << endl;

		system("pause");

		cout << "However, it come backs and seems to be unfriendly" << endl;

		obj_opponent = obj_slime;

		system("pause");

		cout << "The green mass is attacking you!\n" << endl;

		system("pause");

		fct_void_fight(obj_character, obj_opponent);

	case 2: // If player passes by slimes: arrives to cave

		fct_void_cave_script();

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		fct_void_river_script();

	}

}

void fct_void_road_script()
{

	int int_enter_forest_choice; // Represents player choice of entering forest after road or not


	cout << "After some time walking, you stumble upon a hazy and eerie forest" << endl;

	system("pause");

	// Displays choices to enter forest or not

	cout << "Do you want to enter it?" << endl;
	cout << "[1] Yes" << endl;
	cout << "[2] No" << endl;

	cin >> int_enter_forest_choice;

	switch (int_enter_forest_choice)
	{

	case 1: // If player enters forest: scripted encounter and fight with Oni too strong for player at start of game

		cout << "You enter prudently the forest..." << endl;

		system("pause");

		cout << "You see a strange figure from afar, but before you understand what it is, it approaches you quickly\n" << endl;

		obj_opponent = obj_oni;

		system("pause");

		cout << "The enormous entity is attacking you!\n" << endl;

		system("pause");

		fct_void_fight(obj_character, obj_opponent);

	case 2: // If player doesn't enter forest

		cout << "You go back to where you awakened" << endl;

		system("pause");

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		fct_void_road_script();

	}

}

void fct_void_farm_script()
{

	int int_old_man_talk_choice; // Represents player choice of talking to old man in farm or not
	int int_old_man_answer_choice; // Represents player answer to old man in farm

	cout << "You approach the farm slowly and you see an old man sat on a chair" << endl;

	system("pause");

	// Displays choices of talking to old man in farm

	cout << "Do you want to go talk to him?" << endl;
	cout << "[1] Yes" << endl;
	cout << "[2] No" << endl;

	cin >> int_old_man_talk_choice;

	switch (int_old_man_talk_choice)
	{

	case 1: // If players chooses to talk to old man

		cout << "You approached the old man and he turns at you" << endl;

		system("pause");

		// Displays choices to answer to old man in farm

		cout << "-Ay young man, what's you doing in a place like that! You lost?" << endl;
		cout << "[1] Nod" << endl;
		cout << "[2] Deny" << endl;

		cin >> int_old_man_answer_choice;

		if (int_old_man_answer_choice == 1) // If players tells old man he is lost
		{

			// Old man explains where all routes from plain lead

			cout << "Well, lemme help ya real quick!" << endl;

			system("pause");

			cout << "The river you see next to my farm leads to a cave after the which you'll be able to join Remieu, the nearest village" << endl;

			system("pause");

			cout << "The road right there however is a no go if ya want my opinion, strange rumors say the hazy forest where it leads is full of powerful and mysterious creatures" << endl;

			system("pause");

			cout << "Hopping to see ya again soon ma guy!" << endl;

			cout << "You go back to where you awakened" << endl;

			system("pause");

		}else if (int_old_man_answer_choice == 2) { // If players tells old man he isn't lost

			cout << "Well, I won't keep you there longer, see ya!" << endl;

			cout << "You go back to where you awakened" << endl;

			system("pause");

		}else{ // If player writes an invalid choice

			cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

			fct_void_farm_script();

		}

		break;

	case 2: // If players chooses not to talk to old man

		cout << "You go back to where you awakened" << endl;

		system("pause");

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		fct_void_farm_script();

	}

}

void fct_void_plain_script()
{

	int int_direction_choice; // Represents where player chooses to from from plain


	// Displays directions from plain choices

	cout << "Choose where to go:" << endl;
	cout << "[1] Farm" << endl;
	cout << "[2] Road" << endl;
	cout << "[3] River" << endl;
	cout << "[999] Close the game" << endl;

	cin >> int_direction_choice;

	switch (int_direction_choice) // If player chooses to go to farm
	{

	case 1:

		fct_void_farm_script();

		break;

	case 2: // If player chooses to go to road

		fct_void_road_script();

		break;

	case 3: // If player chooses to go to river

		fct_void_river_script();

		break;

	case 999: // If player chooses to exit game

		cout << "Exiting the game" << endl;
		exit(EXIT_SUCCESS);

	default: // If player writes an invalid choice

		cout << "Invalid choice,please enter the number corresponding to your desired choice" << endl;

		break;

	}

	fct_void_plain_script();

}









#endif