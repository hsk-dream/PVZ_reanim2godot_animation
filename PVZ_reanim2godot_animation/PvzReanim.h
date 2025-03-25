#pragma once

#define MODE_TSCN_STR "tscn"
#define MODE_TSCN_BY_ANIM_STR "tscn_by_anim"
#define MODE_ANIM_TRES_STR "anim_tres"
#define MODE_AUTO_STR "auto"


typedef enum update_mode
{
	UPDATE_MODE_CONTINUOUS, // 连续
	UPDATE_MODE_DISCRETE,   // 离散
	UPDATE_MODE_CAPTURE    // 捕获
}update_mode;

typedef enum interpolation_mode
{
	INTERPOLATION_MODE_NEAREST, // 临近
	INTERPOLATION_MODE_LINEAR,  // 线性
	INTERPOLATION_MODE_CUBIC    // 三次方
}interpolation_mode;

#define UPDATE_MODE UPDATE_MODE_CONTINUOUS
#define INTERPOLATION_MODE INTERPOLATION_MODE_LINEAR

typedef enum dictionary_index
{
	FPS_INDEX,
	TRACK_INDEX,
	NAME_INDEX,

	T_INDEX,
	F_INDEX,
	I_INDEX,
	X_INDEX,
	Y_INDEX,

	SX_INDEX,
	SY_INDEX,
	KX_INDEX,
	KY_INDEX,

	BM_INDEX,
}dictionary_index;

static const char* dictionary[] =
{
	"fps", "track", "name",

	"t", "f", "i", "x", "y",

	"sx", "sy", "kx", "ky",

	"bm"
};