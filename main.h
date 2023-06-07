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
const str xxx:						STR_xxx
const int xxx:						INT_xxx
const uint xxx:						UINT_xxx

fct int arg xxx:                    int_aXxx
*/


extern int int_current_place;

extern bool bool_game_ended;

bool bool_fight_abandoned;

int int_fight_result;

/*-----------* FIGHT *-----------*/

void fct_void_player_escape()
{

	
	cout << "You succesfully escaped" << endl;

}

void fct_void_player_escape_ninety_percent()
{

	if ((rand() % 10) + 1 <= 9)
	{

		fct_void_player_escape();

		bool_fight_abandoned = true;

	}
	else if ((rand() % 10) + 1 > 9)
	{

		cout << "You couldn't escape" << endl;

	}
	else
	{

		cout << "Problem with escape 90%" << endl;

	}

}

void fct_void_player_escape_seventy_percent()
{

	if ((rand() % 10) + 1 <= 7)
	{

		fct_void_player_escape();

		bool_fight_abandoned = true;

	}
	else if ((rand() % 10) + 1 > 7)
	{

		cout << "You couldn't escape" << endl;

	}
	else
	{

		cout << "Problem with escape 70%" << endl;

	}

}

void fct_void_player_escape_fifty_percent()
{

	if ((rand() % 10) + 1 <= 5)
	{

		fct_void_player_escape();

		bool_fight_abandoned = true;

	}
	else if ((rand() % 10) + 1 > 5)
	{

		cout << "You couldn't escape" << endl;

	}
	else
	{

		cout << "Problem with escape 50%" << endl;

	}

}

void fct_void_player_escape_thirty_percent()
{

	if ((rand() % 10) + 1 <= 3)
	{

		fct_void_player_escape();

		bool_fight_abandoned = true;

	}
	else if ((rand() % 10) + 1 > 3)
	{

		cout << "You couldn't escape" << endl;

	}
	else
	{

		cout << "Problem with escape 30%" << endl;

	}

}

void fct_void_player_escape_ten_percent()
{

	if ((rand() % 10) + 1 <= 1)
	{

		fct_void_player_escape();

		bool_fight_abandoned = true;

	}
	else if ((rand() % 10) + 1 > 1)
	{

		cout << "You couldn't escape" << endl;

	}
	else
	{

		cout << "Problem with escape 10%" << endl;

	}

}


void fct_void_player_fight_inventory()
{



}

void fct_void_opponent_fight_choice() // Algorithm for opponent to act on fight turn
{

	cout << "*Your opponent's turn...*\n" << endl;

	system("pause");

	obj_character.fct_void_character_take_damage(&obj_character, &obj_opponent);

	if (obj_character.getInt_entity_health() <= 0 && obj_opponent.getInt_entity_health() > 0)
	{

		obj_character.setInt_entity_health(0);

	}

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

		obj_character.fct_void_character_deal_damage(&obj_opponent, &obj_character);

		if (obj_opponent.getInt_entity_health() <= 0 && obj_character.getInt_entity_health() > 0)
		{

			obj_opponent.setInt_entity_health(0);

		}

		system("pause");

	}
	else if (int_player_fight_choice == 2) { // If player tries to escape

		if (obj_character.getInt_entity_health() > obj_opponent.getInt_entity_health() && obj_character.getInt_entity_health() > obj_character.getInt_entity_health() * 0.4 && obj_opponent.getInt_entity_health() < obj_opponent.getInt_entity_health() * 0.6 && obj_character.getInt_entity_base_speed() > obj_opponent.getInt_entity_base_speed())
		{

			fct_void_player_escape_ninety_percent();

		}
		else if (obj_character.getInt_entity_health() > obj_opponent.getInt_entity_health() && obj_character.getInt_entity_health() > obj_character.getInt_entity_health() * 0.4 && obj_opponent.getInt_entity_health() < obj_opponent.getInt_entity_health() * 0.6)
		{

			fct_void_player_escape_seventy_percent();

		}
		else if (obj_character.getInt_entity_health() > obj_opponent.getInt_entity_health() && obj_character.getInt_entity_health() > obj_character.getInt_entity_health() * 0.4)
		{

			fct_void_player_escape_fifty_percent();

		}
		else if (obj_character.getInt_entity_health() > obj_opponent.getInt_entity_health())
		{

			fct_void_player_escape_thirty_percent();

		}
		else
		{

			fct_void_player_escape_ten_percent();

		}


	}
	else if (int_player_fight_choice == 3) { // If player opens inventory

		cout << "TO ADD IN CODE: open inventory" << endl;

		fct_void_player_fight_inventory();

	}
	else { // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice" << endl;

		fct_void_player_fight_choice();

	}

}

void fct_void_fight(cls_entities* obj_character, cls_entities* obj_opponent)
{

	str str_fight_turn; // Represents fight turns (player or opponent)


	if (obj_character->getInt_entity_base_speed() > obj_opponent->getInt_entity_base_speed())
	{

		str_fight_turn = "player";

	}
	else if (obj_opponent->getInt_entity_base_speed() > obj_character->getInt_entity_base_speed())
	{

		str_fight_turn = "opponent";

	}

	obj_character->fct_void_display_character_stats(obj_character);
	obj_opponent->fct_void_display_opponent_stats(obj_opponent);

	do // Checks speeds of fighters to set fight turn and calls fight functions while both fighters aren't dead
	{

		if (str_fight_turn=="player")
		{

			fct_void_player_fight_choice();

			// Displays stats of fighters to inform player of current situation

			obj_character->fct_void_display_character_stats(obj_character);
			obj_opponent->fct_void_display_opponent_stats(obj_opponent);

			str_fight_turn = "opponent";

		}
		else if (str_fight_turn == "opponent") {
			
			fct_void_opponent_fight_choice();

			// Displays stats of fighters to inform player of current situation

			obj_character->fct_void_display_character_stats(obj_character);
			obj_opponent->fct_void_display_opponent_stats(obj_opponent);

			str_fight_turn = "player";

		}
		else { // If speeds are equal

			cout << "TO ADD IN CODE: to define" << endl;

		}

	} while (obj_character->getInt_entity_health() > 0 && obj_opponent->getInt_entity_health() > 0 && bool_fight_abandoned==false);

	// Calling functions depending on healths to show player the result of the fight

	if (obj_opponent->getInt_entity_health() <= 0 && obj_character->getInt_entity_health() > 0 && bool_fight_abandoned==false)
	{

		obj_opponent->setInt_entity_health(0);

		obj_opponent->fct_void_opponent_death(obj_opponent, obj_character);

		obj_character->fct_void_character_lvl_up(obj_character);

		int_fight_result = 1;

	}
	else if (obj_character->getInt_entity_health() <= 0 && obj_opponent->getInt_entity_health() > 0) {

		obj_character->fct_void_character_death(obj_character);

		int_fight_result = 0;

	}
	else if (obj_character->getInt_entity_health() <= 0 && obj_opponent->getInt_entity_health() <= 0) {

		obj_opponent->fct_void_opponent_death(obj_opponent, obj_character);
		obj_character->fct_void_character_death(obj_character);

		int_fight_result = 0;

	}
	else if (bool_fight_abandoned == true)
	{

		bool_fight_abandoned = false;

		int_fight_result = 2;

		// Continues code ignoring fight

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

	cout << "\nChoose your character:" << endl;
	cout << "[1] " << obj_gakutan.getStr_entity_class() << " " << obj_gakutan.getStr_entity_name() << endl;
	cout << "[2] " << obj_elva.getStr_entity_class() << " " << obj_elva.getStr_entity_name() << endl;
	cout << "[3] " << obj_dain.getStr_entity_class() << " " << obj_dain.getStr_entity_name() << endl;
	cout << "[999] Close the game" << endl;

	cin >> int_character_choice;

	if (int_character_choice == 1) // If player chooses character Gakutan
	{

		obj_character = obj_gakutan; // Sets obj_character stats to Gakutan stats

		cout << "\nYou chose " << obj_gakutan.getStr_entity_class() << " " << obj_gakutan.getStr_entity_name() << " the " << obj_gakutan.getStr_entity_race();

		obj_character.fct_void_display_character_stats(&obj_character);

	}
	else if (int_character_choice == 2) { // If player chooses character Elva

		obj_character = obj_elva; // Sets obj_character stats to Elva stats

		cout << "\nYou chose " << obj_elva.getStr_entity_class() << " " << obj_elva.getStr_entity_name() << " the " << obj_elva.getStr_entity_race();

		obj_elva.fct_void_display_character_stats(&obj_character);

	}
	else if (int_character_choice == 3) { // If player chooses character Dain

		obj_character = obj_dain; // Sets obj_character stats to Dain stats

		cout << "\nYou chose " << obj_dain.getStr_entity_class() << " " << obj_dain.getStr_entity_name() << " the " << obj_dain.getStr_entity_race();

		obj_dain.fct_void_display_character_stats(&obj_character);

	}
	else if (int_character_choice == 999) { // If player chooses to exit the game

		cout << "\nExiting the game" << endl;

		exit(EXIT_SUCCESS);

	}else{ // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice" << endl;

		fct_void_character_choice();

	}

	// Displays character selection confirming choices

	cout << "\nDo you want to continue?" << endl;
	cout << "[1] Yes" << endl;
	cout << "[2] No" << endl;

	cin >> int_character_choice_confirm;

	if (int_character_choice_confirm==1) // If player confirms character choice
	{

		// Plain script called in main.cpp

	}
	else if (int_character_choice_confirm == 2) { // If player wants to change character choice

		fct_void_character_choice();

	}else { // If player writes an invalid choice

	cout << "Invalid choice, please enter the number corresponding to your desired choice" << endl;

	fct_void_character_choice();

	}

}

/*-----------* MENUS *-----------*/

void fct_void_display_story(str array_str_story[], int int_array_str_story_size)
{

	int int_iteration_variable = 0;

	bool bool_story_ended = false;

	do
	{

		if (GetKeyState(17) < 0)
		{

			cout << array_str_story[int_iteration_variable] << endl;

			int_iteration_variable++;

			Sleep(100);

		}

	} while (int_iteration_variable <= int_array_str_story_size);

}


void fct_void_settings() // Displaying settings menu
{

	int int_player_settings_choice; // Represents settings choices
	
	// Displays settings choices

	cout << "\nChoose the setting you want to change:" << endl;
	cout << "[1] TO ADD IN CODE: setting" << endl;
	cout << "[2] TO ADD IN CODE: setting" << endl;
	cout << "[3] Go back" << endl;

	cin >> int_player_settings_choice;

	switch(int_player_settings_choice)
	{

	case 1: // If player chooses to change setting1
	
		cout << "TO ADD IN CODE: setting1\n" << endl;

		break;

	case 2: // If player chooses to change setting2

		cout << "TO ADD IN CODE: setting2\n" << endl;

		break;

	case 3: // If player chooses to go back to main menu

		// Goes back to main menu

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice" << endl;

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

		// Character choice called in main.cpp

		break;

	case 2: // If player chooses to go to settings

		fct_void_settings();

		fct_void_main_menu();

		break;

	case 999: // If player chooses to close the game

		cout << "\nExiting the game..." << endl;
		exit(EXIT_SUCCESS);

	default: // If player writes and invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_main_menu();

	}

}

/*-----------* DIRECTIONS *-----------*/

void fct_void_after_cave_after_blizzard_script()
{

	int int_wander_further_choice; // Represents player choice of wandering further after wandering or not

	int int_array_str_wander_further_story_size = 1;
	str array_str_wander_further_story[2] = {

		"As the river entered the cave, you have no landmark to follow or anywhere to go, you feel like its been a long time since you passed the cave and start to lose hope",

		"Do you want to try to come back?\n[1] Yes\n[2] No"

	};

	int int_array_str_wander_further_renounce_story_size = 2;
	str array_str_wander_further_renounce_story[3] = {

		"However, your breath soon weakens",

		"It becomes hard for you to continue walking, and you feel your eyes closing against your will",

		"Before you have a chance to react, you see yourself falling onto the ground and closing the eyes just as if you were falling asleep..."

	};

	int int_array_str_continue_wander_further_renounce_story_size = 1;
	str array_str_continue_wander_further_renounce_story[2] = {

		"It becomes hard for you to continue walking, and you feel your eyes closing against your will",

		"Before you have a chance to react, you see yourself falling onto the ground and closing the eyes just as if you were falling asleep..."

	};

	cout << "You decide to continue your way, pass by the cave, and wander behind it" << endl;

	fct_void_display_story(array_str_wander_further_story, int_array_str_wander_further_story_size);

	cin >> int_wander_further_choice;

	switch (int_wander_further_choice)
	{

	case 1: // If player chooses to try to come back: dies of Blizzard

		cout << "You turn back and start your way towards the cave" << endl;

		fct_void_display_story(array_str_wander_further_renounce_story, int_array_str_wander_further_renounce_story_size);

		Sleep(5000);

		obj_character.fct_void_character_death(&obj_character);

		Sleep(3000);

		int_current_place = 1;

		break;

	case 2: // If player chooses to continue wandering: dies of Blizzard

		cout << "You decide to continue wandering, however your breath soon weakens" << endl;

		fct_void_display_story(array_str_continue_wander_further_renounce_story, int_array_str_continue_wander_further_renounce_story_size);

		Sleep(5000);

		obj_character.fct_void_character_death(&obj_character);

		Sleep(3000);

		int_current_place = 1;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_after_cave_after_blizzard_script();

	}

}

void fct_void_river_after_blizzard_script()
{

	int int_enter_cave_after_blizzard_choice;

	int int_array_str_river_after_blizzard_story_size = 2;
	str array_str_river_after_blizzard_story[3] = {

		"You ignore it and continue your way",

		"After some time walking, you arrive to a cave entrance",

		"Do you want to enter it, continue your way or go back?\n[1] Enter\n[2] Pass by\n[3] Go back"

	};

	cout << "After some time following the river, you discover what seems to be a frozen wolf on the ground" << endl;

	fct_void_display_story(array_str_river_after_blizzard_story, int_array_str_river_after_blizzard_story_size);

	cin >> int_enter_cave_after_blizzard_choice;

	switch (int_enter_cave_after_blizzard_choice)
	{

	case 1: // If player enters cave: arrives to Galefield while Blizzard starts

		cout << "You finally arrive back to Galefield" << endl;

		int_current_place = 8;

		break;

	case 2: // If player passes by cave: wanders after it without finding anything, dies of Blizzard no matter the choices made after

		int_current_place = 16;

		break;

	case 3: // If player chooses to go back to farm

		cout << "\nYou go back to the farm\n" << endl;

		int_current_place = 12;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_river_after_blizzard_script();

	}

}

void fct_void_road_after_blizzard_script()
{

	int int_enter_forest_after_blizzard_choice; // Represents player choice of entering forest after road or not

	int int_array_str_enter_forest_after_blizzard_story_size = 0;
	str array_str_enter_forest_after_blizzard_story[1] = {

		"Do you want to enter it?\n[1] Yes\n[2] No"

	};

	int int_array_str_oni_attack_story_size = 0;
	str array_str_oni_attack_story[1] = {

	"The enormous creature tries to cut you with a sword, but you barely dodge!"

	};

	cout << "After some time walking, you stumble upon a hazy and eerie forest" << endl;

	fct_void_display_story(array_str_enter_forest_after_blizzard_story, int_array_str_enter_forest_after_blizzard_story_size);

	cin >> int_enter_forest_after_blizzard_choice;

	switch (int_enter_forest_after_blizzard_choice)
	{

	case 1: // If player enters forest: scripted encounter and fight with Oni too strong for player at start of game

		cout << "You enter prudently the forest..." << endl;

		Sleep(3000);

		cout << "A strange figure can be seen from afar, but before you understand what it is, it approaches you quickly" << endl;

		fct_void_display_story(array_str_oni_attack_story, int_array_str_oni_attack_story_size);

		obj_opponent = obj_oni;

		fct_void_fight(&obj_character, &obj_opponent);

		if (int_fight_result == 1)
		{

			// Continues code

		}
		else if (int_fight_result == 0)
		{

			int_current_place = 1;

		}
		else 
		{

			cout << "Problem with fight result variable value" << endl;

		}

	case 2: // If player doesn't enter forest

		cout << "\nYou go back to the farm\n" << endl;

		int_current_place = 12;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_road_after_blizzard_script();

	}

}

void fct_void_galefield_path_script()
{



}

void fct_void_farm_after_blizzard_script()
{

	int int_plain_direction_choice_after_blizzard;

	cout << "What do you do next ? " << endl;
	cout << "[1] Go towards the road" << endl;
	cout << "[2] Go back towards the river" << endl;

	Sleep(3000);

	cin >> int_plain_direction_choice_after_blizzard;

	switch (int_plain_direction_choice_after_blizzard)
	{

	case 1: // If player chooses to go to the road

		int_current_place = 14;

		break;

	case 2: // If player chooses to got to the river

		int_current_place = 15;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_farm_after_blizzard_script();

	}

}

void fct_void_galefield_house3_script()
{

	int int_check_second_room_choice;

	int int_array_str_galefield_house3_first_room_story_size = 1;
	str array_str_galefield_house3_first_room_story[2] = {

		"You enter the house, but nothing seems to be useful in the first room",

		"Check the second room?\n[1] Yes\n[2] No"

	};

	int int_array_str_galefield_house3_ghost_attack_story_size = 2;
	str array_str_galefield_house3_ghost_attack_story[3] = {

		"You proceed to the second room of the house, but nothing seems interesting in here neither",

		"You retrace your step, but as soon as you turn back, you see a floating shadow with small white eyes looking at you intently in the corner of the room",

		"It flies towards you!"

	};

	fct_void_display_story(array_str_galefield_house3_first_room_story, int_array_str_galefield_house3_first_room_story_size);

	cin >> int_check_second_room_choice;

	switch (int_check_second_room_choice)
	{

	case 1: // If player chooses to read the book

		fct_void_display_story(array_str_galefield_house3_ghost_attack_story, int_array_str_galefield_house3_ghost_attack_story_size);

		obj_opponent = obj_ghost;

		fct_void_fight(&obj_character, &obj_opponent);

		if (int_fight_result == 1)
		{

			cout << "You leave the house\n" << endl;

			int_current_place = 8;

		}
		else if (int_fight_result == 0)
		{

			int_current_place = 1;

		}
		else if (int_fight_result == 2)
		{

			cout << "You leave the house\n" << endl;

			int_current_place = 8;

		}
		else
		{

			cout << "Problem with fight result variable value" << endl;

		}

		break;

	case 2: // If player chooses not to read the book

		cout << "You leave the house\n" << endl;

		int_current_place = 8;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_galefield_house3_script();

	}

}

void fct_void_galefield_house2_script()
{

	int int_read_book_choice;
	int int_read_book_page2_choice;
	int int_take_vegetables_choice;
	int int_check_second_room_choice;
	int int_take_sword_choice;

	int int_array_str_galefield_house2_read_book_choice_story_size = 1;
	str array_str_galefield_house2_read_book_choice_story[2] = {

		"You enter the house and notice nobody is in, however you see an opened book titled: 'Diary' on a table",

		"Do you want to read it?\n[1] Yes\n[2] No"

	};

	int int_array_str_galefield_house2_read_book_page1_story_size = 1;
	str array_str_galefield_house2_read_book_page1_story[2] = {

		"xxx date: I bought this diary at a small shop in Windhall, it was pretty expensive for a simple farmer like me, but I've always wanted one to let a proof of my life. Anyway, today the vegetables should be good to be gathered, I plan to do it after I played with Laura as I promised her yesterday. Also, I have to return the sword I found yesterday to Windhall, I'll quickly pass by the grocery as I forgot to buy milk.",

		"Read page 2?\n[1] Yes\n[2] No"

	};

	int int_array_str_galefield_house2_read_book_page2_story_size = 3;
	str array_str_galefield_house2_read_book_page2_story[4] = {

		"The writing is hardly readable as if it was written in hast,but you manage to understand some",

		"A bli*z**d s*d*enl* sta*t*d, * do n** kn** **at i* is but ** seem* ** are a** g**ng to d**",

		"The book ends here",

		"While looking around, you notice some vegetables planted in dirt pots, do you want to take them??\n[1] Yes\n[2] No"

	};

	int int_array_str_galefield_house2_check_second_room_story_size = 0;
	str array_str_galefield_house2_check_second_room_story[1] = {

		"There is a second room, do you want to take a look?\n[1] Yes\n[2] No"


	};

	int int_array_str_galefield_house2_take_sword_story_size = 0;
	str array_str_galefield_house2_take_sword_story[1] = {

		"Do you want to take it?\n[1] Yes\n[2] No"

	};

	fct_void_display_story(array_str_galefield_house2_read_book_choice_story, int_array_str_galefield_house2_read_book_choice_story_size);

	cin >> int_read_book_choice;

	switch (int_read_book_choice)
	{

	case 1: // If player chooses to read the book

		cout << "Diary of Clara, page 1:" << endl;

		fct_void_display_story(array_str_galefield_house2_read_book_page1_story, int_array_str_galefield_house2_read_book_page1_story_size);

		cin >> int_read_book_page2_choice;

		switch (int_read_book_page2_choice)
		{

		case 1: // If player chooses to read the second page of the book

			cout << "Diary of Clara, page 2:" << endl;

			fct_void_display_story(array_str_galefield_house2_read_book_page2_story, int_array_str_galefield_house2_read_book_page2_story_size);

			cin >> int_take_vegetables_choice;

			switch (int_take_vegetables_choice)
			{

			case 1: // If player chooses to go take the vegetables

				cout << "You take the vegetables" << endl;
				cout << "TO ADD IN CODE: add vegetables to inventory\n" << endl;

				fct_void_display_story(array_str_galefield_house2_check_second_room_story, int_array_str_galefield_house2_check_second_room_story_size);

				cin >> int_check_second_room_choice;

				switch (int_check_second_room_choice)
				{

				case 1: // If the player choose to check the second room

					cout << "You walk towards the door, when you enter the room you instantly spot a sword in its shealth on a couch" << endl;

					fct_void_display_story(array_str_galefield_house2_take_sword_story, int_array_str_galefield_house2_take_sword_story_size);

					cin >> int_take_sword_choice;

					switch (int_take_sword_choice)
					{

					case 1:

						cout << "You take the sword and return to the center of the village" << endl;
						cout << "TO ADD IN CODE: add sword to inventory\n" << endl;

						int_current_place = 8;

						break;

					case 2:

						cout << "You leave the house return to the center of the village\n" << endl;

						int_current_place = 8;

						break;

					default:

						cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

						fct_void_galefield_house2_script();

					}

				}

				break;

			case 2: // If player chooses not to take the vegetables

				cout << "You close the book and return to the center of the village\n" << endl;

				int_current_place = 8;

				break;

			default: // If player writes an invalid choice

				cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

				fct_void_galefield_house2_script();

			}

			int_current_place = 8;

			break;

		case 2: // If player chooses not to read the second page of the book

			cout << "You close the book and return to the center of the village\n" << endl;

			int_current_place = 8;

			break;

		default: // If player writes an invalid choice

			cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

			fct_void_galefield_house2_script();

		}

		int_current_place = 8;

		break;

	case 2: // If player chooses not to read the book

		cout << "You leave the house\n" << endl;

		int_current_place = 8;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_galefield_house2_script();

	}

}

void fct_void_galefield_house1_script()
{

	int int_take_coat_choice;

	int int_array_str_galefield_house1_take_coat_story_size = 2;
	str array_str_galefield_house1_take_coat_story[3] = {

		"You enter the house only to discover what seems to be the corpses of a family in the corner of the room",

		"Under one of the beds you find an intact leather coat",

		"Do you want to take it?\n[1] Yes\n[2] No"

	};

	fct_void_display_story(array_str_galefield_house1_take_coat_story, int_array_str_galefield_house1_take_coat_story_size);

	cin >> int_take_coat_choice;

	switch (int_take_coat_choice)
	{

	case 1: // If player chooses to take the coat

		cout << "You take the coat and leave the house" << endl;

		cout << "TO ADD IN CODE: add coat to inventory\n" << endl;

		int_current_place = 8;

		break;

	case 2: // If player chooses not to take the coat

		cout << "You leave the house\n" << endl;

		int_current_place = 8;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_galefield_house1_script();

	}

}

void fct_void_galefield_center_script()
{

	int int_galefield_explore_choice; // Represents where player decides to go from Galefield

	int int_array_str_galefield_explore_story_size = 0;
	str array_str_galefield_story[1] = {

		"Do you choose to explore the houses, follow the path or go back to the farm?\n[1] House 1\n[2] House 2\n[3] House 3\n[4] Farm\n[5] Path"

	};

	int int_array_str_farm_after_blizzard_story_size = 1;
	str array_str_farm_after_blizzard_story[2] = {

		"Once out of the cave, you head towards the farm in ruins",

		"All you see is a white blanket of snow and the sun brazing in the sky"

	};


	fct_void_display_story(array_str_galefield_story,int_array_str_galefield_explore_story_size);

	cin >> int_galefield_explore_choice;

	switch (int_galefield_explore_choice)
	{

	case 1: // If player chooses to go to house 1

		cout << "You walk towards the house 1" << endl;

		int_current_place = 9;

		break;

	case 2: // If player chooses to go to house 2

		cout << "You walk towards the house 2" << endl;

		int_current_place = 10;

		break;

	case 3: // If player chooses to go to house 3

		cout << "You walk towards the house 3" << endl;

		int_current_place = 11;

		break;

	case 4: // If player chooses to go back to farm

		cout << "You choose to go back to the farm..." << endl;
		
		Sleep(3000);

		cout << "You enter the cave once again despite the darkness, you feel just the same cold breeze as when you entered the first time" << endl;

		fct_void_display_story(array_str_farm_after_blizzard_story, int_array_str_farm_after_blizzard_story_size);

		int_current_place = 12;

		break;

	case 5: // If player chooses to go to path

		cout << "You decide to continue your way on the new path" << endl;

		int_current_place = 13;

		bool_game_ended = true;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_galefield_center_script();

	}

}

void fct_void_galefield_script()
{

	int int_array_str_galefield_story_size = 10;
	str array_str_galefield_story[11] = {

		"The cave seems to go deep down to the point you can't even see the outside light anymore as you feel a freezing cold breeze",

		"You feel a constant freezing cold breeze, and after some time walking, you notice you're slowly going up again and soon perceive a weak light while the temperature seems to continue dropping",

		"When you finally get out of the rabbit hole, it seems the night has already fallen and a blizzard arrived, you see a village near the exit and you rush to it, while running you pass a sign on which is written Galefield",

		"Once in the village, you remark everything is in ruins, humans are standing frozen and corpses on the ground have a big hole in them",

		"You enter a house only to find more dead bodies, and you cover yourself with blankets that you find and try to understand what happened",

		"You decide to wait for the blizzard to pass as sleeping in that temperature could be dangerous",

		"You start to feel nauseous as the blood scent floods your nose, but you notice the blizzard stops in a timespand of 5 seconds",

		"The dawn coming, you finally convince yourself to go outside",

		"In front of you, halves of corpses and crimson stains scattered on the angelic white snow, and a blazing Sun ascending as if nothing happened",

		"Despite the state of the village, houses can still be visited in hope to find something",

		"You decide to go to the center of the village to see clearer and notice 3 houses, the path you came from and another one almost entirely covered in snow"

	};

	cout << "You enter the cave slowly because of the darkness..." << endl;

	fct_void_display_story(array_str_galefield_story, int_array_str_galefield_story_size);

	int_current_place = 8;


}

void fct_void_after_cave_script()
{

	int int_wander_further_choice; // Represents player choice of wandering further after wandering or not

	int int_array_str_wander_further_story_size = 1;
	str array_str_wander_further_story[2] = {

		"As the river entered the cave, you have no landmark to follow or anywhere to go, you feel like its been a long time since you passed the cave and start to lose hope",

		"Do you want to try to come back?\n[1] Yes\n[2] No"

	};

	int int_array_str_wander_further_come_back_story_size = 2;
	str array_str_wander_further_come_back_story[3] = {

		"However, you soon realize the darkness starts to overlay the sky",

		"As the night comes in a glimpse of an eye, the temperature around you falls drastically, a blizzard appears and the grass becomes frozen",

		"Before you even have time to notice, your legs froze as you were standing and realizing what seemed to happ-"

	};

	int int_array_str_continue_wander_further_renounce_story_size = 1;
	str array_str_continue_wander_further_renounce_story[2] = {

		"As the night comes in a glimpse of an eye, the temperature around you seems to fall drastically, a blizzard appears and the grass becomes frozen",

		"Before you even have time to notice, your legs froze as you were standing and realizing what seemed to happ-",

	};

	cout << "You decide to continue your way, pass by the cave, and wander behind it" << endl;

	fct_void_display_story(array_str_wander_further_story, int_array_str_wander_further_story_size);

	cin >> int_wander_further_choice;

	switch (int_wander_further_choice)
	{

	case 1: // If player chooses to try to come back: dies of Blizzard

		cout << "You turn back and start your way towards the cave" << endl;

		fct_void_display_story(array_str_wander_further_come_back_story, int_array_str_wander_further_come_back_story_size);

		Sleep(5000);

		obj_character.fct_void_character_death(&obj_character);

		Sleep(3000);

		int_current_place = 1;

		break;

	case 2: // If player chooses to continue wandering: dies of Blizzard

		cout << "You decide to continue wandering, but you soon realize the darkness starts to overlay the sky" << endl;

		fct_void_display_story(array_str_continue_wander_further_renounce_story, int_array_str_continue_wander_further_renounce_story_size);

		Sleep(5000);

		obj_character.fct_void_character_death(&obj_character);

		Sleep(3000);

		int_current_place = 1;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_after_cave_script();

	}

}

void fct_void_cave_script()
{

	int int_enter_cave_choice; // Represents player choice of entering cave after wolfs or not

	int int_array_str_arrive_cave_entrance_story_size = 1;
	str array_str_arrive_cave_entrance_story[2] = {

		"After some time walking, you arrive to a cave entrance",

		"Do you want to enter it, continue your way or go back?\n[1] Enter\n[2] Pass by\n[3] Go back"

	};

	fct_void_display_story(array_str_arrive_cave_entrance_story, int_array_str_arrive_cave_entrance_story_size);

	cin >> int_enter_cave_choice;

	switch (int_enter_cave_choice)
	{

	case 1: // If player enters cave: arrives to Galefield while Blizzard starts

		int_current_place = 7;

		break;

	case 2: // If player passes by cave: wanders after it without finding anything, dies of Blizzard no matter the choices made after

		int_current_place = 6;

		break;

	case 3: // If player chooses to go back to plain

		cout << "\nYou go back to where you awakened\n" << endl;

		int_current_place = 1;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_cave_script();

	}

}

void fct_void_river_script()
{

	int int_wolf_choice; // Represents player choice of approaching wolfs after river or not

	int int_array_str_approach_wolf_story_size = 0;
	str array_str_approach_wolf_story[1] = {

		"Do you want to approach it?\n[1] Yes\n[2] No"

	};

	int int_array_str_wolf_attack_story_size = 0;
	str array_str_wolf_attack_story[1] = {

		"It runs towards you!"

	};

	int int_array_str_river_story_size = 0;
	str array_str_river_story[1] = {

		"As you acknowledge the environment around you, you spot on top of a high mountain far away what seems to be a flying creature, surprisingly large enough for you to notice it"

	};

	cout << "After some time following the river, you notice a wolf sleeping further" << endl;

	fct_void_display_story(array_str_approach_wolf_story, int_array_str_approach_wolf_story_size);

	cin >> int_wolf_choice;

	switch (int_wolf_choice)
	{

	case 1: // If player approaches wolfs: scripted encounter and fight with wolfs

		cout << "You approach it slowly, but it starts to get up on his feet" << endl;

		fct_void_display_story(array_str_wolf_attack_story, int_array_str_wolf_attack_story_size);

		obj_opponent = obj_wolf;

		fct_void_fight(&obj_character, &obj_opponent);

		if (int_fight_result == 1)
		{

			int_current_place = 5;

		}
		else if (int_fight_result == 0)
		{

			int_current_place = 1;

		}
		else if(int_fight_result==2)
		{

			int_current_place = 5;

		}
		else 
		{

			cout << "Problem with fight result variable value" << endl;

		}

		break;

	case 2: // If player passes by wolfs: arrives to cave

		cout << "You decide to spread out a bit of the river" << endl;

		fct_void_display_story(array_str_river_story, int_array_str_river_story_size);

		int_current_place = 5;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_river_script();

	}

}

void fct_void_road_script()
{

	int int_enter_forest_choice; // Represents player choice of entering forest after road or not

	int int_array_str_enter_forest_story_size = 0;
	str array_str_enter_forest_story[1] = {

		"Do you want to enter it?\n[1] Yes\n[2] No"

	};

	int int_array_str_oni_attack_story_size = 0;
	str array_str_oni_attack_story[1] = {

	"The enormous creature tries to cut you with a sword, but you barely dodge!"

	};

	cout << "After some time walking, you stumble upon a hazy and eerie forest" << endl;

	fct_void_display_story(array_str_enter_forest_story, int_array_str_enter_forest_story_size);

	cin >> int_enter_forest_choice;

	switch (int_enter_forest_choice)
	{

	case 1: // If player enters forest: scripted encounter and fight with Oni too strong for player at start of game

		cout << "You enter prudently the forest..." << endl;

		Sleep(3000);

		cout << "A strange figure can be seen from afar, but before you understand what it is, it approaches you quickly" <<endl;

		fct_void_display_story(array_str_oni_attack_story, int_array_str_oni_attack_story_size);

		obj_opponent = obj_oni;

		fct_void_fight(&obj_character, &obj_opponent);

		if (int_fight_result == 1)
		{

			// Continues code

		}
		else if (int_fight_result == 0)
		{

			int_current_place = 1;

		}
		else if (int_fight_result == 2)
		{

			// Continues code

		}
		else
		{

			cout << "Problem with fight result variable value" << endl;

		}

		break;

	case 2: // If player doesn't enter forest

		cout << "\nYou go back to where you awakened\n" << endl;

		int_current_place = 1;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_road_script();

	}

}

void fct_void_farm_script()
{

	int int_old_man_talk_choice; // Represents player choice of talking to old man in farm or not
	int int_old_man_answer_choice; // Represents player answer to old man in farm

	int int_array_str_old_man_talk_story_size = 0;
	str array_str_old_man_talk_story[1] = {

		"Do you want to talk to him?\n[1] Yes\n[2] No"

	};

	int int_array_str_old_man_answer_story_size = 0;
	str array_str_old_man_answer_story[1] = {

		"Ay young man, what's you doing in a place like this! Ya lost?\n[1] Nod\n[2] Deny"

	};

	int int_array_str_old_man_explain_story_size = 3;
	str array_str_old_man_explain_story[4] = {

		"The river right next my farm leads to a cave towards Galefield, the nearest village",

		"The road's a no go if ya want my opinion, strange rumors say the hazy forest it leads to is full of powerful and mysterious creatures",

		"See ya again soon ma guy!",

		"\nYou go back to where you awakened\n"

	};

	cout << "You approach the farm slowly and see an old man on a chair" << endl;

	fct_void_display_story(array_str_old_man_talk_story, int_array_str_old_man_talk_story_size);

	cin >> int_old_man_talk_choice;

	switch (int_old_man_talk_choice)
	{

	case 1: // If players chooses to talk to old man

		cout << "You approach the old man and he turns at you" << endl;

		fct_void_display_story(array_str_old_man_answer_story, int_array_str_old_man_answer_story_size);

		cin >> int_old_man_answer_choice;

		if (int_old_man_answer_choice == 1) // If players tells old man he is lost
		{

			cout << "Well, lemme help ya then!" << endl;

			fct_void_display_story(array_str_old_man_explain_story, int_array_str_old_man_explain_story_size);

			int_current_place = 1;

		}else if (int_old_man_answer_choice == 2) { // If players tells old man he isn't lost

			cout << "Won't keep you there longer then, see ya!" << endl;

			cout << "\nYou go back to where you awakened\n" << endl;

			int_current_place = 1;

		}else{ // If player writes an invalid choice

			cout << "Invalid choice, please enter the number corresponding to your desired choice" << endl;

			fct_void_farm_script();

		}

		break;

	case 2: // If players chooses not to talk to old man

		cout << "\nYou go back to where you awakened\n" << endl;

		int_current_place = 1;

		break;

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice\n" << endl;

		fct_void_farm_script();

	}

}

void fct_void_plain_script()
{

	int int_plain_direction_choice; // Represents where player chooses to from from plain

	cout << "Choose where to go:" << endl;
	cout << "[1] Farm" << endl;
	cout << "[2] Road" << endl;
	cout << "[3] River" << endl;
	cout << "[999] Close the game" << endl;

	cin >> int_plain_direction_choice;

	switch (int_plain_direction_choice) // If player chooses to go to farm
	{

	case 1:

		int_current_place = 2;

		break;

	case 2: // If player chooses to go to road

		int_current_place = 3;

		break;

	case 3: // If player chooses to go to river

		int_current_place = 4;

		break;

	case 999: // If player chooses to exit game

		cout << "Exiting the game" << endl;
		exit(EXIT_SUCCESS);

	default: // If player writes an invalid choice

		cout << "Invalid choice, please enter the number corresponding to your desired choice" << endl;

		break;

	}

}









#endif