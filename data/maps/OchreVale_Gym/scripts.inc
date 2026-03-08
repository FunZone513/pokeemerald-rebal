OchreVale_Gym_MapScripts::
# 2 "data/maps/OchreVale_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OchreVale_Gym_FlashSet
	.byte 0


OchreVale_Gym_FlashSet::
# 6 "data/maps/OchreVale_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, OchreVale_Gym_FlashSet_1
# 9 "data/maps/OchreVale_Gym/scripts.pory"
	setflashlevel 1
	return

OchreVale_Gym_FlashSet_1:
# 7 "data/maps/OchreVale_Gym/scripts.pory"
	setflashlevel 4
	return


OchreVale_Gym_Douglas::
# 14 "data/maps/OchreVale_Gym/scripts.pory"
	trainerbattle_single GYM_LEADER_DOUGLAS, OchreVale_Gym_Douglas_Text_Intro, OchreVale_Gym_Douglas_Text_Defeated, OchreVale_Gym_Douglas_Defeated, NO_MUSIC
# 21 "data/maps/OchreVale_Gym/scripts.pory"
	msgbox SpringwoodCity_Gym_Martin_PostBattle, MSGBOX_NPC
# 22 "data/maps/OchreVale_Gym/scripts.pory"
	releaseall
	return


OchreVale_Gym_Douglas_Defeated::
# 26 "data/maps/OchreVale_Gym/scripts.pory"
	message OchreVale_Gym_Douglas_Defeated_Text_0
# 27 "data/maps/OchreVale_Gym/scripts.pory"
	animateflash 1
# 28 "data/maps/OchreVale_Gym/scripts.pory"
	setflashlevel 1
# 29 "data/maps/OchreVale_Gym/scripts.pory"
	waitmessage
# 30 "data/maps/OchreVale_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 31 "data/maps/OchreVale_Gym/scripts.pory"
	msgbox OchreVale_Gym_Douglas_Badge, MSGBOX_DEFAULT
# 32 "data/maps/OchreVale_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 33 "data/maps/OchreVale_Gym/scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 34 "data/maps/OchreVale_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 35 "data/maps/OchreVale_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 36 "data/maps/OchreVale_Gym/scripts.pory"
	releaseall
	return


OchreVale_Gym_Hiker::
# 70 "data/maps/OchreVale_Gym/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_GYM_HIKER, OchreVale_Gym_Hiker_Text_0, OchreVale_Gym_Hiker_Text_1
# 75 "data/maps/OchreVale_Gym/scripts.pory"
	msgbox OchreVale_Gym_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


OchreVale_Gym_BattleGirl::
# 80 "data/maps/OchreVale_Gym/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_GYM_BATTLE_GIRL, OchreVale_Gym_BattleGirl_Text_0, OchreVale_Gym_BattleGirl_Text_1
# 85 "data/maps/OchreVale_Gym/scripts.pory"
	msgbox OchreVale_Gym_BattleGirl_Text_2, MSGBOX_AUTOCLOSE
	end


OchreVale_Gym_Beauty::
# 90 "data/maps/OchreVale_Gym/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_GYM_BEAUTY, OchreVale_Gym_Beauty_Text_0, OchreVale_Gym_Beauty_Text_1
# 95 "data/maps/OchreVale_Gym/scripts.pory"
	msgbox OchreVale_Gym_Beauty_Text_2, MSGBOX_AUTOCLOSE
	end


OchreVale_Gym_MagmaGrunt::
# 100 "data/maps/OchreVale_Gym/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_GYM_MAGMA_GRUNT, OchreVale_Gym_MagmaGrunt_Text_0, OchreVale_Gym_MagmaGrunt_Text_1
# 105 "data/maps/OchreVale_Gym/scripts.pory"
	msgbox OchreVale_Gym_MagmaGrunt_Text_2, MSGBOX_AUTOCLOSE
	end


OchreVale_Gym_Maniac::
# 110 "data/maps/OchreVale_Gym/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_GYM_MANIAC, OchreVale_Gym_Maniac_Text_0, OchreVale_Gym_Maniac_Text_1
# 115 "data/maps/OchreVale_Gym/scripts.pory"
	msgbox OchreVale_Gym_Maniac_Text_2, MSGBOX_AUTOCLOSE
	end


OchreVale_Gym_Lass::
# 120 "data/maps/OchreVale_Gym/scripts.pory"
	trainerbattle_single TRAINER_OCHRE_VALE_GYM_LASS, OchreVale_Gym_Lass_Text_0, OchreVale_Gym_Lass_Text_1
# 125 "data/maps/OchreVale_Gym/scripts.pory"
	msgbox OchreVale_Gym_Lass_Text_2, MSGBOX_AUTOCLOSE
	end


OchreVale_Gym_Guide::
# 130 "data/maps/OchreVale_Gym/scripts.pory"
	lockall
# 131 "data/maps/OchreVale_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, OchreVale_Gym_Guide_2
# 134 "data/maps/OchreVale_Gym/scripts.pory"
	msgbox OchreVale_Gym_Guide_Text_0, MSGBOX_NPC
OchreVale_Gym_Guide_1:
# 136 "data/maps/OchreVale_Gym/scripts.pory"
	releaseall
	return

OchreVale_Gym_Guide_2:
# 132 "data/maps/OchreVale_Gym/scripts.pory"
	msgbox OchreVale_Gym_Guide_Text, MSGBOX_NPC
	goto OchreVale_Gym_Guide_1


OchreVale_Gym_Douglas_Defeated_Text_0:
# 26 "data/maps/OchreVale_Gym/scripts.pory"
	.string "Recieved the Ochre Badge!$"

OchreVale_Gym_Hiker_Text_0:
# 72 "data/maps/OchreVale_Gym/scripts.pory"
	.string "I feel at home in this cave-like Gym!$"

OchreVale_Gym_Hiker_Text_1:
# 73 "data/maps/OchreVale_Gym/scripts.pory"
	.string "You're really going to come into my home\n"
	.string "and just defeat me like this?$"

OchreVale_Gym_Hiker_Text_2:
# 75 "data/maps/OchreVale_Gym/scripts.pory"
	.string "Caves are all my home.$"

OchreVale_Gym_BattleGirl_Text_0:
# 82 "data/maps/OchreVale_Gym/scripts.pory"
	.string "My muscles are pretty big!$"

OchreVale_Gym_BattleGirl_Text_1:
# 83 "data/maps/OchreVale_Gym/scripts.pory"
	.string "You should feel my abs!$"

OchreVale_Gym_BattleGirl_Text_2:
# 85 "data/maps/OchreVale_Gym/scripts.pory"
	.string "I love working out, you look like you\n"
	.string "could do with some more muscle too.$"

OchreVale_Gym_Beauty_Text_0:
# 92 "data/maps/OchreVale_Gym/scripts.pory"
	.string "My Pokemon help me see in the dark.$"

OchreVale_Gym_Beauty_Text_1:
# 93 "data/maps/OchreVale_Gym/scripts.pory"
	.string "I guess I can see myself lose at least...$"

OchreVale_Gym_Beauty_Text_2:
# 95 "data/maps/OchreVale_Gym/scripts.pory"
	.string "My beauty doesn't show through enough\n"
	.string "in the dark, I should really go\l"
	.string "somewhere else.$"

OchreVale_Gym_MagmaGrunt_Text_0:
# 102 "data/maps/OchreVale_Gym/scripts.pory"
	.string "I got lost and ended up in the Gym...$"

OchreVale_Gym_MagmaGrunt_Text_1:
# 103 "data/maps/OchreVale_Gym/scripts.pory"
	.string "I don't think I was supposed to be\n"
	.string "here...$"

OchreVale_Gym_MagmaGrunt_Text_2:
# 105 "data/maps/OchreVale_Gym/scripts.pory"
	.string "I'm meant to be in the Mine, but I\n"
	.string "somehow ended up in the Gym instead.$"

OchreVale_Gym_Maniac_Text_0:
# 112 "data/maps/OchreVale_Gym/scripts.pory"
	.string "There are some pretty neat Pokemon to\n"
	.string "be found around here...$"

OchreVale_Gym_Maniac_Text_1:
# 113 "data/maps/OchreVale_Gym/scripts.pory"
	.string "You may win in terms of strength, but I\n"
	.string "win in prestige.$"

OchreVale_Gym_Maniac_Text_2:
# 115 "data/maps/OchreVale_Gym/scripts.pory"
	.string "What, you think I'm just going to tell\n"
	.string "you my secrets?$"

OchreVale_Gym_Lass_Text_0:
# 122 "data/maps/OchreVale_Gym/scripts.pory"
	.string "I'm one of the ace trainers at this here\n"
	.string "Gym!$"

OchreVale_Gym_Lass_Text_1:
# 123 "data/maps/OchreVale_Gym/scripts.pory"
	.string "What do you mean I'm still just a LASS?$"

OchreVale_Gym_Lass_Text_2:
# 125 "data/maps/OchreVale_Gym/scripts.pory"
	.string "I'm glad I'm considered one of the Gym's\n"
	.string "ace trainers, but I wish I wasn't paired\l"
	.string "with this guy. He keeps bragging about\l"
	.string "his Pokemon.$"

OchreVale_Gym_Guide_Text_0:
# 134 "data/maps/OchreVale_Gym/scripts.pory"
	.string "Oh good,\nthe lights have come back on.\pOr well,\nthey're a little brighter now I suppose.$"

OchreVale_Gym_Douglas_Text_Intro::
# 39 "data/maps/OchreVale_Gym/scripts.pory"
	.string "Welcome!\p"
	.string "What did you think of the indoor\ncave system I created for the Gym?\p"
	.string "While managing the Mine is my job,\nmanaging the Mountain is my hobby.\p"
	.string "Growing up around here was great,\nbeing at one with the soil,\llearning about the natural ecosystems\l"
	.string "created by all the Pokemon that live\lin the caves and the Mountain.\p"
	.string "But at the end of the day,\nI'm still just a human.\p"
	.string "The best times of my life are when\nI'm diving deep into the earth,\ldigging up all manner of things.\p"
	.string "The second best is when I'm in an intense\nbattle, alongside my Pokemon that\l"
	.string "I've grown through the gruelling\lquarry work and hard labour.\p"
	.string "Are you able to give me that kind of\nbattle?$"

OchreVale_Gym_Douglas_Text_Defeated::
# 52 "data/maps/OchreVale_Gym/scripts.pory"
	.string "Hahaha! Yes!\p"
	.string "Your determination shines through in\nyour battle prowess!\p"
	.string "True hard work is the only thing that\nwill never betray you!$"

OchreVale_Gym_Douglas_PostBattle::
# 58 "data/maps/OchreVale_Gym/scripts.pory"
	.string "A man is only really alive with dirt in\nhis hair and sweat on his back.\p"
	.string "I may not be as young I used to be,\nbut I still work hard at what I love.\p"
	.string "Never let anyone or anything stand in\nyour path, it's yours for a reason.$"

OchreVale_Gym_Douglas_Badge::
# 64 "data/maps/OchreVale_Gym/scripts.pory"
	.string "The Ochre Badge is a symbol of your\nstrong will, and that will is what\lenables you to destroy even boulders.\p"
	.string "Rock, Ground, and Fighting types all\nhelp in the removal of rocks in the Mine,\land they'll help you outside of it too.$"

OchreVale_Gym_Guide_Text::
# 139 "data/maps/OchreVale_Gym/scripts.pory"
	.string "Welcome to the Ochre Vale Gym!\nGym Leader Douglas designed the Gym\lafter the inside of the quarry.\p"
	.string "The cave-like hallways and the dim\nlighting make it that much harder to\lfind your way around!\p"
	.string "Make sure to keep an eye out for other\nTrainers as you make your way\lthrough the Gym!\p"
	.string "Also, Doug likes to use Pokemon that are\nhelpful with the mining operation,\las he doubles as the Gym Leader and the\lquarry overseer.\p"
	.string "Keep your wits about you!$"
