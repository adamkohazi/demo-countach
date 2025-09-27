#include "mmsystem.h"
#include "mmreg.h"


WAVEFORMATEX WaveFMT
{
#ifdef FLOAT_32BIT
	WAVE_FORMAT_IEEE_FLOAT,
#else
	WAVE_FORMAT_PCM,
#endif
		2,											// channels
		SAMPLE_RATE,								// samples per sec
		SAMPLE_RATE * sizeof(SAMPLE_TYPE) * 2,		// bytes per sec
		sizeof(SAMPLE_TYPE) * 2,					// block alignment
		sizeof(SAMPLE_TYPE) * 8,					// bits per sample
		0											// no extension
};