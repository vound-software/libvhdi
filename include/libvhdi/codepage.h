/*
 * Codepage definitions for libvhdi
 *
 * Copyright (C) 2012-2022, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBVHDI_CODEPAGE_H )
#define _LIBVHDI_CODEPAGE_H

#include <libvhdi/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBVHDI_CODEPAGES
{
	LIBVHDI_CODEPAGE_ASCII				= 20127,

	LIBVHDI_CODEPAGE_ISO_8859_1			= 28591,
	LIBVHDI_CODEPAGE_ISO_8859_2			= 28592,
	LIBVHDI_CODEPAGE_ISO_8859_3			= 28593,
	LIBVHDI_CODEPAGE_ISO_8859_4			= 28594,
	LIBVHDI_CODEPAGE_ISO_8859_5			= 28595,
	LIBVHDI_CODEPAGE_ISO_8859_6			= 28596,
	LIBVHDI_CODEPAGE_ISO_8859_7			= 28597,
	LIBVHDI_CODEPAGE_ISO_8859_8			= 28598,
	LIBVHDI_CODEPAGE_ISO_8859_9			= 28599,
	LIBVHDI_CODEPAGE_ISO_8859_10			= 28600,
	LIBVHDI_CODEPAGE_ISO_8859_11			= 28601,
	LIBVHDI_CODEPAGE_ISO_8859_13			= 28603,
	LIBVHDI_CODEPAGE_ISO_8859_14			= 28604,
	LIBVHDI_CODEPAGE_ISO_8859_15			= 28605,
	LIBVHDI_CODEPAGE_ISO_8859_16			= 28606,

	LIBVHDI_CODEPAGE_KOI8_R				= 20866,
	LIBVHDI_CODEPAGE_KOI8_U				= 21866,

	LIBVHDI_CODEPAGE_WINDOWS_874			= 874,
	LIBVHDI_CODEPAGE_WINDOWS_932			= 932,
	LIBVHDI_CODEPAGE_WINDOWS_936			= 936,
	LIBVHDI_CODEPAGE_WINDOWS_949			= 949,
	LIBVHDI_CODEPAGE_WINDOWS_950			= 950,
	LIBVHDI_CODEPAGE_WINDOWS_1250			= 1250,
	LIBVHDI_CODEPAGE_WINDOWS_1251			= 1251,
	LIBVHDI_CODEPAGE_WINDOWS_1252			= 1252,
	LIBVHDI_CODEPAGE_WINDOWS_1253			= 1253,
	LIBVHDI_CODEPAGE_WINDOWS_1254			= 1254,
	LIBVHDI_CODEPAGE_WINDOWS_1255			= 1255,
	LIBVHDI_CODEPAGE_WINDOWS_1256			= 1256,
	LIBVHDI_CODEPAGE_WINDOWS_1257			= 1257,
	LIBVHDI_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBVHDI_CODEPAGE_US_ASCII			LIBVHDI_CODEPAGE_ASCII

#define LIBVHDI_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBVHDI_CODEPAGE_ISO_8859_1
#define LIBVHDI_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBVHDI_CODEPAGE_ISO_8859_2
#define LIBVHDI_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBVHDI_CODEPAGE_ISO_8859_3
#define LIBVHDI_CODEPAGE_ISO_NORTH_EUROPEAN		LIBVHDI_CODEPAGE_ISO_8859_4
#define LIBVHDI_CODEPAGE_ISO_CYRILLIC			LIBVHDI_CODEPAGE_ISO_8859_5
#define LIBVHDI_CODEPAGE_ISO_ARABIC			LIBVHDI_CODEPAGE_ISO_8859_6
#define LIBVHDI_CODEPAGE_ISO_GREEK			LIBVHDI_CODEPAGE_ISO_8859_7
#define LIBVHDI_CODEPAGE_ISO_HEBREW			LIBVHDI_CODEPAGE_ISO_8859_8
#define LIBVHDI_CODEPAGE_ISO_TURKISH			LIBVHDI_CODEPAGE_ISO_8859_9
#define LIBVHDI_CODEPAGE_ISO_NORDIC			LIBVHDI_CODEPAGE_ISO_8859_10
#define LIBVHDI_CODEPAGE_ISO_THAI			LIBVHDI_CODEPAGE_ISO_8859_11
#define LIBVHDI_CODEPAGE_ISO_BALTIC			LIBVHDI_CODEPAGE_ISO_8859_13
#define LIBVHDI_CODEPAGE_ISO_CELTIC			LIBVHDI_CODEPAGE_ISO_8859_14

#define LIBVHDI_CODEPAGE_ISO_LATIN_1			LIBVHDI_CODEPAGE_ISO_8859_1
#define LIBVHDI_CODEPAGE_ISO_LATIN_2			LIBVHDI_CODEPAGE_ISO_8859_2
#define LIBVHDI_CODEPAGE_ISO_LATIN_3			LIBVHDI_CODEPAGE_ISO_8859_3
#define LIBVHDI_CODEPAGE_ISO_LATIN_4			LIBVHDI_CODEPAGE_ISO_8859_4
#define LIBVHDI_CODEPAGE_ISO_LATIN_5			LIBVHDI_CODEPAGE_ISO_8859_9
#define LIBVHDI_CODEPAGE_ISO_LATIN_6			LIBVHDI_CODEPAGE_ISO_8859_10
#define LIBVHDI_CODEPAGE_ISO_LATIN_7			LIBVHDI_CODEPAGE_ISO_8859_13
#define LIBVHDI_CODEPAGE_ISO_LATIN_8			LIBVHDI_CODEPAGE_ISO_8859_14
#define LIBVHDI_CODEPAGE_ISO_LATIN_9			LIBVHDI_CODEPAGE_ISO_8859_15
#define LIBVHDI_CODEPAGE_ISO_LATIN_10			LIBVHDI_CODEPAGE_ISO_8859_16

#define LIBVHDI_CODEPAGE_KOI8_RUSSIAN			LIBVHDI_CODEPAGE_KOI8_R
#define LIBVHDI_CODEPAGE_KOI8_UKRAINIAN			LIBVHDI_CODEPAGE_KOI8_U

#define LIBVHDI_CODEPAGE_WINDOWS_THAI			LIBVHDI_CODEPAGE_WINDOWS_874
#define LIBVHDI_CODEPAGE_WINDOWS_JAPANESE		LIBVHDI_CODEPAGE_WINDOWS_932
#define LIBVHDI_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBVHDI_CODEPAGE_WINDOWS_936
#define LIBVHDI_CODEPAGE_WINDOWS_KOREAN			LIBVHDI_CODEPAGE_WINDOWS_949
#define LIBVHDI_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBVHDI_CODEPAGE_WINDOWS_950
#define LIBVHDI_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBVHDI_CODEPAGE_WINDOWS_1250
#define LIBVHDI_CODEPAGE_WINDOWS_CYRILLIC		LIBVHDI_CODEPAGE_WINDOWS_1251
#define LIBVHDI_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBVHDI_CODEPAGE_WINDOWS_1252
#define LIBVHDI_CODEPAGE_WINDOWS_GREEK			LIBVHDI_CODEPAGE_WINDOWS_1253
#define LIBVHDI_CODEPAGE_WINDOWS_TURKISH		LIBVHDI_CODEPAGE_WINDOWS_1254
#define LIBVHDI_CODEPAGE_WINDOWS_HEBREW			LIBVHDI_CODEPAGE_WINDOWS_1255
#define LIBVHDI_CODEPAGE_WINDOWS_ARABIC			LIBVHDI_CODEPAGE_WINDOWS_1256
#define LIBVHDI_CODEPAGE_WINDOWS_BALTIC			LIBVHDI_CODEPAGE_WINDOWS_1257
#define LIBVHDI_CODEPAGE_WINDOWS_VIETNAMESE		LIBVHDI_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBVHDI_CODEPAGE_H ) */

