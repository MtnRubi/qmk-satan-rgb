#ifndef KC60_H
#define KC60_H

#include "matrix.h"
#include "keymap_common.h"
#include "backlight.h"
#include "rgblight.h"
#include <stddef.h>

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,      k2d, \
	k30, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,           k3d, \
	k40, k41, k42,           k45,                     k4a, k4b, k4c, k4d  \
) \
{ \
		{k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d}, \
		{k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d}, \
		{k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, KC_NO, k2d}, \
		{k30, KC_NO, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, KC_NO, k3d}, \
		{k40, k41, k42, KC_NO, KC_NO, k45, KC_NO, KC_NO, KC_NO, KC_NO, k4a, k4b, k4c, k4d}  \
}

void * matrix_init_user(void);
void * matrix_scan_user(void);

#endif
