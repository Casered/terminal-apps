//	C MAIN FILE

#include <stdio.h>

typedef struct _prime8 {
	unsigned char val;
	struct _prime8* next;
} Prime8;

int main(void) {
	
	Prime8 tab[64];
// 	Prime8* t=tab;
// 	for(unsigned char ch=32; ch<64; ch++) {
// 		t->val = 2*ch;
// 		t = t->next;
// 	}
// 	t->next->val = 7;
	
	for(unsigned i=0; i<63; i++)
		tab[i].next = &tab[i+1];
	
	for(unsigned char ch=0; ch<32; ch++)
		tab[ch].val = 4*ch+32;
	tab[32].val = 7;
	
	Prime8* x=tab;;
	while( x->val <= (x->next)->val ) {
		x = x->next;
		
		/* do stuff */
		printf("  %d\n", x->val);
	}
	
	return 0;
}
