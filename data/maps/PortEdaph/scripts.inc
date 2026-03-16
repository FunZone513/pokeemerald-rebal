PortEdaph_MapScripts::
	.byte 0


PortEdaph_Sign_Gym::
# 4 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Sign_Gym_Text_0, MSGBOX_SIGN
	return


PortEdaph_Farm_Sign::
# 8 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Farm_Sign_Text_0, MSGBOX_SIGN
	return


PortEdaph_Town_Sign::
# 12 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Town_Sign_Text_0, MSGBOX_SIGN
	return


PortEdaph_Bike_Sign::
# 16 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Bike_Sign_Text_0, MSGBOX_SIGN
	return


PortEdaph_Dock_Sign::
# 20 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Dock_Sign_Text_0, MSGBOX_SIGN
	return


PortEdaph_Woman1::
# 24 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Woman1_Text_0, MSGBOX_NPC
	return


PortEdaph_Woman2::
# 28 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Woman2_Text_0, MSGBOX_NPC
	return


PortEdaph_Woman3::
# 32 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Woman3_Text_0, MSGBOX_NPC
	return


PortEdaph_Kid1::
# 36 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Kid1_Text_0, MSGBOX_NPC
	return


PortEdaph_Man1::
# 40 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Man1_Text_0, MSGBOX_NPC
# 41 "data/maps/PortEdaph/scripts.pory"
	applymovement 10, PortEdaph_Man1_Movement_0
# 42 "data/maps/PortEdaph/scripts.pory"
	waitmovement 0
# 43 "data/maps/PortEdaph/scripts.pory"
	release
	return


PortEdaph_Man2::
# 47 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Man2_Text_0, MSGBOX_NPC
	return


PortEdaph_Man3::
# 51 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Man3_Text_0, MSGBOX_NPC
	return


PortEdaph_Kid2::
# 55 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Kid2_Text_0, MSGBOX_NPC
	return


PortEdaph_Kid3::
# 59 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Kid3_Text_0, MSGBOX_NPC
	return


PortEdaph_Kid4::
# 63 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Kid4_Text_0, MSGBOX_NPC
	return


PortEdaph_Man4::
# 67 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Man4_Text_0, MSGBOX_NPC
	return


PortEdaph_Man5::
# 71 "data/maps/PortEdaph/scripts.pory"
	msgbox PortEdaph_Man5_Text_0, MSGBOX_NPC
	return


# 41 "data/maps/PortEdaph/scripts.pory"
PortEdaph_Man1_Movement_0:
# 41 "data/maps/PortEdaph/scripts.pory"
	face_right
	step_end

PortEdaph_Sign_Gym_Text_0:
# 4 "data/maps/PortEdaph/scripts.pory"
	.string "Port Edaph Gym\nChasing Fertility.$"

PortEdaph_Farm_Sign_Text_0:
# 8 "data/maps/PortEdaph/scripts.pory"
	.string "Edaph Orchard,\nProsperous and Fruitful.$"

PortEdaph_Town_Sign_Text_0:
# 12 "data/maps/PortEdaph/scripts.pory"
	.string "Port Edaph,\nMoney grows on trees.$"

PortEdaph_Bike_Sign_Text_0:
# 16 "data/maps/PortEdaph/scripts.pory"
	.string "Bike Shop,\nRide your worries away!$"

PortEdaph_Dock_Sign_Text_0:
# 20 "data/maps/PortEdaph/scripts.pory"
	.string "Port Edaph Port,\nIt's a mouthful.$"

PortEdaph_Woman1_Text_0:
# 24 "data/maps/PortEdaph/scripts.pory"
	.string "My Roselia loves the soil here!$"

PortEdaph_Woman2_Text_0:
# 28 "data/maps/PortEdaph/scripts.pory"
	.string "Port Edaph's soil is especially good for\n"
	.string "growing fruiting plants, like Berry\l"
	.string "trees.$"

PortEdaph_Woman3_Text_0:
# 32 "data/maps/PortEdaph/scripts.pory"
	.string "Since plants grow really easily here, a\n"
	.string "lot of people have their own garden.$"

PortEdaph_Kid1_Text_0:
# 36 "data/maps/PortEdaph/scripts.pory"
	.string "I can't wait until I grow bigger and can\n"
	.string "ride around on a bike!$"

PortEdaph_Man1_Text_0:
# 40 "data/maps/PortEdaph/scripts.pory"
	.string "Shh!$"

PortEdaph_Man2_Text_0:
# 47 "data/maps/PortEdaph/scripts.pory"
	.string "Our ships carry goods all around the\n"
	.string "region!$"

PortEdaph_Man3_Text_0:
# 51 "data/maps/PortEdaph/scripts.pory"
	.string "In my youth I would play on this very\n"
	.string "beach, and now I can witness my\l"
	.string "grand-children doing the very same.$"

PortEdaph_Kid2_Text_0:
# 55 "data/maps/PortEdaph/scripts.pory"
	.string "I'm trying to dig a hole with my feet!$"

PortEdaph_Kid3_Text_0:
# 59 "data/maps/PortEdaph/scripts.pory"
	.string "I heard that the salty taste of sea\n"
	.string "water is actually fish pee!$"

PortEdaph_Kid4_Text_0:
# 63 "data/maps/PortEdaph/scripts.pory"
	.string "What?! How did you notice me?! I'm\n"
	.string "practicing my stealth skills!$"

PortEdaph_Man4_Text_0:
# 67 "data/maps/PortEdaph/scripts.pory"
	.string "I had this guy sent over from the west\n"
	.string "coast, he's really handy when it comes\l"
	.string "to farm work!$"

PortEdaph_Man5_Text_0:
# 71 "data/maps/PortEdaph/scripts.pory"
	.string "My job is to make sure everyone playing\n"
	.string "on the beach is safe, my Pelipper is\l"
	.string "great at spotting any potential\l"
	.string "dangers from afar.$"
