HeatswellPath_MapScripts::
# 2 "data/maps/HeatswellPath/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HeatswellPath_OnTransition
	.byte 0


HeatswellPath_OnTransition::
# 6 "data/maps/HeatswellPath/scripts.pory"
	compare VAR_PORT_EDAPH_BIKE_SHOP, 1
	goto_if_ne HeatswellPath_OnTransition_1
	return

HeatswellPath_OnTransition_1:
# 7 "data/maps/HeatswellPath/scripts.pory"
	setflag FLAG_TEMP_A
	return


HeatswellPath_BikeKid::
# 12 "data/maps/HeatswellPath/scripts.pory"
	lock
# 13 "data/maps/HeatswellPath/scripts.pory"
	playse SE_PIN
# 14 "data/maps/HeatswellPath/scripts.pory"
	waitse
# 15 "data/maps/HeatswellPath/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 16 "data/maps/HeatswellPath/scripts.pory"
	waitmovement 6
# 17 "data/maps/HeatswellPath/scripts.pory"
	applymovement 6, HeatswellPath_BikeKid_Movement_0
# 18 "data/maps/HeatswellPath/scripts.pory"
	waitmovement 0
# 19 "data/maps/HeatswellPath/scripts.pory"
	msgbox HeatswellPath_BikeKid_Text, MSGBOX_NPC
# 20 "data/maps/HeatswellPath/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, FALSE
# 21 "data/maps/HeatswellPath/scripts.pory"
	msgbox HeatswellPath_BikeKid_Text_0
# 22 "data/maps/HeatswellPath/scripts.pory"
	closemessage
# 23 "data/maps/HeatswellPath/scripts.pory"
	trainerbattle_no_intro TRAINER_HEATSWELL_PATH_BIKE_KID, HeatswellPath_BikeKid_Text_1
# 24 "data/maps/HeatswellPath/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/HeatswellPath/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq HeatswellPath_BikeKid_2
HeatswellPath_BikeKid_1:
# 45 "data/maps/HeatswellPath/scripts.pory"
	release
	return

HeatswellPath_BikeKid_2:
# 26 "data/maps/HeatswellPath/scripts.pory"
	fadedefaultbgm
# 27 "data/maps/HeatswellPath/scripts.pory"
	msgbox HeatswellPath_BikeKid_Text_2
# 28 "data/maps/HeatswellPath/scripts.pory"
	closemessage
# 29 "data/maps/HeatswellPath/scripts.pory"
	applymovement 6, HeatswellPath_BikeKid_Movement_1
# 30 "data/maps/HeatswellPath/scripts.pory"
	waitmovement 0
# 31 "data/maps/HeatswellPath/scripts.pory"
	delay 100
# 32 "data/maps/HeatswellPath/scripts.pory"
	applymovement 6, HeatswellPath_BikeKid_Movement_0
# 33 "data/maps/HeatswellPath/scripts.pory"
	waitmovement 0
# 34 "data/maps/HeatswellPath/scripts.pory"
	msgbox HeatswellPath_BikeKid_Text_3
# 35 "data/maps/HeatswellPath/scripts.pory"
	closemessage
# 36 "data/maps/HeatswellPath/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/HeatswellPath/scripts.pory"
	setvar VAR_PORT_EDAPH_BIKE_SHOP, 2
# 38 "data/maps/HeatswellPath/scripts.pory"
	removeobject 6
# 39 "data/maps/HeatswellPath/scripts.pory"
	playse SE_FLEE
# 40 "data/maps/HeatswellPath/scripts.pory"
	waitse
# 41 "data/maps/HeatswellPath/scripts.pory"
	delay 48
# 42 "data/maps/HeatswellPath/scripts.pory"
	special DrawWholeMapView
# 43 "data/maps/HeatswellPath/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto HeatswellPath_BikeKid_1


HeatswellPath_BlackBelt::
# 62 "data/maps/HeatswellPath/scripts.pory"
	trainerbattle_single TRAINER_HEATSWELL_PATH_BLACKBELT, HeatswellPath_BlackBelt_Text_0, HeatswellPath_BlackBelt_Text_1
# 67 "data/maps/HeatswellPath/scripts.pory"
	msgbox HeatswellPath_BlackBelt_Text_2, MSGBOX_AUTOCLOSE
	end


HeatswellPath_Kindler::
# 72 "data/maps/HeatswellPath/scripts.pory"
	trainerbattle_single TRAINER_HEATSWELL_PATH_KINDLER, HeatswellPath_Kindler_Text_0, HeatswellPath_Kindler_Text_1
# 77 "data/maps/HeatswellPath/scripts.pory"
	msgbox HeatswellPath_Kindler_Text_2, MSGBOX_AUTOCLOSE
	end


# 17 "data/maps/HeatswellPath/scripts.pory"
HeatswellPath_BikeKid_Movement_0:
# 17 "data/maps/HeatswellPath/scripts.pory"
	face_player
	step_end

# 29 "data/maps/HeatswellPath/scripts.pory"
HeatswellPath_BikeKid_Movement_1:
# 29 "data/maps/HeatswellPath/scripts.pory"
	face_down
	step_end

HeatswellPath_BikeKid_Text_0:
# 21 "data/maps/HeatswellPath/scripts.pory"
	.string "I can't wait to defeat you and\nbegin my epic journey!$"

HeatswellPath_BikeKid_Text_1:
# 23 "data/maps/HeatswellPath/scripts.pory"
	.string "...what? I lost?$"

HeatswellPath_BikeKid_Text_2:
# 27 "data/maps/HeatswellPath/scripts.pory"
	.string "...$"

HeatswellPath_BikeKid_Text_3:
# 34 "data/maps/HeatswellPath/scripts.pory"
	.string "Being a Pokemon Trainer is for people\nwho don't have a future career path.\pI'll be going back to helping my father\nrun the Bike Shop.$"

HeatswellPath_BlackBelt_Text_0:
# 64 "data/maps/HeatswellPath/scripts.pory"
	.string "FEEL THE BURN!$"

HeatswellPath_BlackBelt_Text_1:
# 65 "data/maps/HeatswellPath/scripts.pory"
	.string "OOF OW THAT HURTS!$"

HeatswellPath_BlackBelt_Text_2:
# 67 "data/maps/HeatswellPath/scripts.pory"
	.string "This fabric is not breathable in the\n"
	.string "least, I believe I have made an error.$"

HeatswellPath_Kindler_Text_0:
# 74 "data/maps/HeatswellPath/scripts.pory"
	.string "This is my element!$"

HeatswellPath_Kindler_Text_1:
# 75 "data/maps/HeatswellPath/scripts.pory"
	.string "Wait that's not how it was supposed to\n"
	.string "go!$"

HeatswellPath_Kindler_Text_2:
# 77 "data/maps/HeatswellPath/scripts.pory"
	.string "Even though I'm indoors, I feel like I\n"
	.string "need some sunscreen.$"

HeatswellPath_BikeKid_Text::
# 48 "data/maps/HeatswellPath/scripts.pory"
	.string "Oh! You've freed me!\nIt's about time someone came!\p"
	.string "I'm trying my hand at being a\nPokemon Trainer, but the terrain around\lhere is really rough.\p"
	.string "It's honestly really inconsiderate,\nthey should be more conscious of\lpeople when designing these routes!\p"
	.string "Huh?\nWho?\p"
	.string "Well, the people who design these\nareas of course!\p"
	.string "They should have more foresight of\nthe kinds of people who would be\lusing them, I mean seriously,\llook at this lava! It's a hazard!\p"
	.string "...\p"
	.string "What's that?\nYou're not making any sense.\p"
	.string "Wait!\p"
	.string "You're a Pokemon Trainer too right?\nThat means we can try battling!$"
