
	;-----------------------------------------------------------;
	;							    ;
	;  Hercules RAM Charcter Set.  8 x 10 System Font	    ;
	;							    ;
	;	     ASCII Character Set (128-255)		    ;
	;							    ;
	;-----------------------------------------------------------;

rgbHercExFont8x10	LABEL	BYTE

ExFont	DB	078H,0CCH,0C0H,0CCH,078H,018H,00CH,078H,0,0 ;128*
	DB	000H,0CCH,000H,0CCH,0CCH,0CCH,076H,000H,0,0 ;129*
	DB	00EH,000H,078H,0CCH,0FCH,0C0H,078H,000H,0,0 ;130*
	DB	07CH,082H,078H,00CH,07CH,0CCH,076H,000H,0,0 ;131*
	DB	048H,000H,078H,00CH,07CH,0CCH,076H,000H,0,0  ;132* a
	DB	0E0H,000H,078H,00CH,07CH,0CCH,076H,000H,0,0 ;133*
	DB	0F8H,000H,078H,00CH,07CH,0CCH,076H,000H,0,0  ;134*
	DB	000H,000H,078H,0C0H,0C0H,078H,00CH,038H,0,0 ;135*
	DB	07CH,082H,078H,0CCH,0FCH,0C0H,078H,000H,0,0 ;136*
	DB	0CCH,000H,078H,0CCH,0FCH,0C0H,078H,000H,0,0 ;137*
	DB	0E0H,000H,078H,0CCH,0FCH,0C0H,078H,000H,0,0 ;138*
	DB	0CCH,000H,070H,030H,030H,030H,078H,000H,0,0 ;139*
	DB	070H,088H,070H,030H,030H,030H,078H,000H,0,0 ;140*
	DB	0E0H,000H,070H,030H,030H,030H,078H,000H,0,0  ;141*
	DB	0CCH,030H,078H,0CCH,0FCH,0CCH,0CCH,000H,0,0  ;142*
	DB	030H,030H,000H,078H,0CCH,0FCH,0CCH,000H,0,0  ;143*
	DB	00EH,000H,0FEH,060H,078H,060H,0FEH,000H,0,0 ;144*
	DB	000H,000H,07EH,00CH,07EH,0CCH,07EH,000H,0,0  ;145*
	DB	03EH,06CH,0CCH,0FEH,0CCH,0CCH,0CEH,000H,0,0  ;146*
	DB	078H,0CCH,000H,078H,0CCH,0CCH,078H,000H,0,0 ;147*
	DB	000H,0CCH,000H,078H,0CCH,0CCH,078H,000H,0,0  ;148*
	DB	000H,0E0H,000H,078H,0CCH,0CCH,078H,000H,0,0  ;149*
	DB	078H,0CCH,000H,0CCH,0CCH,0CCH,076H,000H,0,0 ;150*
	DB	000H,0E0H,000H,0CCH,0CCH,0CCH,076H,000H,0,0 ;151*
	DB	000H,0CCH,000H,0CCH,0CCH,07CH,00CH,0F8H,0,0 ;152*
	DB	06CH,000H,038H,06CH,06CH,06CH,038H,000H,0,0  ;153* 
	DB	0CCH,000H,0CCH,0CCH,0CCH,0CCH,0FCH,000H,0,0 ;154*
	DB	018H,018H,07CH,0C0H,0C0H,07CH,018H,018H,0,0  ;155* 
	DB	038H,06CH,064H,0F0H,060H,0E6H,0FCH,000H,0,0 ;156*
	DB	0CCH,0CCH,078H,0FCH,030H,0FCH,030H,030H,0,0  ;157*
	DB	0F8H,0C4H,0C4H,0FAH,0C6H,0CFH,0C6H,0C7H,0,0  ;158* 
	DB	01CH,036H,030H,078H,030H,030H,0B0H,060H,0,0 ;159*
	DB	00EH,000H,078H,00CH,07CH,0CCH,076H,000H,0,0  ;160*
	DB	00EH,000H,070H,030H,030H,030H,078H,000H,0,0  ;161*
	DB	000H,00EH,000H,078H,0CCH,0CCH,078H,000H,0,0 ;162*
	DB	000H,00EH,000H,0CCH,0CCH,0CCH,076H,000H,0,0 ;163*
	DB	0F8H,000H,0F8H,0CCH,0CCH,0CCH,0CCH,000H,0,0  ;164*
	DB	0FEH,000H,0C6H,0F6H,0DEH,0CEH,0C6H,000H,0,0  ;165*
	DB	07CH,0CCH,0CCH,07EH,000H,0FEH,000H,000H,0,0  ;166*
	DB	07CH,0C6H,0C6H,07CH,000H,0FEH,000H,000H,0,0  ;167*
	DB	030H,000H,030H,060H,0C0H,0CCH,078H,000H,0,0  ;168*
	DB	000H,000H,000H,0FCH,0C0H,0C0H,000H,000H,0,0 ;169*
	DB	000H,000H,000H,0FCH,00CH,00CH,000H,000H,0,0 ;170*
	DB	0C3H,0C6H,0CCH,0DEH,033H,066H,0CCH,00FH,0,0 ;171*
	DB	0C3H,0C6H,0CCH,0DBH,037H,06FH,0CFH,003H,0,0 ;172*
	DB	030H,000H,030H,030H,078H,078H,030H,000H,0,0  ;173*
	DB	000H,000H,033H,066H,0CCH,066H,033H,000H,0,0 ;174*
	DB	000H,000H,0CCH,066H,033H,066H,0CCH,000H,0,0 ;175*
	DB	088H,022H,088H,022H,088H,022H,088H,022H,88h,22h ;176*
	DB	055H,0AAH,055H,0AAH,055H,0AAH,055H,0AAH,55h,0aah ;177*
	DB	0EEH,0BBH,0EEH,0BBH,0EEH,0BBH,0EEH,0BBH,0eeh,0bbh ;178*
	DB	018H,018H,018H,018H,018H,018H,018H,018H,18h,18h ;179*
	DB	018H,018H,018H,0F8H,018H,018H,018H,018H,18h,18h ;180*
	DB	018H,018H,0F8H,018H,0F8H,018H,018H,018H,18h,18h ;181*
	DB	066H,066H,066H,0E6H,066H,066H,066H,066H,66h,66h ;182*
	DB	000H,000H,000H,0FEH,066H,066H,066H,066H,66h,66h ;183*
	DB	000H,000H,0F8H,018H,0F8H,018H,018H,018H,18h,18h ;184*
	DB	066H,066H,0E6H,006H,0E6H,066H,066H,066H,66h,66h ;185*
	DB	066H,066H,066H,066H,066H,066H,066H,066H,66h,66h ;186*
	DB	000H,000H,0FEH,006H,0E6H,066H,066H,066H,66h,66h ;187*
	DB	066H,066H,0E6H,006H,0FEH,000H,000H,000H,0,0 ;188*
	DB	066H,066H,066H,0FEH,000H,000H,000H,000H,0,0 ;189*
	DB	018H,018H,0F8H,018H,0F8H,000H,000H,000H,0,0 ;190*
	DB	000H,000H,000H,0F8H,018H,018H,018H,018H,18h,18h ;191*
	DB	018H,018H,018H,01FH,000H,000H,000H,000H,0,0 ;192*
	DB	018H,018H,018H,0FFH,000H,000H,000H,000H,0,0 ;193*
	DB	000H,000H,000H,0FFH,018H,018H,018H,018H,18h,18h ;194*
	DB	018H,018H,018H,01FH,018H,018H,018H,018H,18h,18h ;195*
	DB	000H,000H,000H,0FFH,000H,000H,000H,000H,0,0 ;196*
	DB	018H,018H,018H,0FFH,018H,018H,018H,018H,18h,18h ;197*
	DB	018H,018H,01FH,018H,01FH,018H,018H,018H,18h,18h ;198*
	DB	066H,066H,066H,067H,066H,066H,066H,066H,66h,66h ;199*
	DB	066H,066H,067H,060H,07FH,000H,000H,000H,0,0 ;200*
	DB	000H,000H,07FH,060H,067H,066H,066H,066H,66h,66h ;201*
	DB	066H,066H,0E7H,000H,0FFH,000H,000H,000H,0,0 ;202*
	DB	000H,000H,0FFH,000H,0E7H,066H,066H,066H,66h,66h ;203*
	DB	066H,066H,067H,060H,067H,066H,066H,066H,66h,66h ;204*
	DB	000H,000H,0FFH,000H,0FFH,000H,000H,000H,0,0 ;205*
	DB	066H,066H,0E7H,000H,0E7H,066H,066H,066H,66h,66h ;206*
	DB	018H,018H,0FFH,000H,0FFH,000H,000H,000H,0,0 ;207*
	DB	066H,066H,066H,0FFH,000H,000H,000H,000H,0,0 ;208*
	DB	000H,000H,0FFH,000H,0FFH,018H,018H,018H,18h,18h ;209*
	DB	000H,000H,000H,0FFH,066H,066H,066H,066H,66h,66h ;210*
	DB	066H,066H,066H,07FH,000H,000H,000H,000H,0,0 ;211*
	DB	018H,018H,01FH,018H,01FH,000H,000H,000H,0,0 ;212*
	DB	000H,000H,01FH,018H,01FH,018H,018H,018H,18h,18h ;213*
	DB	000H,000H,000H,07FH,066H,066H,066H,066H,66h,66h ;214*
	DB	066H,066H,066H,0FFH,066H,066H,066H,066H,66h,66h ;215*
	DB	018H,018H,0FFH,018H,0FFH,018H,018H,018H,18h,18h ;216*
	DB	018H,018H,018H,0F8H,000H,000H,000H,000H,0,0 ;217*
	DB	000H,000H,000H,01FH,018H,018H,018H,018H,18h,18h ;218*
	DB	0FFH,0FFH,0FFH,0FFH,0FFH,0FFH,0FFH,0FFH,0ffh,0ffh ;219*
	DB	000H,000H,000H,000H,0FFH,0FFH,0FFH,0FFH,0ffh,0ffh ;220*
	DB	0F0H,0F0H,0F0H,0F0H,0F0H,0F0H,0F0H,0F0H,0f0h,0f0h ;221*
	DB	00FH,00FH,00FH,00FH,00FH,00FH,00FH,00FH,0fh,0fh ;222*
	DB	0FFH,0FFH,0FFH,0FFH,000H,000H,000H,000H,0,0 ;223*
	DB	000H,000H,076H,0DCH,0C8H,0DCH,076H,000H,0,0  ;224*
	DB	000H,078H,0CCH,0F8H,0CCH,0F8H,0C0H,0C0H,0,0  ;225*
	DB	000H,0FCH,0CCH,0C0H,0C0H,0C0H,0C0H,0C0H,0,0  ;226*
	DB	000H,0FEH,06CH,06CH,06CH,06CH,06CH,000H,0,0  ;227*
	DB	0FCH,0CCH,060H,030H,060H,0CCH,0FCH,000H,0,0  ;228*
	DB	000H,000H,07EH,0D8H,0D8H,0D8H,070H,000H,0,0  ;229*
	DB	000H,066H,066H,066H,066H,07CH,060H,0C0H,0,0  ;230*
	DB	000H,076H,0DCH,018H,018H,018H,018H,000H,0,0  ;231*
	DB	0FCH,030H,078H,0CCH,0CCH,078H,030H,0FCH,0,0 ;232*
	DB	038H,06CH,0C6H,0FEH,0C6H,06CH,038H,000H,0,0 ;233*
	DB	038H,06CH,0C6H,0C6H,06CH,06CH,0EEH,000H,0,0 ;234*
	DB	01CH,030H,018H,07CH,0CCH,0CCH,078H,000H,0,0 ;235*
	DB	000H,000H,066H,0DBH,0DBH,066H,000H,000H,0,0 ;236*
	DB	006H,00CH,07EH,0DBH,0DBH,07EH,060H,0C0H,0,0 ;237*
	DB	01CH,030H,060H,0FCH,060H,030H,01CH,000H,0,0 ;238*
	DB	078H,0CCH,0CCH,0CCH,0CCH,0CCH,0CCH,000H,0,0 ;239*
	DB	000H,0FCH,000H,0FCH,000H,0FCH,000H,000H,0,0 ;240*
	DB	030H,030H,0FCH,030H,030H,000H,0FCH,000H,0,0 ;241*
	DB	060H,030H,018H,030H,060H,000H,0FCH,000H,0,0 ;242*
	DB	018H,030H,060H,030H,018H,000H,0FCH,000H,0,0 ;243*
	DB	00EH,01BH,018H,018H,018H,018H,018H,018H,0,0 ;244*
	DB	018H,018H,018H,018H,018H,018H,0D8H,070H,0,0 ;245*
	DB	030H,030H,000H,0FCH,000H,030H,030H,000H,0,0 ;246*
	DB	000H,076H,0DCH,000H,076H,0DCH,000H,000H,0,0 ;247*
	DB	070H,0D8H,0D8H,070H,000H,000H,000H,000H,0,0 ;248*
	DB	000H,000H,018H,018H,000H,000H,000H,000H,0,0 ;249*
	DB	000H,000H,000H,018H,000H,000H,000H,000H,0,0 ;250*
	DB	00EH,00CH,00CH,00CH,0ECH,06CH,03CH,01CH,0,0 ;251*
	DB	0F8H,0CCH,0CCH,0CCH,0CCH,000H,000H,000H,0,0 ;252*
	DB	0F0H,018H,030H,060H,0F8H,000H,000H,000H,0,0 ;253*
	DB	000H,000H,038H,038H,038H,038H,000H,000H,0,0 ;254*
	DB	000H,000H,000H,000H,000H,000H,000H,000H,0,0 ;255*
