#ifndef CLS_ENTITIES_H
#define CLS_ENTITIES_H


#include <iostream>
#include <windows.h>

#include "cls_items.h"

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
const str var xxx:                  STR_xxx
const int var xxx:                  INT_xxx
const uint var xxx:                 UINT_xxx

fct int arg xxx:                    int_aXxx
*/


class cls_entities // Creating entities class
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
		this->str_entity_race = str_aEntity_race;
	}

	str getStr_entity_race()
	{

		return this->str_entity_race;
	}


	void setInt_entity_lvl(int int_aEntity_lvl)
	{
		this->int_entity_lvl = int_aEntity_lvl;
	}

	int getInt_entity_lvl()
	{

		return this->int_entity_lvl;
	}


	void setFloat_entity_xp(float float_aEntity_xp)
	{
		this->float_entity_xp = float_aEntity_xp;
	}

	float getFloat_entity_xp()
	{

		return this->float_entity_xp;
	}


	void setInt_entity_health(int int_aEntity_health)
	{
		this->int_entity_health = int_aEntity_health;
	}

	int getInt_entity_health()
	{

		return this->int_entity_health;
	}


	void setInt_entity_max_health(int int_aEntity_max_health)
	{
		this->int_entity_max_health = int_aEntity_max_health;
	}

	int getInt_entity_max_health()
	{

		return this->int_entity_max_health;
	}


	void setInt_entity_mana(int int_aEntity_mana)
	{
		this->int_entity_mana = int_aEntity_mana;
	}

	int getInt_entity_mana()
	{

		return this->int_entity_mana;
	}


	void setInt_entity_max_mana(int int_aEntity_max_mana)
	{
		this->int_entity_max_mana = int_aEntity_max_mana;
	}

	int getInt_entity_max_mana()
	{

		return this->int_entity_max_mana;
	}


	void setInt_entity_base_atk(int int_aEntity_base_atk)
	{
		this->int_entity_base_atk = int_aEntity_base_atk;
	}

	int getInt_entity_base_atk()
	{

		return this->int_entity_base_atk;
	}


	void setInt_entity_base_heal(int int_aEntity_base_heal)
	{
		this->int_entity_base_heal = int_aEntity_base_heal;
	}

	int getInt_entity_base_heal()
	{

		return this->int_entity_base_heal;
	}

	void setInt_entity_base_speed(int int_aEntity_base_speed)
	{
		this->int_entity_base_speed = int_aEntity_base_speed;
	}

	int getInt_entity_base_speed()
	{
		return this->int_entity_base_speed;
	}




	void fct_void_display_character_stats(cls_entities* obj_character)
	{

		cout << "Your stats are:" << endl;

		cout << "LVL: " << this->getInt_entity_lvl() << endl;
		cout << "Health: " << this->getInt_entity_health() << endl;
		cout << "Mana: " << this->getInt_entity_mana() << endl;
		cout << "Attack: " << this->getInt_entity_base_atk() << endl;
		cout << "Heal: " << this->getInt_entity_base_heal() << endl;
		cout << "Speed: " << this->getInt_entity_base_speed() << "\n" << endl;

	}

	void fct_void_display_opponent_stats(cls_entities* obj_opponent)
	{

		cout << "Your opponent's stats are:" << endl;

		cout << "LVL: " << this->getInt_entity_lvl() << endl;
		cout << "Health: " << this->getInt_entity_health() << endl;
		cout << "Mana: " << this->getInt_entity_mana() << endl;
		cout << "Attack: " << this->getInt_entity_base_atk() << endl;
		cout << "Heal: " << this->getInt_entity_base_heal() << endl;
		cout << "Speed: " << this->getInt_entity_base_speed() << "\n" << endl;

	}


	void fct_void_character_deal_damage(cls_entities* obj_opponent, cls_entities* obj_character) // [MAIN] For an entity to deal damage
	{

		obj_opponent->setInt_entity_health(obj_opponent->getInt_entity_health() - obj_character->getInt_entity_base_atk());

		cout << "You dealt " << obj_character->getInt_entity_base_atk() << " dmg\n" << endl;

	}

	void fct_void_character_take_damage(cls_entities* obj_character, cls_entities* obj_opponent) // [MAIN] For an entity to take damage
	{

		obj_character->setInt_entity_health(obj_character->getInt_entity_health() - obj_opponent->getInt_entity_base_atk());

		cout << "You received " << obj_opponent->getInt_entity_base_atk() << " dmg\n" << endl;

	}


	void fct_void_character_heal(cls_entities* obj_character, cls_items* obj_item) // [MAIN] For an entity to heal
	{

		obj_character->setInt_entity_health(obj_character->getInt_entity_health() + obj_item->getInt_item_heal_stat());

		cout << "You healed " << obj_item->getInt_item_heal_stat() << " hp\n" << endl;

	}

	void fct_void_opponent_heal(cls_entities* obj_opponent, cls_items* obj_item) // [MAIN] For an entity to heal
	{

		obj_opponent->setInt_entity_health(obj_opponent->getInt_entity_health() + obj_item->getInt_item_heal_stat());

		cout << "Your opponent healed " << obj_item->getInt_item_heal_stat() << " hp\n" << endl;

	}


	void fct_void_character_death(cls_entities* obj_character)
	{

		cout << "You died" << endl;
		cout << "Respawning..." << endl;

		obj_character->setInt_entity_health(obj_character->getInt_entity_max_health());

	}

	void fct_void_opponent_death(cls_entities* obj_opponent)
	{

		obj_opponent->setInt_entity_health(0);
		
		cout << "The fight has come to an end" << endl;

	}

};


//Creating playable characters

cls_entities obj_gakutan("Gakutan", "[Assassin]", "???", 1, 0, 50, 50, 20, 20, 70, 0, 170);

cls_entities obj_elva("Elva", "[Priest]", "angel", 1, 0, 150, 150, 20, 20, 15, 35, 100);

cls_entities obj_dain("Dain", "[Warrior]", "dwarf", 1, 0, 200, 200, 20, 20, 30, 0, 60);

cls_entities obj_character("No name", "No class", "No race", 0, 0, 0, 0, 0, 0, 0, 0, 0); // General opponent used in fight functions after setting its stats to desired one

//Creating ennemies

cls_entities obj_slime("No name", "No class", "slime", 1, 0, 30, 30, 20, 20, 5, 0, 70);

cls_entities obj_goblin("No name", "No class", "goblin", 1, 0, 40, 40, 20, 20, 15, 0, 80);

cls_entities obj_ghost("No name", "No class", "ghost", 1, 0, 55, 55, 20, 20, 25, 0, 90);

cls_entities obj_oni("No name", "No class", "oni", 30, 0, 200, 200, 20, 20, 70, 0, 70);

cls_entities obj_kirin("No name", "No class", "kirin", 50, 0, 190, 190, 20, 20, 110, 30, 150);

cls_entities obj_opponent("No name", "No class", "No race", 0, 0, 0, 0, 0, 0, 0, 0, 0); // General opponent used in fight functions after setting its stats to desired one



#endif