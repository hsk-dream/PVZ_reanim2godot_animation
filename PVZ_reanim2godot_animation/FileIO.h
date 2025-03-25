#pragma once
#include <stdio.h>

#include "convert.h"

void FileOpen(FILE** fp, const char* filename, const char* mode, int exit_code);
void FileClose(FILE* fp);
void FileRead(FILE* input, char* filetext);
void _FileWritePvzTrack(FILE* output, Tracks* track, int times);
void FileWriteTracks(PVZAnimation* anim, const bool is_bm_enabled);
void FileMergeFiles(FILE* output_file,const char* output_type, FILE* input_files[], int num_files);
void FileExtResource(PVZAnimation* pvz_anim[], int anim_index, int anim_num, const char* anim_godot_path, const char* res_godot_path, const bool is_bm_enabled, const bool is_ext_anim_enabled);
void FileGetFileName(const char* filePath, char* fileName);
void FileGetFilePath(const char* fileWholePath, char* filePath);
void FileSetAnim(FILE* output, const char* output_type, const char* ResName, int time_num);
void FileAddNode(FILE* output, const int tracks_num, const int anim_num, const char node_name[MAX_TEXTURE_NUM][NAME_LENTH], PVZAnimation* pvz_anim[], const bool is_ext_anim_enabled);