PortEdaph_BikeShop_MapScripts::
# 2 "data/maps/PortEdaph_BikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PortEdaph_BikeShop_OnLoad
# 3 "data/maps/PortEdaph_BikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PortEdaph_BikeShop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PortEdaph_BikeShop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PortEdaph_BikeShop/scripts.pory"
	map_script_2 VAR_PORT_EDAPH_BIKE_SHOP, 0, PortEdaph_BikeShop_StartBikeQuest
	.2byte 0


PortEdaph_BikeShop_OnLoad::
# 9 "data/maps/PortEdaph_BikeShop/scripts.pory"
	compare VAR_PORT_EDAPH_BIKE_SHOP, 2
	goto_if_lt PortEdaph_BikeShop_OnLoad_1
	return

PortEdaph_BikeShop_OnLoad_1:
# 10 "data/maps/PortEdaph_BikeShop/scripts.pory"
	setflag FLAG_TEMP_A
	return


PortEdaph_BikeShop_StartBikeQuest::
# 15 "data/maps/PortEdaph_BikeShop/scripts.pory"
	lock
# 16 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_BikeShop_StartBikeQuest_Movement_0
# 17 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 18 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_1
# 19 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 20 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_2
# 21 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 22 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_StartBikeQuest_Text1
# 23 "data/maps/PortEdaph_BikeShop/scripts.pory"
	closemessage
# 24 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_3
# 25 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_BikeShop_StartBikeQuest_Movement_4
# 26 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 27 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_5
# 28 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 29 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_StartBikeQuest_Text2
# 30 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_6
# 31 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 32 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_StartBikeQuest_Text_0
# 33 "data/maps/PortEdaph_BikeShop/scripts.pory"
	closemessage
# 34 "data/maps/PortEdaph_BikeShop/scripts.pory"
	delay 24
# 35 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_7
# 36 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 37 "data/maps/PortEdaph_BikeShop/scripts.pory"
	delay 24
# 38 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_StartBikeQuest_Text_1
# 39 "data/maps/PortEdaph_BikeShop/scripts.pory"
	closemessage
# 40 "data/maps/PortEdaph_BikeShop/scripts.pory"
	delay 16
# 41 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_8
# 42 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 43 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_StartBikeQuest_Text_2
# 44 "data/maps/PortEdaph_BikeShop/scripts.pory"
	closemessage
# 45 "data/maps/PortEdaph_BikeShop/scripts.pory"
	delay 24
# 46 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_9
# 47 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 48 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_StartBikeQuest_Text_3
# 49 "data/maps/PortEdaph_BikeShop/scripts.pory"
	closemessage
# 50 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_6
# 51 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 52 "data/maps/PortEdaph_BikeShop/scripts.pory"
	delay 48
# 53 "data/maps/PortEdaph_BikeShop/scripts.pory"
	playse SE_PIN
# 54 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 55 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 56 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_5
# 57 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement 0
# 58 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_StartBikeQuest_Text3
# 59 "data/maps/PortEdaph_BikeShop/scripts.pory"
	closemessage
# 60 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement 1, PortEdaph_BikeShop_StartBikeQuest_Movement_10
# 61 "data/maps/PortEdaph_BikeShop/scripts.pory"
	delay 48
# 62 "data/maps/PortEdaph_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PortEdaph_BikeShop_StartBikeQuest_Movement_11
# 63 "data/maps/PortEdaph_BikeShop/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 64 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_Chashier_Text1
# 65 "data/maps/PortEdaph_BikeShop/scripts.pory"
	setvar VAR_PORT_EDAPH_BIKE_SHOP, 1
# 66 "data/maps/PortEdaph_BikeShop/scripts.pory"
	closemessage
# 67 "data/maps/PortEdaph_BikeShop/scripts.pory"
	release
	return


PortEdaph_BikeShop_Boy::
# 95 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_Boy_Text_0, MSGBOX_NPC
	return


PortEdaph_BikeShop_BikeInfo::
# 100 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_BikeInfo_Text, MSGBOX_SIGN
	return


PortEdaph_BikeShop_Cashier::
# 111 "data/maps/PortEdaph_BikeShop/scripts.pory"
	switch VAR_PORT_EDAPH_BIKE_SHOP
# 112 "data/maps/PortEdaph_BikeShop/scripts.pory"
	case 0, PortEdaph_BikeShop_Cashier_2
# 113 "data/maps/PortEdaph_BikeShop/scripts.pory"
	case 1, PortEdaph_BikeShop_Cashier_2
# 117 "data/maps/PortEdaph_BikeShop/scripts.pory"
	case 2, PortEdaph_BikeShop_Cashier_3
# 123 "data/maps/PortEdaph_BikeShop/scripts.pory"
	case 3, PortEdaph_BikeShop_Cashier_4
	return

PortEdaph_BikeShop_Cashier_2:
# 114 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_Chashier_Text1, MSGBOX_NPC
	return

PortEdaph_BikeShop_Cashier_3:
# 118 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_Chashier_Text2, MSGBOX_NPC
# 119 "data/maps/PortEdaph_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 120 "data/maps/PortEdaph_BikeShop/scripts.pory"
	setvar VAR_PORT_EDAPH_BIKE_SHOP, 3
	return

PortEdaph_BikeShop_Cashier_4:
# 124 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_Cashier_Text_0, MSGBOX_NPC
	return


PortEdaph_BikeShop_Mechanic::
# 144 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_Mechanic_Text_0, MSGBOX_NPC
	return


PortEdaph_BikeShop_Woman::
# 148 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_Woman_Text_0, MSGBOX_NPC
	return


PortEdaph_BikeShop_Man::
# 152 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_Man_Text_0, MSGBOX_NPC
	return


PortEdaph_BikeShop_Man2::
# 156 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_Man2_Text_0, MSGBOX_NPC
	return


PortEdaph_BikeShop_Woman2::
# 160 "data/maps/PortEdaph_BikeShop/scripts.pory"
	msgbox PortEdaph_BikeShop_Woman2_Text_0, MSGBOX_NPC
	return


# 16 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_0:
# 16 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
# 16 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
	step_end

# 18 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_1:
# 18 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_fast_down
# 18 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_fast_down
# 18 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_fast_down
	step_end

# 20 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_2:
# 20 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_down
	step_end

# 24 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_3:
# 24 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
# 24 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
# 24 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_left
# 24 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_left
	step_end

# 25 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_4:
# 25 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
# 25 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
# 25 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
# 25 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_left
	step_end

# 27 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_5:
# 27 "data/maps/PortEdaph_BikeShop/scripts.pory"
	face_right
	step_end

# 30 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_6:
# 30 "data/maps/PortEdaph_BikeShop/scripts.pory"
	face_left
	step_end

# 35 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_7:
# 35 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
# 35 "data/maps/PortEdaph_BikeShop/scripts.pory"
	face_left
	step_end

# 41 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_8:
# 41 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_down
# 41 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_down
# 41 "data/maps/PortEdaph_BikeShop/scripts.pory"
	face_left
	step_end

# 46 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_9:
# 46 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
# 46 "data/maps/PortEdaph_BikeShop/scripts.pory"
	face_right
	step_end

# 60 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_10:
# 60 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
# 60 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
# 60 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_right
# 60 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_right
# 60 "data/maps/PortEdaph_BikeShop/scripts.pory"
	face_down
	step_end

# 62 "data/maps/PortEdaph_BikeShop/scripts.pory"
PortEdaph_BikeShop_StartBikeQuest_Movement_11:
# 62 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_right
# 62 "data/maps/PortEdaph_BikeShop/scripts.pory"
	walk_up
	step_end

PortEdaph_BikeShop_StartBikeQuest_Text_0:
# 32 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "Hmm...$"

PortEdaph_BikeShop_StartBikeQuest_Text_1:
# 38 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "No this won't do...$"

PortEdaph_BikeShop_StartBikeQuest_Text_2:
# 43 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "Not this one either...$"

PortEdaph_BikeShop_StartBikeQuest_Text_3:
# 48 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "I'm not sure if I have anything\nwithin that budget currently...$"

PortEdaph_BikeShop_Boy_Text_0:
# 95 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "Oh it's you, come to gloat have you?$"

PortEdaph_BikeShop_Cashier_Text_0:
# 124 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "I hope the Bike is treating you well!$"

PortEdaph_BikeShop_Mechanic_Text_0:
# 144 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "Ya?\pLooking for bike?\nThis is bike fixing part, try other side.$"

PortEdaph_BikeShop_Woman_Text_0:
# 148 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "These bikes sure are fancy, I guess\n"
	.string "they have to justify the price somehow.$"

PortEdaph_BikeShop_Man_Text_0:
# 152 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "The seat wasn't on when I sat down...\nNow I'm stuck...$"

PortEdaph_BikeShop_Man2_Text_0:
# 156 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "This lady is crazy! Who said you could\n"
	.string "ride around inside!$"

PortEdaph_BikeShop_Woman2_Text_0:
# 160 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "I love that I can just take the bikes\n"
	.string "for a test ride before buying one!$"

PortEdaph_BikeShop_StartBikeQuest_Text1::
# 70 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "A new face!\p"
	.string "Hello and Welcome to the Bike Store!\nWe have all kinds of varieties of bikes,\lwhat type of bicycle has caught your\linterest today?\p"
	.string "...\p"
	.string "I see, I see...\p"
	.string "So you want a bike that can aid\nin your travels is it?\p"
	.string "Certainly!\nWe have just the thing!$"

PortEdaph_BikeShop_StartBikeQuest_Text2::
# 79 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "This here is our affordable bike for\nPokemon Trainers such as yourself,\lwe can offer it in blue or yellow, as you\lcan see from the display.\p"
	.string "It allows you to travel across the\nregion with blitzing speed and expand\lyour traversal options!\p"
	.string "Since it's a new model, it can be on\nthe pricer side of things, but it's\ldefinitely worth it in the long run!\p"
	.string "What is your budget?\p"
	.string "...\p"
	.string "Oh...$"

PortEdaph_BikeShop_StartBikeQuest_Text3::
# 88 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "Actually, I have an older model lying\nout the back that I haven't been\lable to sell.\p"
	.string "If you do me a favour, I could even\npart with it without a dime.\p"
	.string "It's honestly just taking up space,\nbut giving it away would look bad\lfor the business.$"

PortEdaph_BikeShop_BikeInfo_Text::
# 103 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "The Bicycle (or Bike) is a needed tool\nfor any avid adventurer!\p"
	.string "It allows one to speedily climb\nslippery slopes, and even zoom across\lunstable ground before it collapses!\p"
	.string "It may start out slow, but once it\npicks up speed quickly!\p"
	.string "You'll be zipping around before\nyou know it!$"

PortEdaph_BikeShop_Chashier_Text1::
# 129 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "My son is trying to become a\nPokemon Trainer himself, so he's\lbeen out exploring nearby.\p"
	.string "The only problem is that he's never\nbeen very good with directions.\p"
	.string "I'm sure he's fine for now, but it would\ngive me peace of mind if you could go\land convince him that maybe the\llife of a trainer isn't for him.\p"
	.string "I worry that something will eventually\nhappen to him, but he won't listen to me.$"

PortEdaph_BikeShop_Chashier_Text2::
# 136 "data/maps/PortEdaph_BikeShop/scripts.pory"
	.string "My son came back in a huff, I'm\nnot sure what you said to him but I'm\lglad he's decided to stop wandering\labout and help out here.\p"
	.string "I apologise if he acted rudely to you,\nI think I may have spoiled him a little\lwhen he was a child...\p"
	.string "Oh right! I have the Bike here\nready for you as thanks!\p"
	.string "I've had our mechanic fix it up\ngood as new too, so feel free to\lgive it a go right away!$"
