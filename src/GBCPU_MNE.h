#ifndef GBCPU_MNE_H
#define GBCPU_MNE_H

#include "stdio.h"

#define CDNUM 256
#define NLENGTH 32

#define BASIC_1B_EX_MEMBERS 25
#define BASIC_2B_EX_MEMBERS 17

#define IS_EXCEPT_NUMBER 1
#define NOT_EXCEPT_NUMBER 0

int BASIC_MN_1BYTE[BASIC_1B_EX_MEMBERS] = { 0x06, 0x0E, 0x16, 0x18, 0x1E, 0x20, 0x26, 0x28,
											0x2E, 0x30, 0x36, 0x38, 0x3E, 0xC6, 0xCE, 0xD6,
											0xDE, 0xE0, 0xE6, 0xE8, 0xEE, 0xF0, 0xF6, 0xF8, 0xFE };

int BASIC_MN_2BYTE[BASIC_2B_EX_MEMBERS] = { 0x01, 0x08, 0x11, 0x21, 0x31, 0xC2, 0xC3, 0xC4,
											0xCA, 0xCC, 0xCD, 0xD2, 0xD4, 0xDA, 0xDC, 0xEA, 0xFA };

char basicMnemonic[CDNUM][NLENGTH] = 
{	
	"NOP",						//00
	"LD	BC, 0x%02X%02X",		//01
	"LD	(BC), A",				//02
	"INC	BC",				//03
	"INC	B",					//04
	"DEC	B",					//05
	"LD	B, 0x%02X",				//06
	"RLCA",						//07
	"LD	(0x%02X%02X), SP",		//08
	"ADD	HL, BC",			//09
	"LD	A, (BC)",				//0A
	"DEC	BC",				//0B
	"INC	C",					//0C
	"DEC	C",					//0D
	"LD	C, 0x%02X",				//0E
	"RRCA",						//0F

	"STOP	0",					//10
	"LD	DE, 0x%02X%02X",		//11
	"LD	(DE), A",				//12
	"INC	DE",				//13
	"INC	D",					//14
	"DEC	D",					//15
	"LD	D, 0x%02X",				//16
	"RLA",						//17
	"JR	0x%02X",				//18
	"ADD	HL, DE",			//19
	"LD	A, (DE)",				//1A
	"DEC	DE",				//1B
	"INC	E",					//1C
	"DEC	E",					//1D
	"LD	E, 0x%02X",				//1E
	"RRA",						//1F

	"JR	NZ, 0x%02X",			//20
	"LD	HL, 0x%02X%02X",		//21
	"LD	(HL+), A",				//22
	"INC	HL",				//23
	"INC	H",					//24
	"DEC	H",					//25
	"LD	H, 0x%02X",				//26
	"DAA",						//27
	"JR	Z, 0x%02X",				//28
	"ADD	HL, HL",			//29
	"LD	A, (HL+)",				//2A
	"DEC	HL",				//2B
	"INC	L",					//2C
	"DEC	L",					//2D
	"LD	L, 0x%02X",				//2E
	"CPL",						//2F

	"JR	NC, 0x%02X",			//30
	"LD	SP, 0x%02X%02X",		//31
	"LD	(HL-), A",				//32
	"INC	SP",				//33
	"INC	(HL)",				//34
	"DEC	(HL)",				//35
	"LD	(HL), 0x%02X",			//36
	"SCF",						//37
	"JR	C, 0x%02X",				//38
	"ADD	HL, SP",			//39
	"LD	A, (HL-)",				//3A
	"DEC	SP",				//3B
	"INC	A",					//3C
	"DEC	A",					//3D
	"LD	A, 0x%02X",				//3E
	"CCF",						//3F

	"LD	B, B",					//40
	"LD	B, C",					//41
	"LD	B, D",					//42
	"LD	B, E",					//43
	"LD	B, H",					//44
	"LD	B, L",					//45
	"LD	B, (HL)",				//46
	"LD	B, A",					//47
	"LD	C, B",					//48
	"LD	C, C",					//49
	"LD	C, D",					//4A
	"LD	C, E",					//4B
	"LD	C, H",					//4C
	"LD	C, L",					//4D
	"LD	C, (HL)",				//4E
	"LD	C, A",					//4F

	"LD	D, B",					//50
	"LD	D, C",					//51
	"LD	D, D",					//52
	"LD	D, E",					//53
	"LD	D, H",					//54
	"LD	D, L",					//55
	"LD	D, (HL)",				//56
	"LD	D, A",					//57
	"LD	E, B",					//58
	"LD	E, C",					//59
	"LD	E, D",					//5A
	"LD	E,	E",					//5B
	"LD	E, H",					//5C
	"LD	E, L",					//5D
	"LD	E, (HL)",				//5E
	"LD	E, A",					//5F

	"LD	H, B",					//60
	"LD	H, C",					//61
	"LD	H, D",					//62
	"LD	H, E",					//63
	"LD	H, H",					//64
	"LD	H, L",					//65
	"LD	H, (HL)",				//66
	"LD	H, A",					//67
	"LD	L ,B",					//68
	"LD	L, C",					//69
	"LD	L, D",					//6A
	"LD	L, E",					//6B
	"LD	L, H",					//6C
	"LD	L, L",					//6D
	"LD	L, (HL)",				//6E
	"LD	L, A",					//6F

	"LD	(HL), B",				//70
	"LD	(HL), C",				//71
	"LD	(HL), D",				//72
	"LD	(HL), E",				//73
	"LD	(HL), H",				//74
	"LD	(HL), L",				//75
	"HALT",						//76
	"LD	(HL), A",				//77
	"LD	A, B",					//78
	"LD	A, C",					//79
	"LD	A, D",					//7A
	"LD	A, E",					//7B
	"LD	A, H",					//7C
	"LD	A, L",					//7D
	"LD	A, (HL)",				//7E
	"LD	A, A",					//7F

	"ADD	A, B",				//80
	"ADD	A, C",				//81
	"ADD	A, D",				//82
	"ADD	A, E",				//83
	"ADD	A, H",				//84
	"ADD	A, L",				//85
	"ADD	A, (HL)",			//86
	"ADD	A, A",				//87
	"ADC	A, B",				//88
	"ADC	A, C",				//89
	"ADC	A, D",				//8A
	"ADC	A, E",				//8B
	"ADC	A, H",				//8C
	"ADC	A, L",				//8D
	"ADC	A, (HL)",			//8E
	"ADC	A, A",				//8F

	"SUB	B",					//90
	"SUB	C",					//91
	"SUB	D",					//92
	"SUB	E",					//93
	"SUB	H",					//94
	"SUB	L",					//95
	"SUB	(HL)",				//96
	"SUB	A",					//97
	"SBC	A, B",				//98
	"SBC	A, C",				//99
	"SBC	A, D",				//9A
	"SBC	A, E",				//9B
	"SBC	A, H",				//9C
	"SBC	A, L",				//9D
	"SBC	A, (HL)",			//9E
	"SBC	A, A",				//9F

	"AND	B",					//A0
	"AND	C",					//A1
	"AND	D",					//A2
	"AND	E",					//A3
	"AND	H",					//A4
	"AND	L",					//A5
	"AND	(HL)",				//A6
	"AND	A",					//A7
	"XOR	B",					//A8
	"XOR	C",					//A9
	"XOR	D",					//AA
	"XOR	E",					//AB
	"XOR	H",					//AC
	"XOR	L",					//AD
	"XOR	(HL)",				//AE
	"XOR	A",					//AF

	"OR	B",						//B0
	"OR	C",						//B1
	"OR	D",						//B2
	"OR	E",						//B3
	"OR	H",						//B4
	"OR	L",						//B5
	"OR	(HL)",					//B6
	"OR	A",						//B7
	"CP	B",						//B8
	"CP	C",						//B9
	"CP	D",						//BA
	"CP	E",						//BB
	"CP	H",						//BC
	"CP	L",						//BD
	"CP	(HL)",					//BE
	"CP	A",						//BF

	"RET	NZ",				//C0
	"POP	BC",				//C1
	"JP	NZ, 0x%02X%02X",		//C2
	"JP	0x%02X%02X",			//C3
	"CALL	NZ, 0x%02X%02X",	//C4
	"PUSH	BC",				//C5
	"ADD	A, 0x%02X",			//C6
	"RST	00H",				//C7
	"RET	Z",					//C8
	"RET",						//C9
	"JP	Z, 0x%02X%02X",			//CA
	"xx",						//CB
	"CALL	Z, 0x%02X%02X",		//CC
	"CALL	0x%02X%02X",		//CD
	"ADC	A, 0x%02X",			//CE
	"RST	08H",				//CF
		
	"RET	NC",				//D0
	"POP	DE",				//D1
	"JP	NC, 0x%02X%02X",		//D2
	"[undefined]",				//D3
	"CALL	NC, 0x%02X%02X",	//D4
	"PUSH	DE",				//D5
	"SUB	0x%02X",			//D6
	"RST	10H",				//D7
	"RET	C",					//D8
	"RETI",						//D9
	"JP	C, 0x%02X%02X",			//DA
	"[undefined]",				//DB
	"CALL	C, 0x%02X%02X",		//DC
	"[undefined]",				//DD
	"SBC	A, 0x%02X",			//DE
	"RST	18H",				//DF

	"LDH	(0x%02X), A",		//E0
	"POP	HL",				//E1
	"LD	(C), A",				//E2
	"[undefined]",				//E3
	"[undefined]",				//E4
	"PUSH	HL",				//E5
	"AND	0x%02X",			//E6
	"RST	20H",				//E7
	"ADD SP, 0x%02X",			//E8
	"JP	(HL)",					//E9
	"LD	(0x%02X%02X), A",		//EA
	"[undefined]",				//EB
	"[undefined]",				//EC
	"[undefined]",				//ED
	"XOR	0x%02X",			//EE
	"RST	28H",				//EF

	"LDH	A, (0x%02X)",		//F0
	"POP	AF",				//F1
	"LD	A, (C)",				//F2
	"DI",						//F3
	"[undefined]",				//F4
	"PUSH	AF",				//F5
	"OR	0x%02X",				//F6
	"RST	30H",				//F7
	"LD	HL, SP+0x%02X",			//F8
	"LD	SP, HL",				//F9
	"LD	A, 0x%02X%02X",			//FA
	"EI",						//FB
	"[undefined]",				//FC
	"[undefined]",				//FD
	"CP	0x%02X",				//FE
	"RST	38H"				//FF
};

char CBxxMnemonic[CDNUM][NLENGTH] = 
{	
	"RLC	B",					//CB 00
	"RLC	C",					//CB 01
	"RLC	D",					//CB 02
	"RLC	E",					//CB 03
	"RLC	H",					//CB 04
	"RLC	L",					//CB 05
	"RLC	(HL)",				//CB 06
	"RLC	A",					//CB 07

	"RRC	B",					//CB 08
	"RRC	C",					//CB 09
	"RRC	D",					//CB 0A
	"RRC	E",					//CB 0B
	"RRC	H",					//CB 0C
	"RRC	L",					//CB 0D
	"RRC	(HL)",				//CB 0E
	"RRC	A",					//CB 0F

	"RL	B",						//CB 10
	"RL	C",						//CB 11
	"RL	D",						//CB 12
	"RL	E",						//CB 13
	"RL	H",						//CB 14
	"RL	L",						//CB 15
	"RL	(HL)",					//CB 16
	"RL	A",						//CB 17

	"RR	B",						//CB 18
	"RR	C",						//CB 19
	"RR	D",						//CB 1A
	"RR	E",						//CB 1B
	"RR	H",						//CB 1C
	"RR	L",						//CB 1D
	"RR	(HL)",					//CB 1E
	"RR	A",						//CB 1F

	"SLA	B",					//CB 20
	"SLA	C",					//CB 21
	"SLA	D",					//CB 22
	"SLA	E",					//CB 23
	"SLA	H",					//CB 24
	"SLA	L",					//CB 25
	"SLA	(HL)",				//CB 26
	"SLA	A",					//CB 27

	"SRA	B",					//CB 28
	"SRA	C",					//CB 29
	"SRA	D",					//CB 2A
	"SRA	E",					//CB 2B
	"SRA	H",					//CB 2C
	"SRA	L",					//CB 2D
	"SRA	(HL)",				//CB 2E
	"SRA	A",					//CB 2F

	"SWAP	B",					//CB 30
	"SWAP	C",					//CB 31
	"SWAP	D",					//CB 32
	"SWAP	E",					//CB 33
	"SWAP	H",					//CB 34
	"SWAP	L",					//CB 35
	"SWAP	(HL)",				//CB 36
	"SWAP	A",					//CB 37

	"SRL	B",					//CB 38
	"SRL	C",					//CB 39
	"SRL	D",					//CB 3A
	"SRL	E",					//CB 3B
	"SRL	H",					//CB 3C
	"SRL	L",					//CB 3D
	"SRL	(HL)",				//CB 3E
	"SRL	A",					//CB 3F

	"BIT	0, B",				//CB 40
	"BIT	0, C",				//CB 41
	"BIT	0, D",				//CB 42
	"BIT	0, E",				//CB 43
	"BIT	0, H",				//CB 44
	"BIT	0, L",				//CB 45
	"BIT	0, (HL)",			//CB 46
	"BIT	0, A",				//CB 47

	"BIT	1, B",				//CB 48
	"BIT	1, C",				//CB 49
	"BIT	1, D",				//CB 4A
	"BIT	1, E",				//CB 4B
	"BIT	1, H",				//CB 4C
	"BIT	1, L",				//CB 4D
	"BIT	1, (HL)",			//CB 4E
	"BIT	1, A",				//CB 4F

	"BIT	2, B",				//CB 50
	"BIT	2, C",				//CB 51
	"BIT	2, D",				//CB 52
	"BIT	2, E",				//CB 53
	"BIT	2, H",				//CB 54
	"BIT	2, L",				//CB 55
	"BIT	2, (HL)",			//CB 56
	"BIT	2, A",				//CB 57

	"BIT	3, B",				//CB 58
	"BIT	3, C",				//CB 59
	"BIT	3, D",				//CB 5A
	"BIT	3, E",				//CB 5B
	"BIT	3, H",				//CB 5C
	"BIT	3, L",				//CB 5D
	"BIT	3, (HL)",			//CB 5E
	"BIT	3, A",				//CB 5F

	"BIT	4, B",				//CB 60
	"BIT	4, C",				//CB 61
	"BIT	4, D",				//CB 62
	"BIT	4, E",				//CB 63
	"BIT	4, H",				//CB 64
	"BIT	4, L",				//CB 65
	"BIT	4, (HL)",			//CB 66
	"BIT	4, A",				//CB 67

	"BIT	5, B",				//CB 68
	"BIT	5, C",				//CB 69
	"BIT	5, D",				//CB 6A
	"BIT	5, E",				//CB 6B
	"BIT	5, H",				//CB 6C
	"BIT	5, L",				//CB 6D
	"BIT	5, (HL)",			//CB 6E
	"BIT	5, A",				//CB 6F

	"BIT	6, B",				//CB 70
	"BIT	6, C",				//CB 71
	"BIT	6, D",				//CB 72
	"BIT	6, E",				//CB 73
	"BIT	6, H",				//CB 74
	"BIT	6, L",				//CB 75
	"BIT	6, (HL)",			//CB 76
	"BIT	6, A",				//CB 77

	"BIT	7, B",				//CB 78
	"BIT	7, C",				//CB 79
	"BIT	7, D",				//CB 7A
	"BIT	7, E",				//CB 7B
	"BIT	7, H",				//CB 7C
	"BIT	7, L",				//CB 7D
	"BIT	7, (HL)",			//CB 7E
	"BIT	7, A",				//CB 7F

	"RES	0, B",				//CB 80
	"RES	0, C",				//CB 81
	"RES	0, D",				//CB 82
	"RES	0, E",				//CB 83
	"RES	0, H",				//CB 84
	"RES	0, L",				//CB 85
	"RES	0, (HL)",			//CB 86
	"RES	0, A",				//CB 87

	"RES	1, B",				//CB 88
	"RES	1, C",				//CB 89
	"RES	1, D",				//CB 8A
	"RES	1, E",				//CB 8B
	"RES	1, H",				//CB 8C
	"RES	1, L",				//CB 8D
	"RES	1, (HL)",			//CB 8E
	"RES	1, A",				//CB 8F

	"RES	2, B",				//CB 90
	"RES	2, C",				//CB 91
	"RES	2, D",				//CB 92
	"RES	2, E",				//CB 93
	"RES	2, H",				//CB 94
	"RES	2, L",				//CB 95
	"RES	2, (HL)",			//CB 96
	"RES	2, A",				//CB 97

	"RES	3, B",				//CB 98
	"RES	3, C",				//CB 99
	"RES	3, D",				//CB 9A
	"RES	3, E",				//CB 9B
	"RES	3, H",				//CB 9C
	"RES	3, L",				//CB 9D
	"RES	3, (HL)",			//CB 9E
	"RES	3, A",				//CB 9F

	"RES	4, B",				//CB A0
	"RES	4, C",				//CB A1
	"RES	4, D",				//CB A2
	"RES	4, E",				//CB A3
	"RES	4, H",				//CB A4
	"RES	4, L",				//CB A5
	"RES	4, (HL)",			//CB A6
	"RES	4, A",				//CB A7

	"RES	5, B",				//CB A8
	"RES	5, C",				//CB A9
	"RES	5, D",				//CB AA
	"RES	5, E",				//CB AB
	"RES	5, H",				//CB AC
	"RES	5, L",				//CB AD
	"RES	5, (HL)",			//CB AE
	"RES	5, A",				//CB AF

	"RES	6, B",				//CB B0
	"RES	6, C",				//CB B1
	"RES	6, D",				//CB B2
	"RES	6, E",				//CB B3
	"RES	6, H",				//CB B4
	"RES	6, L",				//CB B5
	"RES	6, (HL)",			//CB B6
	"RES	6, A",				//CB B7

	"RES	7, B",				//CB B8
	"RES	7, C",				//CB B9
	"RES	7, D",				//CB BA
	"RES	7, E",				//CB BB
	"RES	7, H",				//CB BC
	"RES	7, L",				//CB BD
	"RES	7, (HL)",			//CB BE
	"RES	7, A",				//CB BF

	"SET	0, B",				//CB C0
	"SET	0, C",				//CB C1
	"SET	0, D",				//CB C2
	"SET	0, E",				//CB C3
	"SET	0, H",				//CB C4
	"SET	0, L",				//CB C5
	"SET	0, (HL)",			//CB C6
	"SET	0, A",				//CB C7

	"SET	1, B",				//CB C8
	"SET	1, C",				//CB C9
	"SET	1, D",				//CB CA
	"SET	1, E",				//CB CB
	"SET	1, H",				//CB CC
	"SET	1, L",				//CB CD
	"SET	1, (HL)",			//CB CE
	"SET	1, A",				//CB CF

	"SET	2, B",				//CB D0
	"SET	2, C",				//CB D1
	"SET	2, D",				//CB D2
	"SET	2, E",				//CB D3
	"SET	2, H",				//CB D4
	"SET	2, L",				//CB D5
	"SET	2, (HL)",			//CB D6
	"SET	2, A",				//CB D7

	"SET	3, B",				//CB D8
	"SET	3, C",				//CB D9
	"SET	3, D",				//CB DA
	"SET	3, E",				//CB DB
	"SET	3, H",				//CB DC
	"SET	3, L",				//CB DD
	"SET	3, (HL)",			//CB DE
	"SET	3, A",				//CB DF

	"SET	4, B",				//CB E0
	"SET	4, C",				//CB E1
	"SET	4, D",				//CB E2
	"SET	4, E",				//CB E3
	"SET	4, H",				//CB E4
	"SET	4, L",				//CB E5
	"SET	4, (HL)",			//CB E6
	"SET	4, A",				//CB E7

	"SET	5, B",				//CB E8
	"SET	5, C",				//CB E9
	"SET	5, D",				//CB EA
	"SET	5, E",				//CB EB
	"SET	5, H",				//CB EC
	"SET	5, L",				//CB ED
	"SET	5, (HL)",			//CB EE
	"SET	5, A",				//CB EF

	"SET	6, B",				//CB F0
	"SET	6, C",				//CB F1
	"SET	6, D",				//CB F2
	"SET	6, E",				//CB F3
	"SET	6, H",				//CB F4
	"SET	6, L",				//CB F5
	"SET	6, (HL)",			//CB F6
	"SET	6, A",				//CB F7

	"SET	7, B",				//CB F8
	"SET	7, C",				//CB F9
	"SET	7, D",				//CB FA
	"SET	7, E",				//CB FB
	"SET	7, H",				//CB FC
	"SET	7, L",				//CB FD
	"SET	7, (HL)",			//CB FE
	"SET	7, A"				//CB FF
};

#endif