#include "trap.h"

uint32_t div(uint32_t a,uint32_t b){
	uint32_t ans=a/b;
	return ans;
}

int test_data[] = { 0xaeb1c2aa,0x4500ff2b,0x877190af,0x11f42438};
long long ans[] = { 0x1,0x2,0x1,0x9,0x0,0x1,0x0,0x3,0x0,0x1,0x1,0x7,0x0,0x0,0x0,0x1};

#define NR_DATA LENGTH(test_data)

int main() {
	int i,j,ans_idx = 0;
	for (i = 0;i < NR_DATA;i++) {
		for (j = i;j < NR_DATA;j++) {
			check(ans[ans_idx++] == div(test_data[i],test_data[j]));
		}
		check(j == NR_DATA);
	}

	check(i == NR_DATA);

	return 0;
}
