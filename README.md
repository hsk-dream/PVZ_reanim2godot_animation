# PVZ_reanim2godot_animation
将植物大战僵尸的动画文件转换为Godot游戏引擎所支持的动画格式

## 使用方法

1.打开命令提示符（cmd）

2.输入程序名（带路径）

3.输入参数：空格 原文件 空格 动画存放路径 空格 素材路径 模式

## 注意

1.动画存放路径和素材路径是godot项目内的相对路径，不是绝对路径

2.当模式为tscn_by_anim时，本程序生成tscn场景免拼文件；当模式为anim_tres时，本程序生成tres动画文件

3.当模式为auto时，本程序生成一个tscn场景免拼文件和多个分割好的tres动画文件，并自动关联场景与动画

## 使用例

正确例1：

C:\Users\HYTomZ\source\repos\PVZ_reanim2godot_animation\x64\Release\PVZ_reanim2godot_animation.exe C:\Users\HYTomZ\Pictures\pvz素材\MainGame\Zombie\Zombie_walk.reanim res://anim/ res://art/zombies tscn_by_anim

正确例2：

C:\Users\HYTomZ\source\repos\PVZ_reanim2godot_animation\x64\Release\PVZ_reanim2godot_animation.exe C:\Users\HYTomZ\Pictures\pvz素材\MainGame\Zombie\Zombie_walk.reanim res://anim/ res://art/zombies auto


## QQ群

群名：Godot交流群

群号：1018028780
