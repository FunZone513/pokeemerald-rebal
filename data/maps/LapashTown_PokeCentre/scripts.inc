LapashTown_PokeCentre_MapScripts::
# 2 "data/maps/LapashTown_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LapashTown_PokeCentre_OnTransition
	.byte 0


LapashTown_PokeCentre_OnTransition::
# 6 "data/maps/LapashTown_PokeCentre/scripts.pory"
	setrespawn HEAL_LOCATION_LAPASH_TOWN
	return


LapashTown_PokeCentre_Nurse::
# 10 "data/maps/LapashTown_PokeCentre/scripts.pory"
	setvar VAR_0x800B, 1
# 11 "data/maps/LapashTown_PokeCentre/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/LapashTown_PokeCentre/scripts.pory"
	waitmessage
# 13 "data/maps/LapashTown_PokeCentre/scripts.pory"
	waitbuttonpress
# 14 "data/maps/LapashTown_PokeCentre/scripts.pory"
	release
	return


LapashTown_PokeCentre_OldWoman::
# 18 "data/maps/LapashTown_PokeCentre/scripts.pory"
	msgbox LapashTown_PokeCentre_OldWoman_Text_0, MSGBOX_NPC
	return


LapashTown_PokeCentre_OldMan::
# 22 "data/maps/LapashTown_PokeCentre/scripts.pory"
	msgbox LapashTown_PokeCentre_OldMan_Text_0, MSGBOX_NPC
	return


LapashTown_PokeCentre_HexManiac::
# 26 "data/maps/LapashTown_PokeCentre/scripts.pory"
	msgbox LapashTown_PokeCentre_HexManiac_Text_0, MSGBOX_NPC
	return


LapashTown_PokeCentre_OldWoman_Text_0:
# 18 "data/maps/LapashTown_PokeCentre/scripts.pory"
	.string "Oh hello dear, we don't tend to get many\n"
	.string "travellers around here. It's not an\l"
	.string "overly welcoming area after all.$"

LapashTown_PokeCentre_OldMan_Text_0:
# 22 "data/maps/LapashTown_PokeCentre/scripts.pory"
	.string "I'm checking the records of the passed\n"
	.string "residents. I've found that the names\l"
	.string "aren't always consistent.$"

LapashTown_PokeCentre_HexManiac_Text_0:
# 26 "data/maps/LapashTown_PokeCentre/scripts.pory"
	.string "It's really solemn here...\nit's nice, in a strange way...$"
