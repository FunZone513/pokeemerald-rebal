PortEdaph_PokeMart_MapScripts::
	.byte 0


PortEdaph_PokeMart_Cook::
# 4 "data/maps/PortEdaph_PokeMart/scripts.pory"
	msgbox PortEdaph_PokeMart_Cook_Text_0, MSGBOX_NPC
	return


PortEdaph_PokeMart_Boy::
# 8 "data/maps/PortEdaph_PokeMart/scripts.pory"
	msgbox PortEdaph_PokeMart_Boy_Text_0
# 9 "data/maps/PortEdaph_PokeMart/scripts.pory"
	closemessage
	return


PortEdaph_PokeMart_Cook_Text_0:
# 4 "data/maps/PortEdaph_PokeMart/scripts.pory"
	.string "The berries here make for a tasty\n"
	.string "treat!$"

PortEdaph_PokeMart_Boy_Text_0:
# 8 "data/maps/PortEdaph_PokeMart/scripts.pory"
	.string "Looking at all the juice boxes is making\n"
	.string "me thirsty, but I already spent my\l"
	.string "pocket money on lollies...$"
