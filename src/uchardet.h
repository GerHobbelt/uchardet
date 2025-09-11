/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Universal charset detector code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 2001
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *          BYVoid <byvoid.kcp@gmail.com>
 *          Jehan <jehan at girinstud.io>
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */
#ifndef UCHARDET_H___
#define UCHARDET_H___

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

#if defined(UCHARDET_SHARED) && (defined(_WIN32) || defined(__CYGWIN__))
#ifdef BUILDING_UCHARDET
#define UCHARDET_INTERFACE __declspec(dllexport)
#else
#define UCHARDET_INTERFACE __declspec(dllimport)
#endif
#else
#define UCHARDET_INTERFACE
#endif

#if defined(__cplusplus) && (__cplusplus >= 201402L)
#define DEPRECATED(message) [[deprecated(message)]]
#elif defined(__GNUC__) || defined(__clang__)
#define DEPRECATED(message) __attribute__ ((deprecated))
#elif defined(_MSC_VER)
#define DEPRECATED(message) __declspec(deprecated(message))
#else
#warning("DEPRECATED macro not available")
#define DEPRECATED(message)
#endif

/**
 * A handle for a uchardet encoding detector.
 */
typedef struct uchardet * uchardet_t;

/**
 * Create an encoding detector.
 * @return an instance of uchardet_t.
 */
UCHARDET_INTERFACE uchardet_t uchardet_new(void);

/**
 * Delete an encoding detector.
 * @param ud [in] the uchardet_t handle to delete.
 */
UCHARDET_INTERFACE void uchardet_delete(uchardet_t ud);

#define HANDLE_DATA_RESULT_ERROR -1
#define HANDLE_DATA_RESULT_DETECTED 0
#define HANDLE_DATA_RESULT_NEED_MORE_DATA 1

// Charset codes for uchardet, compatible with Rust enum Charset.
#define CHARSET_UTF8                    0
#define CHARSET_UTF16BE                 1
#define CHARSET_UTF16LE                 2
#define CHARSET_UTF32BE                 3
#define CHARSET_UTF32LE                 4
#define CHARSET_ISO2022_CN              5
#define CHARSET_BIG5                    6
#define CHARSET_EUC_TW                  7
#define CHARSET_GB18030                 8
#define CHARSET_HZ_GB2312               9
#define CHARSET_ISO8859_1               10
#define CHARSET_ISO8859_2               11
#define CHARSET_ISO8859_3               12
#define CHARSET_ISO8859_4               13
#define CHARSET_ISO8859_5               14
#define CHARSET_ISO8859_6               15
#define CHARSET_ISO8859_7               16
#define CHARSET_ISO8859_8               17
#define CHARSET_ISO8859_9               18
#define CHARSET_ISO8859_10              19
#define CHARSET_ISO8859_13              20
#define CHARSET_ISO8859_15              21
#define CHARSET_ISO8859_16              22
#define CHARSET_WINDOWS_1250            23
#define CHARSET_WINDOWS_1251            24
#define CHARSET_WINDOWS_1252            25
#define CHARSET_WINDOWS_1253            26
#define CHARSET_WINDOWS_1255            27
#define CHARSET_WINDOWS_1256            28
#define CHARSET_WINDOWS_1257            29
#define CHARSET_WINDOWS_1258            30
#define CHARSET_KOI8R                   31
#define CHARSET_MAC_CYRILLIC            32
#define CHARSET_IBM852                  33
#define CHARSET_IBM855                  34
#define CHARSET_IBM866                  35
#define CHARSET_EUC_JP                  36
#define CHARSET_SHIFT_JIS               37
#define CHARSET_ISO2022_JP              38
#define CHARSET_ISO2022_KR              39
#define CHARSET_EUC_KR                  40
#define CHARSET_UHC                     41
#define CHARSET_VISCII                  42
#define CHARSET_TIS620                  43
#define CHARSET_ISO8859_11              44
#define CHARSET_MAC_CENTRALEUROPE       45
#define CHARSET_ASCII                   46
#define CHARSET_X_ISO10646_UCS4_34121   47
#define CHARSET_X_ISO10646_UCS4_21431   48
#define CHARSET_UNKNOWN                 255

/**
 * Feed data to an encoding detector.
 * The detector is able to shortcut processing when it reaches certainty
 * for an encoding, so you should not worry about limiting input data.
 * As far as you should be concerned: the more the better.
 *
 * @param ud [in] handle of an instance of uchardet
 * @param data [in] data
 * @param len [in] number of byte of data
 * @return non-zero number on failure.
 */
UCHARDET_INTERFACE int uchardet_handle_data(uchardet_t ud, const char * data, size_t len);

/**
 * Notify an end of data to an encoding detector.
 * @param ud [in] handle of an instance of uchardet
 */
UCHARDET_INTERFACE void uchardet_data_end(uchardet_t ud);

/**
 * Reset an encoding detector.
 * @param ud [in] handle of an instance of uchardet
 */
UCHARDET_INTERFACE void uchardet_reset(uchardet_t ud);

/**
 * Test whether the detector has reached a definitive result.
 * @param ud [in] handle of an instance of uchardet
 * @return non-zero when no more input is needed.
 */
UCHARDET_INTERFACE int uchardet_is_done(uchardet_t ud);

/**
 * Get an iconv-compatible name of the encoding that was detected.
 * @param ud [in] handle of an instance of uchardet
 * @return name of charset on success and "" on failure.
 */
DEPRECATED("use uchardet_get_n_candidates() and uchardet_get_encoding() instead (since 0.1.0)")
UCHARDET_INTERFACE const char * uchardet_get_charset(uchardet_t ud);

UCHARDET_INTERFACE size_t       uchardet_get_n_candidates   (uchardet_t ud);
UCHARDET_INTERFACE float        uchardet_get_confidence     (uchardet_t ud,
                                                             size_t     candidate);
UCHARDET_INTERFACE const char * uchardet_get_encoding       (uchardet_t ud,
                                                             size_t     candidate);
UCHARDET_INTERFACE const char * uchardet_get_language       (uchardet_t ud,
                                                             size_t     candidate);

UCHARDET_INTERFACE void         uchardet_weigh_language     (uchardet_t  ud,
                                                             const char *language,
                                                             float       weight);
UCHARDET_INTERFACE void         uchardet_set_default_weight (uchardet_t  ud,
                                                             float       weight);

/**
 * Converts uchardet/iconv-compatible encoding name string to charset code.
 * Unrecognized names will return `CHARSET_UNKNOWN`.
 *
 * @param charset encoding name string (case-sensitive).
 * @return corresponding charset code macro, `CHARSET_UNKNOWN` otherwise.
 */
int uchardet_charset_from_string(const char *charset);

/**
 * Converts charset code to uchardet/iconv-compatible encoding name string.
 * Unknown codes will return "UNKNOWN".
 *
 * @param code charset macro value.
 * @return encoding name string.
 */
const char *uchardet_charset_to_string(int code);

/**
 * Detects the character encoding of the given data and returns its charset
 * macro code.
 *
 * @param data [in] pointer to the input data buffer.
 * @param len  [in] length of the input data in bytes.
 * @return charset macro code (e.g. `CHARSET_UTF8`) on success,
 *         `CHARSET_UNKNOWN` otherwise.
 * @note The returned code can be converted to a string via
 *       `uchardet_charset_to_string()`.
 */
int uchardet_detect_encoding(const char * data, size_t len);

#ifdef __cplusplus
}
#endif

#endif
