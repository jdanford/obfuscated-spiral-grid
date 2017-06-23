#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define D(d) (((d ^ d >> 1) & 1) * 2 - 1)

int main(int argc, char **argv) { if (argc < 3)
return 0; int w = atoi(argv[1]), h = atoi(argv[
2]), m = log10(w * h * 100), *g = malloc(w * h
                                       * sizeof
                                       (int)),
                                       d = 1, v
= 1, p[] = {0, 0, 0, 0, 0, 0,          w - d, h
- v, 7, 4, 5, 6}; while (p[0]          >= p[4]
&& p[6] >= p[0] && p[1] >= p[          5] && p[
7] >= p[1]          ) { g[(p[          3] = p[1
]) * w + (          p[2] = p[          0] )] =
v++; p[(~d          & 1) + 2]          += D(d);
if (p[2]                               >= p[4]
&& p[6] >=                             p[2] &&
p[3] >= p[                             5] && p[
7] >= p[3]) { p[0] = p[2]; p[1] = p[3]; } else
{d = d + 1 & 3; p[p[d + 8]] += D(d); p[p[d + 8]
& 1] += D(d); } } for (v = 0; v < h; v++) for (
d = 0; d < w; d++) printf("%*d", m, g[v * w + d
]) && !(w - d - 1) && printf("\n"); return 0; }
