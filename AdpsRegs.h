#ifndef VSSS_ADPSREGS_H
#define VSSS_ADPSREGS_H

enum class AdpsReg {
		RAM = 0x00,
		ENABLE = 0x80,
		ATIME = 0x81,
		WTIME = 0x83,
		AILTIL = 0x84,
		AILTH = 0x85,
		AIHTL = 0x86,
		AIHTH = 0x87,
		PILT = 0x89,
		PIHT = 0x8B,
		PERS = 0x8C,
		CONFIG1 = 0x8D,
		PPULSE = 0x8E,
		CONTROL = 0x8F,
		CONFIG2 = 0x90,
		ID = 0x92,
		STATUS = 0x93,
		CDATAL = 0x94,
		CDATAH = 0x95,
		RDATAL = 0x96,
		RDATAH = 0x97,
		GDATAL = 0x98,
		GDATAH = 0x99,
		BDATAL = 0x9A,
		BDATAH = 0x9B,
		PDATA = 0x9C,
		POFFSET_UR = 0x9D,
		POFFSET_DL = 0x9E,
		CONFIG3 = 0x9F,
		GPENTH = 0xA0,
		GEXTH = 0xA1,
		GCONF1 = 0xA2,
		GCONF2 = 0xA3,
		GOFFSET_U = 0xA4,
		GOFFSET_D = 0xA5,
		GOFFSET_L = 0xA7,
		GOFFSET_R = 0xA9,
		GPULSE = 0xA6,
		GCONF3 = 0xAA,
		GCONF4 = 0xAB,
		GFLVL = 0xAE,
		GSTATUS = 0xAF,
		IFORCE = 0xE4,
		PICLEAR = 0xE5,
		CICLEAR = 0xE6,
		AICLEAR = 0xE7,
		GFIFO_U = 0xFC,
		GFIFO_D = 0xFD,
		GFIFO_L = 0xFE,
		GFIFO_R = 0xFF,
};

#endif //VSSS_ADPSREGS_H
