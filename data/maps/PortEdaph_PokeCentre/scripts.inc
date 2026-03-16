PortEdaph_PokeCentre_MapScripts::
# 2 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PortEdaph_PokeCentre_OnTransition
	.byte 0


PortEdaph_PokeCentre_OnTransition::
# 6 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	setrespawn HEAL_LOCATION_PORT_EDAPH
	return


PortEdaph_PokeCentre_Nurse::
# 10 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	setvar VAR_0x800B, 1
# 11 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	waitmessage
# 13 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	waitbuttonpress
# 14 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	release
	return


PortEdaph_PokeCentre_OldWoman::
# 18 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	msgbox PortEdaph_PokeCentre_OldWoman_Text_0, MSGBOX_NPC
	return


PortEdaph_PokeCentre_Man::
# 22 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	msgbox PortEdaph_PokeCentre_Man_Text_0, MSGBOX_NPC
	return


PortEdaph_PokeCentre_Woman::
# 26 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	msgbox PortEdaph_PokeCentre_Woman_Text_0, MSGBOX_NPC
	return


PortEdaph_PokeCentre_Man2::
# 30 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	msgbox PortEdaph_PokeCentre_Man2_Text_0, MSGBOX_NPC
	return


PortEdaph_PokeCentre_Kid1::
# 34 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	msgbox PortEdaph_PokeCentre_Kid1_Text_0
# 35 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	closemessage
	return


PortEdaph_PokeCentre_Kid2::
# 39 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	msgbox PortEdaph_PokeCentre_Kid2_Text_0
# 40 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	closemessage
	return


PortEdaph_PokeCentre_idk::
# 44 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	msgbox PortEdaph_PokeCentre_idk_Text_0, MSGBOX_SIGN
	return


PortEdaph_PokeCentre_OldWoman_Text_0:
# 18 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	.string "I'm worried the girlfriend my son picked\n"
	.string "up from the big city is just after his\l"
	.string "money...$"

PortEdaph_PokeCentre_Man_Text_0:
# 22 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	.string "My Mother is grilling us on our\n"
	.string "relationship...$"

PortEdaph_PokeCentre_Woman_Text_0:
# 26 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	.string "Don't you think my boyfriend's bald\n"
	.string "head is super cute?$"

PortEdaph_PokeCentre_Man2_Text_0:
# 30 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	.string "I'm looking after some children while\n"
	.string "they play Pokemon battle.$"

PortEdaph_PokeCentre_Kid1_Text_0:
# 34 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	.string "Go Magnemite! Bzzt! Get him!$"

PortEdaph_PokeCentre_Kid2_Text_0:
# 39 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	.string "Look out Azurill! Dodge the lightning!$"

PortEdaph_PokeCentre_idk_Text_0:
# 44 "data/maps/PortEdaph_PokeCentre/scripts.pory"
	.string "Bibidi Bobidi Boowa$"
