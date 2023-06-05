#include <iostream>

#include "main.h"



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


int int_current_place = 1; // Variable used in main.cpp to call scripts depending on where the player is

bool bool_game_ended;


void main()
{

	fct_void_main_menu();

	fct_void_character_choice();

	cout << "\nYou awaken in a plain, without any memory of what happened before nor who you are. However, you feel something is wrong as if you didn't belong to where you're at. You see in the distance a farm,a long road and a river" << endl;

	system("pause");

	int_current_place = 1;

	bool_game_ended = false;

	do
	{

		switch (int_current_place)
		{

		case 1:	// if current place: plain

			fct_void_plain_script();

			break;

		case 2: // if curent place: farm

			fct_void_farm_script();

			break;

		case 3: // if current place: road

			fct_void_road_script();

			break;

		case 4: // if current place: river

			fct_void_river_script();

			break;

		case 5: // if current place: cave

			fct_void_cave_script();

			break;

		case 6: // if current place: after cave

			fct_void_after_cave_script();
			
			break;

		case 7: // if current place: Remieu

			fct_void_remieu_script();

			break;

		}

	} while (!bool_game_ended);

	if (bool_game_ended == true)
	{

		cout << "The game is still in progression, please check at the github page of the project for any news and changelog updates: https://github.com/users/Yuzuno/projects/1/views/1" << endl;
		
		system("pause");

		cout << "\nExiting the game..." << endl;

		exit(EXIT_SUCCESS);

	}



}