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

	cls_attacks(str str_aAttack_name, str str_aAttack_magical_tier, str str_aAttack_elemntal_type, int int_aAttack_physical_damage, int int_aAttack_magical_damage)
	{

		setStr_attack_name(str_aAttack_name);
		setStr_attack_magical_tier(str_aAttack_magical_tier);
		setSTR_attack_elemental_type(str_aAttack_elemental_type);

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

cls_attacks obj_punch_attack("Punch", "No magical tier", "No elemental type", obj_character.getInt_entity_base_atk(), 0);

cls_attacks obj_sword_slash_attack("Punch", "No magical tier", "No elemental type", obj_item.getInt_item_dmg_stat(), 0);

cls_attacks obj_attack("No name", "No magical tier",  "No elemental type", 0, 0); // General item



#endif