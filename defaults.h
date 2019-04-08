/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defaults.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdittric <cdittric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:28:30 by cdittric          #+#    #+#             */
/*   Updated: 2019/04/07 06:26:17 by cdittric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFAULTS_H
# define DEFAULTS_H

# define SPACE			"\n\t "

# define SUCCESS		0
# define ERROR			-1

# define TRUE			1
# define FALSE			0
# define BUFFER_SIZE	4096

# define CUBE_MAPPING	1

# define ON 			1
# define OFF 			0

# define NORD			0
# define SUD			1
# define EST			2
# define OUEST			3
# define HAUT			4
# define BAS			5

# define PLANE			2
# define SPHERE			3
# define CYLINDRE		4
# define CONE			5
# define QUADRIC		6
# define LUMIERE		7
# define CAMERA			8
# define TRANSLATE		9
# define ROTATE			10
# define SCALE			11
# define SPECULAR 		12
# define AMBIANT 		13
# define TEXTURE		14
# define UNION			15
# define SECTION		16
# define INVERT			17
# define MATERIAL		18
# define DAMIER 		19
# define PERLIN 		20
# define WOOD 			21
# define BUMP 			22
# define WAVE 			23

# define DIAMANT		24
# define DICE	 		25
# define CUBE			26

# define READ_BUFFER_SIZE			4096
# define DEFAULT_WINDOW_WIDTH		1800
# define DEFAULT_WINDOW_HEIGHT		1200

# define MAX_DSAMPLE				15
# define DEFAULT_DXSAMPLE			4
# define DEFAULT_DYSAMPLE			4
# define MAX_DSSAMPLE				8
# define DEFAULT_DSSAMPLE			4
# define MAX_NREFLEXIONS			8
# define DEFAULT_NREFLEXIONS		4
# define DEFAULT_NTRANSPARENCY		4

# define DEFAULT_VELOCITY			1.0
# define DEFAULT_VELOCITY_MODIFIER	32.0
# define DEFAULT_YFOV				60.0

# define KEY_PRESS				2
# define KEY_RELEASE			3
# define MOUSE_PRESS			4
# define MOUSE_RELEASE			5
# define MOUSE_MOVE				6
# define EXPOSE_EVENT			12
# define CLOSE_EVENT			17

# define BUTTON_LEFT			1
# define BUTTON_RIGHT			2
# define BUTTON_OTHER			3
# define BUTTON_SCROLLUP		4
# define BUTTON_SCROLLDOWN		5

# define KEY_P			35
# define KEY_Q			12
# define KEY_W			13
# define KEY_E			14
# define KEY_A			0
# define KEY_S			1
# define KEY_D			2
# define KEY_Z			6
# define KEY_R			15
# define KEY_C			8
# define KEY_G			5
# define KEY_K			40
# define KEY_L			37
# define KEY_M			41
# define KEY_N			45
# define KEY_O			31
# define KEY_B			11
# define KEY_MINUS		27
# define KEY_EQUAL		24
# define KEY_TAB		48
# define KEY_BACKQUOTE	50
# define KEY_LCONTROL	256
# define KEY_RCONTROL	269
# define KEY_LALT		261
# define KEY_RALT		262
# define KEY_LSHIFT		257
# define KEY_RSHIFT		258
# define KEY_LOS		259
# define KEY_ROS		260
# define KEY_SPACE		49
# define KEY_RETURN		36
# define KEY_DELETE		51
# define KEY_SUPPRESS	117
# define KEY_UP			126
# define KEY_LEFT		123
# define KEY_DOWN		125
# define KEY_RIGHT		124
# define KEY_ESCAPE		53
# define KEY_NUM0		82
# define KEY_NUM1		83
# define KEY_NUM2		84
# define KEY_NUM3		85
# define KEY_NUM4		86
# define KEY_NUM5		87
# define KEY_NUM6		88
# define KEY_NUM7		89
# define KEY_NUM8		91
# define KEY_NUM9		92
# define KEY_NUMPLUS	69
# define KEY_NUMMINUS	78
# define KEY_PAGEUP		116
# define KEY_PAGEDOWN	121
# define KEY_HOME		115
# define KEY_END		119
# define KEY_0			29
# define KEY_1			18
# define KEY_2			19
# define KEY_3			20
# define KEY_4			21
# define KEY_5			23
# define KEY_6			22
# define KEY_7			26
# define KEY_8			28
# define KEY_9			25

# define KEY_F			3
# define PIXELS			64

#endif
