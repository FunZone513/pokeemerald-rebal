DripstonePass_MapScripts::
# 2 "data/maps/DripstonePass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DripstonePass_OnTransition
	.byte 0


DripstonePass_OnTransition::
# 6 "data/maps/DripstonePass/scripts.pory"
	checktrainerflag TRAINER_DRIPSTONE_PASS_HEXMANIAC
	goto_if 1, DripstonePass_OnTransition_1
	return

DripstonePass_OnTransition_1:
# 7 "data/maps/DripstonePass/scripts.pory"
	cleartrainerflag TRAINER_DRIPSTONE_PASS_HEXMANIAC
	return


DripstonePass_Fisherman::
# 12 "data/maps/DripstonePass/scripts.pory"
	trainerbattle_single TRAINER_DRIPSTONE_PASS_FISHERMAN, DripstonePass_Fisherman_Text_0, DripstonePass_Fisherman_Text_1
# 17 "data/maps/DripstonePass/scripts.pory"
	msgbox DripstonePass_Fisherman_Text_2, MSGBOX_AUTOCLOSE
	end


DripstonePass_Psychic::
# 22 "data/maps/DripstonePass/scripts.pory"
	trainerbattle_single TRAINER_DRIPSTONE_PASS_PSYCHIC, DripstonePass_Psychic_Text_0, DripstonePass_Psychic_Text_1
# 27 "data/maps/DripstonePass/scripts.pory"
	msgbox DripstonePass_Psychic_Text_2, MSGBOX_AUTOCLOSE
	end


DripstonePass_HexManiac::
# 32 "data/maps/DripstonePass/scripts.pory"
	trainerbattle_single TRAINER_DRIPSTONE_PASS_HEXMANIAC, DripstonePass_HexManiac_Text_0, DripstonePass_HexManiac_Text_1
# 37 "data/maps/DripstonePass/scripts.pory"
	msgbox DripstonePass_HexManiac_Text_2, MSGBOX_AUTOCLOSE
	end


DripstonePass_Runner::
# 42 "data/maps/DripstonePass/scripts.pory"
	trainerbattle_single TRAINER_DRIPSTONE_PASS_RUNNER, DripstonePass_Runner_Text_0, DripstonePass_Runner_Text_1
# 47 "data/maps/DripstonePass/scripts.pory"
	msgbox DripstonePass_Runner_Text_2, MSGBOX_AUTOCLOSE
	end


DripstonePass_Fisherman_Text_0:
# 14 "data/maps/DripstonePass/scripts.pory"
	.string "I found my way here following the way\n"
	.string "of The Rod.$"

DripstonePass_Fisherman_Text_1:
# 15 "data/maps/DripstonePass/scripts.pory"
	.string "The Rod has let me down...$"

DripstonePass_Fisherman_Text_2:
# 17 "data/maps/DripstonePass/scripts.pory"
	.string "The water is pretty murky, maybe that's\n"
	.string "why the Pokemon I caught were weak.$"

DripstonePass_Psychic_Text_0:
# 24 "data/maps/DripstonePass/scripts.pory"
	.string "I forsaw this encounter, and my\n"
	.string "imminent victory!$"

DripstonePass_Psychic_Text_1:
# 25 "data/maps/DripstonePass/scripts.pory"
	.string "Okay fine, I lied.$"

DripstonePass_Psychic_Text_2:
# 27 "data/maps/DripstonePass/scripts.pory"
	.string "I don't get to choose what visions I\n"
	.string "see.$"

DripstonePass_HexManiac_Text_0:
# 34 "data/maps/DripstonePass/scripts.pory"
	.string "I like it down here... nice and dark...$"

DripstonePass_HexManiac_Text_1:
# 35 "data/maps/DripstonePass/scripts.pory"
	.string "I'm one with the mold...$"

DripstonePass_HexManiac_Text_2:
# 37 "data/maps/DripstonePass/scripts.pory"
	.string "The sunlight hurts my eyes... so I hide\n"
	.string "in gloomy places like this...$"

DripstonePass_Runner_Text_0:
# 44 "data/maps/DripstonePass/scripts.pory"
	.string "Yeah!$"

DripstonePass_Runner_Text_1:
# 45 "data/maps/DripstonePass/scripts.pory"
	.string "No!$"

DripstonePass_Runner_Text_2:
# 47 "data/maps/DripstonePass/scripts.pory"
	.string "Huh? I don't have anything to say to\n"
	.string "you.$"
