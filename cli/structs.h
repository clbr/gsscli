#ifndef STRUCTS_H
#define STRUCTS_H

struct instrumentStruct {
	short *source;
	int source_length;
	int source_rate;
	int source_volume;

	int env_ar;
	int env_dr;
	int env_sl;
	int env_sr;

	int length;

	int loop_start;
	int loop_end;
	bool loop_enable;
	bool loop_unroll;

	int wav_loop_start;
	int wav_loop_end;

	int resample_type;
	int downsample_factor;
	bool ramp_enable;

	int BRR_adr;
	int BRR_size;

	int eq_low;
	int eq_mid;
	int eq_high;

	const char *name;
};

struct noteFieldStruct {
	unsigned char note;
	unsigned char instrument;
	unsigned char effect;
	unsigned char value;
	unsigned char volume;
};

struct rowStruct {
	int speed;
	bool marker;
	const char *name;
	noteFieldStruct chn[8];
};

struct songStruct {
	rowStruct row[MAX_ROWS];

	int length;
	int loop_start;
	int measure;

	bool effect;

	int compiled_size;

	const char *name;
};

struct undoStruct {
	rowStruct row[MAX_ROWS];

	bool available;

	int colCur;
	int rowCur;
};

#endif
