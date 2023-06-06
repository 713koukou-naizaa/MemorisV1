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

bool bool_game_ended = false;


void main()
{

	fct_void_main_menu();

	fct_void_character_choice();

	int int_array_str_introduction_story_size = 0;
	str array_str_introduction_story[1] = {
		
		"\nYou awaken in a plain, without any memory of what happened before nor who you are. However, you feel something is wrong as if you don't belong here. You perceive in the distance a farm, a long road and a river"

	};

	cout << "Press the CTRL key to display the next line when no choices appear" << endl;
	cout << "When there is ... or - at the end of a sentence, the next line will display itself before you have to press the CTRL key" << endl;

	fct_void_display_story(array_str_introduction_story, int_array_str_introduction_story_size);

	int_current_place = 1;

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

		case 7: // if current place: Galefield

			fct_void_galefield_script();

			break;

		case 8: // if current place: Galefield center

			fct_void_galefield_center_script();

			break;

		case 9: // if current place: Galefield house 1

			fct_void_galefield_house1_script();

			break;

		case 10: // if current place: Galefield house 2

			fct_void_galefield_house2_script();

			break;

		case 11: // if current place: Galefield house 3

			fct_void_galefield_house3_script();

			break;

		case 12: // if current place: farm after blizzard

			fct_void_farm_after_blizzard_script();

			break;

		case 13: // if current place: Galefield path

			fct_void_galefield_path_script();

			break;

		case 14: // if current place: road after blizzard

			fct_void_road_after_blizzard_script();

			break;

		case 15: // if current place: river after blizzard

			fct_void_river_after_blizzard_script();

			break;

		case 16: // if current place: after cave after blizzard

			fct_void_after_cave_after_blizzard_script();

			break;

		}

	} while (!bool_game_ended);

	if (bool_game_ended == true)
	{

		cout << "\nThe game is still in progression, please check at the github page of the project for any news and changelog updates: https://github.com/users/Yuzuno/projects/1/views/1" << endl;
		
		system("pause");

		cout << "\nExiting the game..." << endl;

		exit(EXIT_SUCCESS);

	}



}