/* Headers for arithmetic
 *
 * 30/6/09
 * 	- from proto.h
 */

/*

    This file is part of VIPS.

    VIPS is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

 */

/*

    These files are distributed with VIPS - http://www.vips.ecs.soton.ac.uk

 */

#ifndef IM_ARITHMETIC_H
#define IM_ARITHMETIC_H

#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus*/

/* arithmetic
 */
DOUBLEMASK *im_measure_area( VipsImage *im, 
	int left, int top, int width, int height, 
	int h, int v, 
	int *sel, int nsel, const char *name );
DOUBLEMASK *im_stats( VipsImage *in );
int im_max( VipsImage *in, double *out );
int im_min( VipsImage *in, double *out );
int im_avg( VipsImage *in, double *out );
int im_deviate( VipsImage *in, double *out );
int im_maxpos( VipsImage *in, int *xpos, int *ypos, double *out );
int im_minpos( VipsImage *in, int *xpos, int *ypos, double *out );
int im_maxpos_avg( VipsImage *im, double *xpos, double *ypos, double *out );
int im_maxpos_vec( VipsImage *im, int *xpos, int *ypos, double *maxima, int n );
int im_minpos_vec( VipsImage *im, int *xpos, int *ypos, double *minima, int n );
int im_bandmean( VipsImage *in, VipsImage *out );

int im_add( VipsImage *in1, VipsImage *in2, VipsImage *out );
int im_subtract( VipsImage *in1, VipsImage *in2, VipsImage *out );
int im_invert( VipsImage *in, VipsImage *out );
int im_lintra( double a, VipsImage *in, double b, VipsImage *out );
int im_lintra_vec( int n, double *a, VipsImage *in, double *b, VipsImage *out );
int im_multiply( VipsImage *in1, VipsImage *in2, VipsImage *out );
int im_divide( VipsImage *in1, VipsImage *in2, VipsImage *out );
int im_remainder( VipsImage *in1, VipsImage *in2, VipsImage *out );
int im_remainder_vec( VipsImage *in, VipsImage *out, int n, double *c );
int im_remainderconst( VipsImage *in, VipsImage *out, double c );
int im_recomb( VipsImage *in, VipsImage *out, DOUBLEMASK *recomb );

int im_sign( VipsImage *in, VipsImage *out );
int im_abs( VipsImage *in, VipsImage *out );
int im_floor( VipsImage *in, VipsImage *out );
int im_rint( VipsImage *in, VipsImage *out );
int im_ceil( VipsImage *in, VipsImage *out );

int im_linreg( VipsImage **ins, VipsImage *out, double *xs );
int im_point( VipsImage *im, VipsInterpolate *interpolate, 
	double x, double y, int band, double *out );
int im_point_bilinear( VipsImage *im, 
	double x, double y, int band, double *out );

int im_powtra( VipsImage *in, VipsImage *out, double e );
int im_powtra_vec( VipsImage *in, VipsImage *out, int n, double *e );
int im_exptra( VipsImage *in, VipsImage *out );
int im_exp10tra( VipsImage *in, VipsImage *out );
int im_expntra( VipsImage *in, VipsImage *out, double e );
int im_expntra_vec( VipsImage *in, VipsImage *out, int n, double *e );
int im_logtra( VipsImage *in, VipsImage *out );
int im_log10tra( VipsImage *in, VipsImage *out );

int im_sintra( VipsImage *in, VipsImage *out );
int im_costra( VipsImage *in, VipsImage *out );
int im_tantra( VipsImage *in, VipsImage *out );
int im_asintra( VipsImage *in, VipsImage *out );
int im_acostra( VipsImage *in, VipsImage *out );
int im_atantra( VipsImage *in, VipsImage *out );

int im_cross_phase( VipsImage *a, VipsImage *b, VipsImage *out );

#ifdef __cplusplus
}
#endif /*__cplusplus*/

#endif /*IM_ARITHMETIC_H*/
