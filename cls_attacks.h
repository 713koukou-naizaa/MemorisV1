#ifndef CLS_ATTACKS_H
#define CLS_ATTACKS_H


#include <iostream>

#include "cls_entities.h"

using std::cout;
using std::endl;
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



class cls_attacks
{

private:

	/*Attacks stats creation*/

	str str_attack_name;
	str str_attack_magical_tier;
	str str_attack_elemental_type;

	int int_attack_physical_damage;
	int int_attack_magical_damage;

public:

	cls_attacks(str str_aAttack_name, str str_aAttack_magical_tier, str str_aAttack_elemental_type, int int_aAttack_physical_damage, int int_aAttack_magical_damage)
	{

		setStr_attack_name(str_aAttack_name);
		setStr_attack_magical_tier(str_aAttack_magical_tier);
		setStr_attack_elemental_type(str_aAttack_elemental_type);

		setInt_attack_physical_damage(int_aAttack_physical_damage);
		setInt_attack_magical_damage(int_aAttack_magical_damage);

	}


	void setStr_attack_name(str str_aAttack_name)
	{
		str_attack_name = str_aAttack_name;
	}

	str getStr_attack_name()
	{

		return str_attack_name;
	}


	void setStr_attack_magical_tier(str str_aAttack_magical_tier)
	{
		str_attack_magical_tier = str_aAttack_magical_tier;
	}

	str getStr_attack_magical_tier()
	{

		return str_attack_magical_tier;
	}


	void setStr_attack_elemental_type(str str_aAttack_elemental_type)
	{
		str_attack_elemental_type = str_aAttack_elemental_type;
	}

	str getStr_attack_elemental_type()
	{

		return str_attack_elemental_type;
	}


	void setInt_attack_physical_damage(int int_aAttack_physical_damage)
	{
		int_attack_physical_damage = int_aAttack_physical_damage;
	}

	int getInt_attack_physical_damage()
	{

		return int_attack_physical_damage;
	}


	void setInt_attack_magical_damage(int int_aAttack_magical_damage)
	{
		int_attack_magical_damage = int_aAttack_magical_damage;
	}

	int getInt_attack_magical_damage()
	{

		return int_attack_magical_damage;
	}

};


//Creating attacks

cls_attacks obj_punch_attack("punch", "no magical tier", "no elemental type", 5, 0);

cls_attacks obj_wind_sword_slash_attack("wind sword slash", "common", "wind", 5, 5);

cls_attacks obj_bite_attack("bite", "no magical tier", "no elemental type", 10, 0);

cls_attacks obj_corrosion_attack("corrosion", "common", "poison", 0, 10);

cls_attacks obj_club_swing_attack("club swing", "no magical tier", "no elemental type", 15, 0);

cls_attacks obj_spike_club_swing_attack("spike club swing", "no magical tier", "no elemental type", 20, 0);

cls_attacks obj_spook_attack("spook", "common", "darkness", 0, 5);

cls_attacks obj_haunt_attack("haunt", "common", "darkness", 0, 10);

cls_attacks obj_life_drain_attack("life drain", "intermediate", "earth", 0, 20);

cls_attacks obj_concussion_attack("concussion", "no magical tier", "no elemental type", 25, 0);

cls_attacks obj_first_attack("No name", "no magical tier", "no elemental type", 0, 0);

cls_attacks obj_second_attack("No name", "no magical tier", "no elemental type", 0, 0);

cls_attacks obj_third_attack("No name", "no magical tier", "no elemental type", 0, 0);

cls_attacks obj_fourth_attack("No name", "no magical tier", "no elemental type", 0, 0);



#endif