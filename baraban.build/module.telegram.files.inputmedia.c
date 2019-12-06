/* Generated code for Python source for module 'telegram.files.inputmedia'
 * created by Nuitka version 0.6.0
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_telegram$files$inputmedia is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_telegram$files$inputmedia;
PyDictObject *moduledict_telegram$files$inputmedia;

/* The module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple;
static PyObject *const_str_digest_55c1b9f223ae85ed43bf2ccf6154008c;
static PyObject *const_str_digest_2179a5a5ef2adce63fe4affbc716a409;
extern PyObject *const_str_plain_media;
static PyObject *const_tuple_58adc2e82d1c50ecea0486306207cd7e_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_657c12447089dbc4d81cd8a6460159b0;
extern PyObject *const_str_plain_is_file;
extern PyObject *const_str_plain_duration;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_TelegramObject;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_attach;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_audio;
static PyObject *const_str_digest_d060b7b1f2aa70990fc2a6b81f5b3a38;
extern PyObject *const_str_plain_PhotoSize;
extern PyObject *const_str_plain_InputMediaAnimation;
extern PyObject *const_tuple_none_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple;
extern PyObject *const_str_plain_InputFile;
extern PyObject *const_str_plain_height;
extern PyObject *const_str_plain_InputMediaVideo;
static PyObject *const_str_digest_740d51a6982cd6bbf24f446c680d790d;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_telegram;
extern PyObject *const_str_plain_InputMedia;
static PyObject *const_str_digest_0ade5add7acf22d6d2971a1c2ef528af;
extern PyObject *const_str_plain_title;
extern PyObject *const_str_plain_InputMediaPhoto;
extern PyObject *const_str_plain_document;
extern PyObject *const_str_plain_video;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_5cb367f782df4294325b4e2c0cc9e9fc;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
extern PyObject *const_dict_ca960d41167aa3240cbbfbd775368fd7;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_photo;
extern PyObject *const_str_plain_thumb;
extern PyObject *const_str_plain_InputMediaDocument;
static PyObject *const_tuple_8db891fa1a90f2e9c6fb1302e9c07c73_tuple;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_caption;
static PyObject *const_tuple_6020c4df3608022cf1d4d05c0b24ac0d_tuple;
extern PyObject *const_str_plain_Animation;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_Document;
static PyObject *const_str_digest_0c82b7f3007c7e15ea5eb502a39911bc;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_60cc547458068478c747721abcfa6769_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_0047de425659f3c2fba11cfb43b6e185;
extern PyObject *const_str_plain_supports_streaming;
static PyObject *const_str_digest_95c4cf1eb91dcd1b88882e04126e0c03;
static PyObject *const_str_digest_d0b9dac14aa4831e385b7b9a877de403;
extern PyObject *const_str_plain_width;
static PyObject *const_str_digest_ede674ccc6a924b40a87d175da07d03a;
static PyObject *const_str_digest_03262abad2e64cab9e65a1942885a8b0;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_4c4ba5fc8427680bb24768b5853ae1be;
extern PyObject *const_str_plain_parse_mode;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_performer;
static PyObject *const_str_digest_c41694c48e946ae756c595a977a49aaf;
extern PyObject *const_str_plain_InputMediaAudio;
extern PyObject *const_str_plain_Audio;
extern PyObject *const_str_plain_Video;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_animation;
extern PyObject *const_str_plain_file_id;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple, 1, const_str_plain_media ); Py_INCREF( const_str_plain_media );
    PyTuple_SET_ITEM( const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple, 2, const_str_plain_thumb ); Py_INCREF( const_str_plain_thumb );
    PyTuple_SET_ITEM( const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple, 3, const_str_plain_caption ); Py_INCREF( const_str_plain_caption );
    PyTuple_SET_ITEM( const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple, 4, const_str_plain_parse_mode ); Py_INCREF( const_str_plain_parse_mode );
    PyTuple_SET_ITEM( const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple, 5, const_str_plain_duration ); Py_INCREF( const_str_plain_duration );
    PyTuple_SET_ITEM( const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple, 6, const_str_plain_performer ); Py_INCREF( const_str_plain_performer );
    PyTuple_SET_ITEM( const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple, 7, const_str_plain_title ); Py_INCREF( const_str_plain_title );
    const_str_digest_55c1b9f223ae85ed43bf2ccf6154008c = UNSTREAM_STRING( &constant_bin[ 1265468 ], 28, 0 );
    const_str_digest_2179a5a5ef2adce63fe4affbc716a409 = UNSTREAM_STRING( &constant_bin[ 1265496 ], 24, 0 );
    const_tuple_58adc2e82d1c50ecea0486306207cd7e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_58adc2e82d1c50ecea0486306207cd7e_tuple, 0, const_str_plain_TelegramObject ); Py_INCREF( const_str_plain_TelegramObject );
    PyTuple_SET_ITEM( const_tuple_58adc2e82d1c50ecea0486306207cd7e_tuple, 1, const_str_plain_InputFile ); Py_INCREF( const_str_plain_InputFile );
    PyTuple_SET_ITEM( const_tuple_58adc2e82d1c50ecea0486306207cd7e_tuple, 2, const_str_plain_PhotoSize ); Py_INCREF( const_str_plain_PhotoSize );
    PyTuple_SET_ITEM( const_tuple_58adc2e82d1c50ecea0486306207cd7e_tuple, 3, const_str_plain_Animation ); Py_INCREF( const_str_plain_Animation );
    PyTuple_SET_ITEM( const_tuple_58adc2e82d1c50ecea0486306207cd7e_tuple, 4, const_str_plain_Video ); Py_INCREF( const_str_plain_Video );
    PyTuple_SET_ITEM( const_tuple_58adc2e82d1c50ecea0486306207cd7e_tuple, 5, const_str_plain_Audio ); Py_INCREF( const_str_plain_Audio );
    PyTuple_SET_ITEM( const_tuple_58adc2e82d1c50ecea0486306207cd7e_tuple, 6, const_str_plain_Document ); Py_INCREF( const_str_plain_Document );
    const_str_digest_657c12447089dbc4d81cd8a6460159b0 = UNSTREAM_STRING( &constant_bin[ 1265520 ], 25, 0 );
    const_str_digest_d060b7b1f2aa70990fc2a6b81f5b3a38 = UNSTREAM_STRING( &constant_bin[ 1265545 ], 2795, 0 );
    const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple, 1, const_str_plain_media ); Py_INCREF( const_str_plain_media );
    PyTuple_SET_ITEM( const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple, 2, const_str_plain_thumb ); Py_INCREF( const_str_plain_thumb );
    PyTuple_SET_ITEM( const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple, 3, const_str_plain_caption ); Py_INCREF( const_str_plain_caption );
    PyTuple_SET_ITEM( const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple, 4, const_str_plain_parse_mode ); Py_INCREF( const_str_plain_parse_mode );
    PyTuple_SET_ITEM( const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple, 5, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple, 6, const_str_plain_height ); Py_INCREF( const_str_plain_height );
    PyTuple_SET_ITEM( const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple, 7, const_str_plain_duration ); Py_INCREF( const_str_plain_duration );
    const_str_digest_740d51a6982cd6bbf24f446c680d790d = UNSTREAM_STRING( &constant_bin[ 1268340 ], 2612, 0 );
    const_str_digest_0ade5add7acf22d6d2971a1c2ef528af = UNSTREAM_STRING( &constant_bin[ 1270952 ], 43, 0 );
    const_str_digest_5cb367f782df4294325b4e2c0cc9e9fc = UNSTREAM_STRING( &constant_bin[ 1270995 ], 34, 0 );
    const_tuple_8db891fa1a90f2e9c6fb1302e9c07c73_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_8db891fa1a90f2e9c6fb1302e9c07c73_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8db891fa1a90f2e9c6fb1302e9c07c73_tuple, 1, const_str_plain_media ); Py_INCREF( const_str_plain_media );
    PyTuple_SET_ITEM( const_tuple_8db891fa1a90f2e9c6fb1302e9c07c73_tuple, 2, const_str_plain_caption ); Py_INCREF( const_str_plain_caption );
    PyTuple_SET_ITEM( const_tuple_8db891fa1a90f2e9c6fb1302e9c07c73_tuple, 3, const_str_plain_parse_mode ); Py_INCREF( const_str_plain_parse_mode );
    const_tuple_6020c4df3608022cf1d4d05c0b24ac0d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_6020c4df3608022cf1d4d05c0b24ac0d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6020c4df3608022cf1d4d05c0b24ac0d_tuple, 1, const_str_plain_media ); Py_INCREF( const_str_plain_media );
    PyTuple_SET_ITEM( const_tuple_6020c4df3608022cf1d4d05c0b24ac0d_tuple, 2, const_str_plain_thumb ); Py_INCREF( const_str_plain_thumb );
    PyTuple_SET_ITEM( const_tuple_6020c4df3608022cf1d4d05c0b24ac0d_tuple, 3, const_str_plain_caption ); Py_INCREF( const_str_plain_caption );
    PyTuple_SET_ITEM( const_tuple_6020c4df3608022cf1d4d05c0b24ac0d_tuple, 4, const_str_plain_parse_mode ); Py_INCREF( const_str_plain_parse_mode );
    const_str_digest_0c82b7f3007c7e15ea5eb502a39911bc = UNSTREAM_STRING( &constant_bin[ 1271029 ], 24, 0 );
    const_tuple_60cc547458068478c747721abcfa6769_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_60cc547458068478c747721abcfa6769_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_60cc547458068478c747721abcfa6769_tuple, 1, const_str_plain_media ); Py_INCREF( const_str_plain_media );
    PyTuple_SET_ITEM( const_tuple_60cc547458068478c747721abcfa6769_tuple, 2, const_str_plain_caption ); Py_INCREF( const_str_plain_caption );
    PyTuple_SET_ITEM( const_tuple_60cc547458068478c747721abcfa6769_tuple, 3, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_60cc547458068478c747721abcfa6769_tuple, 4, const_str_plain_height ); Py_INCREF( const_str_plain_height );
    PyTuple_SET_ITEM( const_tuple_60cc547458068478c747721abcfa6769_tuple, 5, const_str_plain_duration ); Py_INCREF( const_str_plain_duration );
    PyTuple_SET_ITEM( const_tuple_60cc547458068478c747721abcfa6769_tuple, 6, const_str_plain_supports_streaming ); Py_INCREF( const_str_plain_supports_streaming );
    PyTuple_SET_ITEM( const_tuple_60cc547458068478c747721abcfa6769_tuple, 7, const_str_plain_parse_mode ); Py_INCREF( const_str_plain_parse_mode );
    PyTuple_SET_ITEM( const_tuple_60cc547458068478c747721abcfa6769_tuple, 8, const_str_plain_thumb ); Py_INCREF( const_str_plain_thumb );
    const_str_digest_0047de425659f3c2fba11cfb43b6e185 = UNSTREAM_STRING( &constant_bin[ 1271053 ], 27, 0 );
    const_str_digest_95c4cf1eb91dcd1b88882e04126e0c03 = UNSTREAM_STRING( &constant_bin[ 1271080 ], 1388, 0 );
    const_str_digest_d0b9dac14aa4831e385b7b9a877de403 = UNSTREAM_STRING( &constant_bin[ 1272468 ], 268, 0 );
    const_str_digest_ede674ccc6a924b40a87d175da07d03a = UNSTREAM_STRING( &constant_bin[ 1272736 ], 1985, 0 );
    const_str_digest_03262abad2e64cab9e65a1942885a8b0 = UNSTREAM_STRING( &constant_bin[ 1274721 ], 2755, 0 );
    const_str_digest_4c4ba5fc8427680bb24768b5853ae1be = UNSTREAM_STRING( &constant_bin[ 1277476 ], 61, 0 );
    const_str_digest_c41694c48e946ae756c595a977a49aaf = UNSTREAM_STRING( &constant_bin[ 1277537 ], 24, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_telegram$files$inputmedia( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6ba73ed84483c364a82dd7612baf03d9;
static PyCodeObject *codeobj_a4ae3c89ea256c6ac59c80ad253b1577;
static PyCodeObject *codeobj_82988df44f911e39f754a6f5ddd7aa0b;
static PyCodeObject *codeobj_ca65d3944ecdd0ff06a79dfa2c89399a;
static PyCodeObject *codeobj_c18ca5b5bf41d8b8c46566bd638cc390;
static PyCodeObject *codeobj_8f69673c0a804921c673fc835f0a7e9d;
static PyCodeObject *codeobj_c992b10c7497a235684ab9fcbea2b621;
static PyCodeObject *codeobj_b15e0ef95e293dbf57c8328e497b44ed;
static PyCodeObject *codeobj_9a4c637a17eff6b60fc7251c191b6acd;
static PyCodeObject *codeobj_436b0a19adafedc486178252f0bee37c;
static PyCodeObject *codeobj_55629f60b7c14ad7ff143aa95d056acf;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4c4ba5fc8427680bb24768b5853ae1be;
    codeobj_6ba73ed84483c364a82dd7612baf03d9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5cb367f782df4294325b4e2c0cc9e9fc, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_a4ae3c89ea256c6ac59c80ad253b1577 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_InputMediaAnimation, 35, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_82988df44f911e39f754a6f5ddd7aa0b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_InputMediaAudio, 227, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_ca65d3944ecdd0ff06a79dfa2c89399a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_InputMediaDocument, 302, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c18ca5b5bf41d8b8c46566bd638cc390 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_InputMediaPhoto, 109, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_8f69673c0a804921c673fc835f0a7e9d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_InputMediaVideo, 148, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c992b10c7497a235684ab9fcbea2b621 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 78, const_tuple_6baa189e4f318b901c6e12ecbac1d371_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b15e0ef95e293dbf57c8328e497b44ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 132, const_tuple_8db891fa1a90f2e9c6fb1302e9c07c73_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9a4c637a17eff6b60fc7251c191b6acd = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 194, const_tuple_60cc547458068478c747721abcfa6769_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_436b0a19adafedc486178252f0bee37c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 271, const_tuple_a0600a3fd30bccf3c61445b44f043afe_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_55629f60b7c14ad7ff143aa95d056acf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 333, const_tuple_6020c4df3608022cf1d4d05c0b24ac0d_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_telegram$files$inputmedia$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_telegram$files$inputmedia$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_telegram$files$inputmedia$$$function_3___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_telegram$files$inputmedia$$$function_4___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_telegram$files$inputmedia$$$function_5___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_telegram$files$inputmedia$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_media = python_pars[ 1 ];
    PyObject *par_thumb = python_pars[ 2 ];
    PyObject *par_caption = python_pars[ 3 ];
    PyObject *par_parse_mode = python_pars[ 4 ];
    PyObject *par_width = python_pars[ 5 ];
    PyObject *par_height = python_pars[ 6 ];
    PyObject *par_duration = python_pars[ 7 ];
    struct Nuitka_FrameObject *frame_c992b10c7497a235684ab9fcbea2b621;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c992b10c7497a235684ab9fcbea2b621 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c992b10c7497a235684ab9fcbea2b621, codeobj_c992b10c7497a235684ab9fcbea2b621, module_telegram$files$inputmedia, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c992b10c7497a235684ab9fcbea2b621 = cache_frame_c992b10c7497a235684ab9fcbea2b621;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c992b10c7497a235684ab9fcbea2b621 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c992b10c7497a235684ab9fcbea2b621 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    tmp_assattr_name_1 = const_str_plain_animation;
    CHECK_OBJECT( par_self );
    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_type, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_mvar_value_1;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_1 = par_media;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_Animation );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Animation );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Animation" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = tmp_mvar_value_1;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    {
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_assattr_target_2;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_media;
    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_file_id );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_media, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_source_name_2;
    PyObject *tmp_assattr_target_3;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_media;
    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_width );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_width, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_source_name_3;
    PyObject *tmp_assattr_target_4;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_media;
    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_height );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_height, tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_source_name_4;
    PyObject *tmp_assattr_target_5;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_media;
    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_duration );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_duration, tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    goto branch_end_1;
    branch_no_1:;
    {
    nuitka_bool tmp_condition_result_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_5;
    PyObject *tmp_mvar_value_2;
    PyObject *tmp_call_result_1;
    PyObject *tmp_args_element_name_1;
    int tmp_truth_name_1;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = tmp_mvar_value_2;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_is_file );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_media == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_media;
    frame_c992b10c7497a235684ab9fcbea2b621->m_frame.f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_call_result_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_call_result_1 );

        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_call_result_1 );
    if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    {
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_called_name_2;
    PyObject *tmp_mvar_value_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_assattr_target_6;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = tmp_mvar_value_3;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_media;
    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ca960d41167aa3240cbbfbd775368fd7 );
    frame_c992b10c7497a235684ab9fcbea2b621->m_frame.f_lineno = 88;
    tmp_assattr_name_6 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_media, tmp_assattr_name_6 );
    Py_DECREF( tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    goto branch_end_2;
    branch_no_2:;
    {
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_7;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_7 = par_media;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_media, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_end_2:;
    }
    branch_end_1:;
    }
    {
    nuitka_bool tmp_condition_result_3;
    int tmp_truth_name_2;
    if ( par_thumb == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "thumb" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_2 = CHECK_IF_TRUE( par_thumb );
    if ( tmp_truth_name_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    {
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_target_8;
    if ( par_thumb == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "thumb" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_8 = par_thumb;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_thumb, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    nuitka_bool tmp_condition_result_4;
    PyObject *tmp_called_name_3;
    PyObject *tmp_source_name_6;
    PyObject *tmp_mvar_value_4;
    PyObject *tmp_call_result_2;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_source_name_7;
    int tmp_truth_name_3;
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = tmp_mvar_value_4;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_is_file );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_self;
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_thumb );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_c992b10c7497a235684ab9fcbea2b621->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_call_result_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
    if ( tmp_truth_name_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_call_result_2 );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_call_result_2 );
    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    {
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_called_name_4;
    PyObject *tmp_mvar_value_5;
    PyObject *tmp_args_name_2;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_source_name_8;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_assattr_target_9;
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = tmp_mvar_value_5;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = par_self;
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_thumb );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_ca960d41167aa3240cbbfbd775368fd7 );
    frame_c992b10c7497a235684ab9fcbea2b621->m_frame.f_lineno = 95;
    tmp_assattr_name_9 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_thumb, tmp_assattr_name_9 );
    Py_DECREF( tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_4:;
    }
    branch_no_3:;
    }
    {
    nuitka_bool tmp_condition_result_5;
    int tmp_truth_name_4;
    if ( par_caption == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "caption" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_4 = CHECK_IF_TRUE( par_caption );
    if ( tmp_truth_name_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    {
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_target_10;
    if ( par_caption == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "caption" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_10 = par_caption;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_10 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_caption, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_5:;
    }
    {
    nuitka_bool tmp_condition_result_6;
    int tmp_truth_name_5;
    if ( par_parse_mode == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_5 = CHECK_IF_TRUE( par_parse_mode );
    if ( tmp_truth_name_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_6 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    {
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_target_11;
    if ( par_parse_mode == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_11 = par_parse_mode;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_11 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_parse_mode, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_6:;
    }
    {
    nuitka_bool tmp_condition_result_7;
    int tmp_truth_name_6;
    if ( par_width == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_6 = CHECK_IF_TRUE( par_width );
    if ( tmp_truth_name_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_7 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    {
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_target_12;
    if ( par_width == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_12 = par_width;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_12 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_width, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_7:;
    }
    {
    nuitka_bool tmp_condition_result_8;
    int tmp_truth_name_7;
    if ( par_height == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "height" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_7 = CHECK_IF_TRUE( par_height );
    if ( tmp_truth_name_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_8 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    {
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_target_13;
    if ( par_height == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "height" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_13 = par_height;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_13 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_height, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_8:;
    }
    {
    nuitka_bool tmp_condition_result_9;
    int tmp_truth_name_8;
    if ( par_duration == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "duration" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_8 = CHECK_IF_TRUE( par_duration );
    if ( tmp_truth_name_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_9 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    {
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_target_14;
    if ( par_duration == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "duration" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_14 = par_duration;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_14 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_duration, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_9:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c992b10c7497a235684ab9fcbea2b621 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c992b10c7497a235684ab9fcbea2b621 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c992b10c7497a235684ab9fcbea2b621, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c992b10c7497a235684ab9fcbea2b621->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c992b10c7497a235684ab9fcbea2b621, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c992b10c7497a235684ab9fcbea2b621,
        type_description_1,
        par_self,
        par_media,
        par_thumb,
        par_caption,
        par_parse_mode,
        par_width,
        par_height,
        par_duration
    );


    // Release cached frame.
    if ( frame_c992b10c7497a235684ab9fcbea2b621 == cache_frame_c992b10c7497a235684ab9fcbea2b621 )
    {
        Py_DECREF( frame_c992b10c7497a235684ab9fcbea2b621 );
    }
    cache_frame_c992b10c7497a235684ab9fcbea2b621 = NULL;

    assertFrameObject( frame_c992b10c7497a235684ab9fcbea2b621 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_media );
    par_media = NULL;

    }
    {
    Py_XDECREF( par_thumb );
    par_thumb = NULL;

    }
    {
    Py_XDECREF( par_caption );
    par_caption = NULL;

    }
    {
    Py_XDECREF( par_parse_mode );
    par_parse_mode = NULL;

    }
    {
    Py_XDECREF( par_width );
    par_width = NULL;

    }
    {
    Py_XDECREF( par_height );
    par_height = NULL;

    }
    {
    Py_XDECREF( par_duration );
    par_duration = NULL;

    }
    {
    goto function_return_exit;
    }
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_media );
    par_media = NULL;

    }
    {
    Py_XDECREF( par_thumb );
    par_thumb = NULL;

    }
    {
    Py_XDECREF( par_caption );
    par_caption = NULL;

    }
    {
    Py_XDECREF( par_parse_mode );
    par_parse_mode = NULL;

    }
    {
    Py_XDECREF( par_width );
    par_width = NULL;

    }
    {
    Py_XDECREF( par_height );
    par_height = NULL;

    }
    {
    Py_XDECREF( par_duration );
    par_duration = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    }
    // End of try:
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia$$$function_1___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_telegram$files$inputmedia$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_media = python_pars[ 1 ];
    PyObject *par_caption = python_pars[ 2 ];
    PyObject *par_parse_mode = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_b15e0ef95e293dbf57c8328e497b44ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b15e0ef95e293dbf57c8328e497b44ed = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b15e0ef95e293dbf57c8328e497b44ed, codeobj_b15e0ef95e293dbf57c8328e497b44ed, module_telegram$files$inputmedia, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b15e0ef95e293dbf57c8328e497b44ed = cache_frame_b15e0ef95e293dbf57c8328e497b44ed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b15e0ef95e293dbf57c8328e497b44ed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b15e0ef95e293dbf57c8328e497b44ed ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    tmp_assattr_name_1 = const_str_plain_photo;
    CHECK_OBJECT( par_self );
    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_type, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    }
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_mvar_value_1;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_1 = par_media;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_PhotoSize );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PhotoSize );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PhotoSize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = tmp_mvar_value_1;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    {
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_assattr_target_2;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_media;
    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_file_id );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_media, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    }
    goto branch_end_1;
    branch_no_1:;
    {
    nuitka_bool tmp_condition_result_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_mvar_value_2;
    PyObject *tmp_call_result_1;
    PyObject *tmp_args_element_name_1;
    int tmp_truth_name_1;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = tmp_mvar_value_2;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_is_file );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( par_media == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_media;
    frame_b15e0ef95e293dbf57c8328e497b44ed->m_frame.f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_call_result_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_call_result_1 );

        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_call_result_1 );
    if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    {
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_called_name_2;
    PyObject *tmp_mvar_value_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_assattr_target_3;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = tmp_mvar_value_3;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_media;
    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ca960d41167aa3240cbbfbd775368fd7 );
    frame_b15e0ef95e293dbf57c8328e497b44ed->m_frame.f_lineno = 138;
    tmp_assattr_name_3 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_media, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    }
    goto branch_end_2;
    branch_no_2:;
    {
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_4;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_4 = par_media;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_media, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    }
    branch_end_2:;
    }
    branch_end_1:;
    }
    {
    nuitka_bool tmp_condition_result_3;
    int tmp_truth_name_2;
    if ( par_caption == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "caption" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_2 = CHECK_IF_TRUE( par_caption );
    if ( tmp_truth_name_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    {
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_5;
    if ( par_caption == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "caption" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_5 = par_caption;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_caption, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_3:;
    }
    {
    nuitka_bool tmp_condition_result_4;
    int tmp_truth_name_3;
    if ( par_parse_mode == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_3 = CHECK_IF_TRUE( par_parse_mode );
    if ( tmp_truth_name_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    {
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_6;
    if ( par_parse_mode == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_6 = par_parse_mode;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_parse_mode, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b15e0ef95e293dbf57c8328e497b44ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b15e0ef95e293dbf57c8328e497b44ed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b15e0ef95e293dbf57c8328e497b44ed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b15e0ef95e293dbf57c8328e497b44ed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b15e0ef95e293dbf57c8328e497b44ed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b15e0ef95e293dbf57c8328e497b44ed,
        type_description_1,
        par_self,
        par_media,
        par_caption,
        par_parse_mode
    );


    // Release cached frame.
    if ( frame_b15e0ef95e293dbf57c8328e497b44ed == cache_frame_b15e0ef95e293dbf57c8328e497b44ed )
    {
        Py_DECREF( frame_b15e0ef95e293dbf57c8328e497b44ed );
    }
    cache_frame_b15e0ef95e293dbf57c8328e497b44ed = NULL;

    assertFrameObject( frame_b15e0ef95e293dbf57c8328e497b44ed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_media );
    par_media = NULL;

    }
    {
    Py_XDECREF( par_caption );
    par_caption = NULL;

    }
    {
    Py_XDECREF( par_parse_mode );
    par_parse_mode = NULL;

    }
    {
    goto function_return_exit;
    }
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_media );
    par_media = NULL;

    }
    {
    Py_XDECREF( par_caption );
    par_caption = NULL;

    }
    {
    Py_XDECREF( par_parse_mode );
    par_parse_mode = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    }
    // End of try:
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia$$$function_2___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_telegram$files$inputmedia$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_media = python_pars[ 1 ];
    PyObject *par_caption = python_pars[ 2 ];
    PyObject *par_width = python_pars[ 3 ];
    PyObject *par_height = python_pars[ 4 ];
    PyObject *par_duration = python_pars[ 5 ];
    PyObject *par_supports_streaming = python_pars[ 6 ];
    PyObject *par_parse_mode = python_pars[ 7 ];
    PyObject *par_thumb = python_pars[ 8 ];
    struct Nuitka_FrameObject *frame_9a4c637a17eff6b60fc7251c191b6acd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9a4c637a17eff6b60fc7251c191b6acd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9a4c637a17eff6b60fc7251c191b6acd, codeobj_9a4c637a17eff6b60fc7251c191b6acd, module_telegram$files$inputmedia, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9a4c637a17eff6b60fc7251c191b6acd = cache_frame_9a4c637a17eff6b60fc7251c191b6acd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a4c637a17eff6b60fc7251c191b6acd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a4c637a17eff6b60fc7251c191b6acd ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    tmp_assattr_name_1 = const_str_plain_video;
    CHECK_OBJECT( par_self );
    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_type, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_mvar_value_1;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_1 = par_media;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_Video );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Video );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Video" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = tmp_mvar_value_1;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    {
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_assattr_target_2;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_media;
    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_file_id );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_media, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_source_name_2;
    PyObject *tmp_assattr_target_3;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_media;
    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_width );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_width, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_source_name_3;
    PyObject *tmp_assattr_target_4;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_media;
    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_height );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_height, tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_source_name_4;
    PyObject *tmp_assattr_target_5;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_media;
    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_duration );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_duration, tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    goto branch_end_1;
    branch_no_1:;
    {
    nuitka_bool tmp_condition_result_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_5;
    PyObject *tmp_mvar_value_2;
    PyObject *tmp_call_result_1;
    PyObject *tmp_args_element_name_1;
    int tmp_truth_name_1;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = tmp_mvar_value_2;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_is_file );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_media == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_media;
    frame_9a4c637a17eff6b60fc7251c191b6acd->m_frame.f_lineno = 203;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_call_result_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_call_result_1 );

        exception_lineno = 203;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_call_result_1 );
    if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    {
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_called_name_2;
    PyObject *tmp_mvar_value_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_assattr_target_6;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = tmp_mvar_value_3;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_media;
    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ca960d41167aa3240cbbfbd775368fd7 );
    frame_9a4c637a17eff6b60fc7251c191b6acd->m_frame.f_lineno = 204;
    tmp_assattr_name_6 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_media, tmp_assattr_name_6 );
    Py_DECREF( tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    goto branch_end_2;
    branch_no_2:;
    {
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_7;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_7 = par_media;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_media, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_end_2:;
    }
    branch_end_1:;
    }
    {
    nuitka_bool tmp_condition_result_3;
    int tmp_truth_name_2;
    if ( par_thumb == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "thumb" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_2 = CHECK_IF_TRUE( par_thumb );
    if ( tmp_truth_name_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    {
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_target_8;
    if ( par_thumb == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "thumb" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_8 = par_thumb;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_thumb, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    nuitka_bool tmp_condition_result_4;
    PyObject *tmp_called_name_3;
    PyObject *tmp_source_name_6;
    PyObject *tmp_mvar_value_4;
    PyObject *tmp_call_result_2;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_source_name_7;
    int tmp_truth_name_3;
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = tmp_mvar_value_4;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_is_file );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_self;
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_thumb );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 210;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9a4c637a17eff6b60fc7251c191b6acd->m_frame.f_lineno = 210;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_call_result_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
    if ( tmp_truth_name_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_call_result_2 );

        exception_lineno = 210;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_call_result_2 );
    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    {
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_called_name_4;
    PyObject *tmp_mvar_value_5;
    PyObject *tmp_args_name_2;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_source_name_8;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_assattr_target_9;
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = tmp_mvar_value_5;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = par_self;
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_thumb );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_ca960d41167aa3240cbbfbd775368fd7 );
    frame_9a4c637a17eff6b60fc7251c191b6acd->m_frame.f_lineno = 211;
    tmp_assattr_name_9 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_thumb, tmp_assattr_name_9 );
    Py_DECREF( tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_4:;
    }
    branch_no_3:;
    }
    {
    nuitka_bool tmp_condition_result_5;
    int tmp_truth_name_4;
    if ( par_caption == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "caption" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_4 = CHECK_IF_TRUE( par_caption );
    if ( tmp_truth_name_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    {
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_target_10;
    if ( par_caption == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "caption" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_10 = par_caption;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_10 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_caption, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_5:;
    }
    {
    nuitka_bool tmp_condition_result_6;
    int tmp_truth_name_5;
    if ( par_parse_mode == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_5 = CHECK_IF_TRUE( par_parse_mode );
    if ( tmp_truth_name_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_6 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    {
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_target_11;
    if ( par_parse_mode == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_11 = par_parse_mode;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_11 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_parse_mode, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_6:;
    }
    {
    nuitka_bool tmp_condition_result_7;
    int tmp_truth_name_6;
    if ( par_width == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_6 = CHECK_IF_TRUE( par_width );
    if ( tmp_truth_name_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_7 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    {
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_target_12;
    if ( par_width == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_12 = par_width;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_12 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_width, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_7:;
    }
    {
    nuitka_bool tmp_condition_result_8;
    int tmp_truth_name_7;
    if ( par_height == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "height" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_7 = CHECK_IF_TRUE( par_height );
    if ( tmp_truth_name_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_8 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    {
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_target_13;
    if ( par_height == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "height" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_13 = par_height;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_13 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_height, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_8:;
    }
    {
    nuitka_bool tmp_condition_result_9;
    int tmp_truth_name_8;
    if ( par_duration == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "duration" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_8 = CHECK_IF_TRUE( par_duration );
    if ( tmp_truth_name_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_9 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    {
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_target_14;
    if ( par_duration == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "duration" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_14 = par_duration;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_14 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_duration, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_9:;
    }
    {
    nuitka_bool tmp_condition_result_10;
    int tmp_truth_name_9;
    if ( par_supports_streaming == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "supports_streaming" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_9 = CHECK_IF_TRUE( par_supports_streaming );
    if ( tmp_truth_name_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_10 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    {
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_target_15;
    if ( par_supports_streaming == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "supports_streaming" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_15 = par_supports_streaming;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_15 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_supports_streaming, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_10:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a4c637a17eff6b60fc7251c191b6acd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a4c637a17eff6b60fc7251c191b6acd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a4c637a17eff6b60fc7251c191b6acd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a4c637a17eff6b60fc7251c191b6acd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a4c637a17eff6b60fc7251c191b6acd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a4c637a17eff6b60fc7251c191b6acd,
        type_description_1,
        par_self,
        par_media,
        par_caption,
        par_width,
        par_height,
        par_duration,
        par_supports_streaming,
        par_parse_mode,
        par_thumb
    );


    // Release cached frame.
    if ( frame_9a4c637a17eff6b60fc7251c191b6acd == cache_frame_9a4c637a17eff6b60fc7251c191b6acd )
    {
        Py_DECREF( frame_9a4c637a17eff6b60fc7251c191b6acd );
    }
    cache_frame_9a4c637a17eff6b60fc7251c191b6acd = NULL;

    assertFrameObject( frame_9a4c637a17eff6b60fc7251c191b6acd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_media );
    par_media = NULL;

    }
    {
    Py_XDECREF( par_caption );
    par_caption = NULL;

    }
    {
    Py_XDECREF( par_width );
    par_width = NULL;

    }
    {
    Py_XDECREF( par_height );
    par_height = NULL;

    }
    {
    Py_XDECREF( par_duration );
    par_duration = NULL;

    }
    {
    Py_XDECREF( par_supports_streaming );
    par_supports_streaming = NULL;

    }
    {
    Py_XDECREF( par_parse_mode );
    par_parse_mode = NULL;

    }
    {
    Py_XDECREF( par_thumb );
    par_thumb = NULL;

    }
    {
    goto function_return_exit;
    }
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_media );
    par_media = NULL;

    }
    {
    Py_XDECREF( par_caption );
    par_caption = NULL;

    }
    {
    Py_XDECREF( par_width );
    par_width = NULL;

    }
    {
    Py_XDECREF( par_height );
    par_height = NULL;

    }
    {
    Py_XDECREF( par_duration );
    par_duration = NULL;

    }
    {
    Py_XDECREF( par_supports_streaming );
    par_supports_streaming = NULL;

    }
    {
    Py_XDECREF( par_parse_mode );
    par_parse_mode = NULL;

    }
    {
    Py_XDECREF( par_thumb );
    par_thumb = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    }
    // End of try:
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia$$$function_3___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_telegram$files$inputmedia$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_media = python_pars[ 1 ];
    PyObject *par_thumb = python_pars[ 2 ];
    PyObject *par_caption = python_pars[ 3 ];
    PyObject *par_parse_mode = python_pars[ 4 ];
    PyObject *par_duration = python_pars[ 5 ];
    PyObject *par_performer = python_pars[ 6 ];
    PyObject *par_title = python_pars[ 7 ];
    struct Nuitka_FrameObject *frame_436b0a19adafedc486178252f0bee37c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_436b0a19adafedc486178252f0bee37c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_436b0a19adafedc486178252f0bee37c, codeobj_436b0a19adafedc486178252f0bee37c, module_telegram$files$inputmedia, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_436b0a19adafedc486178252f0bee37c = cache_frame_436b0a19adafedc486178252f0bee37c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_436b0a19adafedc486178252f0bee37c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_436b0a19adafedc486178252f0bee37c ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    tmp_assattr_name_1 = const_str_plain_audio;
    CHECK_OBJECT( par_self );
    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_type, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_mvar_value_1;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_1 = par_media;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_Audio );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Audio );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Audio" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = tmp_mvar_value_1;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    {
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_assattr_target_2;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_media;
    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_file_id );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_media, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_source_name_2;
    PyObject *tmp_assattr_target_3;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_media;
    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_duration );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_duration, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_source_name_3;
    PyObject *tmp_assattr_target_4;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_media;
    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_performer );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_performer, tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_source_name_4;
    PyObject *tmp_assattr_target_5;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_media;
    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_title );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_title, tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    goto branch_end_1;
    branch_no_1:;
    {
    nuitka_bool tmp_condition_result_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_5;
    PyObject *tmp_mvar_value_2;
    PyObject *tmp_call_result_1;
    PyObject *tmp_args_element_name_1;
    int tmp_truth_name_1;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = tmp_mvar_value_2;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_is_file );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_media == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_media;
    frame_436b0a19adafedc486178252f0bee37c->m_frame.f_lineno = 280;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_call_result_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_call_result_1 );

        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_call_result_1 );
    if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    {
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_called_name_2;
    PyObject *tmp_mvar_value_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_assattr_target_6;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = tmp_mvar_value_3;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_media;
    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ca960d41167aa3240cbbfbd775368fd7 );
    frame_436b0a19adafedc486178252f0bee37c->m_frame.f_lineno = 281;
    tmp_assattr_name_6 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_media, tmp_assattr_name_6 );
    Py_DECREF( tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    goto branch_end_2;
    branch_no_2:;
    {
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_7;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_7 = par_media;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_media, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_end_2:;
    }
    branch_end_1:;
    }
    {
    nuitka_bool tmp_condition_result_3;
    int tmp_truth_name_2;
    if ( par_thumb == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "thumb" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_2 = CHECK_IF_TRUE( par_thumb );
    if ( tmp_truth_name_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    {
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_target_8;
    if ( par_thumb == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "thumb" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_8 = par_thumb;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_thumb, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    nuitka_bool tmp_condition_result_4;
    PyObject *tmp_called_name_3;
    PyObject *tmp_source_name_6;
    PyObject *tmp_mvar_value_4;
    PyObject *tmp_call_result_2;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_source_name_7;
    int tmp_truth_name_3;
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = tmp_mvar_value_4;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_is_file );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_self;
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_thumb );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 287;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_436b0a19adafedc486178252f0bee37c->m_frame.f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_call_result_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
    if ( tmp_truth_name_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_call_result_2 );

        exception_lineno = 287;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_call_result_2 );
    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    {
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_called_name_4;
    PyObject *tmp_mvar_value_5;
    PyObject *tmp_args_name_2;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_source_name_8;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_assattr_target_9;
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = tmp_mvar_value_5;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = par_self;
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_thumb );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_ca960d41167aa3240cbbfbd775368fd7 );
    frame_436b0a19adafedc486178252f0bee37c->m_frame.f_lineno = 288;
    tmp_assattr_name_9 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_thumb, tmp_assattr_name_9 );
    Py_DECREF( tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_4:;
    }
    branch_no_3:;
    }
    {
    nuitka_bool tmp_condition_result_5;
    int tmp_truth_name_4;
    if ( par_caption == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "caption" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 290;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_4 = CHECK_IF_TRUE( par_caption );
    if ( tmp_truth_name_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    {
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_target_10;
    if ( par_caption == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "caption" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_10 = par_caption;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_10 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_caption, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_5:;
    }
    {
    nuitka_bool tmp_condition_result_6;
    int tmp_truth_name_5;
    if ( par_parse_mode == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 292;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_5 = CHECK_IF_TRUE( par_parse_mode );
    if ( tmp_truth_name_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_6 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    {
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_target_11;
    if ( par_parse_mode == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 293;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_11 = par_parse_mode;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 293;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_11 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_parse_mode, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_6:;
    }
    {
    nuitka_bool tmp_condition_result_7;
    int tmp_truth_name_6;
    if ( par_duration == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "duration" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_6 = CHECK_IF_TRUE( par_duration );
    if ( tmp_truth_name_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_7 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    {
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_target_12;
    if ( par_duration == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "duration" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_12 = par_duration;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_12 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_duration, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_7:;
    }
    {
    nuitka_bool tmp_condition_result_8;
    int tmp_truth_name_7;
    if ( par_performer == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "performer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 296;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_7 = CHECK_IF_TRUE( par_performer );
    if ( tmp_truth_name_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_8 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    {
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_target_13;
    if ( par_performer == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "performer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 297;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_13 = par_performer;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 297;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_13 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_performer, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_8:;
    }
    {
    nuitka_bool tmp_condition_result_9;
    int tmp_truth_name_8;
    if ( par_title == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "title" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_8 = CHECK_IF_TRUE( par_title );
    if ( tmp_truth_name_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_9 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    {
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_target_14;
    if ( par_title == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "title" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_14 = par_title;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_14 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_title, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_9:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_436b0a19adafedc486178252f0bee37c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_436b0a19adafedc486178252f0bee37c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_436b0a19adafedc486178252f0bee37c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_436b0a19adafedc486178252f0bee37c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_436b0a19adafedc486178252f0bee37c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_436b0a19adafedc486178252f0bee37c,
        type_description_1,
        par_self,
        par_media,
        par_thumb,
        par_caption,
        par_parse_mode,
        par_duration,
        par_performer,
        par_title
    );


    // Release cached frame.
    if ( frame_436b0a19adafedc486178252f0bee37c == cache_frame_436b0a19adafedc486178252f0bee37c )
    {
        Py_DECREF( frame_436b0a19adafedc486178252f0bee37c );
    }
    cache_frame_436b0a19adafedc486178252f0bee37c = NULL;

    assertFrameObject( frame_436b0a19adafedc486178252f0bee37c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_media );
    par_media = NULL;

    }
    {
    Py_XDECREF( par_thumb );
    par_thumb = NULL;

    }
    {
    Py_XDECREF( par_caption );
    par_caption = NULL;

    }
    {
    Py_XDECREF( par_parse_mode );
    par_parse_mode = NULL;

    }
    {
    Py_XDECREF( par_duration );
    par_duration = NULL;

    }
    {
    Py_XDECREF( par_performer );
    par_performer = NULL;

    }
    {
    Py_XDECREF( par_title );
    par_title = NULL;

    }
    {
    goto function_return_exit;
    }
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_media );
    par_media = NULL;

    }
    {
    Py_XDECREF( par_thumb );
    par_thumb = NULL;

    }
    {
    Py_XDECREF( par_caption );
    par_caption = NULL;

    }
    {
    Py_XDECREF( par_parse_mode );
    par_parse_mode = NULL;

    }
    {
    Py_XDECREF( par_duration );
    par_duration = NULL;

    }
    {
    Py_XDECREF( par_performer );
    par_performer = NULL;

    }
    {
    Py_XDECREF( par_title );
    par_title = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    }
    // End of try:
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia$$$function_4___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_telegram$files$inputmedia$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_media = python_pars[ 1 ];
    PyObject *par_thumb = python_pars[ 2 ];
    PyObject *par_caption = python_pars[ 3 ];
    PyObject *par_parse_mode = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_55629f60b7c14ad7ff143aa95d056acf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_55629f60b7c14ad7ff143aa95d056acf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function code.
    {
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_55629f60b7c14ad7ff143aa95d056acf, codeobj_55629f60b7c14ad7ff143aa95d056acf, module_telegram$files$inputmedia, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_55629f60b7c14ad7ff143aa95d056acf = cache_frame_55629f60b7c14ad7ff143aa95d056acf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_55629f60b7c14ad7ff143aa95d056acf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_55629f60b7c14ad7ff143aa95d056acf ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    tmp_assattr_name_1 = const_str_plain_document;
    CHECK_OBJECT( par_self );
    tmp_assattr_target_1 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_type, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_mvar_value_1;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_1 = par_media;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_Document );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Document );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Document" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = tmp_mvar_value_1;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    {
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_assattr_target_2;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 337;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_media;
    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_file_id );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 337;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_media, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    goto branch_end_1;
    branch_no_1:;
    {
    nuitka_bool tmp_condition_result_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_mvar_value_2;
    PyObject *tmp_call_result_1;
    PyObject *tmp_args_element_name_1;
    int tmp_truth_name_1;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = tmp_mvar_value_2;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_is_file );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( par_media == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_media;
    frame_55629f60b7c14ad7ff143aa95d056acf->m_frame.f_lineno = 338;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_call_result_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_call_result_1 );

        exception_lineno = 338;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_call_result_1 );
    if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    {
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_called_name_2;
    PyObject *tmp_mvar_value_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_assattr_target_3;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = tmp_mvar_value_3;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_media;
    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ca960d41167aa3240cbbfbd775368fd7 );
    frame_55629f60b7c14ad7ff143aa95d056acf->m_frame.f_lineno = 339;
    tmp_assattr_name_3 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_media, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    goto branch_end_2;
    branch_no_2:;
    {
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_4;
    if ( par_media == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "media" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 341;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_4 = par_media;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 341;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_media, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_end_2:;
    }
    branch_end_1:;
    }
    {
    nuitka_bool tmp_condition_result_3;
    int tmp_truth_name_2;
    if ( par_thumb == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "thumb" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 343;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_2 = CHECK_IF_TRUE( par_thumb );
    if ( tmp_truth_name_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    {
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_5;
    if ( par_thumb == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "thumb" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_5 = par_thumb;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_thumb, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    {
    nuitka_bool tmp_condition_result_4;
    PyObject *tmp_called_name_3;
    PyObject *tmp_source_name_3;
    PyObject *tmp_mvar_value_4;
    PyObject *tmp_call_result_2;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_source_name_4;
    int tmp_truth_name_3;
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = tmp_mvar_value_4;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_is_file );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_self;
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_thumb );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 345;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_55629f60b7c14ad7ff143aa95d056acf->m_frame.f_lineno = 345;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_call_result_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
    if ( tmp_truth_name_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_call_result_2 );

        exception_lineno = 345;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    Py_DECREF( tmp_call_result_2 );
    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    {
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_called_name_4;
    PyObject *tmp_mvar_value_5;
    PyObject *tmp_args_name_2;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_source_name_5;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_assattr_target_6;
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputFile );
    }

    if ( tmp_mvar_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = tmp_mvar_value_5;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_self;
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_thumb );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_ca960d41167aa3240cbbfbd775368fd7 );
    frame_55629f60b7c14ad7ff143aa95d056acf->m_frame.f_lineno = 346;
    tmp_assattr_name_6 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_thumb, tmp_assattr_name_6 );
    Py_DECREF( tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_4:;
    }
    branch_no_3:;
    }
    {
    nuitka_bool tmp_condition_result_5;
    int tmp_truth_name_4;
    if ( par_caption == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "caption" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_4 = CHECK_IF_TRUE( par_caption );
    if ( tmp_truth_name_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    {
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_7;
    if ( par_caption == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "caption" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_7 = par_caption;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_caption, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_5:;
    }
    {
    nuitka_bool tmp_condition_result_6;
    int tmp_truth_name_5;
    if ( par_parse_mode == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_truth_name_5 = CHECK_IF_TRUE( par_parse_mode );
    if ( tmp_truth_name_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_condition_result_6 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    {
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_target_8;
    if ( par_parse_mode == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parse_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 351;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_8 = par_parse_mode;
    if ( par_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 351;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = par_self;
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_parse_mode, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    }
    branch_no_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55629f60b7c14ad7ff143aa95d056acf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55629f60b7c14ad7ff143aa95d056acf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_55629f60b7c14ad7ff143aa95d056acf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_55629f60b7c14ad7ff143aa95d056acf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_55629f60b7c14ad7ff143aa95d056acf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_55629f60b7c14ad7ff143aa95d056acf,
        type_description_1,
        par_self,
        par_media,
        par_thumb,
        par_caption,
        par_parse_mode
    );


    // Release cached frame.
    if ( frame_55629f60b7c14ad7ff143aa95d056acf == cache_frame_55629f60b7c14ad7ff143aa95d056acf )
    {
        Py_DECREF( frame_55629f60b7c14ad7ff143aa95d056acf );
    }
    cache_frame_55629f60b7c14ad7ff143aa95d056acf = NULL;

    assertFrameObject( frame_55629f60b7c14ad7ff143aa95d056acf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_media );
    par_media = NULL;

    }
    {
    Py_XDECREF( par_thumb );
    par_thumb = NULL;

    }
    {
    Py_XDECREF( par_caption );
    par_caption = NULL;

    }
    {
    Py_XDECREF( par_parse_mode );
    par_parse_mode = NULL;

    }
    {
    goto function_return_exit;
    }
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( par_self );
    par_self = NULL;

    }
    {
    Py_XDECREF( par_media );
    par_media = NULL;

    }
    {
    Py_XDECREF( par_thumb );
    par_thumb = NULL;

    }
    {
    Py_XDECREF( par_caption );
    par_caption = NULL;

    }
    {
    Py_XDECREF( par_parse_mode );
    par_parse_mode = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    }
    // End of try:
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia$$$function_5___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_telegram$files$inputmedia$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_telegram$files$inputmedia$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_55c1b9f223ae85ed43bf2ccf6154008c,
#endif
        codeobj_c992b10c7497a235684ab9fcbea2b621,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_telegram$files$inputmedia,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_telegram$files$inputmedia$$$function_2___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_telegram$files$inputmedia$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_0c82b7f3007c7e15ea5eb502a39911bc,
#endif
        codeobj_b15e0ef95e293dbf57c8328e497b44ed,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_telegram$files$inputmedia,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_telegram$files$inputmedia$$$function_3___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_telegram$files$inputmedia$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_c41694c48e946ae756c595a977a49aaf,
#endif
        codeobj_9a4c637a17eff6b60fc7251c191b6acd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_telegram$files$inputmedia,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_telegram$files$inputmedia$$$function_4___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_telegram$files$inputmedia$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_2179a5a5ef2adce63fe4affbc716a409,
#endif
        codeobj_436b0a19adafedc486178252f0bee37c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_telegram$files$inputmedia,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_telegram$files$inputmedia$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_telegram$files$inputmedia$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_0047de425659f3c2fba11cfb43b6e185,
#endif
        codeobj_55629f60b7c14ad7ff143aa95d056acf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_telegram$files$inputmedia,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_telegram$files$inputmedia =
{
    PyModuleDef_HEAD_INIT,
    "telegram.files.inputmedia",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;

extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( telegram$files$inputmedia )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_telegram$files$inputmedia );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("telegram.files.inputmedia: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("telegram.files.inputmedia: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("telegram.files.inputmedia: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittelegram$files$inputmedia" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_telegram$files$inputmedia = Py_InitModule4(
        "telegram.files.inputmedia",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_telegram$files$inputmedia = PyModule_Create( &mdef_telegram$files$inputmedia );
#endif

    moduledict_telegram$files$inputmedia = MODULE_DICT( module_telegram$files$inputmedia );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_telegram$files$inputmedia,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_telegram$files$inputmedia,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_telegram$files$inputmedia,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_telegram$files$inputmedia );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_657c12447089dbc4d81cd8a6460159b0, module_telegram$files$inputmedia );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_6ba73ed84483c364a82dd7612baf03d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    bool tmp_result;
    PyObject *locals_telegram$files$inputmedia_24 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_telegram$files$inputmedia_35 = NULL;
    struct Nuitka_FrameObject *frame_a4ae3c89ea256c6ac59c80ad253b1577_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a4ae3c89ea256c6ac59c80ad253b1577_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_telegram$files$inputmedia_109 = NULL;
    struct Nuitka_FrameObject *frame_c18ca5b5bf41d8b8c46566bd638cc390_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c18ca5b5bf41d8b8c46566bd638cc390_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_telegram$files$inputmedia_148 = NULL;
    struct Nuitka_FrameObject *frame_8f69673c0a804921c673fc835f0a7e9d_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8f69673c0a804921c673fc835f0a7e9d_4 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_telegram$files$inputmedia_227 = NULL;
    struct Nuitka_FrameObject *frame_82988df44f911e39f754a6f5ddd7aa0b_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_82988df44f911e39f754a6f5ddd7aa0b_5 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_telegram$files$inputmedia_302 = NULL;
    struct Nuitka_FrameObject *frame_ca65d3944ecdd0ff06a79dfa2c89399a_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = const_str_digest_0ade5add7acf22d6d2971a1c2ef528af;
    UPDATE_STRING_DICT0( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_4c4ba5fc8427680bb24768b5853ae1be;
    UPDATE_STRING_DICT0( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_6ba73ed84483c364a82dd7612baf03d9 = MAKE_MODULE_FRAME( codeobj_6ba73ed84483c364a82dd7612baf03d9, module_telegram$files$inputmedia );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6ba73ed84483c364a82dd7612baf03d9 );
    assert( Py_REFCNT( frame_6ba73ed84483c364a82dd7612baf03d9 ) == 2 );

    // Framed code:
    {
    PyObject *tmp_assign_source_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_level_name_1;
    tmp_name_name_1 = const_str_plain_telegram;
    tmp_globals_name_1 = (PyObject *)moduledict_telegram$files$inputmedia;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_58adc2e82d1c50ecea0486306207cd7e_tuple;
    tmp_level_name_1 = const_int_0;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 21;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_4;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_import_name_from_1;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_1 = tmp_import_from_1__module;
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TelegramObject );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_TelegramObject, tmp_assign_source_5 );
    }
    {
    PyObject *tmp_assign_source_6;
    PyObject *tmp_import_name_from_2;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_2 = tmp_import_from_1__module;
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_InputFile );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputFile, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    PyObject *tmp_import_name_from_3;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_3 = tmp_import_from_1__module;
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_PhotoSize );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_PhotoSize, tmp_assign_source_7 );
    }
    {
    PyObject *tmp_assign_source_8;
    PyObject *tmp_import_name_from_4;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_4 = tmp_import_from_1__module;
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Animation );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_Animation, tmp_assign_source_8 );
    }
    {
    PyObject *tmp_assign_source_9;
    PyObject *tmp_import_name_from_5;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_5 = tmp_import_from_1__module;
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Video );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_Video, tmp_assign_source_9 );
    }
    {
    PyObject *tmp_assign_source_10;
    PyObject *tmp_import_name_from_6;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_6 = tmp_import_from_1__module;
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Audio );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_Audio, tmp_assign_source_10 );
    }
    {
    PyObject *tmp_assign_source_11;
    PyObject *tmp_import_name_from_7;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_7 = tmp_import_from_1__module;
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Document );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_Document, tmp_assign_source_11 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_1:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_12;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_mvar_value_1;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_TelegramObject );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TelegramObject );
    }

    if ( tmp_mvar_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TelegramObject" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;

        goto try_except_handler_2;
    }

    tmp_tuple_element_1 = tmp_mvar_value_1;
    tmp_assign_source_12 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases_orig == NULL );
    tmp_class_creation_1__bases_orig = tmp_assign_source_12;

    }
    {
    PyObject *tmp_assign_source_13;
    PyObject *tmp_dircall_arg1_1;
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_13 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_13;

    }
    {
    PyObject *tmp_assign_source_14;
    tmp_assign_source_14 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;

    }
    {
    PyObject *tmp_assign_source_15;
    PyObject *tmp_metaclass_name_1;
    nuitka_bool tmp_condition_result_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_key_name_2;
    nuitka_bool tmp_condition_result_2;
    int tmp_truth_name_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_bases_name_1;
    tmp_key_name_1 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
    if ( tmp_truth_name_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_bases_name_1 = tmp_class_creation_1__bases;
    tmp_assign_source_15 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_15;

    }
    {
    nuitka_bool tmp_condition_result_3;
    PyObject *tmp_key_name_3;
    PyObject *tmp_dict_name_3;
    tmp_key_name_3 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    {
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    }
    branch_no_1:;
    }
    {
    nuitka_bool tmp_condition_result_4;
    PyObject *tmp_source_name_1;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_source_name_1 = tmp_class_creation_1__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
    tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    {
    PyObject *tmp_assign_source_16;
    PyObject *tmp_called_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_kw_name_1;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_source_name_2 = tmp_class_creation_1__metaclass;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    tmp_tuple_element_2 = const_str_plain_InputMedia;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 24;
    tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_16;

    }
    {
    nuitka_bool tmp_condition_result_5;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_source_name_3;
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_source_name_3 = tmp_class_creation_1__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
    tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    {
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_source_name_4;
    PyObject *tmp_type_arg_2;
    tmp_raise_type_1 = PyExc_TypeError;
    tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
    tmp_getattr_attr_1 = const_str_plain___name__;
    tmp_getattr_default_1 = const_str_angle_metaclass;
    tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    tmp_right_name_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_type_arg_2 = tmp_class_creation_1__prepared;
    tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( !(tmp_source_name_4 == NULL) );
    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 24;

        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
    tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_raise_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_2;
    }
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    exception_lineno = 24;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_2;
    }
    branch_no_3:;
    }
    goto branch_end_2;
    branch_no_2:;
    {
    PyObject *tmp_assign_source_17;
    tmp_assign_source_17 = PyDict_New();
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_17;

    }
    branch_end_2:;
    }
    {
    PyObject *tmp_assign_source_18;
    {
    PyObject *tmp_set_locals_1;
    CHECK_OBJECT( tmp_class_creation_1__prepared );
    tmp_set_locals_1 = tmp_class_creation_1__prepared;
    locals_telegram$files$inputmedia_24 = tmp_set_locals_1;
    Py_INCREF( tmp_set_locals_1 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_657c12447089dbc4d81cd8a6460159b0;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_24, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_4;
    }
    }
    {
    tmp_dictset_value = const_str_digest_d0b9dac14aa4831e385b7b9a877de403;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_24, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_4;
    }
    }
    {
    tmp_dictset_value = const_str_plain_InputMedia;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_24, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_4;
    }
    }
    {
    nuitka_bool tmp_condition_result_6;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_compexpr_left_1 = tmp_class_creation_1__bases;
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_4;
    }
    tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    {
    CHECK_OBJECT( tmp_class_creation_1__bases_orig );
    tmp_dictset_value = tmp_class_creation_1__bases_orig;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_24, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_4;
    }
    }
    branch_no_4:;
    }
    {
    PyObject *tmp_assign_source_19;
    PyObject *tmp_called_name_2;
    PyObject *tmp_args_name_2;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_kw_name_2;
    CHECK_OBJECT( tmp_class_creation_1__metaclass );
    tmp_called_name_2 = tmp_class_creation_1__metaclass;
    tmp_tuple_element_4 = const_str_plain_InputMedia;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__bases );
    tmp_tuple_element_4 = tmp_class_creation_1__bases;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_telegram$files$inputmedia_24;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 24;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_19;

    }
    {
    CHECK_OBJECT( outline_0_var___class__ );
    tmp_assign_source_18 = outline_0_var___class__;
    Py_INCREF( tmp_assign_source_18 );
    goto try_return_handler_4;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    {
    Py_DECREF( locals_telegram$files$inputmedia_24 );
    locals_telegram$files$inputmedia_24 = NULL;
    }
    {
    goto try_return_handler_3;
    }
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_telegram$files$inputmedia_24 );
    locals_telegram$files$inputmedia_24 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    {
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    }
    {
    goto outline_result_1;
    }
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 24;
    goto try_except_handler_2;
    outline_result_1:;
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMedia, tmp_assign_source_18 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_2:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_20;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_mvar_value_2;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMedia );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputMedia );
    }

    if ( tmp_mvar_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputMedia" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;

        goto try_except_handler_5;
    }

    tmp_tuple_element_5 = tmp_mvar_value_2;
    tmp_assign_source_20 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_2__bases_orig == NULL );
    tmp_class_creation_2__bases_orig = tmp_assign_source_20;

    }
    {
    PyObject *tmp_assign_source_21;
    PyObject *tmp_dircall_arg1_2;
    CHECK_OBJECT( tmp_class_creation_2__bases_orig );
    tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_21 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_21;

    }
    {
    PyObject *tmp_assign_source_22;
    tmp_assign_source_22 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_22;

    }
    {
    PyObject *tmp_assign_source_23;
    PyObject *tmp_metaclass_name_2;
    nuitka_bool tmp_condition_result_7;
    PyObject *tmp_key_name_4;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_key_name_5;
    nuitka_bool tmp_condition_result_8;
    int tmp_truth_name_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_bases_name_2;
    tmp_key_name_4 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
    if ( tmp_truth_name_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_4:;
    condexpr_end_3:;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_bases_name_2 = tmp_class_creation_2__bases;
    tmp_assign_source_23 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_23;

    }
    {
    nuitka_bool tmp_condition_result_9;
    PyObject *tmp_key_name_6;
    PyObject *tmp_dict_name_6;
    tmp_key_name_6 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    {
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    }
    branch_no_5:;
    }
    {
    nuitka_bool tmp_condition_result_10;
    PyObject *tmp_source_name_5;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_source_name_5 = tmp_class_creation_2__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
    tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    {
    PyObject *tmp_assign_source_24;
    PyObject *tmp_called_name_3;
    PyObject *tmp_source_name_6;
    PyObject *tmp_args_name_3;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_kw_name_3;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_source_name_6 = tmp_class_creation_2__metaclass;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    tmp_tuple_element_6 = const_str_plain_InputMediaAnimation;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_tuple_element_6 = tmp_class_creation_2__bases;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 35;
    tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_24;

    }
    {
    nuitka_bool tmp_condition_result_11;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_source_name_7;
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_source_name_7 = tmp_class_creation_2__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
    tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    {
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_value_2;
    PyObject *tmp_left_name_2;
    PyObject *tmp_right_name_2;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_source_name_8;
    PyObject *tmp_type_arg_4;
    tmp_raise_type_2 = PyExc_TypeError;
    tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
    tmp_getattr_attr_2 = const_str_plain___name__;
    tmp_getattr_default_2 = const_str_angle_metaclass;
    tmp_tuple_element_7 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    tmp_right_name_2 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_type_arg_4 = tmp_class_creation_2__prepared;
    tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
    assert( !(tmp_source_name_8 == NULL) );
    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 35;

        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
    tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_raise_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_value = tmp_raise_value_2;
    exception_lineno = 35;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_5;
    }
    branch_no_7:;
    }
    goto branch_end_6;
    branch_no_6:;
    {
    PyObject *tmp_assign_source_25;
    tmp_assign_source_25 = PyDict_New();
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_25;

    }
    branch_end_6:;
    }
    {
    PyObject *tmp_assign_source_26;
    {
    PyObject *tmp_set_locals_2;
    CHECK_OBJECT( tmp_class_creation_2__prepared );
    tmp_set_locals_2 = tmp_class_creation_2__prepared;
    locals_telegram$files$inputmedia_35 = tmp_set_locals_2;
    Py_INCREF( tmp_set_locals_2 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_657c12447089dbc4d81cd8a6460159b0;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_35, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    }
    {
    tmp_dictset_value = const_str_digest_740d51a6982cd6bbf24f446c680d790d;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_35, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    }
    {
    tmp_dictset_value = const_str_plain_InputMediaAnimation;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_35, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_a4ae3c89ea256c6ac59c80ad253b1577_2, codeobj_a4ae3c89ea256c6ac59c80ad253b1577, module_telegram$files$inputmedia, sizeof(void *) );
    frame_a4ae3c89ea256c6ac59c80ad253b1577_2 = cache_frame_a4ae3c89ea256c6ac59c80ad253b1577_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a4ae3c89ea256c6ac59c80ad253b1577_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a4ae3c89ea256c6ac59c80ad253b1577_2 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_1;
    tmp_defaults_1 = const_tuple_none_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_telegram$files$inputmedia$$$function_1___init__( tmp_defaults_1 );



    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_35, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_2 = "o";
        goto frame_exception_exit_2;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a4ae3c89ea256c6ac59c80ad253b1577_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a4ae3c89ea256c6ac59c80ad253b1577_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a4ae3c89ea256c6ac59c80ad253b1577_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a4ae3c89ea256c6ac59c80ad253b1577_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a4ae3c89ea256c6ac59c80ad253b1577_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a4ae3c89ea256c6ac59c80ad253b1577_2,
        type_description_2,
        outline_1_var___class__
    );


    // Release cached frame.
    if ( frame_a4ae3c89ea256c6ac59c80ad253b1577_2 == cache_frame_a4ae3c89ea256c6ac59c80ad253b1577_2 )
    {
        Py_DECREF( frame_a4ae3c89ea256c6ac59c80ad253b1577_2 );
    }
    cache_frame_a4ae3c89ea256c6ac59c80ad253b1577_2 = NULL;

    assertFrameObject( frame_a4ae3c89ea256c6ac59c80ad253b1577_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_7;
    skip_nested_handling_1:;
    {
    nuitka_bool tmp_condition_result_12;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_2;
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_compexpr_left_2 = tmp_class_creation_2__bases;
    CHECK_OBJECT( tmp_class_creation_2__bases_orig );
    tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    {
    CHECK_OBJECT( tmp_class_creation_2__bases_orig );
    tmp_dictset_value = tmp_class_creation_2__bases_orig;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_35, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    }
    branch_no_8:;
    }
    {
    PyObject *tmp_assign_source_27;
    PyObject *tmp_called_name_4;
    PyObject *tmp_args_name_4;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_kw_name_4;
    CHECK_OBJECT( tmp_class_creation_2__metaclass );
    tmp_called_name_4 = tmp_class_creation_2__metaclass;
    tmp_tuple_element_8 = const_str_plain_InputMediaAnimation;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
    CHECK_OBJECT( tmp_class_creation_2__bases );
    tmp_tuple_element_8 = tmp_class_creation_2__bases;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_telegram$files$inputmedia_35;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
    CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 35;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_27;

    }
    {
    CHECK_OBJECT( outline_1_var___class__ );
    tmp_assign_source_26 = outline_1_var___class__;
    Py_INCREF( tmp_assign_source_26 );
    goto try_return_handler_7;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    {
    Py_DECREF( locals_telegram$files$inputmedia_35 );
    locals_telegram$files$inputmedia_35 = NULL;
    }
    {
    goto try_return_handler_6;
    }
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_telegram$files$inputmedia_35 );
    locals_telegram$files$inputmedia_35 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    {
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    }
    {
    goto outline_result_2;
    }
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_2;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 35;
    goto try_except_handler_5;
    outline_result_2:;
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMediaAnimation, tmp_assign_source_26 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_3:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_28;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_mvar_value_3;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMedia );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputMedia );
    }

    if ( tmp_mvar_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputMedia" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;

        goto try_except_handler_8;
    }

    tmp_tuple_element_9 = tmp_mvar_value_3;
    tmp_assign_source_28 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_3__bases_orig == NULL );
    tmp_class_creation_3__bases_orig = tmp_assign_source_28;

    }
    {
    PyObject *tmp_assign_source_29;
    PyObject *tmp_dircall_arg1_3;
    CHECK_OBJECT( tmp_class_creation_3__bases_orig );
    tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
    Py_INCREF( tmp_dircall_arg1_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_assign_source_29 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_29;

    }
    {
    PyObject *tmp_assign_source_30;
    tmp_assign_source_30 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_30;

    }
    {
    PyObject *tmp_assign_source_31;
    PyObject *tmp_metaclass_name_3;
    nuitka_bool tmp_condition_result_13;
    PyObject *tmp_key_name_7;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_key_name_8;
    nuitka_bool tmp_condition_result_14;
    int tmp_truth_name_3;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_bases_name_3;
    tmp_key_name_7 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
    if ( tmp_truth_name_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    tmp_condition_result_14 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;
    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_6:;
    condexpr_end_5:;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_bases_name_3 = tmp_class_creation_3__bases;
    tmp_assign_source_31 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_31;

    }
    {
    nuitka_bool tmp_condition_result_15;
    PyObject *tmp_key_name_9;
    PyObject *tmp_dict_name_9;
    tmp_key_name_9 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    {
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    }
    branch_no_9:;
    }
    {
    nuitka_bool tmp_condition_result_16;
    PyObject *tmp_source_name_9;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_source_name_9 = tmp_class_creation_3__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
    tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    {
    PyObject *tmp_assign_source_32;
    PyObject *tmp_called_name_5;
    PyObject *tmp_source_name_10;
    PyObject *tmp_args_name_5;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_kw_name_5;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_source_name_10 = tmp_class_creation_3__metaclass;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    tmp_tuple_element_10 = const_str_plain_InputMediaPhoto;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_tuple_element_10 = tmp_class_creation_3__bases;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 109;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_32;

    }
    {
    nuitka_bool tmp_condition_result_17;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_source_name_11;
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_source_name_11 = tmp_class_creation_3__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
    tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    {
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_value_3;
    PyObject *tmp_left_name_3;
    PyObject *tmp_right_name_3;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_getattr_target_3;
    PyObject *tmp_getattr_attr_3;
    PyObject *tmp_getattr_default_3;
    PyObject *tmp_source_name_12;
    PyObject *tmp_type_arg_6;
    tmp_raise_type_3 = PyExc_TypeError;
    tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
    tmp_getattr_attr_3 = const_str_plain___name__;
    tmp_getattr_default_3 = const_str_angle_metaclass;
    tmp_tuple_element_11 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    tmp_right_name_3 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_11 );
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_type_arg_6 = tmp_class_creation_3__prepared;
    tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_6 );
    assert( !(tmp_source_name_12 == NULL) );
    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 109;

        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_11 );
    tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_raise_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_8;
    }
    exception_type = tmp_raise_type_3;
    Py_INCREF( tmp_raise_type_3 );
    exception_value = tmp_raise_value_3;
    exception_lineno = 109;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_8;
    }
    branch_no_11:;
    }
    goto branch_end_10;
    branch_no_10:;
    {
    PyObject *tmp_assign_source_33;
    tmp_assign_source_33 = PyDict_New();
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_33;

    }
    branch_end_10:;
    }
    {
    PyObject *tmp_assign_source_34;
    {
    PyObject *tmp_set_locals_3;
    CHECK_OBJECT( tmp_class_creation_3__prepared );
    tmp_set_locals_3 = tmp_class_creation_3__prepared;
    locals_telegram$files$inputmedia_109 = tmp_set_locals_3;
    Py_INCREF( tmp_set_locals_3 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_657c12447089dbc4d81cd8a6460159b0;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_109, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_10;
    }
    }
    {
    tmp_dictset_value = const_str_digest_95c4cf1eb91dcd1b88882e04126e0c03;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_109, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_10;
    }
    }
    {
    tmp_dictset_value = const_str_plain_InputMediaPhoto;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_109, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_10;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_c18ca5b5bf41d8b8c46566bd638cc390_3, codeobj_c18ca5b5bf41d8b8c46566bd638cc390, module_telegram$files$inputmedia, sizeof(void *) );
    frame_c18ca5b5bf41d8b8c46566bd638cc390_3 = cache_frame_c18ca5b5bf41d8b8c46566bd638cc390_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c18ca5b5bf41d8b8c46566bd638cc390_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c18ca5b5bf41d8b8c46566bd638cc390_3 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_2;
    tmp_defaults_2 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_telegram$files$inputmedia$$$function_2___init__( tmp_defaults_2 );



    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_109, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_2 = "o";
        goto frame_exception_exit_3;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c18ca5b5bf41d8b8c46566bd638cc390_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c18ca5b5bf41d8b8c46566bd638cc390_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c18ca5b5bf41d8b8c46566bd638cc390_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c18ca5b5bf41d8b8c46566bd638cc390_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c18ca5b5bf41d8b8c46566bd638cc390_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c18ca5b5bf41d8b8c46566bd638cc390_3,
        type_description_2,
        outline_2_var___class__
    );


    // Release cached frame.
    if ( frame_c18ca5b5bf41d8b8c46566bd638cc390_3 == cache_frame_c18ca5b5bf41d8b8c46566bd638cc390_3 )
    {
        Py_DECREF( frame_c18ca5b5bf41d8b8c46566bd638cc390_3 );
    }
    cache_frame_c18ca5b5bf41d8b8c46566bd638cc390_3 = NULL;

    assertFrameObject( frame_c18ca5b5bf41d8b8c46566bd638cc390_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_10;
    skip_nested_handling_2:;
    {
    nuitka_bool tmp_condition_result_18;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_3;
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_compexpr_left_3 = tmp_class_creation_3__bases;
    CHECK_OBJECT( tmp_class_creation_3__bases_orig );
    tmp_compexpr_right_3 = tmp_class_creation_3__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_10;
    }
    tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    {
    CHECK_OBJECT( tmp_class_creation_3__bases_orig );
    tmp_dictset_value = tmp_class_creation_3__bases_orig;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_109, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_10;
    }
    }
    branch_no_12:;
    }
    {
    PyObject *tmp_assign_source_35;
    PyObject *tmp_called_name_6;
    PyObject *tmp_args_name_6;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_kw_name_6;
    CHECK_OBJECT( tmp_class_creation_3__metaclass );
    tmp_called_name_6 = tmp_class_creation_3__metaclass;
    tmp_tuple_element_12 = const_str_plain_InputMediaPhoto;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
    CHECK_OBJECT( tmp_class_creation_3__bases );
    tmp_tuple_element_12 = tmp_class_creation_3__bases;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = locals_telegram$files$inputmedia_109;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_12 );
    CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 109;
    tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;

        goto try_except_handler_10;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_35;

    }
    {
    CHECK_OBJECT( outline_2_var___class__ );
    tmp_assign_source_34 = outline_2_var___class__;
    Py_INCREF( tmp_assign_source_34 );
    goto try_return_handler_10;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    {
    Py_DECREF( locals_telegram$files$inputmedia_109 );
    locals_telegram$files$inputmedia_109 = NULL;
    }
    {
    goto try_return_handler_9;
    }
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_telegram$files$inputmedia_109 );
    locals_telegram$files$inputmedia_109 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    {
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    }
    {
    goto outline_result_3;
    }
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_3;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 109;
    goto try_except_handler_8;
    outline_result_3:;
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMediaPhoto, tmp_assign_source_34 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_4:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_36;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_mvar_value_4;
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMedia );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputMedia );
    }

    if ( tmp_mvar_value_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputMedia" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;

        goto try_except_handler_11;
    }

    tmp_tuple_element_13 = tmp_mvar_value_4;
    tmp_assign_source_36 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_36, 0, tmp_tuple_element_13 );
    assert( tmp_class_creation_4__bases_orig == NULL );
    tmp_class_creation_4__bases_orig = tmp_assign_source_36;

    }
    {
    PyObject *tmp_assign_source_37;
    PyObject *tmp_dircall_arg1_4;
    CHECK_OBJECT( tmp_class_creation_4__bases_orig );
    tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
    Py_INCREF( tmp_dircall_arg1_4 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_assign_source_37 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_37;

    }
    {
    PyObject *tmp_assign_source_38;
    tmp_assign_source_38 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_38;

    }
    {
    PyObject *tmp_assign_source_39;
    PyObject *tmp_metaclass_name_4;
    nuitka_bool tmp_condition_result_19;
    PyObject *tmp_key_name_10;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_key_name_11;
    nuitka_bool tmp_condition_result_20;
    int tmp_truth_name_4;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_bases_name_4;
    tmp_key_name_10 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_truth_name_4 = CHECK_IF_TRUE( tmp_class_creation_4__bases );
    if ( tmp_truth_name_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    tmp_condition_result_20 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;
    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_8:;
    condexpr_end_7:;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_bases_name_4 = tmp_class_creation_4__bases;
    tmp_assign_source_39 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_39;

    }
    {
    nuitka_bool tmp_condition_result_21;
    PyObject *tmp_key_name_12;
    PyObject *tmp_dict_name_12;
    tmp_key_name_12 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    {
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    }
    branch_no_13:;
    }
    {
    nuitka_bool tmp_condition_result_22;
    PyObject *tmp_source_name_13;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_source_name_13 = tmp_class_creation_4__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
    tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    {
    PyObject *tmp_assign_source_40;
    PyObject *tmp_called_name_7;
    PyObject *tmp_source_name_14;
    PyObject *tmp_args_name_7;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_kw_name_7;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_source_name_14 = tmp_class_creation_4__metaclass;
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    tmp_tuple_element_14 = const_str_plain_InputMediaVideo;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_14 );
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_tuple_element_14 = tmp_class_creation_4__bases;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_14 );
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 148;
    tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_40;

    }
    {
    nuitka_bool tmp_condition_result_23;
    PyObject *tmp_operand_name_4;
    PyObject *tmp_source_name_15;
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_source_name_15 = tmp_class_creation_4__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
    tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    tmp_condition_result_23 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    {
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_value_4;
    PyObject *tmp_left_name_4;
    PyObject *tmp_right_name_4;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_getattr_target_4;
    PyObject *tmp_getattr_attr_4;
    PyObject *tmp_getattr_default_4;
    PyObject *tmp_source_name_16;
    PyObject *tmp_type_arg_8;
    tmp_raise_type_4 = PyExc_TypeError;
    tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
    tmp_getattr_attr_4 = const_str_plain___name__;
    tmp_getattr_default_4 = const_str_angle_metaclass;
    tmp_tuple_element_15 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    tmp_right_name_4 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_15 );
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_type_arg_8 = tmp_class_creation_4__prepared;
    tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_8 );
    assert( !(tmp_source_name_16 == NULL) );
    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_4 );

        exception_lineno = 148;

        goto try_except_handler_11;
    }
    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_15 );
    tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_raise_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_11;
    }
    exception_type = tmp_raise_type_4;
    Py_INCREF( tmp_raise_type_4 );
    exception_value = tmp_raise_value_4;
    exception_lineno = 148;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_11;
    }
    branch_no_15:;
    }
    goto branch_end_14;
    branch_no_14:;
    {
    PyObject *tmp_assign_source_41;
    tmp_assign_source_41 = PyDict_New();
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_41;

    }
    branch_end_14:;
    }
    {
    PyObject *tmp_assign_source_42;
    {
    PyObject *tmp_set_locals_4;
    CHECK_OBJECT( tmp_class_creation_4__prepared );
    tmp_set_locals_4 = tmp_class_creation_4__prepared;
    locals_telegram$files$inputmedia_148 = tmp_set_locals_4;
    Py_INCREF( tmp_set_locals_4 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_657c12447089dbc4d81cd8a6460159b0;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_148, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_13;
    }
    }
    {
    tmp_dictset_value = const_str_digest_03262abad2e64cab9e65a1942885a8b0;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_148, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_13;
    }
    }
    {
    tmp_dictset_value = const_str_plain_InputMediaVideo;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_148, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_13;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_8f69673c0a804921c673fc835f0a7e9d_4, codeobj_8f69673c0a804921c673fc835f0a7e9d, module_telegram$files$inputmedia, sizeof(void *) );
    frame_8f69673c0a804921c673fc835f0a7e9d_4 = cache_frame_8f69673c0a804921c673fc835f0a7e9d_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8f69673c0a804921c673fc835f0a7e9d_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8f69673c0a804921c673fc835f0a7e9d_4 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_3;
    tmp_defaults_3 = const_tuple_none_none_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_telegram$files$inputmedia$$$function_3___init__( tmp_defaults_3 );



    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_148, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_2 = "o";
        goto frame_exception_exit_4;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f69673c0a804921c673fc835f0a7e9d_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f69673c0a804921c673fc835f0a7e9d_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f69673c0a804921c673fc835f0a7e9d_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f69673c0a804921c673fc835f0a7e9d_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f69673c0a804921c673fc835f0a7e9d_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8f69673c0a804921c673fc835f0a7e9d_4,
        type_description_2,
        outline_3_var___class__
    );


    // Release cached frame.
    if ( frame_8f69673c0a804921c673fc835f0a7e9d_4 == cache_frame_8f69673c0a804921c673fc835f0a7e9d_4 )
    {
        Py_DECREF( frame_8f69673c0a804921c673fc835f0a7e9d_4 );
    }
    cache_frame_8f69673c0a804921c673fc835f0a7e9d_4 = NULL;

    assertFrameObject( frame_8f69673c0a804921c673fc835f0a7e9d_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;
    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_13;
    skip_nested_handling_3:;
    {
    nuitka_bool tmp_condition_result_24;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_4;
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_compexpr_left_4 = tmp_class_creation_4__bases;
    CHECK_OBJECT( tmp_class_creation_4__bases_orig );
    tmp_compexpr_right_4 = tmp_class_creation_4__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_13;
    }
    tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    {
    CHECK_OBJECT( tmp_class_creation_4__bases_orig );
    tmp_dictset_value = tmp_class_creation_4__bases_orig;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_148, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_13;
    }
    }
    branch_no_16:;
    }
    {
    PyObject *tmp_assign_source_43;
    PyObject *tmp_called_name_8;
    PyObject *tmp_args_name_8;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_kw_name_8;
    CHECK_OBJECT( tmp_class_creation_4__metaclass );
    tmp_called_name_8 = tmp_class_creation_4__metaclass;
    tmp_tuple_element_16 = const_str_plain_InputMediaVideo;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_16 );
    CHECK_OBJECT( tmp_class_creation_4__bases );
    tmp_tuple_element_16 = tmp_class_creation_4__bases;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_16 );
    tmp_tuple_element_16 = locals_telegram$files$inputmedia_148;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_16 );
    CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 148;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto try_except_handler_13;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_43;

    }
    {
    CHECK_OBJECT( outline_3_var___class__ );
    tmp_assign_source_42 = outline_3_var___class__;
    Py_INCREF( tmp_assign_source_42 );
    goto try_return_handler_13;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    {
    Py_DECREF( locals_telegram$files$inputmedia_148 );
    locals_telegram$files$inputmedia_148 = NULL;
    }
    {
    goto try_return_handler_12;
    }
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_telegram$files$inputmedia_148 );
    locals_telegram$files$inputmedia_148 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    {
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    }
    {
    goto outline_result_4;
    }
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_4;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 148;
    goto try_except_handler_11;
    outline_result_4:;
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMediaVideo, tmp_assign_source_42 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_5:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_44;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_mvar_value_5;
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMedia );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputMedia );
    }

    if ( tmp_mvar_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputMedia" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;

        goto try_except_handler_14;
    }

    tmp_tuple_element_17 = tmp_mvar_value_5;
    tmp_assign_source_44 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_17 );
    assert( tmp_class_creation_5__bases_orig == NULL );
    tmp_class_creation_5__bases_orig = tmp_assign_source_44;

    }
    {
    PyObject *tmp_assign_source_45;
    PyObject *tmp_dircall_arg1_5;
    CHECK_OBJECT( tmp_class_creation_5__bases_orig );
    tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
    Py_INCREF( tmp_dircall_arg1_5 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
        tmp_assign_source_45 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_45;

    }
    {
    PyObject *tmp_assign_source_46;
    tmp_assign_source_46 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_46;

    }
    {
    PyObject *tmp_assign_source_47;
    PyObject *tmp_metaclass_name_5;
    nuitka_bool tmp_condition_result_25;
    PyObject *tmp_key_name_13;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_key_name_14;
    nuitka_bool tmp_condition_result_26;
    int tmp_truth_name_5;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_bases_name_5;
    tmp_key_name_13 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_truth_name_5 = CHECK_IF_TRUE( tmp_class_creation_5__bases );
    if ( tmp_truth_name_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    tmp_condition_result_26 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_10:;
    condexpr_end_9:;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_bases_name_5 = tmp_class_creation_5__bases;
    tmp_assign_source_47 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_47;

    }
    {
    nuitka_bool tmp_condition_result_27;
    PyObject *tmp_key_name_15;
    PyObject *tmp_dict_name_15;
    tmp_key_name_15 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    tmp_condition_result_27 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    {
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    }
    branch_no_17:;
    }
    {
    nuitka_bool tmp_condition_result_28;
    PyObject *tmp_source_name_17;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_source_name_17 = tmp_class_creation_5__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_17, const_str_plain___prepare__ );
    tmp_condition_result_28 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    {
    PyObject *tmp_assign_source_48;
    PyObject *tmp_called_name_9;
    PyObject *tmp_source_name_18;
    PyObject *tmp_args_name_9;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_kw_name_9;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_source_name_18 = tmp_class_creation_5__metaclass;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    tmp_tuple_element_18 = const_str_plain_InputMediaAudio;
    tmp_args_name_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_18 );
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_tuple_element_18 = tmp_class_creation_5__bases;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_18 );
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 227;
    tmp_assign_source_48 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_48;

    }
    {
    nuitka_bool tmp_condition_result_29;
    PyObject *tmp_operand_name_5;
    PyObject *tmp_source_name_19;
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_source_name_19 = tmp_class_creation_5__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_19, const_str_plain___getitem__ );
    tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    tmp_condition_result_29 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    {
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_value_5;
    PyObject *tmp_left_name_5;
    PyObject *tmp_right_name_5;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_getattr_target_5;
    PyObject *tmp_getattr_attr_5;
    PyObject *tmp_getattr_default_5;
    PyObject *tmp_source_name_20;
    PyObject *tmp_type_arg_10;
    tmp_raise_type_5 = PyExc_TypeError;
    tmp_left_name_5 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
    tmp_getattr_attr_5 = const_str_plain___name__;
    tmp_getattr_default_5 = const_str_angle_metaclass;
    tmp_tuple_element_19 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5 );
    if ( tmp_tuple_element_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    tmp_right_name_5 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_19 );
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_type_arg_10 = tmp_class_creation_5__prepared;
    tmp_source_name_20 = BUILTIN_TYPE1( tmp_type_arg_10 );
    assert( !(tmp_source_name_20 == NULL) );
    tmp_tuple_element_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_tuple_element_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_5 );

        exception_lineno = 227;

        goto try_except_handler_14;
    }
    PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_19 );
    tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_raise_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_14;
    }
    exception_type = tmp_raise_type_5;
    Py_INCREF( tmp_raise_type_5 );
    exception_value = tmp_raise_value_5;
    exception_lineno = 227;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_14;
    }
    branch_no_19:;
    }
    goto branch_end_18;
    branch_no_18:;
    {
    PyObject *tmp_assign_source_49;
    tmp_assign_source_49 = PyDict_New();
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_49;

    }
    branch_end_18:;
    }
    {
    PyObject *tmp_assign_source_50;
    {
    PyObject *tmp_set_locals_5;
    CHECK_OBJECT( tmp_class_creation_5__prepared );
    tmp_set_locals_5 = tmp_class_creation_5__prepared;
    locals_telegram$files$inputmedia_227 = tmp_set_locals_5;
    Py_INCREF( tmp_set_locals_5 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_657c12447089dbc4d81cd8a6460159b0;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_227, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_16;
    }
    }
    {
    tmp_dictset_value = const_str_digest_d060b7b1f2aa70990fc2a6b81f5b3a38;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_227, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_16;
    }
    }
    {
    tmp_dictset_value = const_str_plain_InputMediaAudio;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_227, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_16;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_82988df44f911e39f754a6f5ddd7aa0b_5, codeobj_82988df44f911e39f754a6f5ddd7aa0b, module_telegram$files$inputmedia, sizeof(void *) );
    frame_82988df44f911e39f754a6f5ddd7aa0b_5 = cache_frame_82988df44f911e39f754a6f5ddd7aa0b_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_82988df44f911e39f754a6f5ddd7aa0b_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_82988df44f911e39f754a6f5ddd7aa0b_5 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_4;
    tmp_defaults_4 = const_tuple_none_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_telegram$files$inputmedia$$$function_4___init__( tmp_defaults_4 );



    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_227, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_2 = "o";
        goto frame_exception_exit_5;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_82988df44f911e39f754a6f5ddd7aa0b_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_82988df44f911e39f754a6f5ddd7aa0b_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_82988df44f911e39f754a6f5ddd7aa0b_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_82988df44f911e39f754a6f5ddd7aa0b_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_82988df44f911e39f754a6f5ddd7aa0b_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_82988df44f911e39f754a6f5ddd7aa0b_5,
        type_description_2,
        outline_4_var___class__
    );


    // Release cached frame.
    if ( frame_82988df44f911e39f754a6f5ddd7aa0b_5 == cache_frame_82988df44f911e39f754a6f5ddd7aa0b_5 )
    {
        Py_DECREF( frame_82988df44f911e39f754a6f5ddd7aa0b_5 );
    }
    cache_frame_82988df44f911e39f754a6f5ddd7aa0b_5 = NULL;

    assertFrameObject( frame_82988df44f911e39f754a6f5ddd7aa0b_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;
    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_16;
    skip_nested_handling_4:;
    {
    nuitka_bool tmp_condition_result_30;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_5;
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_compexpr_left_5 = tmp_class_creation_5__bases;
    CHECK_OBJECT( tmp_class_creation_5__bases_orig );
    tmp_compexpr_right_5 = tmp_class_creation_5__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_16;
    }
    tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    {
    CHECK_OBJECT( tmp_class_creation_5__bases_orig );
    tmp_dictset_value = tmp_class_creation_5__bases_orig;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_227, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_16;
    }
    }
    branch_no_20:;
    }
    {
    PyObject *tmp_assign_source_51;
    PyObject *tmp_called_name_10;
    PyObject *tmp_args_name_10;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_kw_name_10;
    CHECK_OBJECT( tmp_class_creation_5__metaclass );
    tmp_called_name_10 = tmp_class_creation_5__metaclass;
    tmp_tuple_element_20 = const_str_plain_InputMediaAudio;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_20 );
    CHECK_OBJECT( tmp_class_creation_5__bases );
    tmp_tuple_element_20 = tmp_class_creation_5__bases;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = locals_telegram$files$inputmedia_227;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_20 );
    CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 227;
    tmp_assign_source_51 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto try_except_handler_16;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_51;

    }
    {
    CHECK_OBJECT( outline_4_var___class__ );
    tmp_assign_source_50 = outline_4_var___class__;
    Py_INCREF( tmp_assign_source_50 );
    goto try_return_handler_16;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    {
    Py_DECREF( locals_telegram$files$inputmedia_227 );
    locals_telegram$files$inputmedia_227 = NULL;
    }
    {
    goto try_return_handler_15;
    }
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_telegram$files$inputmedia_227 );
    locals_telegram$files$inputmedia_227 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    {
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    }
    {
    goto outline_result_5;
    }
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_5;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 227;
    goto try_except_handler_14;
    outline_result_5:;
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMediaAudio, tmp_assign_source_50 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_6:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_52;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_mvar_value_6;
    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMedia );

    if (unlikely( tmp_mvar_value_6 == NULL ))
    {
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputMedia );
    }

    if ( tmp_mvar_value_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InputMedia" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;

        goto try_except_handler_17;
    }

    tmp_tuple_element_21 = tmp_mvar_value_6;
    tmp_assign_source_52 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_52, 0, tmp_tuple_element_21 );
    assert( tmp_class_creation_6__bases_orig == NULL );
    tmp_class_creation_6__bases_orig = tmp_assign_source_52;

    }
    {
    PyObject *tmp_assign_source_53;
    PyObject *tmp_dircall_arg1_6;
    CHECK_OBJECT( tmp_class_creation_6__bases_orig );
    tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
    Py_INCREF( tmp_dircall_arg1_6 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
        tmp_assign_source_53 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_53;

    }
    {
    PyObject *tmp_assign_source_54;
    tmp_assign_source_54 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_54;

    }
    {
    PyObject *tmp_assign_source_55;
    PyObject *tmp_metaclass_name_6;
    nuitka_bool tmp_condition_result_31;
    PyObject *tmp_key_name_16;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_key_name_17;
    nuitka_bool tmp_condition_result_32;
    int tmp_truth_name_6;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_bases_name_6;
    tmp_key_name_16 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    tmp_condition_result_31 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_truth_name_6 = CHECK_IF_TRUE( tmp_class_creation_6__bases );
    if ( tmp_truth_name_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    tmp_condition_result_32 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_32 == NUITKA_BOOL_TRUE )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_subscribed_name_6 = tmp_class_creation_6__bases;
    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_12:;
    condexpr_end_11:;
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_bases_name_6 = tmp_class_creation_6__bases;
    tmp_assign_source_55 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    Py_DECREF( tmp_metaclass_name_6 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_55;

    }
    {
    nuitka_bool tmp_condition_result_33;
    PyObject *tmp_key_name_18;
    PyObject *tmp_dict_name_18;
    tmp_key_name_18 = const_str_plain_metaclass;
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;
    tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    tmp_condition_result_33 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_33 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    {
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    }
    branch_no_21:;
    }
    {
    nuitka_bool tmp_condition_result_34;
    PyObject *tmp_source_name_21;
    CHECK_OBJECT( tmp_class_creation_6__metaclass );
    tmp_source_name_21 = tmp_class_creation_6__metaclass;
    tmp_res = PyObject_HasAttr( tmp_source_name_21, const_str_plain___prepare__ );
    tmp_condition_result_34 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_34 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    {
    PyObject *tmp_assign_source_56;
    PyObject *tmp_called_name_11;
    PyObject *tmp_source_name_22;
    PyObject *tmp_args_name_11;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_kw_name_11;
    CHECK_OBJECT( tmp_class_creation_6__metaclass );
    tmp_source_name_22 = tmp_class_creation_6__metaclass;
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    tmp_tuple_element_22 = const_str_plain_InputMediaDocument;
    tmp_args_name_11 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_22 );
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_tuple_element_22 = tmp_class_creation_6__bases;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_22 );
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 302;
    tmp_assign_source_56 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_56;

    }
    {
    nuitka_bool tmp_condition_result_35;
    PyObject *tmp_operand_name_6;
    PyObject *tmp_source_name_23;
    CHECK_OBJECT( tmp_class_creation_6__prepared );
    tmp_source_name_23 = tmp_class_creation_6__prepared;
    tmp_res = PyObject_HasAttr( tmp_source_name_23, const_str_plain___getitem__ );
    tmp_operand_name_6 = ( tmp_res != 0 ) ? Py_True : Py_False;
    tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    tmp_condition_result_35 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_35 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    {
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_value_6;
    PyObject *tmp_left_name_6;
    PyObject *tmp_right_name_6;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_getattr_target_6;
    PyObject *tmp_getattr_attr_6;
    PyObject *tmp_getattr_default_6;
    PyObject *tmp_source_name_24;
    PyObject *tmp_type_arg_12;
    tmp_raise_type_6 = PyExc_TypeError;
    tmp_left_name_6 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
    CHECK_OBJECT( tmp_class_creation_6__metaclass );
    tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
    tmp_getattr_attr_6 = const_str_plain___name__;
    tmp_getattr_default_6 = const_str_angle_metaclass;
    tmp_tuple_element_23 = BUILTIN_GETATTR( tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6 );
    if ( tmp_tuple_element_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    tmp_right_name_6 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_23 );
    CHECK_OBJECT( tmp_class_creation_6__prepared );
    tmp_type_arg_12 = tmp_class_creation_6__prepared;
    tmp_source_name_24 = BUILTIN_TYPE1( tmp_type_arg_12 );
    assert( !(tmp_source_name_24 == NULL) );
    tmp_tuple_element_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_tuple_element_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_6 );

        exception_lineno = 302;

        goto try_except_handler_17;
    }
    PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_23 );
    tmp_raise_value_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_raise_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_17;
    }
    exception_type = tmp_raise_type_6;
    Py_INCREF( tmp_raise_type_6 );
    exception_value = tmp_raise_value_6;
    exception_lineno = 302;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_17;
    }
    branch_no_23:;
    }
    goto branch_end_22;
    branch_no_22:;
    {
    PyObject *tmp_assign_source_57;
    tmp_assign_source_57 = PyDict_New();
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_57;

    }
    branch_end_22:;
    }
    {
    PyObject *tmp_assign_source_58;
    {
    PyObject *tmp_set_locals_6;
    CHECK_OBJECT( tmp_class_creation_6__prepared );
    tmp_set_locals_6 = tmp_class_creation_6__prepared;
    locals_telegram$files$inputmedia_302 = tmp_set_locals_6;
    Py_INCREF( tmp_set_locals_6 );
    }
    {
    // Tried code:
    {
    // Tried code:
    {
    tmp_dictset_value = const_str_digest_657c12447089dbc4d81cd8a6460159b0;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_302, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_19;
    }
    }
    {
    tmp_dictset_value = const_str_digest_ede674ccc6a924b40a87d175da07d03a;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_302, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_19;
    }
    }
    {
    tmp_dictset_value = const_str_plain_InputMediaDocument;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_302, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_19;
    }
    }
    MAKE_OR_REUSE_FRAME( cache_frame_ca65d3944ecdd0ff06a79dfa2c89399a_6, codeobj_ca65d3944ecdd0ff06a79dfa2c89399a, module_telegram$files$inputmedia, sizeof(void *) );
    frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 = cache_frame_ca65d3944ecdd0ff06a79dfa2c89399a_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 ) == 2 ); // Frame stack

    // Framed code:
    {
    PyObject *tmp_defaults_5;
    tmp_defaults_5 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_dictset_value = MAKE_FUNCTION_telegram$files$inputmedia$$$function_5___init__( tmp_defaults_5 );



    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_302, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_2 = "o";
        goto frame_exception_exit_6;
    }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ca65d3944ecdd0ff06a79dfa2c89399a_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ca65d3944ecdd0ff06a79dfa2c89399a_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ca65d3944ecdd0ff06a79dfa2c89399a_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca65d3944ecdd0ff06a79dfa2c89399a_6,
        type_description_2,
        outline_5_var___class__
    );


    // Release cached frame.
    if ( frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 == cache_frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 )
    {
        Py_DECREF( frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 );
    }
    cache_frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 = NULL;

    assertFrameObject( frame_ca65d3944ecdd0ff06a79dfa2c89399a_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;
    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_19;
    skip_nested_handling_5:;
    {
    nuitka_bool tmp_condition_result_36;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_6;
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_compexpr_left_6 = tmp_class_creation_6__bases;
    CHECK_OBJECT( tmp_class_creation_6__bases_orig );
    tmp_compexpr_right_6 = tmp_class_creation_6__bases_orig;
    tmp_res = RICH_COMPARE_BOOL_NE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_19;
    }
    tmp_condition_result_36 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
    if ( tmp_condition_result_36 == NUITKA_BOOL_TRUE )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    {
    CHECK_OBJECT( tmp_class_creation_6__bases_orig );
    tmp_dictset_value = tmp_class_creation_6__bases_orig;
    tmp_res = PyObject_SetItem( locals_telegram$files$inputmedia_302, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_19;
    }
    }
    branch_no_24:;
    }
    {
    PyObject *tmp_assign_source_59;
    PyObject *tmp_called_name_12;
    PyObject *tmp_args_name_12;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_kw_name_12;
    CHECK_OBJECT( tmp_class_creation_6__metaclass );
    tmp_called_name_12 = tmp_class_creation_6__metaclass;
    tmp_tuple_element_24 = const_str_plain_InputMediaDocument;
    tmp_args_name_12 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_24 );
    CHECK_OBJECT( tmp_class_creation_6__bases );
    tmp_tuple_element_24 = tmp_class_creation_6__bases;
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_24 );
    tmp_tuple_element_24 = locals_telegram$files$inputmedia_302;
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_24 );
    CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;
    frame_6ba73ed84483c364a82dd7612baf03d9->m_frame.f_lineno = 302;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;

        goto try_except_handler_19;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_59;

    }
    {
    CHECK_OBJECT( outline_5_var___class__ );
    tmp_assign_source_58 = outline_5_var___class__;
    Py_INCREF( tmp_assign_source_58 );
    goto try_return_handler_19;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    {
    Py_DECREF( locals_telegram$files$inputmedia_302 );
    locals_telegram$files$inputmedia_302 = NULL;
    }
    {
    goto try_return_handler_18;
    }
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_DECREF( locals_telegram$files$inputmedia_302 );
    locals_telegram$files$inputmedia_302 = NULL;
    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    }
    // End of try:
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    {
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    }
    {
    goto outline_result_6;
    }
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto outline_exception_6;
    }
    // End of try:
    }
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( telegram$files$inputmedia );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 302;
    goto try_except_handler_17;
    outline_result_6:;
    UPDATE_STRING_DICT1( moduledict_telegram$files$inputmedia, (Nuitka_StringObject *)const_str_plain_InputMediaDocument, tmp_assign_source_58 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    }
    {
    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_7:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ba73ed84483c364a82dd7612baf03d9 );
#endif
    popFrameStack();

    assertFrameObject( frame_6ba73ed84483c364a82dd7612baf03d9 );

    goto frame_no_exception_6;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ba73ed84483c364a82dd7612baf03d9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6ba73ed84483c364a82dd7612baf03d9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6ba73ed84483c364a82dd7612baf03d9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6ba73ed84483c364a82dd7612baf03d9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_6:;
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    }
    {
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    }

    return MOD_RETURN_VALUE( module_telegram$files$inputmedia );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
