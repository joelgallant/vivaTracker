#ifndef GRADIENTMEX_HEADER_233244546834240
#define GRADIENTMEX_HEADER_233244546834240

void gradMag2( float *I, float *M, float *O, int h, int w, int d, bool full );
void gradHist2( float *M, float *O, float *H, int h, int w,
                int bin, int nOrients, int softBin, bool full );
void hog2( float *M, float *O, float *H, int h, int w, int binSize,
           int nOrients, int softBin, bool full, float clip );
void fhog2( float *M, float *O, float *H, int h, int w, int binSize,
            int nOrients, int softBin, float clip );

#endif //GRADIENTMEX_HEADER_233244546834240