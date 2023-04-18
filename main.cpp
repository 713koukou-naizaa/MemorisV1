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
const str var xxx:                  STR_xxx
const int var xxx:                  INT_xxx
const uint var xxx:                 UINT_xxx

fct int arg xxx:                    int_aXxx
*/



void main()
{

	int int_current_place = 1;


	fct_void_main_menu();

	fct_void_character_choice();

	cout << "You awaken in a plain, without any memory of what happened before nor who you are. However, you feel something is wrong as if you didn't belong to where you're at. You see in the distance a farm,a long road and a river" << endl;

	system("pause");

	switch (int_current_place)
	{

	case 1:	// if current place: plain

		fct_void_plain_script();

	case 2: // if curent place: farm

		fct_void_farm_script();

	case 3: // if current place: road

		fct_void_road_script();

	case 4: // if current place: river

		fct_void_river_script();

	case 5: // if current place: cave

		fct_void_cave_script();

	case 6: // if current place: after cave

		fct_void_after_cave_script();

	case 7: // if current place: Remieu

		fct_void_remieu_script();

	}



}