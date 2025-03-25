                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.0.0 #11528 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module pic
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _delay
                                     13 	.globl _RandomNum
                                     14 ;--------------------------------------------------------
                                     15 ; special function registers
                                     16 ;--------------------------------------------------------
                                     17 	.area RSEG    (ABS,DATA)
      000000                         18 	.org 0x0000
                                     19 ;--------------------------------------------------------
                                     20 ; special function bits
                                     21 ;--------------------------------------------------------
                                     22 	.area RSEG    (ABS,DATA)
      000000                         23 	.org 0x0000
                                     24 ;--------------------------------------------------------
                                     25 ; overlayable register banks
                                     26 ;--------------------------------------------------------
                                     27 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                         28 	.ds 8
                                     29 ;--------------------------------------------------------
                                     30 ; internal ram data
                                     31 ;--------------------------------------------------------
                                     32 	.area DSEG    (DATA)
      000008                         33 _RandomNum_lfsr_65536_13:
      000008                         34 	.ds 1
                                     35 ;--------------------------------------------------------
                                     36 ; overlayable items in internal ram 
                                     37 ;--------------------------------------------------------
                                     38 	.area	OSEG    (OVR,DATA)
                                     39 	.area	OSEG    (OVR,DATA)
                                     40 ;--------------------------------------------------------
                                     41 ; Stack segment in internal ram 
                                     42 ;--------------------------------------------------------
                                     43 	.area	SSEG
      000009                         44 __start__stack:
      000009                         45 	.ds	1
                                     46 
                                     47 ;--------------------------------------------------------
                                     48 ; indirectly addressable internal ram data
                                     49 ;--------------------------------------------------------
                                     50 	.area ISEG    (DATA)
                                     51 ;--------------------------------------------------------
                                     52 ; absolute internal ram data
                                     53 ;--------------------------------------------------------
                                     54 	.area IABS    (ABS,DATA)
                                     55 	.area IABS    (ABS,DATA)
                                     56 ;--------------------------------------------------------
                                     57 ; bit data
                                     58 ;--------------------------------------------------------
                                     59 	.area BSEG    (BIT)
                                     60 ;--------------------------------------------------------
                                     61 ; paged external ram data
                                     62 ;--------------------------------------------------------
                                     63 	.area PSEG    (PAG,XDATA)
                                     64 ;--------------------------------------------------------
                                     65 ; external ram data
                                     66 ;--------------------------------------------------------
                                     67 	.area XSEG    (XDATA)
                                     68 ;--------------------------------------------------------
                                     69 ; absolute external ram data
                                     70 ;--------------------------------------------------------
                                     71 	.area XABS    (ABS,XDATA)
                                     72 ;--------------------------------------------------------
                                     73 ; external initialized ram data
                                     74 ;--------------------------------------------------------
                                     75 	.area XISEG   (XDATA)
                                     76 	.area HOME    (CODE)
                                     77 	.area GSINIT0 (CODE)
                                     78 	.area GSINIT1 (CODE)
                                     79 	.area GSINIT2 (CODE)
                                     80 	.area GSINIT3 (CODE)
                                     81 	.area GSINIT4 (CODE)
                                     82 	.area GSINIT5 (CODE)
                                     83 	.area GSINIT  (CODE)
                                     84 	.area GSFINAL (CODE)
                                     85 	.area CSEG    (CODE)
                                     86 ;--------------------------------------------------------
                                     87 ; interrupt vector 
                                     88 ;--------------------------------------------------------
                                     89 	.area HOME    (CODE)
      000000                         90 __interrupt_vect:
      000000 02 00 06         [24]   91 	ljmp	__sdcc_gsinit_startup
                                     92 ;--------------------------------------------------------
                                     93 ; global & static initialisations
                                     94 ;--------------------------------------------------------
                                     95 	.area HOME    (CODE)
                                     96 	.area GSINIT  (CODE)
                                     97 	.area GSFINAL (CODE)
                                     98 	.area GSINIT  (CODE)
                                     99 	.globl __sdcc_gsinit_startup
                                    100 	.globl __sdcc_program_startup
                                    101 	.globl __start__stack
                                    102 	.globl __mcs51_genXINIT
                                    103 	.globl __mcs51_genXRAMCLEAR
                                    104 	.globl __mcs51_genRAMCLEAR
                                    105 ;------------------------------------------------------------
                                    106 ;Allocation info for local variables in function 'RandomNum'
                                    107 ;------------------------------------------------------------
                                    108 ;lfsr                      Allocated with name '_RandomNum_lfsr_65536_13'
                                    109 ;random_b                  Allocated to registers r7 
                                    110 ;------------------------------------------------------------
                                    111 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:75: static unsigned char lfsr = 0x07;
      00005F 75 08 07         [24]  112 	mov	_RandomNum_lfsr_65536_13,#0x07
                                    113 	.area GSFINAL (CODE)
      000062 02 00 03         [24]  114 	ljmp	__sdcc_program_startup
                                    115 ;--------------------------------------------------------
                                    116 ; Home
                                    117 ;--------------------------------------------------------
                                    118 	.area HOME    (CODE)
                                    119 	.area HOME    (CODE)
      000003                        120 __sdcc_program_startup:
      000003 02 00 65         [24]  121 	ljmp	_main
                                    122 ;	return from main will return to caller
                                    123 ;--------------------------------------------------------
                                    124 ; code
                                    125 ;--------------------------------------------------------
                                    126 	.area CSEG    (CODE)
                                    127 ;------------------------------------------------------------
                                    128 ;Allocation info for local variables in function 'main'
                                    129 ;------------------------------------------------------------
                                    130 ;valor                     Allocated to registers r7 
                                    131 ;------------------------------------------------------------
                                    132 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:10: void main(void) {
                                    133 ;	-----------------------------------------
                                    134 ;	 function main
                                    135 ;	-----------------------------------------
      000065                        136 _main:
                           000007   137 	ar7 = 0x07
                           000006   138 	ar6 = 0x06
                           000005   139 	ar5 = 0x05
                           000004   140 	ar4 = 0x04
                           000003   141 	ar3 = 0x03
                           000002   142 	ar2 = 0x02
                           000001   143 	ar1 = 0x01
                           000000   144 	ar0 = 0x00
                                    145 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:11: TRISIO = 0b00010000;                    // COnfigurar como entra el PIN5.
      000065 75 00 10         [24]  146 	mov	_TRISIO,#0x10
                                    147 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:12: GPIO = 0x00;                            // Poner en bajo las GPIO.
      000068 75 00 00         [24]  148 	mov	_GPIO,#0x00
                                    149 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:16: while (1) {
      00006B                        150 00111$:
                                    151 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:17: if (GP4 == 0) {                     // Condición de inicio.
      00006B 78 00            [12]  152 	mov	r0,#_GPIObits
      00006D E6               [12]  153 	mov	a,@r0
      00006E 20 E4 FA         [24]  154 	jb	acc.4,00111$
                                    155 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:18: valor = RandomNum();
      000071 12 01 0F         [24]  156 	lcall	_RandomNum
      000074 AF 82            [24]  157 	mov	r7,dpl
                                    158 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:19: GPIO = 0x00;                    // Estado inicial del GPIO.
      000076 75 00 00         [24]  159 	mov	_GPIO,#0x00
                                    160 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:21: switch (valor) {
      000079 EF               [12]  161 	mov	a,r7
      00007A 24 F9            [12]  162 	add	a,#0xff - 0x06
      00007C 40 5A            [24]  163 	jc	00107$
      00007E EF               [12]  164 	mov	a,r7
      00007F 2F               [12]  165 	add	a,r7
                                    166 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:22: case 1:
      000080 90 00 84         [24]  167 	mov	dptr,#00129$
      000083 73               [24]  168 	jmp	@a+dptr
      000084                        169 00129$:
      000084 80 52            [24]  170 	sjmp	00107$
      000086 80 0A            [24]  171 	sjmp	00101$
      000088 80 10            [24]  172 	sjmp	00102$
      00008A 80 16            [24]  173 	sjmp	00103$
      00008C 80 1C            [24]  174 	sjmp	00104$
      00008E 80 28            [24]  175 	sjmp	00105$
      000090 80 34            [24]  176 	sjmp	00106$
      000092                        177 00101$:
                                    178 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:23: GP0 = 1;
      000092 78 00            [12]  179 	mov	r0,#_GPIObits
      000094 E6               [12]  180 	mov	a,@r0
      000095 44 01            [12]  181 	orl	a,#0x01
      000097 F6               [12]  182 	mov	@r0,a
                                    183 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:24: break;
                                    184 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:26: case 2:
      000098 80 3E            [24]  185 	sjmp	00107$
      00009A                        186 00102$:
                                    187 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:27: GP1 = 1;
      00009A 78 00            [12]  188 	mov	r0,#_GPIObits
      00009C E6               [12]  189 	mov	a,@r0
      00009D 44 02            [12]  190 	orl	a,#0x02
      00009F F6               [12]  191 	mov	@r0,a
                                    192 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:28: break;
                                    193 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:30: case 3:
      0000A0 80 36            [24]  194 	sjmp	00107$
      0000A2                        195 00103$:
                                    196 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:31: GP2 = 1;
      0000A2 78 00            [12]  197 	mov	r0,#_GPIObits
      0000A4 E6               [12]  198 	mov	a,@r0
      0000A5 44 04            [12]  199 	orl	a,#0x04
      0000A7 F6               [12]  200 	mov	@r0,a
                                    201 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:32: break;
                                    202 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:34: case 4:
      0000A8 80 2E            [24]  203 	sjmp	00107$
      0000AA                        204 00104$:
                                    205 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:35: GP0 = 1;
      0000AA 78 00            [12]  206 	mov	r0,#_GPIObits
      0000AC E6               [12]  207 	mov	a,@r0
      0000AD 44 01            [12]  208 	orl	a,#0x01
      0000AF F6               [12]  209 	mov	@r0,a
                                    210 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:36: GP2 = 1;
      0000B0 78 00            [12]  211 	mov	r0,#_GPIObits
      0000B2 E6               [12]  212 	mov	a,@r0
      0000B3 44 04            [12]  213 	orl	a,#0x04
      0000B5 F6               [12]  214 	mov	@r0,a
                                    215 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:37: break;
                                    216 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:39: case 5:
      0000B6 80 20            [24]  217 	sjmp	00107$
      0000B8                        218 00105$:
                                    219 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:40: GP1 = 1;
      0000B8 78 00            [12]  220 	mov	r0,#_GPIObits
      0000BA E6               [12]  221 	mov	a,@r0
      0000BB 44 02            [12]  222 	orl	a,#0x02
      0000BD F6               [12]  223 	mov	@r0,a
                                    224 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:41: GP2 = 1;
      0000BE 78 00            [12]  225 	mov	r0,#_GPIObits
      0000C0 E6               [12]  226 	mov	a,@r0
      0000C1 44 04            [12]  227 	orl	a,#0x04
      0000C3 F6               [12]  228 	mov	@r0,a
                                    229 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:42: break;
                                    230 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:44: case 6:
      0000C4 80 12            [24]  231 	sjmp	00107$
      0000C6                        232 00106$:
                                    233 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:45: GP0 = 1;
      0000C6 78 00            [12]  234 	mov	r0,#_GPIObits
      0000C8 E6               [12]  235 	mov	a,@r0
      0000C9 44 01            [12]  236 	orl	a,#0x01
      0000CB F6               [12]  237 	mov	@r0,a
                                    238 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:46: GP1 = 1;
      0000CC 78 00            [12]  239 	mov	r0,#_GPIObits
      0000CE E6               [12]  240 	mov	a,@r0
      0000CF 44 02            [12]  241 	orl	a,#0x02
      0000D1 F6               [12]  242 	mov	@r0,a
                                    243 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:47: GP2 = 1;
      0000D2 78 00            [12]  244 	mov	r0,#_GPIObits
      0000D4 E6               [12]  245 	mov	a,@r0
      0000D5 44 04            [12]  246 	orl	a,#0x04
      0000D7 F6               [12]  247 	mov	@r0,a
                                    248 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:49: }
      0000D8                        249 00107$:
                                    250 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:52: delay(400);
      0000D8 90 01 90         [24]  251 	mov	dptr,#0x0190
      0000DB 12 00 E4         [24]  252 	lcall	_delay
                                    253 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:53: GPIO = 0x00;
      0000DE 75 00 00         [24]  254 	mov	_GPIO,#0x00
                                    255 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:56: }
      0000E1 02 00 6B         [24]  256 	ljmp	00111$
                                    257 ;------------------------------------------------------------
                                    258 ;Allocation info for local variables in function 'delay'
                                    259 ;------------------------------------------------------------
                                    260 ;time                      Allocated to registers r6 r7 
                                    261 ;i                         Allocated to registers r4 r5 
                                    262 ;j                         Allocated to registers r2 r3 
                                    263 ;------------------------------------------------------------
                                    264 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:61: void delay(unsigned int time) {
                                    265 ;	-----------------------------------------
                                    266 ;	 function delay
                                    267 ;	-----------------------------------------
      0000E4                        268 _delay:
      0000E4 AE 82            [24]  269 	mov	r6,dpl
      0000E6 AF 83            [24]  270 	mov	r7,dph
                                    271 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:66: for (i = 0; i < time; i++) {
      0000E8 7C 00            [12]  272 	mov	r4,#0x00
      0000EA 7D 00            [12]  273 	mov	r5,#0x00
      0000EC                        274 00107$:
      0000EC C3               [12]  275 	clr	c
      0000ED EC               [12]  276 	mov	a,r4
      0000EE 9E               [12]  277 	subb	a,r6
      0000EF ED               [12]  278 	mov	a,r5
      0000F0 9F               [12]  279 	subb	a,r7
      0000F1 50 1B            [24]  280 	jnc	00109$
                                    281 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:68: for (j = 0; j < 1400; j++);
      0000F3 7A 78            [12]  282 	mov	r2,#0x78
      0000F5 7B 05            [12]  283 	mov	r3,#0x05
      0000F7                        284 00105$:
      0000F7 EA               [12]  285 	mov	a,r2
      0000F8 24 FF            [12]  286 	add	a,#0xff
      0000FA F8               [12]  287 	mov	r0,a
      0000FB EB               [12]  288 	mov	a,r3
      0000FC 34 FF            [12]  289 	addc	a,#0xff
      0000FE F9               [12]  290 	mov	r1,a
      0000FF 88 02            [24]  291 	mov	ar2,r0
      000101 89 03            [24]  292 	mov	ar3,r1
      000103 E8               [12]  293 	mov	a,r0
      000104 49               [12]  294 	orl	a,r1
      000105 70 F0            [24]  295 	jnz	00105$
                                    296 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:66: for (i = 0; i < time; i++) {
      000107 0C               [12]  297 	inc	r4
      000108 BC 00 E1         [24]  298 	cjne	r4,#0x00,00107$
      00010B 0D               [12]  299 	inc	r5
      00010C 80 DE            [24]  300 	sjmp	00107$
      00010E                        301 00109$:
                                    302 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:70: }
      00010E 22               [24]  303 	ret
                                    304 ;------------------------------------------------------------
                                    305 ;Allocation info for local variables in function 'RandomNum'
                                    306 ;------------------------------------------------------------
                                    307 ;lfsr                      Allocated with name '_RandomNum_lfsr_65536_13'
                                    308 ;random_b                  Allocated to registers r7 
                                    309 ;------------------------------------------------------------
                                    310 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:74: unsigned char RandomNum() {
                                    311 ;	-----------------------------------------
                                    312 ;	 function RandomNum
                                    313 ;	-----------------------------------------
      00010F                        314 _RandomNum:
                                    315 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:78: do {
      00010F                        316 00101$:
                                    317 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:80: random_b = ((lfsr >> 0) ^ (lfsr >> 1)) & 1;
      00010F E5 08            [12]  318 	mov	a,_RandomNum_lfsr_65536_13
      000111 FF               [12]  319 	mov	r7,a
      000112 C3               [12]  320 	clr	c
      000113 13               [12]  321 	rrc	a
      000114 FE               [12]  322 	mov	r6,a
      000115 6F               [12]  323 	xrl	a,r7
      000116 54 01            [12]  324 	anl	a,#0x01
                                    325 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:81: lfsr = (lfsr >> 1) | (random_b << 2);
      000118 25 E0            [12]  326 	add	a,acc
      00011A 25 E0            [12]  327 	add	a,acc
      00011C 4E               [12]  328 	orl	a,r6
                                    329 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:82: } while (lfsr > 6);  // Nos aseguramos de solo obtener valores entre 1 y 6
      00011D F5 08            [12]  330 	mov  _RandomNum_lfsr_65536_13,a
      00011F 24 F9            [12]  331 	add	a,#0xff - 0x06
      000121 40 EC            [24]  332 	jc	00101$
                                    333 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:84: return lfsr;
      000123 85 08 82         [24]  334 	mov	dpl,_RandomNum_lfsr_65536_13
                                    335 ;	C:\Users\Ricardo Hidalgo\OneDrive\Desktop\Microcontroladores\lab1\src\pic.C:85: }
      000126 22               [24]  336 	ret
                                    337 	.area CSEG    (CODE)
                                    338 	.area CONST   (CODE)
                                    339 	.area XINIT   (CODE)
                                    340 	.area CABS    (ABS,CODE)
