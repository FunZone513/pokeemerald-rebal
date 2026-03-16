Route11_MapScripts::
	.byte 0


Route11_BugCatcher::
# 4 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_ROUTE11_BUG_CATCHER, Route11_BugCatcher_Text_0, Route11_BugCatcher_Text_1
# 9 "data/maps/Route11/scripts.pory"
	msgbox Route11_BugCatcher_Text_2, MSGBOX_AUTOCLOSE
	end


Route11_BattleGirl::
# 14 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_ROUTE11_BATTLE_GIRL, Route11_BattleGirl_Text_0, Route11_BattleGirl_Text_1
# 19 "data/maps/Route11/scripts.pory"
	msgbox Route11_BattleGirl_Text_2, MSGBOX_AUTOCLOSE
	end


Route11_Hiker::
# 24 "data/maps/Route11/scripts.pory"
	trainerbattle_single TRAINER_ROUTE11_HIKER, Route11_Hiker_Text_0, Route11_Hiker_Text_1
# 29 "data/maps/Route11/scripts.pory"
	msgbox Route11_Hiker_Text_2, MSGBOX_AUTOCLOSE
	end


Route11_BugCatcher_Text_0:
# 6 "data/maps/Route11/scripts.pory"
	.string "Found any cool bugs?$"

Route11_BugCatcher_Text_1:
# 7 "data/maps/Route11/scripts.pory"
	.string "Aw man...$"

Route11_BugCatcher_Text_2:
# 9 "data/maps/Route11/scripts.pory"
	.string "I can't afford to heal at the resort...\n"
	.string "now what do I do?$"

Route11_BattleGirl_Text_0:
# 16 "data/maps/Route11/scripts.pory"
	.string "Trekking makes for a good workout!$"

Route11_BattleGirl_Text_1:
# 17 "data/maps/Route11/scripts.pory"
	.string "I would've won if I wasn't already worn\n"
	.string "out...$"

Route11_BattleGirl_Text_2:
# 19 "data/maps/Route11/scripts.pory"
	.string "I'm enjoying the harsh vibe of the area\n"
	.string "around here.$"

Route11_Hiker_Text_0:
# 26 "data/maps/Route11/scripts.pory"
	.string "Oh hey.$"

Route11_Hiker_Text_1:
# 27 "data/maps/Route11/scripts.pory"
	.string "Nice job.$"

Route11_Hiker_Text_2:
# 29 "data/maps/Route11/scripts.pory"
	.string "I'm not much of a battler, I just enjoy\n"
	.string "being outdoors with my Pokemon.$"
