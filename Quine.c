/*
 *  Whole point is that s is the data representaiton of the code.
 *  s.top_half() is printed.
 *  A quotation mark is inserted here, to simulate the begining string part of the code.
 *  s is print whole here.
 *  A quotation mark is inserted here, to simulate the ending string part of the code.
 *  s.bottom_half() is printed.
*/

#include <stdio.h>

void main() {
    int i, quotation, newline, space, openbracket, closebracket, equalsign, semicolon;
    char *s[100];
    char percentchar[2], percentint[2];

    space = 32;
    openbracket = 91;
    closebracket = 93;
    equalsign = 61;
    semicolon = 59;
    percentchar[0] = 37;
    percentchar[1] = 99;
    percentint[0] = 37;
    percentint[1] = 100;
    quotation = 34;
    newline = 10;

    s[0] = "/*";
    s[1] = " *  Whole point is that s is the data representaiton of the code.";
    s[2] = " *  s.top_half() is printed.";
    s[3] = " *  A quotation mark is inserted here, to simulate the begining string part of the code.";
    s[4] = " *  s is print whole here.";
    s[5] = " *  A quotation mark is inserted here, to simulate the ending string part of the code.";
    s[6] = " *  s.bottom_half() is printed.";
    s[7] = "*/";
    s[8] = "";
    s[9] = "#include <stdio.h>";
    s[10] = "";
    s[11] = "void main() {";
    s[12] = "    int i, quotation, newline, space, openbracket, closebracket, equalsign, semicolon;";
    s[13] = "    char *s[100];";
    s[14] = "    char percentchar[2], percentint[2];";
    s[15] = "";
    s[16] = "    space = 32;";
    s[17] = "    openbracket = 91;";
    s[18] = "    closebracket = 93;";
    s[19] = "    equalsign = 61;";
    s[20] = "    semicolon = 59;";
    s[21] = "    percentchar[0] = 37;";
    s[22] = "    percentchar[1] = 99;";
    s[23] = "    percentint[0] = 37;";
    s[24] = "    percentint[1] = 100;";
    s[25] = "    quotation = 34;";
    s[26] = "    newline = 10;";
    s[27] = "";
    s[28] = "    for( i = 0; i < 28; ++i ) {";
    s[29] = "        printf(s[i]);";
    s[30] = "        printf(percentchar,newline);";
    s[31] = "    }";
    s[32] = "    for( i = 0; i < 49; ++i ) {";
    s[33] = "        printf(percentchar, space); printf(percentchar, space); printf(percentchar, space); printf(percentchar, space);";
    s[34] = "        printf(percentchar, 115); printf(percentchar, openbracket); printf(percentint, i); printf(percentchar, closebracket);";
    s[35] = "        printf(percentchar, space); printf(percentchar, equalsign); printf(percentchar, space);";
    s[36] = "        printf(percentchar, quotation);";
    s[37] = "        printf(s[i]);";
    s[38] = "        printf(percentchar, quotation);";
    s[39] = "        printf(percentchar, semicolon);";
    s[40] = "        printf(percentchar, newline);";
    s[41] = "    }";
    s[42] = "    for( i = 27; i < 49; ++i ) {";
    s[43] = "        printf(s[i]);";
    s[44] = "        printf(percentchar,newline);";
    s[45] = "    }";
    s[46] = "";
    s[47] = "    return;";
    s[48] = "}";

    for( i = 0; i < 28; ++i ) {
        printf(s[i]);
        printf(percentchar,newline);
    } 
    for( i = 0; i < 49; ++i ) { 
        printf(percentchar, space); printf(percentchar, space); printf(percentchar, space); printf(percentchar, space);
        printf(percentchar, 115); printf(percentchar, openbracket); printf(percentint, i); printf(percentchar, closebracket);
        printf(percentchar, space); printf(percentchar, equalsign); printf(percentchar, space);
        printf(percentchar, quotation);
        printf(s[i]);
        printf(percentchar, quotation);
        printf(percentchar, semicolon);
        printf(percentchar,newline);
    }
    for( i = 27; i < 49; ++i ) {
        printf(s[i]);
        printf(percentchar,newline);
    }

    return;
}

