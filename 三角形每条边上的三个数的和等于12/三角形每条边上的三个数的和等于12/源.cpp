#include<stdio.h>                    //有重复的，每种情况重复三次
int main() {
	int b[6];
	int c,d,e,f,g,h;
	for (c=1;c<=6;c++) {
		b[0] = c;
		for (d = 1; d <= 6; d++) {
			if (d == c) {
				continue;
			}
			
			for (e = 1; e <= 6; e++) {
				if (e==d||e==c) {
					continue;
				}
				
				for (f = 1; f <= 6; f++) {
					if (f==e||f==d||f==c) {
						continue;
					}
					
					for (g = 1; g <= 6; g++) {
						if (g==f||g==e||g==d||g==c) {
							continue;
						}
						
						for (h = 1; h <= 6; h++) {
							if (h==g||h==f|| h == e || h == d || h == c ) {
								continue;
							}
							
							if (c+d+e== e+f+g && g+h+c== e + f + g) {
								printf("%d %d %d %d %d %d\n", c,d,e,f,g,h);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}