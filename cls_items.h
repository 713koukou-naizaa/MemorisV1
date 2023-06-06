#ifndef CLS_ITEMS_H
#define CLS_ITEMS_H


#include <iostream>

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


class cls_items // Creating items class
{

private:

	/*Items stats creation*/

	str str_item_name;
	str str_item_rarity;

	int int_item_heal_stat;
	int int_item_mana_stat;

public:

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


//Creating items

cls_items obj_heal_potion("Heal potion", "Common", 20, 0);

cls_items obj_mana_potion("Mana potion", "Common", 0, 5);

cls_items obj_green_jelly("Green jelly", "Common", 0, 0);

cls_items obj_item("No name", "No rarity", 0, 0); // General item



#endif