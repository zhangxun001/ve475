#include <stdio.h>
#include <stdlib.h>

#define byte char

/* Specification for the
ADVANCED ENCRYPTION STANDARD (AES)

    Cipher(byte in[4*Nb], byte out[4*Nb], word w[Nb*(Nr+1)])
    begin
    byte state[4,Nb]
    state = in
    AddRoundKey(state, w[0, Nb-1])
    // See Sec. 5.1.4
    for round = 1 step 1 to Nr–1
    SubBytes(state)
    // See Sec. 5.1.1
    ShiftRows(state)
    // See Sec. 5.1.2
    MixColumns(state)
    // See Sec. 5.1.3
    AddRoundKey(state, w[round*Nb, (round+1)*Nb-1])
    end for
    SubBytes(state)
    ShiftRows(state)
    AddRoundKey(state, w[Nr*Nb, (Nr+1)*Nb-1])
    out = state
    end

*/


SubBytes(){

}

ShiftRows(){

}

MixColumns(){

}

AddRoundKey(){

}

int cipher(byte in[], byte out[], byte w[]){
    
}

int main(){

    return 0;
}