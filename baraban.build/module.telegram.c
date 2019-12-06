/* Generated code for Python source for module 'telegram'
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

/* The _module_telegram is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_telegram;
PyDictObject *moduledict_telegram;

/* The module constants used, if any. */
static PyObject *const_str_plain_chataction;
extern PyObject *const_str_plain_InlineQueryResultCachedAudio;
static PyObject *const_tuple_str_plain_InlineQueryResultCachedGif_tuple;
static PyObject *const_tuple_str_plain_Location_tuple;
extern PyObject *const_str_plain_EncryptedCredentials;
extern PyObject *const_str_plain_Bot;
static PyObject *const_list_dc2e27d19c29f5d43f1c7be8d2ff7bc2_list;
static PyObject *const_str_digest_766ecd73cecaddee80b986a7b176ec89;
static PyObject *const_tuple_str_plain_ChatPhoto_tuple;
extern PyObject *const_str_plain_PassportElementErrorFrontSide;
extern PyObject *const_str_plain_Message;
static PyObject *const_str_digest_244a59b555a36b51cca705d41c045346;
static PyObject *const_str_digest_a83a8f701f7c700ed97d42fe29dbbe4e;
extern PyObject *const_tuple_str_plain_TelegramObject_tuple;
extern PyObject *const_str_plain_InlineQueryResultCachedSticker;
extern PyObject *const_str_plain_constants;
static PyObject *const_str_digest_00781474982ce0faae10e8d633184d4e;
static PyObject *const_str_plain_chatmember;
extern PyObject *const_str_plain_SuccessfulPayment;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_InlineQueryResultGif;
static PyObject *const_tuple_str_plain_File_tuple;
extern PyObject *const_str_plain_MAX_FILESIZE_UPLOAD;
extern PyObject *const_str_plain_InlineKeyboardMarkup;
extern PyObject *const_str_plain_MAX_FILESIZE_DOWNLOAD;
extern PyObject *const_str_plain_ForceReply;
extern PyObject *const_str_plain_InlineQueryResultMpeg4Gif;
static PyObject *const_str_plain_webhookinfo;
static PyObject *const_tuple_str_plain_InlineQueryResultCachedVoice_tuple;
static PyObject *const_tuple_str_plain_Video_tuple;
static PyObject *const_tuple_str_plain_MessageEntity_tuple;
static PyObject *const_list_str_digest_5d28cddc0d3cd4bcd017a0022f54fa40_list;
extern PyObject *const_str_plain_InlineQueryResultCachedDocument;
static PyObject *const_tuple_str_plain_InlineQueryResultCachedDocument_tuple;
extern PyObject *const_str_plain_SecureData;
static PyObject *const_str_digest_ab8014be4368c7f799d79495669fef92;
static PyObject *const_tuple_str_plain_Audio_tuple;
extern PyObject *const_str_plain_Location;
static PyObject *const_str_digest_bbf47d8b3033cf72b5b2e6ee4b5111bf;
extern PyObject *const_str_plain_InlineQueryResultPhoto;
extern PyObject *const_str_plain_MaskPosition;
static PyObject *const_tuple_b2dd450645c757acff7d3ab38927e2bb_tuple;
static PyObject *const_tuple_str_plain_InlineQueryResultMpeg4Gif_tuple;
static PyObject *const_str_digest_771c180dea58b809f1c374ac1ef37ae8;
static PyObject *const_str_digest_4c503415e573143c2fb508540c8c1512;
extern PyObject *const_tuple_str_plain_ReplyMarkup_tuple;
static PyObject *const_str_digest_c68cf7711901a77afb726768060c6974;
static PyObject *const_tuple_str_plain_Invoice_tuple;
extern PyObject *const_str_plain_Sticker;
extern PyObject *const_str_plain_InlineQueryResult;
static PyObject *const_tuple_str_plain_InlineQueryResultCachedSticker_tuple;
extern PyObject *const_str_plain_InlineQueryResultCachedMpeg4Gif;
extern PyObject *const_str_plain_WebhookInfo;
static PyObject *const_str_digest_a3926efd9143034d2e66741f6019fe66;
extern PyObject *const_str_plain_PassportElementErrorReverseSide;
static PyObject *const_tuple_str_plain_Document_tuple;
static PyObject *const_str_digest_cce83e84062d333f72962eed55216d9c;
static PyObject *const_str_digest_b5dc256da6af75302dde0a42ddb5e3c7;
extern PyObject *const_str_plain_TelegramObject;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_7cfaf5c44517849ce13a273a646bfc83;
extern PyObject *const_str_plain_EncryptedPassportElement;
extern PyObject *const_str_plain_Venue;
static PyObject *const_str_digest_7787b4cd933c978c27821a7cd4b9e730;
extern PyObject *const_str_plain_ShippingOption;
static PyObject *const_str_digest_421115a3df3174379d0748def3d6a326;
extern PyObject *const_str_plain_PhotoSize;
extern PyObject *const_str_plain_InlineQueryResultAudio;
static PyObject *const_tuple_str_plain_InlineQueryResultPhoto_tuple;
extern PyObject *const_str_plain_InputMediaAnimation;
static PyObject *const_tuple_str_plain_OrderInfo_tuple;
static PyObject *const_tuple_str_plain_ChosenInlineResult_tuple;
static PyObject *const_str_plain_keyboardbutton;
extern PyObject *const_str_plain_InlineQuery;
static PyObject *const_str_digest_83e1f8326a360b7c557d53881eb89e4c;
static PyObject *const_tuple_str_plain_InlineKeyboardMarkup_tuple;
extern PyObject *const_str_plain_InlineQueryResultVoice;
extern PyObject *const_str_plain_PassportElementErrorFile;
extern PyObject *const_str_plain_OrderInfo;
extern PyObject *const_str_plain_PassportFile;
extern PyObject *const_str_plain_FileCredentials;
extern PyObject *const_str_plain_PassportElementError;
extern PyObject *const_str_plain_User;
extern PyObject *const_str_plain_InlineQueryResultCachedGif;
static PyObject *const_str_digest_49dd58ccf4f9e86c063f3c4af9211293;
extern PyObject *const_str_plain_InputTextMessageContent;
extern PyObject *const_str_plain_PersonalDetails;
static PyObject *const_str_plain_choseninlineresult;
extern PyObject *const_str_plain_MAX_MESSAGES_PER_SECOND_PER_CHAT;
static PyObject *const_tuple_str_plain_Venue_tuple;
static PyObject *const_tuple_fd4220002d729151ec88c916db6eeba4_tuple;
extern PyObject *const_str_plain_InputFile;
extern PyObject *const_tuple_str_plain_ParseMode_tuple;
static PyObject *const_tuple_str_plain_ShippingAddress_tuple;
static PyObject *const_str_digest_98ae3b3c7702f9421a52dd714e598b90;
static PyObject *const_str_digest_7a114a53bf4962e6cc465e1237cdf6fd;
static PyObject *const_str_digest_4b3f24869682b31e76cdf1980932e66f;
static PyObject *const_str_digest_21483f64ca8dbfc1fff0e90d030c809d;
static PyObject *const_tuple_str_plain_InputFile_tuple;
extern PyObject *const_str_plain_InlineQueryResultCachedVoice;
extern PyObject *const_str_plain_InlineQueryResultContact;
extern PyObject *const_str_plain_InputMediaVideo;
static PyObject *const_str_digest_953d503dcf0354bda08508906ec00775;
extern PyObject *const_str_plain_message;
extern PyObject *const_tuple_str_plain_PhotoSize_tuple;
static PyObject *const_tuple_str_plain_Game_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_UserProfilePhotos;
static PyObject *const_tuple_3abf497319f85b07e1695a88c6b03d82_tuple;
extern PyObject *const_str_plain_Game;
static PyObject *const_str_digest_1914e384aa08c7fe42e30a62fe6d4508;
extern PyObject *const_str_plain_LabeledPrice;
static PyObject *const_str_digest_08989de715f9e397fc8799c5b2b0c926;
extern PyObject *const_str_plain_InputMedia;
extern PyObject *const_str_plain_telegram;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_InlineQueryResultLocation_tuple;
extern PyObject *const_tuple_str_plain___version___tuple;
static PyObject *const_tuple_str_plain_CallbackQuery_tuple;
static PyObject *const_tuple_str_plain_EncryptedPassportElement_tuple;
extern PyObject *const_tuple_str_plain_InlineQueryResult_tuple;
static PyObject *const_str_digest_0b934831cc4ea4511f84abf602476e3b;
static PyObject *const_str_digest_55b864472bebd6c8ca70d018ce97fd9f;
static PyObject *const_str_plain_userprofilephotos;
static PyObject *const_str_plain_replymarkup;
static PyObject *const_tuple_str_plain_VideoNote_tuple;
extern PyObject *const_str_plain_InputMediaPhoto;
extern PyObject *const_str_plain_SUPPORTED_WEBHOOK_PORTS;
extern PyObject *const_str_plain_TelegramDecryptionError;
static PyObject *const_tuple_str_plain_InputContactMessageContent_tuple;
extern PyObject *const_str_plain_PassportElementErrorSelfie;
static PyObject *const_tuple_str_plain_InlineQueryResultCachedPhoto_tuple;
static PyObject *const_tuple_str_plain_InlineQueryResultGif_tuple;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_92da8821d32ffc037fc645032b258a5a;
extern PyObject *const_tuple_str_plain_Message_tuple;
static PyObject *const_str_digest_ca78ee200cef31ae9254c0baef6962e6;
static PyObject *const_tuple_str_plain_InlineQueryResultCachedAudio_tuple;
static PyObject *const_str_digest_944255c38fad4360a8411dd79d95a32c;
extern PyObject *const_str_plain_InlineQueryResultLocation;
extern PyObject *const_str_plain_ResidentialAddress;
extern PyObject *const_str_plain_InputLocationMessageContent;
static PyObject *const_tuple_str_plain_InlineKeyboardButton_tuple;
static PyObject *const_str_digest_bea721f53032458f9eb40cfad6fd7e97;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_str_plain_InputLocationMessageContent_tuple;
extern PyObject *const_str_plain_IdDocumentData;
extern PyObject *const_str_plain_ChatMember;
extern PyObject *const_tuple_str_plain_Update_tuple;
extern PyObject *const_str_plain_InlineKeyboardButton;
extern PyObject *const_str_plain_ShippingQuery;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_11c7e35a4e0b3c654a3857698e26c3e2;
static PyObject *const_str_digest_7d2e767e35223be93e398854b962244c;
extern PyObject *const_str_plain_InlineQueryResultVenue;
static PyObject *const_tuple_str_plain_InlineQueryResultCachedVideo_tuple;
static PyObject *const_str_digest_fcddecbb76555375d0786d00c0d16119;
static PyObject *const_tuple_str_plain_KeyboardButton_tuple;
extern PyObject *const_str_plain_bot;
extern PyObject *const_str_plain_ReplyKeyboardRemove;
static PyObject *const_str_digest_62f470924d2bb02279205da735fd5971;
static PyObject *const_str_digest_7cae5bbc81e3bec1aed0cc94e58d3e05;
extern PyObject *const_str_plain_PassportElementErrorDataField;
static PyObject *const_str_digest_fb5633b371e5a1cfb7ab215410b62c42;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_PreCheckoutQuery;
static PyObject *const_tuple_str_plain_CallbackGame_tuple;
extern PyObject *const_str_plain_MAX_MESSAGES_PER_SECOND;
static PyObject *const_str_digest_65211bb73091a793a9208261c5994769;
static PyObject *const_tuple_str_plain_InlineQueryResultAudio_tuple;
static PyObject *const_tuple_str_plain_InlineQueryResultContact_tuple;
static PyObject *const_str_digest_6a9a3c67a6d46ca571c09e9b28ba3be7;
extern PyObject *const_str_plain_VideoNote;
extern PyObject *const_tuple_str_plain_TelegramError_tuple;
static PyObject *const_str_digest_09fdc64a5db67403aae92c7d41ce6073;
static PyObject *const_tuple_str_plain_InlineQueryResultGame_tuple;
extern PyObject *const_str_plain_InputMediaDocument;
extern PyObject *const_str_plain_CallbackGame;
static PyObject *const_tuple_str_plain_ShippingOption_tuple;
extern PyObject *const_str_plain_GameHighScore;
static PyObject *const_tuple_str_plain_Contact_tuple;
static PyObject *const_str_digest_90b3d407075ede821a5f78d001b93556;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_InlineQueryResultArticle;
static PyObject *const_tuple_str_plain_Animation_tuple;
static PyObject *const_str_digest_ee9e90cc69ad7dce4a951007db3aa832;
extern PyObject *const_str_plain_InputMessageContent;
extern PyObject *const_str_plain_Contact;
static PyObject *const_tuple_str_plain_InlineQueryResultCachedMpeg4Gif_tuple;
static PyObject *const_str_digest_153f54acdc3d23f7a895ad2a69439fca;
extern PyObject *const_str_plain_DataCredentials;
static PyObject *const_tuple_str_plain_Bot_tuple;
extern PyObject *const_str_plain_Animation;
static PyObject *const_str_digest_dac17a41ab773ca0c42ee751631a147f;
extern PyObject *const_str_plain_Document;
static PyObject *const_tuple_str_plain_LabeledPrice_tuple;
static PyObject *const_str_digest_86cc1cfa817db8e0e66d4f255ea2442b;
static PyObject *const_str_digest_afebae1cac574a66da5d412cc0a8898a;
static PyObject *const_str_digest_173c59a4a860ae21bebb781bb58f4315;
static PyObject *const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple;
extern PyObject *const_str_plain_ChatPhoto;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_str_plain_InlineQueryResultDocument_tuple;
static PyObject *const_tuple_str_plain_Voice_tuple;
extern PyObject *const_str_plain_TelegramError;
static PyObject *const_tuple_str_plain_PreCheckoutQuery_tuple;
static PyObject *const_str_digest_dd36907b609690964959a0153016eabd;
static PyObject *const_tuple_str_plain_UserProfilePhotos_tuple;
static PyObject *const_tuple_str_plain_InputTextMessageContent_tuple;
static PyObject *const_tuple_str_plain_InlineQuery_tuple;
extern PyObject *const_str_plain_MAX_MESSAGE_LENGTH;
extern PyObject *const_str_plain_MAX_MESSAGES_PER_MINUTE_PER_GROUP;
extern PyObject *const_str_plain_PassportElementErrorUnspecified;
static PyObject *const_str_plain_replykeyboardmarkup;
static PyObject *const_tuple_str_plain_InlineQueryResultVenue_tuple;
static PyObject *const_str_digest_05e6b6f769b3594f395d936e39185fcb;
static PyObject *const_str_digest_5d28cddc0d3cd4bcd017a0022f54fa40;
extern PyObject *const_str_plain_StickerSet;
extern PyObject *const_str_plain_InputVenueMessageContent;
static PyObject *const_str_digest_0592e4498b737b167696e90c54072e47;
extern PyObject *const_str_plain_user;
static PyObject *const_str_digest_bc5a816922a7b6247fcbf6f4f1623eb1;
static PyObject *const_str_plain_forcereply;
extern PyObject *const_str_plain_InlineQueryResultGame;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_Voice;
static PyObject *const_tuple_str_plain_ChatAction_tuple;
extern PyObject *const_str_plain_InlineQueryResultDocument;
static PyObject *const_str_digest_cae3fa30e04ff15fbd28df55d2fdad85;
extern PyObject *const_str_plain_chat;
extern PyObject *const_str_plain_InlineQueryResultCachedPhoto;
static PyObject *const_str_digest_b69f53439dcfda3cd79140662c0445ed;
static PyObject *const_str_plain_replykeyboardremove;
extern PyObject *const_str_plain_ReplyMarkup;
extern PyObject *const_str_plain_InputContactMessageContent;
extern PyObject *const_str_plain_CallbackQuery;
static PyObject *const_str_digest_eb541965097650f8b9a58b6959d5ab7e;
extern PyObject *const_tuple_str_plain_InputMessageContent_tuple;
static PyObject *const_tuple_dbaeb5db63ba9e87e2369ce6957d5585_tuple;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_ChosenInlineResult;
static PyObject *const_str_digest_ec92b191f1ab247459df43bfd3671fe1;
static PyObject *const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple;
static PyObject *const_str_plain_messageentity;
extern PyObject *const_str_plain_Credentials;
static PyObject *const_tuple_str_plain_SuccessfulPayment_tuple;
static PyObject *const_str_digest_6f9c362946a4d000c52d73d1cb4e6f58;
extern PyObject *const_str_plain_KeyboardButton;
static PyObject *const_tuple_str_plain_ForceReply_tuple;
static PyObject *const_str_digest_d543110be38b88967a6dd82f3efd5bcf;
extern PyObject *const_str_plain_MAX_CAPTION_LENGTH;
static PyObject *const_tuple_str_plain_WebhookInfo_tuple;
extern PyObject *const_str_plain_File;
extern PyObject *const_str_plain_Invoice;
static PyObject *const_tuple_str_plain_GameHighScore_tuple;
extern PyObject *const_str_plain_InputMediaAudio;
static PyObject *const_tuple_str_plain_PassportData_tuple;
extern PyObject *const_str_plain_Chat;
extern PyObject *const_str_plain_ChatAction;
extern PyObject *const_str_plain_PassportElementErrorTranslationFiles;
static PyObject *const_tuple_str_plain_EncryptedCredentials_tuple;
extern PyObject *const_str_plain_InlineQueryResultVideo;
extern PyObject *const_str_plain_PassportElementErrorTranslationFile;
extern PyObject *const_str_plain_Audio;
static PyObject *const_tuple_str_plain_ChatMember_tuple;
static PyObject *const_str_digest_535f260351bc2980c7ffe34433191937;
extern PyObject *const_str_plain_Video;
extern PyObject *const_str_plain_InlineQueryResultCachedVideo;
extern PyObject *const_str_plain_MessageEntity;
static PyObject *const_str_digest_80b7a886a12dca0d5d40af0aa46cbb40;
static PyObject *const_tuple_str_plain_InputVenueMessageContent_tuple;
extern PyObject *const_str_plain_ReplyKeyboardMarkup;
static PyObject *const_tuple_str_plain_PassportFile_tuple;
static PyObject *const_str_digest_3a3162af2827bb2c9cc02788f66af547;
static PyObject *const_tuple_str_plain_InlineQueryResultVoice_tuple;
static PyObject *const_tuple_str_plain_Chat_tuple;
extern PyObject *const_str_plain_PassportData;
static PyObject *const_tuple_str_plain_User_tuple;
extern PyObject *const_str_plain_Update;
extern PyObject *const_str_plain_ShippingAddress;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_4134ee51be7f339f788b6c9e160b6daf;
static PyObject *const_tuple_str_plain_InlineQueryResultVideo_tuple;
static PyObject *const_str_digest_fee821f0dd084b6e02eca6454a75cbcf;
static PyObject *const_tuple_str_plain_ReplyKeyboardRemove_tuple;
static PyObject *const_tuple_str_plain_ShippingQuery_tuple;
extern PyObject *const_str_plain_PassportElementErrorFiles;
static PyObject *const_str_digest_59f0ab3d0d3bf365176d8d7c7692b2c9;
extern PyObject *const_str_plain_ParseMode;
static PyObject *const_str_digest_c6985ee3fca9ff105002baf5d8c1c3e1;
static PyObject *const_str_plain_parsemode;
static PyObject *const_str_digest_6edd8ec54b78fe64b55d129e7d23c0e1;
static PyObject *const_str_plain_callbackquery;
static PyObject *const_tuple_str_plain_ReplyKeyboardMarkup_tuple;
static PyObject *const_tuple_str_plain_InlineQueryResultArticle_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_chataction = UNSTREAM_STRING( &constant_bin[ 1129772 ], 10, 1 );
    const_tuple_str_plain_InlineQueryResultCachedGif_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultCachedGif_tuple, 0, const_str_plain_InlineQueryResultCachedGif ); Py_INCREF( const_str_plain_InlineQueryResultCachedGif );
    const_tuple_str_plain_Location_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Location_tuple, 0, const_str_plain_Location ); Py_INCREF( const_str_plain_Location );
    const_list_dc2e27d19c29f5d43f1c7be8d2ff7bc2_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1129782 ], 2214 );
    const_str_digest_766ecd73cecaddee80b986a7b176ec89 = UNSTREAM_STRING( &constant_bin[ 1131996 ], 13, 0 );
    const_tuple_str_plain_ChatPhoto_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ChatPhoto_tuple, 0, const_str_plain_ChatPhoto ); Py_INCREF( const_str_plain_ChatPhoto );
    const_str_digest_244a59b555a36b51cca705d41c045346 = UNSTREAM_STRING( &constant_bin[ 1132009 ], 37, 0 );
    const_str_digest_a83a8f701f7c700ed97d42fe29dbbe4e = UNSTREAM_STRING( &constant_bin[ 1132046 ], 31, 0 );
    const_str_digest_00781474982ce0faae10e8d633184d4e = UNSTREAM_STRING( &constant_bin[ 1132077 ], 27, 0 );
    const_str_plain_chatmember = UNSTREAM_STRING( &constant_bin[ 1132104 ], 10, 1 );
    const_tuple_str_plain_File_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_File_tuple, 0, const_str_plain_File ); Py_INCREF( const_str_plain_File );
    const_str_plain_webhookinfo = UNSTREAM_STRING( &constant_bin[ 1132114 ], 11, 1 );
    const_tuple_str_plain_InlineQueryResultCachedVoice_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultCachedVoice_tuple, 0, const_str_plain_InlineQueryResultCachedVoice ); Py_INCREF( const_str_plain_InlineQueryResultCachedVoice );
    const_tuple_str_plain_Video_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Video_tuple, 0, const_str_plain_Video ); Py_INCREF( const_str_plain_Video );
    const_tuple_str_plain_MessageEntity_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MessageEntity_tuple, 0, const_str_plain_MessageEntity ); Py_INCREF( const_str_plain_MessageEntity );
    const_list_str_digest_5d28cddc0d3cd4bcd017a0022f54fa40_list = PyList_New( 1 );
    const_str_digest_5d28cddc0d3cd4bcd017a0022f54fa40 = UNSTREAM_STRING( &constant_bin[ 1132125 ], 41, 0 );
    PyList_SET_ITEM( const_list_str_digest_5d28cddc0d3cd4bcd017a0022f54fa40_list, 0, const_str_digest_5d28cddc0d3cd4bcd017a0022f54fa40 ); Py_INCREF( const_str_digest_5d28cddc0d3cd4bcd017a0022f54fa40 );
    const_tuple_str_plain_InlineQueryResultCachedDocument_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultCachedDocument_tuple, 0, const_str_plain_InlineQueryResultCachedDocument ); Py_INCREF( const_str_plain_InlineQueryResultCachedDocument );
    const_str_digest_ab8014be4368c7f799d79495669fef92 = UNSTREAM_STRING( &constant_bin[ 1132166 ], 29, 0 );
    const_tuple_str_plain_Audio_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Audio_tuple, 0, const_str_plain_Audio ); Py_INCREF( const_str_plain_Audio );
    const_str_digest_bbf47d8b3033cf72b5b2e6ee4b5111bf = UNSTREAM_STRING( &constant_bin[ 1132195 ], 29, 0 );
    const_tuple_b2dd450645c757acff7d3ab38927e2bb_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b2dd450645c757acff7d3ab38927e2bb_tuple, 0, const_str_plain_InputMedia ); Py_INCREF( const_str_plain_InputMedia );
    PyTuple_SET_ITEM( const_tuple_b2dd450645c757acff7d3ab38927e2bb_tuple, 1, const_str_plain_InputMediaVideo ); Py_INCREF( const_str_plain_InputMediaVideo );
    PyTuple_SET_ITEM( const_tuple_b2dd450645c757acff7d3ab38927e2bb_tuple, 2, const_str_plain_InputMediaPhoto ); Py_INCREF( const_str_plain_InputMediaPhoto );
    PyTuple_SET_ITEM( const_tuple_b2dd450645c757acff7d3ab38927e2bb_tuple, 3, const_str_plain_InputMediaAnimation ); Py_INCREF( const_str_plain_InputMediaAnimation );
    PyTuple_SET_ITEM( const_tuple_b2dd450645c757acff7d3ab38927e2bb_tuple, 4, const_str_plain_InputMediaAudio ); Py_INCREF( const_str_plain_InputMediaAudio );
    PyTuple_SET_ITEM( const_tuple_b2dd450645c757acff7d3ab38927e2bb_tuple, 5, const_str_plain_InputMediaDocument ); Py_INCREF( const_str_plain_InputMediaDocument );
    const_tuple_str_plain_InlineQueryResultMpeg4Gif_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultMpeg4Gif_tuple, 0, const_str_plain_InlineQueryResultMpeg4Gif ); Py_INCREF( const_str_plain_InlineQueryResultMpeg4Gif );
    const_str_digest_771c180dea58b809f1c374ac1ef37ae8 = UNSTREAM_STRING( &constant_bin[ 1132224 ], 11, 0 );
    const_str_digest_4c503415e573143c2fb508540c8c1512 = UNSTREAM_STRING( &constant_bin[ 1132235 ], 32, 0 );
    const_str_digest_c68cf7711901a77afb726768060c6974 = UNSTREAM_STRING( &constant_bin[ 1132267 ], 15, 0 );
    const_tuple_str_plain_Invoice_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Invoice_tuple, 0, const_str_plain_Invoice ); Py_INCREF( const_str_plain_Invoice );
    const_tuple_str_plain_InlineQueryResultCachedSticker_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultCachedSticker_tuple, 0, const_str_plain_InlineQueryResultCachedSticker ); Py_INCREF( const_str_plain_InlineQueryResultCachedSticker );
    const_str_digest_a3926efd9143034d2e66741f6019fe66 = UNSTREAM_STRING( &constant_bin[ 1132282 ], 10, 0 );
    const_tuple_str_plain_Document_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Document_tuple, 0, const_str_plain_Document ); Py_INCREF( const_str_plain_Document );
    const_str_digest_cce83e84062d333f72962eed55216d9c = UNSTREAM_STRING( &constant_bin[ 1132292 ], 21, 0 );
    const_str_digest_b5dc256da6af75302dde0a42ddb5e3c7 = UNSTREAM_STRING( &constant_bin[ 1132009 ], 24, 0 );
    const_str_digest_7cfaf5c44517849ce13a273a646bfc83 = UNSTREAM_STRING( &constant_bin[ 1132313 ], 22, 0 );
    const_str_digest_7787b4cd933c978c27821a7cd4b9e730 = UNSTREAM_STRING( &constant_bin[ 1132335 ], 28, 0 );
    const_str_digest_421115a3df3174379d0748def3d6a326 = UNSTREAM_STRING( &constant_bin[ 1132363 ], 31, 0 );
    const_tuple_str_plain_InlineQueryResultPhoto_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultPhoto_tuple, 0, const_str_plain_InlineQueryResultPhoto ); Py_INCREF( const_str_plain_InlineQueryResultPhoto );
    const_tuple_str_plain_OrderInfo_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_OrderInfo_tuple, 0, const_str_plain_OrderInfo ); Py_INCREF( const_str_plain_OrderInfo );
    const_tuple_str_plain_ChosenInlineResult_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ChosenInlineResult_tuple, 0, const_str_plain_ChosenInlineResult ); Py_INCREF( const_str_plain_ChosenInlineResult );
    const_str_plain_keyboardbutton = UNSTREAM_STRING( &constant_bin[ 1132090 ], 14, 1 );
    const_str_digest_83e1f8326a360b7c557d53881eb89e4c = UNSTREAM_STRING( &constant_bin[ 1132394 ], 10, 0 );
    const_tuple_str_plain_InlineKeyboardMarkup_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineKeyboardMarkup_tuple, 0, const_str_plain_InlineKeyboardMarkup ); Py_INCREF( const_str_plain_InlineKeyboardMarkup );
    const_str_digest_49dd58ccf4f9e86c063f3c4af9211293 = UNSTREAM_STRING( &constant_bin[ 1132404 ], 35, 0 );
    const_str_plain_choseninlineresult = UNSTREAM_STRING( &constant_bin[ 1132439 ], 18, 1 );
    const_tuple_str_plain_Venue_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Venue_tuple, 0, const_str_plain_Venue ); Py_INCREF( const_str_plain_Venue );
    const_tuple_fd4220002d729151ec88c916db6eeba4_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_fd4220002d729151ec88c916db6eeba4_tuple, 0, const_str_plain_Sticker ); Py_INCREF( const_str_plain_Sticker );
    PyTuple_SET_ITEM( const_tuple_fd4220002d729151ec88c916db6eeba4_tuple, 1, const_str_plain_StickerSet ); Py_INCREF( const_str_plain_StickerSet );
    PyTuple_SET_ITEM( const_tuple_fd4220002d729151ec88c916db6eeba4_tuple, 2, const_str_plain_MaskPosition ); Py_INCREF( const_str_plain_MaskPosition );
    const_tuple_str_plain_ShippingAddress_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ShippingAddress_tuple, 0, const_str_plain_ShippingAddress ); Py_INCREF( const_str_plain_ShippingAddress );
    const_str_digest_98ae3b3c7702f9421a52dd714e598b90 = UNSTREAM_STRING( &constant_bin[ 1132457 ], 31, 0 );
    const_str_digest_7a114a53bf4962e6cc465e1237cdf6fd = UNSTREAM_STRING( &constant_bin[ 1132488 ], 38, 0 );
    const_str_digest_4b3f24869682b31e76cdf1980932e66f = UNSTREAM_STRING( &constant_bin[ 1132526 ], 33, 0 );
    const_str_digest_21483f64ca8dbfc1fff0e90d030c809d = UNSTREAM_STRING( &constant_bin[ 1132559 ], 13, 0 );
    const_tuple_str_plain_InputFile_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InputFile_tuple, 0, const_str_plain_InputFile ); Py_INCREF( const_str_plain_InputFile );
    const_str_digest_953d503dcf0354bda08508906ec00775 = UNSTREAM_STRING( &constant_bin[ 1132572 ], 21, 0 );
    const_tuple_str_plain_Game_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Game_tuple, 0, const_str_plain_Game ); Py_INCREF( const_str_plain_Game );
    const_tuple_3abf497319f85b07e1695a88c6b03d82_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_3abf497319f85b07e1695a88c6b03d82_tuple, 0, const_str_plain_IdDocumentData ); Py_INCREF( const_str_plain_IdDocumentData );
    PyTuple_SET_ITEM( const_tuple_3abf497319f85b07e1695a88c6b03d82_tuple, 1, const_str_plain_PersonalDetails ); Py_INCREF( const_str_plain_PersonalDetails );
    PyTuple_SET_ITEM( const_tuple_3abf497319f85b07e1695a88c6b03d82_tuple, 2, const_str_plain_ResidentialAddress ); Py_INCREF( const_str_plain_ResidentialAddress );
    const_str_digest_1914e384aa08c7fe42e30a62fe6d4508 = UNSTREAM_STRING( &constant_bin[ 1132593 ], 23, 0 );
    const_str_digest_08989de715f9e397fc8799c5b2b0c926 = UNSTREAM_STRING( &constant_bin[ 1132616 ], 19, 0 );
    const_tuple_str_plain_InlineQueryResultLocation_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultLocation_tuple, 0, const_str_plain_InlineQueryResultLocation ); Py_INCREF( const_str_plain_InlineQueryResultLocation );
    const_tuple_str_plain_CallbackQuery_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CallbackQuery_tuple, 0, const_str_plain_CallbackQuery ); Py_INCREF( const_str_plain_CallbackQuery );
    const_tuple_str_plain_EncryptedPassportElement_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_EncryptedPassportElement_tuple, 0, const_str_plain_EncryptedPassportElement ); Py_INCREF( const_str_plain_EncryptedPassportElement );
    const_str_digest_0b934831cc4ea4511f84abf602476e3b = UNSTREAM_STRING( &constant_bin[ 1132635 ], 13, 0 );
    const_str_digest_55b864472bebd6c8ca70d018ce97fd9f = UNSTREAM_STRING( &constant_bin[ 1132648 ], 27, 0 );
    const_str_plain_userprofilephotos = UNSTREAM_STRING( &constant_bin[ 1132675 ], 17, 1 );
    const_str_plain_replymarkup = UNSTREAM_STRING( &constant_bin[ 1132692 ], 11, 1 );
    const_tuple_str_plain_VideoNote_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_VideoNote_tuple, 0, const_str_plain_VideoNote ); Py_INCREF( const_str_plain_VideoNote );
    const_tuple_str_plain_InputContactMessageContent_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InputContactMessageContent_tuple, 0, const_str_plain_InputContactMessageContent ); Py_INCREF( const_str_plain_InputContactMessageContent );
    const_tuple_str_plain_InlineQueryResultCachedPhoto_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultCachedPhoto_tuple, 0, const_str_plain_InlineQueryResultCachedPhoto ); Py_INCREF( const_str_plain_InlineQueryResultCachedPhoto );
    const_tuple_str_plain_InlineQueryResultGif_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultGif_tuple, 0, const_str_plain_InlineQueryResultGif ); Py_INCREF( const_str_plain_InlineQueryResultGif );
    const_str_digest_92da8821d32ffc037fc645032b258a5a = UNSTREAM_STRING( &constant_bin[ 1132703 ], 17, 0 );
    const_str_digest_ca78ee200cef31ae9254c0baef6962e6 = UNSTREAM_STRING( &constant_bin[ 1132720 ], 34, 0 );
    const_tuple_str_plain_InlineQueryResultCachedAudio_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultCachedAudio_tuple, 0, const_str_plain_InlineQueryResultCachedAudio ); Py_INCREF( const_str_plain_InlineQueryResultCachedAudio );
    const_str_digest_944255c38fad4360a8411dd79d95a32c = UNSTREAM_STRING( &constant_bin[ 1132754 ], 26, 0 );
    const_tuple_str_plain_InlineKeyboardButton_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineKeyboardButton_tuple, 0, const_str_plain_InlineKeyboardButton ); Py_INCREF( const_str_plain_InlineKeyboardButton );
    const_str_digest_bea721f53032458f9eb40cfad6fd7e97 = UNSTREAM_STRING( &constant_bin[ 1132780 ], 32, 0 );
    const_tuple_str_plain_InputLocationMessageContent_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InputLocationMessageContent_tuple, 0, const_str_plain_InputLocationMessageContent ); Py_INCREF( const_str_plain_InputLocationMessageContent );
    const_str_digest_11c7e35a4e0b3c654a3857698e26c3e2 = UNSTREAM_STRING( &constant_bin[ 1132812 ], 33, 0 );
    const_str_digest_7d2e767e35223be93e398854b962244c = UNSTREAM_STRING( &constant_bin[ 1132845 ], 20, 0 );
    const_tuple_str_plain_InlineQueryResultCachedVideo_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultCachedVideo_tuple, 0, const_str_plain_InlineQueryResultCachedVideo ); Py_INCREF( const_str_plain_InlineQueryResultCachedVideo );
    const_str_digest_fcddecbb76555375d0786d00c0d16119 = UNSTREAM_STRING( &constant_bin[ 1132865 ], 11, 0 );
    const_tuple_str_plain_KeyboardButton_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_KeyboardButton_tuple, 0, const_str_plain_KeyboardButton ); Py_INCREF( const_str_plain_KeyboardButton );
    const_str_digest_62f470924d2bb02279205da735fd5971 = UNSTREAM_STRING( &constant_bin[ 1132876 ], 27, 0 );
    const_str_digest_7cae5bbc81e3bec1aed0cc94e58d3e05 = UNSTREAM_STRING( &constant_bin[ 1132903 ], 17, 0 );
    const_str_digest_fb5633b371e5a1cfb7ab215410b62c42 = UNSTREAM_STRING( &constant_bin[ 1132920 ], 15, 0 );
    const_tuple_str_plain_CallbackGame_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CallbackGame_tuple, 0, const_str_plain_CallbackGame ); Py_INCREF( const_str_plain_CallbackGame );
    const_str_digest_65211bb73091a793a9208261c5994769 = UNSTREAM_STRING( &constant_bin[ 1132935 ], 25, 0 );
    const_tuple_str_plain_InlineQueryResultAudio_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultAudio_tuple, 0, const_str_plain_InlineQueryResultAudio ); Py_INCREF( const_str_plain_InlineQueryResultAudio );
    const_tuple_str_plain_InlineQueryResultContact_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultContact_tuple, 0, const_str_plain_InlineQueryResultContact ); Py_INCREF( const_str_plain_InlineQueryResultContact );
    const_str_digest_6a9a3c67a6d46ca571c09e9b28ba3be7 = UNSTREAM_STRING( &constant_bin[ 1132960 ], 14, 0 );
    const_str_digest_09fdc64a5db67403aae92c7d41ce6073 = UNSTREAM_STRING( &constant_bin[ 1132974 ], 32, 0 );
    const_tuple_str_plain_InlineQueryResultGame_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultGame_tuple, 0, const_str_plain_InlineQueryResultGame ); Py_INCREF( const_str_plain_InlineQueryResultGame );
    const_tuple_str_plain_ShippingOption_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ShippingOption_tuple, 0, const_str_plain_ShippingOption ); Py_INCREF( const_str_plain_ShippingOption );
    const_tuple_str_plain_Contact_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Contact_tuple, 0, const_str_plain_Contact ); Py_INCREF( const_str_plain_Contact );
    const_str_digest_90b3d407075ede821a5f78d001b93556 = UNSTREAM_STRING( &constant_bin[ 1133006 ], 16, 0 );
    const_tuple_str_plain_Animation_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Animation_tuple, 0, const_str_plain_Animation ); Py_INCREF( const_str_plain_Animation );
    const_str_digest_ee9e90cc69ad7dce4a951007db3aa832 = UNSTREAM_STRING( &constant_bin[ 1133022 ], 35, 0 );
    const_tuple_str_plain_InlineQueryResultCachedMpeg4Gif_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultCachedMpeg4Gif_tuple, 0, const_str_plain_InlineQueryResultCachedMpeg4Gif ); Py_INCREF( const_str_plain_InlineQueryResultCachedMpeg4Gif );
    const_str_digest_153f54acdc3d23f7a895ad2a69439fca = UNSTREAM_STRING( &constant_bin[ 1133057 ], 14, 0 );
    const_tuple_str_plain_Bot_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Bot_tuple, 0, const_str_plain_Bot ); Py_INCREF( const_str_plain_Bot );
    const_str_digest_dac17a41ab773ca0c42ee751631a147f = UNSTREAM_STRING( &constant_bin[ 1133071 ], 30, 0 );
    const_tuple_str_plain_LabeledPrice_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LabeledPrice_tuple, 0, const_str_plain_LabeledPrice ); Py_INCREF( const_str_plain_LabeledPrice );
    const_str_digest_86cc1cfa817db8e0e66d4f255ea2442b = UNSTREAM_STRING( &constant_bin[ 1133101 ], 24, 0 );
    const_str_digest_afebae1cac574a66da5d412cc0a8898a = UNSTREAM_STRING( &constant_bin[ 1133125 ], 18, 0 );
    const_str_digest_173c59a4a860ae21bebb781bb58f4315 = UNSTREAM_STRING( &constant_bin[ 1133143 ], 11, 0 );
    const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple, 0, const_str_plain_MAX_MESSAGE_LENGTH ); Py_INCREF( const_str_plain_MAX_MESSAGE_LENGTH );
    PyTuple_SET_ITEM( const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple, 1, const_str_plain_MAX_CAPTION_LENGTH ); Py_INCREF( const_str_plain_MAX_CAPTION_LENGTH );
    PyTuple_SET_ITEM( const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple, 2, const_str_plain_SUPPORTED_WEBHOOK_PORTS ); Py_INCREF( const_str_plain_SUPPORTED_WEBHOOK_PORTS );
    PyTuple_SET_ITEM( const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple, 3, const_str_plain_MAX_FILESIZE_DOWNLOAD ); Py_INCREF( const_str_plain_MAX_FILESIZE_DOWNLOAD );
    PyTuple_SET_ITEM( const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple, 4, const_str_plain_MAX_FILESIZE_UPLOAD ); Py_INCREF( const_str_plain_MAX_FILESIZE_UPLOAD );
    PyTuple_SET_ITEM( const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple, 5, const_str_plain_MAX_MESSAGES_PER_SECOND_PER_CHAT ); Py_INCREF( const_str_plain_MAX_MESSAGES_PER_SECOND_PER_CHAT );
    PyTuple_SET_ITEM( const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple, 6, const_str_plain_MAX_MESSAGES_PER_SECOND ); Py_INCREF( const_str_plain_MAX_MESSAGES_PER_SECOND );
    PyTuple_SET_ITEM( const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple, 7, const_str_plain_MAX_MESSAGES_PER_MINUTE_PER_GROUP ); Py_INCREF( const_str_plain_MAX_MESSAGES_PER_MINUTE_PER_GROUP );
    const_tuple_str_plain_InlineQueryResultDocument_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultDocument_tuple, 0, const_str_plain_InlineQueryResultDocument ); Py_INCREF( const_str_plain_InlineQueryResultDocument );
    const_tuple_str_plain_Voice_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Voice_tuple, 0, const_str_plain_Voice ); Py_INCREF( const_str_plain_Voice );
    const_tuple_str_plain_PreCheckoutQuery_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PreCheckoutQuery_tuple, 0, const_str_plain_PreCheckoutQuery ); Py_INCREF( const_str_plain_PreCheckoutQuery );
    const_str_digest_dd36907b609690964959a0153016eabd = UNSTREAM_STRING( &constant_bin[ 1132009 ], 18, 0 );
    const_tuple_str_plain_UserProfilePhotos_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UserProfilePhotos_tuple, 0, const_str_plain_UserProfilePhotos ); Py_INCREF( const_str_plain_UserProfilePhotos );
    const_tuple_str_plain_InputTextMessageContent_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InputTextMessageContent_tuple, 0, const_str_plain_InputTextMessageContent ); Py_INCREF( const_str_plain_InputTextMessageContent );
    const_tuple_str_plain_InlineQuery_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQuery_tuple, 0, const_str_plain_InlineQuery ); Py_INCREF( const_str_plain_InlineQuery );
    const_str_plain_replykeyboardmarkup = UNSTREAM_STRING( &constant_bin[ 1133154 ], 19, 1 );
    const_tuple_str_plain_InlineQueryResultVenue_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultVenue_tuple, 0, const_str_plain_InlineQueryResultVenue ); Py_INCREF( const_str_plain_InlineQueryResultVenue );
    const_str_digest_05e6b6f769b3594f395d936e39185fcb = UNSTREAM_STRING( &constant_bin[ 1133173 ], 15, 0 );
    const_str_digest_0592e4498b737b167696e90c54072e47 = UNSTREAM_STRING( &constant_bin[ 1133188 ], 35, 0 );
    const_str_digest_bc5a816922a7b6247fcbf6f4f1623eb1 = UNSTREAM_STRING( &constant_bin[ 1133223 ], 33, 0 );
    const_str_plain_forcereply = UNSTREAM_STRING( &constant_bin[ 1133256 ], 10, 1 );
    const_tuple_str_plain_ChatAction_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ChatAction_tuple, 0, const_str_plain_ChatAction ); Py_INCREF( const_str_plain_ChatAction );
    const_str_digest_cae3fa30e04ff15fbd28df55d2fdad85 = UNSTREAM_STRING( &constant_bin[ 1133266 ], 11, 0 );
    const_str_digest_b69f53439dcfda3cd79140662c0445ed = UNSTREAM_STRING( &constant_bin[ 1133277 ], 20, 0 );
    const_str_plain_replykeyboardremove = UNSTREAM_STRING( &constant_bin[ 1133297 ], 19, 1 );
    const_str_digest_eb541965097650f8b9a58b6959d5ab7e = UNSTREAM_STRING( &constant_bin[ 1133316 ], 30, 0 );
    const_tuple_dbaeb5db63ba9e87e2369ce6957d5585_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_dbaeb5db63ba9e87e2369ce6957d5585_tuple, 0, const_str_plain_Credentials ); Py_INCREF( const_str_plain_Credentials );
    PyTuple_SET_ITEM( const_tuple_dbaeb5db63ba9e87e2369ce6957d5585_tuple, 1, const_str_plain_DataCredentials ); Py_INCREF( const_str_plain_DataCredentials );
    PyTuple_SET_ITEM( const_tuple_dbaeb5db63ba9e87e2369ce6957d5585_tuple, 2, const_str_plain_SecureData ); Py_INCREF( const_str_plain_SecureData );
    PyTuple_SET_ITEM( const_tuple_dbaeb5db63ba9e87e2369ce6957d5585_tuple, 3, const_str_plain_FileCredentials ); Py_INCREF( const_str_plain_FileCredentials );
    PyTuple_SET_ITEM( const_tuple_dbaeb5db63ba9e87e2369ce6957d5585_tuple, 4, const_str_plain_TelegramDecryptionError ); Py_INCREF( const_str_plain_TelegramDecryptionError );
    const_str_digest_ec92b191f1ab247459df43bfd3671fe1 = UNSTREAM_STRING( &constant_bin[ 1133346 ], 35, 0 );
    const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple, 0, const_str_plain_PassportElementError ); Py_INCREF( const_str_plain_PassportElementError );
    PyTuple_SET_ITEM( const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple, 1, const_str_plain_PassportElementErrorDataField ); Py_INCREF( const_str_plain_PassportElementErrorDataField );
    PyTuple_SET_ITEM( const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple, 2, const_str_plain_PassportElementErrorFile ); Py_INCREF( const_str_plain_PassportElementErrorFile );
    PyTuple_SET_ITEM( const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple, 3, const_str_plain_PassportElementErrorFiles ); Py_INCREF( const_str_plain_PassportElementErrorFiles );
    PyTuple_SET_ITEM( const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple, 4, const_str_plain_PassportElementErrorFrontSide ); Py_INCREF( const_str_plain_PassportElementErrorFrontSide );
    PyTuple_SET_ITEM( const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple, 5, const_str_plain_PassportElementErrorReverseSide ); Py_INCREF( const_str_plain_PassportElementErrorReverseSide );
    PyTuple_SET_ITEM( const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple, 6, const_str_plain_PassportElementErrorSelfie ); Py_INCREF( const_str_plain_PassportElementErrorSelfie );
    PyTuple_SET_ITEM( const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple, 7, const_str_plain_PassportElementErrorTranslationFile ); Py_INCREF( const_str_plain_PassportElementErrorTranslationFile );
    PyTuple_SET_ITEM( const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple, 8, const_str_plain_PassportElementErrorTranslationFiles ); Py_INCREF( const_str_plain_PassportElementErrorTranslationFiles );
    PyTuple_SET_ITEM( const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple, 9, const_str_plain_PassportElementErrorUnspecified ); Py_INCREF( const_str_plain_PassportElementErrorUnspecified );
    const_str_plain_messageentity = UNSTREAM_STRING( &constant_bin[ 1133381 ], 13, 1 );
    const_tuple_str_plain_SuccessfulPayment_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SuccessfulPayment_tuple, 0, const_str_plain_SuccessfulPayment ); Py_INCREF( const_str_plain_SuccessfulPayment );
    const_str_digest_6f9c362946a4d000c52d73d1cb4e6f58 = UNSTREAM_STRING( &constant_bin[ 1133394 ], 29, 0 );
    const_tuple_str_plain_ForceReply_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ForceReply_tuple, 0, const_str_plain_ForceReply ); Py_INCREF( const_str_plain_ForceReply );
    const_str_digest_d543110be38b88967a6dd82f3efd5bcf = UNSTREAM_STRING( &constant_bin[ 1133423 ], 38, 0 );
    const_tuple_str_plain_WebhookInfo_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_WebhookInfo_tuple, 0, const_str_plain_WebhookInfo ); Py_INCREF( const_str_plain_WebhookInfo );
    const_tuple_str_plain_GameHighScore_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_GameHighScore_tuple, 0, const_str_plain_GameHighScore ); Py_INCREF( const_str_plain_GameHighScore );
    const_tuple_str_plain_PassportData_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PassportData_tuple, 0, const_str_plain_PassportData ); Py_INCREF( const_str_plain_PassportData );
    const_tuple_str_plain_EncryptedCredentials_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_EncryptedCredentials_tuple, 0, const_str_plain_EncryptedCredentials ); Py_INCREF( const_str_plain_EncryptedCredentials );
    const_tuple_str_plain_ChatMember_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ChatMember_tuple, 0, const_str_plain_ChatMember ); Py_INCREF( const_str_plain_ChatMember );
    const_str_digest_535f260351bc2980c7ffe34433191937 = UNSTREAM_STRING( &constant_bin[ 1133461 ], 28, 0 );
    const_str_digest_80b7a886a12dca0d5d40af0aa46cbb40 = UNSTREAM_STRING( &constant_bin[ 1133489 ], 15, 0 );
    const_tuple_str_plain_InputVenueMessageContent_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InputVenueMessageContent_tuple, 0, const_str_plain_InputVenueMessageContent ); Py_INCREF( const_str_plain_InputVenueMessageContent );
    const_tuple_str_plain_PassportFile_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PassportFile_tuple, 0, const_str_plain_PassportFile ); Py_INCREF( const_str_plain_PassportFile );
    const_str_digest_3a3162af2827bb2c9cc02788f66af547 = UNSTREAM_STRING( &constant_bin[ 1133504 ], 21, 0 );
    const_tuple_str_plain_InlineQueryResultVoice_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultVoice_tuple, 0, const_str_plain_InlineQueryResultVoice ); Py_INCREF( const_str_plain_InlineQueryResultVoice );
    const_tuple_str_plain_Chat_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Chat_tuple, 0, const_str_plain_Chat ); Py_INCREF( const_str_plain_Chat );
    const_tuple_str_plain_User_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_User_tuple, 0, const_str_plain_User ); Py_INCREF( const_str_plain_User );
    const_str_digest_4134ee51be7f339f788b6c9e160b6daf = UNSTREAM_STRING( &constant_bin[ 1133525 ], 53, 0 );
    const_tuple_str_plain_InlineQueryResultVideo_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultVideo_tuple, 0, const_str_plain_InlineQueryResultVideo ); Py_INCREF( const_str_plain_InlineQueryResultVideo );
    const_str_digest_fee821f0dd084b6e02eca6454a75cbcf = UNSTREAM_STRING( &constant_bin[ 1133578 ], 29, 0 );
    const_tuple_str_plain_ReplyKeyboardRemove_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ReplyKeyboardRemove_tuple, 0, const_str_plain_ReplyKeyboardRemove ); Py_INCREF( const_str_plain_ReplyKeyboardRemove );
    const_tuple_str_plain_ShippingQuery_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ShippingQuery_tuple, 0, const_str_plain_ShippingQuery ); Py_INCREF( const_str_plain_ShippingQuery );
    const_str_digest_59f0ab3d0d3bf365176d8d7c7692b2c9 = UNSTREAM_STRING( &constant_bin[ 1133607 ], 15, 0 );
    const_str_digest_c6985ee3fca9ff105002baf5d8c1c3e1 = UNSTREAM_STRING( &constant_bin[ 1133622 ], 29, 0 );
    const_str_plain_parsemode = UNSTREAM_STRING( &constant_bin[ 1133651 ], 9, 1 );
    const_str_digest_6edd8ec54b78fe64b55d129e7d23c0e1 = UNSTREAM_STRING( &constant_bin[ 1133660 ], 15, 0 );
    const_str_plain_callbackquery = UNSTREAM_STRING( &constant_bin[ 1133675 ], 13, 1 );
    const_tuple_str_plain_ReplyKeyboardMarkup_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ReplyKeyboardMarkup_tuple, 0, const_str_plain_ReplyKeyboardMarkup ); Py_INCREF( const_str_plain_ReplyKeyboardMarkup );
    const_tuple_str_plain_InlineQueryResultArticle_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InlineQueryResultArticle_tuple, 0, const_str_plain_InlineQueryResultArticle ); Py_INCREF( const_str_plain_InlineQueryResultArticle );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_telegram( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_22540acc750cfd2b71d7f5aac8727b0c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4134ee51be7f339f788b6c9e160b6daf;
    codeobj_22540acc750cfd2b71d7f5aac8727b0c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7cae5bbc81e3bec1aed0cc94e58d3e05, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_telegram =
{
    PyModuleDef_HEAD_INIT,
    "telegram",   /* m_name */
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

MOD_INIT_DECL( telegram )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_telegram );
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
    puts("telegram: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("telegram: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("telegram: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittelegram" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_telegram = Py_InitModule4(
        "telegram",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_telegram = PyModule_Create( &mdef_telegram );
#endif

    moduledict_telegram = MODULE_DICT( module_telegram );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_telegram,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_telegram,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_telegram,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_telegram );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_telegram, module_telegram );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    struct Nuitka_FrameObject *frame_22540acc750cfd2b71d7f5aac8727b0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = const_str_empty;
    UPDATE_STRING_DICT0( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_4134ee51be7f339f788b6c9e160b6daf;
    UPDATE_STRING_DICT0( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_5d28cddc0d3cd4bcd017a0022f54fa40_list );
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
    PyObject *tmp_assign_source_4;
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    // Frame without reuse.
    frame_22540acc750cfd2b71d7f5aac8727b0c = MAKE_MODULE_FRAME( codeobj_22540acc750cfd2b71d7f5aac8727b0c, module_telegram );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_22540acc750cfd2b71d7f5aac8727b0c );
    assert( Py_REFCNT( frame_22540acc750cfd2b71d7f5aac8727b0c ) == 2 );

    // Framed code:
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_level_name_1;
    tmp_name_name_1 = const_str_plain_base;
    tmp_globals_name_1 = (PyObject *)moduledict_telegram;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TelegramObject_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 21;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_TelegramObject,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TelegramObject );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_TelegramObject, tmp_assign_source_5 );
    }
    {
    PyObject *tmp_assign_source_6;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_name_name_2;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_level_name_2;
    tmp_name_name_2 = const_str_plain_user;
    tmp_globals_name_2 = (PyObject *)moduledict_telegram;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_User_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 22;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_User,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_User );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_User, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_name_name_3;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_level_name_3;
    tmp_name_name_3 = const_str_digest_59f0ab3d0d3bf365176d8d7c7692b2c9;
    tmp_globals_name_3 = (PyObject *)moduledict_telegram;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_ChatPhoto_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 23;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_ChatPhoto,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ChatPhoto );
    }

    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ChatPhoto, tmp_assign_source_7 );
    }
    {
    PyObject *tmp_assign_source_8;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_name_name_4;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_level_name_4;
    tmp_name_name_4 = const_str_plain_chat;
    tmp_globals_name_4 = (PyObject *)moduledict_telegram;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_Chat_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 24;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_Chat,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Chat );
    }

    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Chat, tmp_assign_source_8 );
    }
    {
    PyObject *tmp_assign_source_9;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_name_name_5;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_level_name_5;
    tmp_name_name_5 = const_str_plain_chatmember;
    tmp_globals_name_5 = (PyObject *)moduledict_telegram;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_ChatMember_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 25;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_ChatMember,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ChatMember );
    }

    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ChatMember, tmp_assign_source_9 );
    }
    {
    PyObject *tmp_assign_source_10;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_name_name_6;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_level_name_6;
    tmp_name_name_6 = const_str_digest_6edd8ec54b78fe64b55d129e7d23c0e1;
    tmp_globals_name_6 = (PyObject *)moduledict_telegram;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_PhotoSize_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 26;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_PhotoSize,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_PhotoSize );
    }

    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PhotoSize, tmp_assign_source_10 );
    }
    {
    PyObject *tmp_assign_source_11;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_name_name_7;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_level_name_7;
    tmp_name_name_7 = const_str_digest_173c59a4a860ae21bebb781bb58f4315;
    tmp_globals_name_7 = (PyObject *)moduledict_telegram;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_Audio_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 27;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_Audio,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Audio );
    }

    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Audio, tmp_assign_source_11 );
    }
    {
    PyObject *tmp_assign_source_12;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_name_name_8;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_level_name_8;
    tmp_name_name_8 = const_str_digest_cae3fa30e04ff15fbd28df55d2fdad85;
    tmp_globals_name_8 = (PyObject *)moduledict_telegram;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_Voice_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 28;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_plain_Voice,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Voice );
    }

    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Voice, tmp_assign_source_12 );
    }
    {
    PyObject *tmp_assign_source_13;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_name_name_9;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_level_name_9;
    tmp_name_name_9 = const_str_digest_153f54acdc3d23f7a895ad2a69439fca;
    tmp_globals_name_9 = (PyObject *)moduledict_telegram;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_Document_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 29;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_9 ) )
    {
       tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_9,
            (PyObject *)MODULE_DICT(tmp_import_name_from_9),
            const_str_plain_Document,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Document );
    }

    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Document, tmp_assign_source_13 );
    }
    {
    PyObject *tmp_assign_source_14;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_name_name_10;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_level_name_10;
    tmp_name_name_10 = const_str_digest_fb5633b371e5a1cfb7ab215410b62c42;
    tmp_globals_name_10 = (PyObject *)moduledict_telegram;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_Animation_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 30;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_10 ) )
    {
       tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_10,
            (PyObject *)MODULE_DICT(tmp_import_name_from_10),
            const_str_plain_Animation,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_Animation );
    }

    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Animation, tmp_assign_source_14 );
    }
    {
    PyObject *tmp_assign_source_15;
    PyObject *tmp_name_name_11;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_level_name_11;
    tmp_name_name_11 = const_str_digest_766ecd73cecaddee80b986a7b176ec89;
    tmp_globals_name_11 = (PyObject *)moduledict_telegram;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_fd4220002d729151ec88c916db6eeba4_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 31;
    tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_15;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_16;
    PyObject *tmp_import_name_from_11;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_11 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_11 ) )
    {
       tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_11,
            (PyObject *)MODULE_DICT(tmp_import_name_from_11),
            const_str_plain_Sticker,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_Sticker );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Sticker, tmp_assign_source_16 );
    }
    {
    PyObject *tmp_assign_source_17;
    PyObject *tmp_import_name_from_12;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_12 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_12 ) )
    {
       tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_12,
            (PyObject *)MODULE_DICT(tmp_import_name_from_12),
            const_str_plain_StickerSet,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_StickerSet );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_StickerSet, tmp_assign_source_17 );
    }
    {
    PyObject *tmp_assign_source_18;
    PyObject *tmp_import_name_from_13;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_13 = tmp_import_from_1__module;
    if ( PyModule_Check( tmp_import_name_from_13 ) )
    {
       tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_13,
            (PyObject *)MODULE_DICT(tmp_import_name_from_13),
            const_str_plain_MaskPosition,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_MaskPosition );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_MaskPosition, tmp_assign_source_18 );
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
    PyObject *tmp_assign_source_19;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_name_name_12;
    PyObject *tmp_globals_name_12;
    PyObject *tmp_locals_name_12;
    PyObject *tmp_fromlist_name_12;
    PyObject *tmp_level_name_12;
    tmp_name_name_12 = const_str_digest_771c180dea58b809f1c374ac1ef37ae8;
    tmp_globals_name_12 = (PyObject *)moduledict_telegram;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_Video_tuple;
    tmp_level_name_12 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 32;
    tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_14 ) )
    {
       tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_14,
            (PyObject *)MODULE_DICT(tmp_import_name_from_14),
            const_str_plain_Video,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_Video );
    }

    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Video, tmp_assign_source_19 );
    }
    {
    PyObject *tmp_assign_source_20;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_name_name_13;
    PyObject *tmp_globals_name_13;
    PyObject *tmp_locals_name_13;
    PyObject *tmp_fromlist_name_13;
    PyObject *tmp_level_name_13;
    tmp_name_name_13 = const_str_digest_0b934831cc4ea4511f84abf602476e3b;
    tmp_globals_name_13 = (PyObject *)moduledict_telegram;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_str_plain_Contact_tuple;
    tmp_level_name_13 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 33;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_15 ) )
    {
       tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_15,
            (PyObject *)MODULE_DICT(tmp_import_name_from_15),
            const_str_plain_Contact,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_Contact );
    }

    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Contact, tmp_assign_source_20 );
    }
    {
    PyObject *tmp_assign_source_21;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_name_name_14;
    PyObject *tmp_globals_name_14;
    PyObject *tmp_locals_name_14;
    PyObject *tmp_fromlist_name_14;
    PyObject *tmp_level_name_14;
    tmp_name_name_14 = const_str_digest_6a9a3c67a6d46ca571c09e9b28ba3be7;
    tmp_globals_name_14 = (PyObject *)moduledict_telegram;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_str_plain_Location_tuple;
    tmp_level_name_14 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 34;
    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_16 ) )
    {
       tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_16,
            (PyObject *)MODULE_DICT(tmp_import_name_from_16),
            const_str_plain_Location,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_Location );
    }

    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Location, tmp_assign_source_21 );
    }
    {
    PyObject *tmp_assign_source_22;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_name_name_15;
    PyObject *tmp_globals_name_15;
    PyObject *tmp_locals_name_15;
    PyObject *tmp_fromlist_name_15;
    PyObject *tmp_level_name_15;
    tmp_name_name_15 = const_str_digest_fcddecbb76555375d0786d00c0d16119;
    tmp_globals_name_15 = (PyObject *)moduledict_telegram;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_str_plain_Venue_tuple;
    tmp_level_name_15 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 35;
    tmp_import_name_from_17 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_17 ) )
    {
       tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_17,
            (PyObject *)MODULE_DICT(tmp_import_name_from_17),
            const_str_plain_Venue,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_Venue );
    }

    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Venue, tmp_assign_source_22 );
    }
    {
    PyObject *tmp_assign_source_23;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_name_name_16;
    PyObject *tmp_globals_name_16;
    PyObject *tmp_locals_name_16;
    PyObject *tmp_fromlist_name_16;
    PyObject *tmp_level_name_16;
    tmp_name_name_16 = const_str_digest_c68cf7711901a77afb726768060c6974;
    tmp_globals_name_16 = (PyObject *)moduledict_telegram;
    tmp_locals_name_16 = Py_None;
    tmp_fromlist_name_16 = const_tuple_str_plain_VideoNote_tuple;
    tmp_level_name_16 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 36;
    tmp_import_name_from_18 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_18 ) )
    {
       tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_18,
            (PyObject *)MODULE_DICT(tmp_import_name_from_18),
            const_str_plain_VideoNote,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_VideoNote );
    }

    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_VideoNote, tmp_assign_source_23 );
    }
    {
    PyObject *tmp_assign_source_24;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_name_name_17;
    PyObject *tmp_globals_name_17;
    PyObject *tmp_locals_name_17;
    PyObject *tmp_fromlist_name_17;
    PyObject *tmp_level_name_17;
    tmp_name_name_17 = const_str_plain_chataction;
    tmp_globals_name_17 = (PyObject *)moduledict_telegram;
    tmp_locals_name_17 = Py_None;
    tmp_fromlist_name_17 = const_tuple_str_plain_ChatAction_tuple;
    tmp_level_name_17 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 37;
    tmp_import_name_from_19 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_19 ) )
    {
       tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_19,
            (PyObject *)MODULE_DICT(tmp_import_name_from_19),
            const_str_plain_ChatAction,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_ChatAction );
    }

    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ChatAction, tmp_assign_source_24 );
    }
    {
    PyObject *tmp_assign_source_25;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_name_name_18;
    PyObject *tmp_globals_name_18;
    PyObject *tmp_locals_name_18;
    PyObject *tmp_fromlist_name_18;
    PyObject *tmp_level_name_18;
    tmp_name_name_18 = const_str_plain_userprofilephotos;
    tmp_globals_name_18 = (PyObject *)moduledict_telegram;
    tmp_locals_name_18 = Py_None;
    tmp_fromlist_name_18 = const_tuple_str_plain_UserProfilePhotos_tuple;
    tmp_level_name_18 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 38;
    tmp_import_name_from_20 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_20 ) )
    {
       tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_20,
            (PyObject *)MODULE_DICT(tmp_import_name_from_20),
            const_str_plain_UserProfilePhotos,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_UserProfilePhotos );
    }

    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_UserProfilePhotos, tmp_assign_source_25 );
    }
    {
    PyObject *tmp_assign_source_26;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_name_name_19;
    PyObject *tmp_globals_name_19;
    PyObject *tmp_locals_name_19;
    PyObject *tmp_fromlist_name_19;
    PyObject *tmp_level_name_19;
    tmp_name_name_19 = const_str_plain_keyboardbutton;
    tmp_globals_name_19 = (PyObject *)moduledict_telegram;
    tmp_locals_name_19 = Py_None;
    tmp_fromlist_name_19 = const_tuple_str_plain_KeyboardButton_tuple;
    tmp_level_name_19 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 39;
    tmp_import_name_from_21 = IMPORT_MODULE5( tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_19 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_21 ) )
    {
       tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_21,
            (PyObject *)MODULE_DICT(tmp_import_name_from_21),
            const_str_plain_KeyboardButton,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_KeyboardButton );
    }

    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_KeyboardButton, tmp_assign_source_26 );
    }
    {
    PyObject *tmp_assign_source_27;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_name_name_20;
    PyObject *tmp_globals_name_20;
    PyObject *tmp_locals_name_20;
    PyObject *tmp_fromlist_name_20;
    PyObject *tmp_level_name_20;
    tmp_name_name_20 = const_str_plain_replymarkup;
    tmp_globals_name_20 = (PyObject *)moduledict_telegram;
    tmp_locals_name_20 = Py_None;
    tmp_fromlist_name_20 = const_tuple_str_plain_ReplyMarkup_tuple;
    tmp_level_name_20 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 40;
    tmp_import_name_from_22 = IMPORT_MODULE5( tmp_name_name_20, tmp_globals_name_20, tmp_locals_name_20, tmp_fromlist_name_20, tmp_level_name_20 );
    if ( tmp_import_name_from_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_22 ) )
    {
       tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_22,
            (PyObject *)MODULE_DICT(tmp_import_name_from_22),
            const_str_plain_ReplyMarkup,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_ReplyMarkup );
    }

    Py_DECREF( tmp_import_name_from_22 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ReplyMarkup, tmp_assign_source_27 );
    }
    {
    PyObject *tmp_assign_source_28;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_name_name_21;
    PyObject *tmp_globals_name_21;
    PyObject *tmp_locals_name_21;
    PyObject *tmp_fromlist_name_21;
    PyObject *tmp_level_name_21;
    tmp_name_name_21 = const_str_plain_replykeyboardmarkup;
    tmp_globals_name_21 = (PyObject *)moduledict_telegram;
    tmp_locals_name_21 = Py_None;
    tmp_fromlist_name_21 = const_tuple_str_plain_ReplyKeyboardMarkup_tuple;
    tmp_level_name_21 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 41;
    tmp_import_name_from_23 = IMPORT_MODULE5( tmp_name_name_21, tmp_globals_name_21, tmp_locals_name_21, tmp_fromlist_name_21, tmp_level_name_21 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_23 ) )
    {
       tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_23,
            (PyObject *)MODULE_DICT(tmp_import_name_from_23),
            const_str_plain_ReplyKeyboardMarkup,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_ReplyKeyboardMarkup );
    }

    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ReplyKeyboardMarkup, tmp_assign_source_28 );
    }
    {
    PyObject *tmp_assign_source_29;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_name_name_22;
    PyObject *tmp_globals_name_22;
    PyObject *tmp_locals_name_22;
    PyObject *tmp_fromlist_name_22;
    PyObject *tmp_level_name_22;
    tmp_name_name_22 = const_str_plain_replykeyboardremove;
    tmp_globals_name_22 = (PyObject *)moduledict_telegram;
    tmp_locals_name_22 = Py_None;
    tmp_fromlist_name_22 = const_tuple_str_plain_ReplyKeyboardRemove_tuple;
    tmp_level_name_22 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 42;
    tmp_import_name_from_24 = IMPORT_MODULE5( tmp_name_name_22, tmp_globals_name_22, tmp_locals_name_22, tmp_fromlist_name_22, tmp_level_name_22 );
    if ( tmp_import_name_from_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_24 ) )
    {
       tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_24,
            (PyObject *)MODULE_DICT(tmp_import_name_from_24),
            const_str_plain_ReplyKeyboardRemove,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_ReplyKeyboardRemove );
    }

    Py_DECREF( tmp_import_name_from_24 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ReplyKeyboardRemove, tmp_assign_source_29 );
    }
    {
    PyObject *tmp_assign_source_30;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_name_name_23;
    PyObject *tmp_globals_name_23;
    PyObject *tmp_locals_name_23;
    PyObject *tmp_fromlist_name_23;
    PyObject *tmp_level_name_23;
    tmp_name_name_23 = const_str_plain_forcereply;
    tmp_globals_name_23 = (PyObject *)moduledict_telegram;
    tmp_locals_name_23 = Py_None;
    tmp_fromlist_name_23 = const_tuple_str_plain_ForceReply_tuple;
    tmp_level_name_23 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 43;
    tmp_import_name_from_25 = IMPORT_MODULE5( tmp_name_name_23, tmp_globals_name_23, tmp_locals_name_23, tmp_fromlist_name_23, tmp_level_name_23 );
    if ( tmp_import_name_from_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_25 ) )
    {
       tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_25,
            (PyObject *)MODULE_DICT(tmp_import_name_from_25),
            const_str_plain_ForceReply,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_ForceReply );
    }

    Py_DECREF( tmp_import_name_from_25 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ForceReply, tmp_assign_source_30 );
    }
    {
    PyObject *tmp_assign_source_31;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_name_name_24;
    PyObject *tmp_globals_name_24;
    PyObject *tmp_locals_name_24;
    PyObject *tmp_fromlist_name_24;
    PyObject *tmp_level_name_24;
    tmp_name_name_24 = const_str_plain_error;
    tmp_globals_name_24 = (PyObject *)moduledict_telegram;
    tmp_locals_name_24 = Py_None;
    tmp_fromlist_name_24 = const_tuple_str_plain_TelegramError_tuple;
    tmp_level_name_24 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 44;
    tmp_import_name_from_26 = IMPORT_MODULE5( tmp_name_name_24, tmp_globals_name_24, tmp_locals_name_24, tmp_fromlist_name_24, tmp_level_name_24 );
    if ( tmp_import_name_from_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_26 ) )
    {
       tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_26,
            (PyObject *)MODULE_DICT(tmp_import_name_from_26),
            const_str_plain_TelegramError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_TelegramError );
    }

    Py_DECREF( tmp_import_name_from_26 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_TelegramError, tmp_assign_source_31 );
    }
    {
    PyObject *tmp_assign_source_32;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_name_name_25;
    PyObject *tmp_globals_name_25;
    PyObject *tmp_locals_name_25;
    PyObject *tmp_fromlist_name_25;
    PyObject *tmp_level_name_25;
    tmp_name_name_25 = const_str_digest_80b7a886a12dca0d5d40af0aa46cbb40;
    tmp_globals_name_25 = (PyObject *)moduledict_telegram;
    tmp_locals_name_25 = Py_None;
    tmp_fromlist_name_25 = const_tuple_str_plain_InputFile_tuple;
    tmp_level_name_25 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 45;
    tmp_import_name_from_27 = IMPORT_MODULE5( tmp_name_name_25, tmp_globals_name_25, tmp_locals_name_25, tmp_fromlist_name_25, tmp_level_name_25 );
    if ( tmp_import_name_from_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_27 ) )
    {
       tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_27,
            (PyObject *)MODULE_DICT(tmp_import_name_from_27),
            const_str_plain_InputFile,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_InputFile );
    }

    Py_DECREF( tmp_import_name_from_27 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputFile, tmp_assign_source_32 );
    }
    {
    PyObject *tmp_assign_source_33;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_name_name_26;
    PyObject *tmp_globals_name_26;
    PyObject *tmp_locals_name_26;
    PyObject *tmp_fromlist_name_26;
    PyObject *tmp_level_name_26;
    tmp_name_name_26 = const_str_digest_83e1f8326a360b7c557d53881eb89e4c;
    tmp_globals_name_26 = (PyObject *)moduledict_telegram;
    tmp_locals_name_26 = Py_None;
    tmp_fromlist_name_26 = const_tuple_str_plain_File_tuple;
    tmp_level_name_26 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 46;
    tmp_import_name_from_28 = IMPORT_MODULE5( tmp_name_name_26, tmp_globals_name_26, tmp_locals_name_26, tmp_fromlist_name_26, tmp_level_name_26 );
    if ( tmp_import_name_from_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_28 ) )
    {
       tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_28,
            (PyObject *)MODULE_DICT(tmp_import_name_from_28),
            const_str_plain_File,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_File );
    }

    Py_DECREF( tmp_import_name_from_28 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_File, tmp_assign_source_33 );
    }
    {
    PyObject *tmp_assign_source_34;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_name_name_27;
    PyObject *tmp_globals_name_27;
    PyObject *tmp_locals_name_27;
    PyObject *tmp_fromlist_name_27;
    PyObject *tmp_level_name_27;
    tmp_name_name_27 = const_str_plain_parsemode;
    tmp_globals_name_27 = (PyObject *)moduledict_telegram;
    tmp_locals_name_27 = Py_None;
    tmp_fromlist_name_27 = const_tuple_str_plain_ParseMode_tuple;
    tmp_level_name_27 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 47;
    tmp_import_name_from_29 = IMPORT_MODULE5( tmp_name_name_27, tmp_globals_name_27, tmp_locals_name_27, tmp_fromlist_name_27, tmp_level_name_27 );
    if ( tmp_import_name_from_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_29 ) )
    {
       tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_29,
            (PyObject *)MODULE_DICT(tmp_import_name_from_29),
            const_str_plain_ParseMode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_ParseMode );
    }

    Py_DECREF( tmp_import_name_from_29 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ParseMode, tmp_assign_source_34 );
    }
    {
    PyObject *tmp_assign_source_35;
    PyObject *tmp_import_name_from_30;
    PyObject *tmp_name_name_28;
    PyObject *tmp_globals_name_28;
    PyObject *tmp_locals_name_28;
    PyObject *tmp_fromlist_name_28;
    PyObject *tmp_level_name_28;
    tmp_name_name_28 = const_str_plain_messageentity;
    tmp_globals_name_28 = (PyObject *)moduledict_telegram;
    tmp_locals_name_28 = Py_None;
    tmp_fromlist_name_28 = const_tuple_str_plain_MessageEntity_tuple;
    tmp_level_name_28 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 48;
    tmp_import_name_from_30 = IMPORT_MODULE5( tmp_name_name_28, tmp_globals_name_28, tmp_locals_name_28, tmp_fromlist_name_28, tmp_level_name_28 );
    if ( tmp_import_name_from_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_30 ) )
    {
       tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_30,
            (PyObject *)MODULE_DICT(tmp_import_name_from_30),
            const_str_plain_MessageEntity,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_MessageEntity );
    }

    Py_DECREF( tmp_import_name_from_30 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_MessageEntity, tmp_assign_source_35 );
    }
    {
    PyObject *tmp_assign_source_36;
    PyObject *tmp_import_name_from_31;
    PyObject *tmp_name_name_29;
    PyObject *tmp_globals_name_29;
    PyObject *tmp_locals_name_29;
    PyObject *tmp_fromlist_name_29;
    PyObject *tmp_level_name_29;
    tmp_name_name_29 = const_str_digest_a3926efd9143034d2e66741f6019fe66;
    tmp_globals_name_29 = (PyObject *)moduledict_telegram;
    tmp_locals_name_29 = Py_None;
    tmp_fromlist_name_29 = const_tuple_str_plain_Game_tuple;
    tmp_level_name_29 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 49;
    tmp_import_name_from_31 = IMPORT_MODULE5( tmp_name_name_29, tmp_globals_name_29, tmp_locals_name_29, tmp_fromlist_name_29, tmp_level_name_29 );
    if ( tmp_import_name_from_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_31 ) )
    {
       tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_31,
            (PyObject *)MODULE_DICT(tmp_import_name_from_31),
            const_str_plain_Game,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_Game );
    }

    Py_DECREF( tmp_import_name_from_31 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Game, tmp_assign_source_36 );
    }
    {
    PyObject *tmp_assign_source_37;
    PyObject *tmp_import_name_from_32;
    PyObject *tmp_name_name_30;
    PyObject *tmp_globals_name_30;
    PyObject *tmp_locals_name_30;
    PyObject *tmp_fromlist_name_30;
    PyObject *tmp_level_name_30;
    tmp_name_name_30 = const_str_digest_afebae1cac574a66da5d412cc0a8898a;
    tmp_globals_name_30 = (PyObject *)moduledict_telegram;
    tmp_locals_name_30 = Py_None;
    tmp_fromlist_name_30 = const_tuple_str_plain_CallbackGame_tuple;
    tmp_level_name_30 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 50;
    tmp_import_name_from_32 = IMPORT_MODULE5( tmp_name_name_30, tmp_globals_name_30, tmp_locals_name_30, tmp_fromlist_name_30, tmp_level_name_30 );
    if ( tmp_import_name_from_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_32 ) )
    {
       tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_32,
            (PyObject *)MODULE_DICT(tmp_import_name_from_32),
            const_str_plain_CallbackGame,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_CallbackGame );
    }

    Py_DECREF( tmp_import_name_from_32 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_CallbackGame, tmp_assign_source_37 );
    }
    {
    PyObject *tmp_assign_source_38;
    PyObject *tmp_import_name_from_33;
    PyObject *tmp_name_name_31;
    PyObject *tmp_globals_name_31;
    PyObject *tmp_locals_name_31;
    PyObject *tmp_fromlist_name_31;
    PyObject *tmp_level_name_31;
    tmp_name_name_31 = const_str_digest_1914e384aa08c7fe42e30a62fe6d4508;
    tmp_globals_name_31 = (PyObject *)moduledict_telegram;
    tmp_locals_name_31 = Py_None;
    tmp_fromlist_name_31 = const_tuple_str_plain_ShippingAddress_tuple;
    tmp_level_name_31 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 51;
    tmp_import_name_from_33 = IMPORT_MODULE5( tmp_name_name_31, tmp_globals_name_31, tmp_locals_name_31, tmp_fromlist_name_31, tmp_level_name_31 );
    if ( tmp_import_name_from_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_33 ) )
    {
       tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_33,
            (PyObject *)MODULE_DICT(tmp_import_name_from_33),
            const_str_plain_ShippingAddress,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_ShippingAddress );
    }

    Py_DECREF( tmp_import_name_from_33 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ShippingAddress, tmp_assign_source_38 );
    }
    {
    PyObject *tmp_assign_source_39;
    PyObject *tmp_import_name_from_34;
    PyObject *tmp_name_name_32;
    PyObject *tmp_globals_name_32;
    PyObject *tmp_locals_name_32;
    PyObject *tmp_fromlist_name_32;
    PyObject *tmp_level_name_32;
    tmp_name_name_32 = const_str_digest_92da8821d32ffc037fc645032b258a5a;
    tmp_globals_name_32 = (PyObject *)moduledict_telegram;
    tmp_locals_name_32 = Py_None;
    tmp_fromlist_name_32 = const_tuple_str_plain_OrderInfo_tuple;
    tmp_level_name_32 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 52;
    tmp_import_name_from_34 = IMPORT_MODULE5( tmp_name_name_32, tmp_globals_name_32, tmp_locals_name_32, tmp_fromlist_name_32, tmp_level_name_32 );
    if ( tmp_import_name_from_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_34 ) )
    {
       tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_34,
            (PyObject *)MODULE_DICT(tmp_import_name_from_34),
            const_str_plain_OrderInfo,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_OrderInfo );
    }

    Py_DECREF( tmp_import_name_from_34 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_OrderInfo, tmp_assign_source_39 );
    }
    {
    PyObject *tmp_assign_source_40;
    PyObject *tmp_import_name_from_35;
    PyObject *tmp_name_name_33;
    PyObject *tmp_globals_name_33;
    PyObject *tmp_locals_name_33;
    PyObject *tmp_fromlist_name_33;
    PyObject *tmp_level_name_33;
    tmp_name_name_33 = const_str_digest_65211bb73091a793a9208261c5994769;
    tmp_globals_name_33 = (PyObject *)moduledict_telegram;
    tmp_locals_name_33 = Py_None;
    tmp_fromlist_name_33 = const_tuple_str_plain_SuccessfulPayment_tuple;
    tmp_level_name_33 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 53;
    tmp_import_name_from_35 = IMPORT_MODULE5( tmp_name_name_33, tmp_globals_name_33, tmp_locals_name_33, tmp_fromlist_name_33, tmp_level_name_33 );
    if ( tmp_import_name_from_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_35 ) )
    {
       tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_35,
            (PyObject *)MODULE_DICT(tmp_import_name_from_35),
            const_str_plain_SuccessfulPayment,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_SuccessfulPayment );
    }

    Py_DECREF( tmp_import_name_from_35 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_SuccessfulPayment, tmp_assign_source_40 );
    }
    {
    PyObject *tmp_assign_source_41;
    PyObject *tmp_import_name_from_36;
    PyObject *tmp_name_name_34;
    PyObject *tmp_globals_name_34;
    PyObject *tmp_locals_name_34;
    PyObject *tmp_fromlist_name_34;
    PyObject *tmp_level_name_34;
    tmp_name_name_34 = const_str_digest_05e6b6f769b3594f395d936e39185fcb;
    tmp_globals_name_34 = (PyObject *)moduledict_telegram;
    tmp_locals_name_34 = Py_None;
    tmp_fromlist_name_34 = const_tuple_str_plain_Invoice_tuple;
    tmp_level_name_34 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 54;
    tmp_import_name_from_36 = IMPORT_MODULE5( tmp_name_name_34, tmp_globals_name_34, tmp_locals_name_34, tmp_fromlist_name_34, tmp_level_name_34 );
    if ( tmp_import_name_from_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_36 ) )
    {
       tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_36,
            (PyObject *)MODULE_DICT(tmp_import_name_from_36),
            const_str_plain_Invoice,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_36, const_str_plain_Invoice );
    }

    Py_DECREF( tmp_import_name_from_36 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Invoice, tmp_assign_source_41 );
    }
    {
    PyObject *tmp_assign_source_42;
    PyObject *tmp_import_name_from_37;
    PyObject *tmp_name_name_35;
    PyObject *tmp_globals_name_35;
    PyObject *tmp_locals_name_35;
    PyObject *tmp_fromlist_name_35;
    PyObject *tmp_level_name_35;
    tmp_name_name_35 = const_str_digest_7d2e767e35223be93e398854b962244c;
    tmp_globals_name_35 = (PyObject *)moduledict_telegram;
    tmp_locals_name_35 = Py_None;
    tmp_fromlist_name_35 = const_tuple_str_plain_EncryptedCredentials_tuple;
    tmp_level_name_35 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 55;
    tmp_import_name_from_37 = IMPORT_MODULE5( tmp_name_name_35, tmp_globals_name_35, tmp_locals_name_35, tmp_fromlist_name_35, tmp_level_name_35 );
    if ( tmp_import_name_from_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_37 ) )
    {
       tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_37,
            (PyObject *)MODULE_DICT(tmp_import_name_from_37),
            const_str_plain_EncryptedCredentials,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_37, const_str_plain_EncryptedCredentials );
    }

    Py_DECREF( tmp_import_name_from_37 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_EncryptedCredentials, tmp_assign_source_42 );
    }
    {
    PyObject *tmp_assign_source_43;
    PyObject *tmp_import_name_from_38;
    PyObject *tmp_name_name_36;
    PyObject *tmp_globals_name_36;
    PyObject *tmp_locals_name_36;
    PyObject *tmp_fromlist_name_36;
    PyObject *tmp_level_name_36;
    tmp_name_name_36 = const_str_digest_cce83e84062d333f72962eed55216d9c;
    tmp_globals_name_36 = (PyObject *)moduledict_telegram;
    tmp_locals_name_36 = Py_None;
    tmp_fromlist_name_36 = const_tuple_str_plain_PassportFile_tuple;
    tmp_level_name_36 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 56;
    tmp_import_name_from_38 = IMPORT_MODULE5( tmp_name_name_36, tmp_globals_name_36, tmp_locals_name_36, tmp_fromlist_name_36, tmp_level_name_36 );
    if ( tmp_import_name_from_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_38 ) )
    {
       tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_38,
            (PyObject *)MODULE_DICT(tmp_import_name_from_38),
            const_str_plain_PassportFile,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_38, const_str_plain_PassportFile );
    }

    Py_DECREF( tmp_import_name_from_38 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportFile, tmp_assign_source_43 );
    }
    {
    PyObject *tmp_assign_source_44;
    PyObject *tmp_name_name_37;
    PyObject *tmp_globals_name_37;
    PyObject *tmp_locals_name_37;
    PyObject *tmp_fromlist_name_37;
    PyObject *tmp_level_name_37;
    tmp_name_name_37 = const_str_digest_21483f64ca8dbfc1fff0e90d030c809d;
    tmp_globals_name_37 = (PyObject *)moduledict_telegram;
    tmp_locals_name_37 = Py_None;
    tmp_fromlist_name_37 = const_tuple_3abf497319f85b07e1695a88c6b03d82_tuple;
    tmp_level_name_37 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 57;
    tmp_assign_source_44 = IMPORT_MODULE5( tmp_name_name_37, tmp_globals_name_37, tmp_locals_name_37, tmp_fromlist_name_37, tmp_level_name_37 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_44;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_45;
    PyObject *tmp_import_name_from_39;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_39 = tmp_import_from_2__module;
    if ( PyModule_Check( tmp_import_name_from_39 ) )
    {
       tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_39,
            (PyObject *)MODULE_DICT(tmp_import_name_from_39),
            const_str_plain_IdDocumentData,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_39, const_str_plain_IdDocumentData );
    }

    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_IdDocumentData, tmp_assign_source_45 );
    }
    {
    PyObject *tmp_assign_source_46;
    PyObject *tmp_import_name_from_40;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_40 = tmp_import_from_2__module;
    if ( PyModule_Check( tmp_import_name_from_40 ) )
    {
       tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_40,
            (PyObject *)MODULE_DICT(tmp_import_name_from_40),
            const_str_plain_PersonalDetails,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_40, const_str_plain_PersonalDetails );
    }

    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PersonalDetails, tmp_assign_source_46 );
    }
    {
    PyObject *tmp_assign_source_47;
    PyObject *tmp_import_name_from_41;
    CHECK_OBJECT( tmp_import_from_2__module );
    tmp_import_name_from_41 = tmp_import_from_2__module;
    if ( PyModule_Check( tmp_import_name_from_41 ) )
    {
       tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_41,
            (PyObject *)MODULE_DICT(tmp_import_name_from_41),
            const_str_plain_ResidentialAddress,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_41, const_str_plain_ResidentialAddress );
    }

    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ResidentialAddress, tmp_assign_source_47 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_2:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    }
    {
    PyObject *tmp_assign_source_48;
    PyObject *tmp_import_name_from_42;
    PyObject *tmp_name_name_38;
    PyObject *tmp_globals_name_38;
    PyObject *tmp_locals_name_38;
    PyObject *tmp_fromlist_name_38;
    PyObject *tmp_level_name_38;
    tmp_name_name_38 = const_str_digest_11c7e35a4e0b3c654a3857698e26c3e2;
    tmp_globals_name_38 = (PyObject *)moduledict_telegram;
    tmp_locals_name_38 = Py_None;
    tmp_fromlist_name_38 = const_tuple_str_plain_EncryptedPassportElement_tuple;
    tmp_level_name_38 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 58;
    tmp_import_name_from_42 = IMPORT_MODULE5( tmp_name_name_38, tmp_globals_name_38, tmp_locals_name_38, tmp_fromlist_name_38, tmp_level_name_38 );
    if ( tmp_import_name_from_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_42 ) )
    {
       tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_42,
            (PyObject *)MODULE_DICT(tmp_import_name_from_42),
            const_str_plain_EncryptedPassportElement,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_42, const_str_plain_EncryptedPassportElement );
    }

    Py_DECREF( tmp_import_name_from_42 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_EncryptedPassportElement, tmp_assign_source_48 );
    }
    {
    PyObject *tmp_assign_source_49;
    PyObject *tmp_import_name_from_43;
    PyObject *tmp_name_name_39;
    PyObject *tmp_globals_name_39;
    PyObject *tmp_locals_name_39;
    PyObject *tmp_fromlist_name_39;
    PyObject *tmp_level_name_39;
    tmp_name_name_39 = const_str_digest_3a3162af2827bb2c9cc02788f66af547;
    tmp_globals_name_39 = (PyObject *)moduledict_telegram;
    tmp_locals_name_39 = Py_None;
    tmp_fromlist_name_39 = const_tuple_str_plain_PassportData_tuple;
    tmp_level_name_39 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 59;
    tmp_import_name_from_43 = IMPORT_MODULE5( tmp_name_name_39, tmp_globals_name_39, tmp_locals_name_39, tmp_fromlist_name_39, tmp_level_name_39 );
    if ( tmp_import_name_from_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_43 ) )
    {
       tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_43,
            (PyObject *)MODULE_DICT(tmp_import_name_from_43),
            const_str_plain_PassportData,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_49 = IMPORT_NAME( tmp_import_name_from_43, const_str_plain_PassportData );
    }

    Py_DECREF( tmp_import_name_from_43 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportData, tmp_assign_source_49 );
    }
    {
    PyObject *tmp_assign_source_50;
    PyObject *tmp_import_name_from_44;
    PyObject *tmp_name_name_40;
    PyObject *tmp_globals_name_40;
    PyObject *tmp_locals_name_40;
    PyObject *tmp_fromlist_name_40;
    PyObject *tmp_level_name_40;
    tmp_name_name_40 = const_str_plain_message;
    tmp_globals_name_40 = (PyObject *)moduledict_telegram;
    tmp_locals_name_40 = Py_None;
    tmp_fromlist_name_40 = const_tuple_str_plain_Message_tuple;
    tmp_level_name_40 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 60;
    tmp_import_name_from_44 = IMPORT_MODULE5( tmp_name_name_40, tmp_globals_name_40, tmp_locals_name_40, tmp_fromlist_name_40, tmp_level_name_40 );
    if ( tmp_import_name_from_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_44 ) )
    {
       tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_44,
            (PyObject *)MODULE_DICT(tmp_import_name_from_44),
            const_str_plain_Message,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_50 = IMPORT_NAME( tmp_import_name_from_44, const_str_plain_Message );
    }

    Py_DECREF( tmp_import_name_from_44 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Message, tmp_assign_source_50 );
    }
    {
    PyObject *tmp_assign_source_51;
    PyObject *tmp_import_name_from_45;
    PyObject *tmp_name_name_41;
    PyObject *tmp_globals_name_41;
    PyObject *tmp_locals_name_41;
    PyObject *tmp_fromlist_name_41;
    PyObject *tmp_level_name_41;
    tmp_name_name_41 = const_str_plain_callbackquery;
    tmp_globals_name_41 = (PyObject *)moduledict_telegram;
    tmp_locals_name_41 = Py_None;
    tmp_fromlist_name_41 = const_tuple_str_plain_CallbackQuery_tuple;
    tmp_level_name_41 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 61;
    tmp_import_name_from_45 = IMPORT_MODULE5( tmp_name_name_41, tmp_globals_name_41, tmp_locals_name_41, tmp_fromlist_name_41, tmp_level_name_41 );
    if ( tmp_import_name_from_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_45 ) )
    {
       tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_45,
            (PyObject *)MODULE_DICT(tmp_import_name_from_45),
            const_str_plain_CallbackQuery,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_51 = IMPORT_NAME( tmp_import_name_from_45, const_str_plain_CallbackQuery );
    }

    Py_DECREF( tmp_import_name_from_45 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_CallbackQuery, tmp_assign_source_51 );
    }
    {
    PyObject *tmp_assign_source_52;
    PyObject *tmp_import_name_from_46;
    PyObject *tmp_name_name_42;
    PyObject *tmp_globals_name_42;
    PyObject *tmp_locals_name_42;
    PyObject *tmp_fromlist_name_42;
    PyObject *tmp_level_name_42;
    tmp_name_name_42 = const_str_plain_choseninlineresult;
    tmp_globals_name_42 = (PyObject *)moduledict_telegram;
    tmp_locals_name_42 = Py_None;
    tmp_fromlist_name_42 = const_tuple_str_plain_ChosenInlineResult_tuple;
    tmp_level_name_42 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 62;
    tmp_import_name_from_46 = IMPORT_MODULE5( tmp_name_name_42, tmp_globals_name_42, tmp_locals_name_42, tmp_fromlist_name_42, tmp_level_name_42 );
    if ( tmp_import_name_from_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_46 ) )
    {
       tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_46,
            (PyObject *)MODULE_DICT(tmp_import_name_from_46),
            const_str_plain_ChosenInlineResult,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_52 = IMPORT_NAME( tmp_import_name_from_46, const_str_plain_ChosenInlineResult );
    }

    Py_DECREF( tmp_import_name_from_46 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ChosenInlineResult, tmp_assign_source_52 );
    }
    {
    PyObject *tmp_assign_source_53;
    PyObject *tmp_import_name_from_47;
    PyObject *tmp_name_name_43;
    PyObject *tmp_globals_name_43;
    PyObject *tmp_locals_name_43;
    PyObject *tmp_fromlist_name_43;
    PyObject *tmp_level_name_43;
    tmp_name_name_43 = const_str_digest_00781474982ce0faae10e8d633184d4e;
    tmp_globals_name_43 = (PyObject *)moduledict_telegram;
    tmp_locals_name_43 = Py_None;
    tmp_fromlist_name_43 = const_tuple_str_plain_InlineKeyboardButton_tuple;
    tmp_level_name_43 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 63;
    tmp_import_name_from_47 = IMPORT_MODULE5( tmp_name_name_43, tmp_globals_name_43, tmp_locals_name_43, tmp_fromlist_name_43, tmp_level_name_43 );
    if ( tmp_import_name_from_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_47 ) )
    {
       tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_47,
            (PyObject *)MODULE_DICT(tmp_import_name_from_47),
            const_str_plain_InlineKeyboardButton,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_53 = IMPORT_NAME( tmp_import_name_from_47, const_str_plain_InlineKeyboardButton );
    }

    Py_DECREF( tmp_import_name_from_47 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineKeyboardButton, tmp_assign_source_53 );
    }
    {
    PyObject *tmp_assign_source_54;
    PyObject *tmp_import_name_from_48;
    PyObject *tmp_name_name_44;
    PyObject *tmp_globals_name_44;
    PyObject *tmp_locals_name_44;
    PyObject *tmp_fromlist_name_44;
    PyObject *tmp_level_name_44;
    tmp_name_name_44 = const_str_digest_55b864472bebd6c8ca70d018ce97fd9f;
    tmp_globals_name_44 = (PyObject *)moduledict_telegram;
    tmp_locals_name_44 = Py_None;
    tmp_fromlist_name_44 = const_tuple_str_plain_InlineKeyboardMarkup_tuple;
    tmp_level_name_44 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 64;
    tmp_import_name_from_48 = IMPORT_MODULE5( tmp_name_name_44, tmp_globals_name_44, tmp_locals_name_44, tmp_fromlist_name_44, tmp_level_name_44 );
    if ( tmp_import_name_from_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_48 ) )
    {
       tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_48,
            (PyObject *)MODULE_DICT(tmp_import_name_from_48),
            const_str_plain_InlineKeyboardMarkup,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_54 = IMPORT_NAME( tmp_import_name_from_48, const_str_plain_InlineKeyboardMarkup );
    }

    Py_DECREF( tmp_import_name_from_48 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineKeyboardMarkup, tmp_assign_source_54 );
    }
    {
    PyObject *tmp_assign_source_55;
    PyObject *tmp_import_name_from_49;
    PyObject *tmp_name_name_45;
    PyObject *tmp_globals_name_45;
    PyObject *tmp_locals_name_45;
    PyObject *tmp_fromlist_name_45;
    PyObject *tmp_level_name_45;
    tmp_name_name_45 = const_str_digest_944255c38fad4360a8411dd79d95a32c;
    tmp_globals_name_45 = (PyObject *)moduledict_telegram;
    tmp_locals_name_45 = Py_None;
    tmp_fromlist_name_45 = const_tuple_str_plain_InputMessageContent_tuple;
    tmp_level_name_45 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 65;
    tmp_import_name_from_49 = IMPORT_MODULE5( tmp_name_name_45, tmp_globals_name_45, tmp_locals_name_45, tmp_fromlist_name_45, tmp_level_name_45 );
    if ( tmp_import_name_from_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_49 ) )
    {
       tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_49,
            (PyObject *)MODULE_DICT(tmp_import_name_from_49),
            const_str_plain_InputMessageContent,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_55 = IMPORT_NAME( tmp_import_name_from_49, const_str_plain_InputMessageContent );
    }

    Py_DECREF( tmp_import_name_from_49 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputMessageContent, tmp_assign_source_55 );
    }
    {
    PyObject *tmp_assign_source_56;
    PyObject *tmp_import_name_from_50;
    PyObject *tmp_name_name_46;
    PyObject *tmp_globals_name_46;
    PyObject *tmp_locals_name_46;
    PyObject *tmp_fromlist_name_46;
    PyObject *tmp_level_name_46;
    tmp_name_name_46 = const_str_digest_dd36907b609690964959a0153016eabd;
    tmp_globals_name_46 = (PyObject *)moduledict_telegram;
    tmp_locals_name_46 = Py_None;
    tmp_fromlist_name_46 = const_tuple_str_plain_InlineQuery_tuple;
    tmp_level_name_46 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 66;
    tmp_import_name_from_50 = IMPORT_MODULE5( tmp_name_name_46, tmp_globals_name_46, tmp_locals_name_46, tmp_fromlist_name_46, tmp_level_name_46 );
    if ( tmp_import_name_from_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_50 ) )
    {
       tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_50,
            (PyObject *)MODULE_DICT(tmp_import_name_from_50),
            const_str_plain_InlineQuery,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_56 = IMPORT_NAME( tmp_import_name_from_50, const_str_plain_InlineQuery );
    }

    Py_DECREF( tmp_import_name_from_50 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQuery, tmp_assign_source_56 );
    }
    {
    PyObject *tmp_assign_source_57;
    PyObject *tmp_import_name_from_51;
    PyObject *tmp_name_name_47;
    PyObject *tmp_globals_name_47;
    PyObject *tmp_locals_name_47;
    PyObject *tmp_fromlist_name_47;
    PyObject *tmp_level_name_47;
    tmp_name_name_47 = const_str_digest_b5dc256da6af75302dde0a42ddb5e3c7;
    tmp_globals_name_47 = (PyObject *)moduledict_telegram;
    tmp_locals_name_47 = Py_None;
    tmp_fromlist_name_47 = const_tuple_str_plain_InlineQueryResult_tuple;
    tmp_level_name_47 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 67;
    tmp_import_name_from_51 = IMPORT_MODULE5( tmp_name_name_47, tmp_globals_name_47, tmp_locals_name_47, tmp_fromlist_name_47, tmp_level_name_47 );
    if ( tmp_import_name_from_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_51 ) )
    {
       tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_51,
            (PyObject *)MODULE_DICT(tmp_import_name_from_51),
            const_str_plain_InlineQueryResult,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_57 = IMPORT_NAME( tmp_import_name_from_51, const_str_plain_InlineQueryResult );
    }

    Py_DECREF( tmp_import_name_from_51 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResult, tmp_assign_source_57 );
    }
    {
    PyObject *tmp_assign_source_58;
    PyObject *tmp_import_name_from_52;
    PyObject *tmp_name_name_48;
    PyObject *tmp_globals_name_48;
    PyObject *tmp_locals_name_48;
    PyObject *tmp_fromlist_name_48;
    PyObject *tmp_level_name_48;
    tmp_name_name_48 = const_str_digest_421115a3df3174379d0748def3d6a326;
    tmp_globals_name_48 = (PyObject *)moduledict_telegram;
    tmp_locals_name_48 = Py_None;
    tmp_fromlist_name_48 = const_tuple_str_plain_InlineQueryResultArticle_tuple;
    tmp_level_name_48 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 68;
    tmp_import_name_from_52 = IMPORT_MODULE5( tmp_name_name_48, tmp_globals_name_48, tmp_locals_name_48, tmp_fromlist_name_48, tmp_level_name_48 );
    if ( tmp_import_name_from_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_52 ) )
    {
       tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_52,
            (PyObject *)MODULE_DICT(tmp_import_name_from_52),
            const_str_plain_InlineQueryResultArticle,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_58 = IMPORT_NAME( tmp_import_name_from_52, const_str_plain_InlineQueryResultArticle );
    }

    Py_DECREF( tmp_import_name_from_52 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultArticle, tmp_assign_source_58 );
    }
    {
    PyObject *tmp_assign_source_59;
    PyObject *tmp_import_name_from_53;
    PyObject *tmp_name_name_49;
    PyObject *tmp_globals_name_49;
    PyObject *tmp_locals_name_49;
    PyObject *tmp_fromlist_name_49;
    PyObject *tmp_level_name_49;
    tmp_name_name_49 = const_str_digest_ab8014be4368c7f799d79495669fef92;
    tmp_globals_name_49 = (PyObject *)moduledict_telegram;
    tmp_locals_name_49 = Py_None;
    tmp_fromlist_name_49 = const_tuple_str_plain_InlineQueryResultAudio_tuple;
    tmp_level_name_49 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 69;
    tmp_import_name_from_53 = IMPORT_MODULE5( tmp_name_name_49, tmp_globals_name_49, tmp_locals_name_49, tmp_fromlist_name_49, tmp_level_name_49 );
    if ( tmp_import_name_from_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_53 ) )
    {
       tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_53,
            (PyObject *)MODULE_DICT(tmp_import_name_from_53),
            const_str_plain_InlineQueryResultAudio,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_59 = IMPORT_NAME( tmp_import_name_from_53, const_str_plain_InlineQueryResultAudio );
    }

    Py_DECREF( tmp_import_name_from_53 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultAudio, tmp_assign_source_59 );
    }
    {
    PyObject *tmp_assign_source_60;
    PyObject *tmp_import_name_from_54;
    PyObject *tmp_name_name_50;
    PyObject *tmp_globals_name_50;
    PyObject *tmp_locals_name_50;
    PyObject *tmp_fromlist_name_50;
    PyObject *tmp_level_name_50;
    tmp_name_name_50 = const_str_digest_ee9e90cc69ad7dce4a951007db3aa832;
    tmp_globals_name_50 = (PyObject *)moduledict_telegram;
    tmp_locals_name_50 = Py_None;
    tmp_fromlist_name_50 = const_tuple_str_plain_InlineQueryResultCachedAudio_tuple;
    tmp_level_name_50 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 70;
    tmp_import_name_from_54 = IMPORT_MODULE5( tmp_name_name_50, tmp_globals_name_50, tmp_locals_name_50, tmp_fromlist_name_50, tmp_level_name_50 );
    if ( tmp_import_name_from_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_54 ) )
    {
       tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_54,
            (PyObject *)MODULE_DICT(tmp_import_name_from_54),
            const_str_plain_InlineQueryResultCachedAudio,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_60 = IMPORT_NAME( tmp_import_name_from_54, const_str_plain_InlineQueryResultCachedAudio );
    }

    Py_DECREF( tmp_import_name_from_54 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultCachedAudio, tmp_assign_source_60 );
    }
    {
    PyObject *tmp_assign_source_61;
    PyObject *tmp_import_name_from_55;
    PyObject *tmp_name_name_51;
    PyObject *tmp_globals_name_51;
    PyObject *tmp_locals_name_51;
    PyObject *tmp_fromlist_name_51;
    PyObject *tmp_level_name_51;
    tmp_name_name_51 = const_str_digest_7a114a53bf4962e6cc465e1237cdf6fd;
    tmp_globals_name_51 = (PyObject *)moduledict_telegram;
    tmp_locals_name_51 = Py_None;
    tmp_fromlist_name_51 = const_tuple_str_plain_InlineQueryResultCachedDocument_tuple;
    tmp_level_name_51 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 71;
    tmp_import_name_from_55 = IMPORT_MODULE5( tmp_name_name_51, tmp_globals_name_51, tmp_locals_name_51, tmp_fromlist_name_51, tmp_level_name_51 );
    if ( tmp_import_name_from_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_55 ) )
    {
       tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_55,
            (PyObject *)MODULE_DICT(tmp_import_name_from_55),
            const_str_plain_InlineQueryResultCachedDocument,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_61 = IMPORT_NAME( tmp_import_name_from_55, const_str_plain_InlineQueryResultCachedDocument );
    }

    Py_DECREF( tmp_import_name_from_55 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultCachedDocument, tmp_assign_source_61 );
    }
    {
    PyObject *tmp_assign_source_62;
    PyObject *tmp_import_name_from_56;
    PyObject *tmp_name_name_52;
    PyObject *tmp_globals_name_52;
    PyObject *tmp_locals_name_52;
    PyObject *tmp_fromlist_name_52;
    PyObject *tmp_level_name_52;
    tmp_name_name_52 = const_str_digest_bc5a816922a7b6247fcbf6f4f1623eb1;
    tmp_globals_name_52 = (PyObject *)moduledict_telegram;
    tmp_locals_name_52 = Py_None;
    tmp_fromlist_name_52 = const_tuple_str_plain_InlineQueryResultCachedGif_tuple;
    tmp_level_name_52 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 72;
    tmp_import_name_from_56 = IMPORT_MODULE5( tmp_name_name_52, tmp_globals_name_52, tmp_locals_name_52, tmp_fromlist_name_52, tmp_level_name_52 );
    if ( tmp_import_name_from_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_56 ) )
    {
       tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_56,
            (PyObject *)MODULE_DICT(tmp_import_name_from_56),
            const_str_plain_InlineQueryResultCachedGif,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_62 = IMPORT_NAME( tmp_import_name_from_56, const_str_plain_InlineQueryResultCachedGif );
    }

    Py_DECREF( tmp_import_name_from_56 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultCachedGif, tmp_assign_source_62 );
    }
    {
    PyObject *tmp_assign_source_63;
    PyObject *tmp_import_name_from_57;
    PyObject *tmp_name_name_53;
    PyObject *tmp_globals_name_53;
    PyObject *tmp_locals_name_53;
    PyObject *tmp_fromlist_name_53;
    PyObject *tmp_level_name_53;
    tmp_name_name_53 = const_str_digest_d543110be38b88967a6dd82f3efd5bcf;
    tmp_globals_name_53 = (PyObject *)moduledict_telegram;
    tmp_locals_name_53 = Py_None;
    tmp_fromlist_name_53 = const_tuple_str_plain_InlineQueryResultCachedMpeg4Gif_tuple;
    tmp_level_name_53 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 73;
    tmp_import_name_from_57 = IMPORT_MODULE5( tmp_name_name_53, tmp_globals_name_53, tmp_locals_name_53, tmp_fromlist_name_53, tmp_level_name_53 );
    if ( tmp_import_name_from_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_57 ) )
    {
       tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_57,
            (PyObject *)MODULE_DICT(tmp_import_name_from_57),
            const_str_plain_InlineQueryResultCachedMpeg4Gif,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_63 = IMPORT_NAME( tmp_import_name_from_57, const_str_plain_InlineQueryResultCachedMpeg4Gif );
    }

    Py_DECREF( tmp_import_name_from_57 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultCachedMpeg4Gif, tmp_assign_source_63 );
    }
    {
    PyObject *tmp_assign_source_64;
    PyObject *tmp_import_name_from_58;
    PyObject *tmp_name_name_54;
    PyObject *tmp_globals_name_54;
    PyObject *tmp_locals_name_54;
    PyObject *tmp_fromlist_name_54;
    PyObject *tmp_level_name_54;
    tmp_name_name_54 = const_str_digest_0592e4498b737b167696e90c54072e47;
    tmp_globals_name_54 = (PyObject *)moduledict_telegram;
    tmp_locals_name_54 = Py_None;
    tmp_fromlist_name_54 = const_tuple_str_plain_InlineQueryResultCachedPhoto_tuple;
    tmp_level_name_54 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 74;
    tmp_import_name_from_58 = IMPORT_MODULE5( tmp_name_name_54, tmp_globals_name_54, tmp_locals_name_54, tmp_fromlist_name_54, tmp_level_name_54 );
    if ( tmp_import_name_from_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_58 ) )
    {
       tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_58,
            (PyObject *)MODULE_DICT(tmp_import_name_from_58),
            const_str_plain_InlineQueryResultCachedPhoto,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_64 = IMPORT_NAME( tmp_import_name_from_58, const_str_plain_InlineQueryResultCachedPhoto );
    }

    Py_DECREF( tmp_import_name_from_58 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultCachedPhoto, tmp_assign_source_64 );
    }
    {
    PyObject *tmp_assign_source_65;
    PyObject *tmp_import_name_from_59;
    PyObject *tmp_name_name_55;
    PyObject *tmp_globals_name_55;
    PyObject *tmp_locals_name_55;
    PyObject *tmp_fromlist_name_55;
    PyObject *tmp_level_name_55;
    tmp_name_name_55 = const_str_digest_244a59b555a36b51cca705d41c045346;
    tmp_globals_name_55 = (PyObject *)moduledict_telegram;
    tmp_locals_name_55 = Py_None;
    tmp_fromlist_name_55 = const_tuple_str_plain_InlineQueryResultCachedSticker_tuple;
    tmp_level_name_55 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 75;
    tmp_import_name_from_59 = IMPORT_MODULE5( tmp_name_name_55, tmp_globals_name_55, tmp_locals_name_55, tmp_fromlist_name_55, tmp_level_name_55 );
    if ( tmp_import_name_from_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_59 ) )
    {
       tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_59,
            (PyObject *)MODULE_DICT(tmp_import_name_from_59),
            const_str_plain_InlineQueryResultCachedSticker,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_65 = IMPORT_NAME( tmp_import_name_from_59, const_str_plain_InlineQueryResultCachedSticker );
    }

    Py_DECREF( tmp_import_name_from_59 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultCachedSticker, tmp_assign_source_65 );
    }
    {
    PyObject *tmp_assign_source_66;
    PyObject *tmp_import_name_from_60;
    PyObject *tmp_name_name_56;
    PyObject *tmp_globals_name_56;
    PyObject *tmp_locals_name_56;
    PyObject *tmp_fromlist_name_56;
    PyObject *tmp_level_name_56;
    tmp_name_name_56 = const_str_digest_49dd58ccf4f9e86c063f3c4af9211293;
    tmp_globals_name_56 = (PyObject *)moduledict_telegram;
    tmp_locals_name_56 = Py_None;
    tmp_fromlist_name_56 = const_tuple_str_plain_InlineQueryResultCachedVideo_tuple;
    tmp_level_name_56 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 76;
    tmp_import_name_from_60 = IMPORT_MODULE5( tmp_name_name_56, tmp_globals_name_56, tmp_locals_name_56, tmp_fromlist_name_56, tmp_level_name_56 );
    if ( tmp_import_name_from_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_60 ) )
    {
       tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_60,
            (PyObject *)MODULE_DICT(tmp_import_name_from_60),
            const_str_plain_InlineQueryResultCachedVideo,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_66 = IMPORT_NAME( tmp_import_name_from_60, const_str_plain_InlineQueryResultCachedVideo );
    }

    Py_DECREF( tmp_import_name_from_60 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultCachedVideo, tmp_assign_source_66 );
    }
    {
    PyObject *tmp_assign_source_67;
    PyObject *tmp_import_name_from_61;
    PyObject *tmp_name_name_57;
    PyObject *tmp_globals_name_57;
    PyObject *tmp_locals_name_57;
    PyObject *tmp_fromlist_name_57;
    PyObject *tmp_level_name_57;
    tmp_name_name_57 = const_str_digest_ec92b191f1ab247459df43bfd3671fe1;
    tmp_globals_name_57 = (PyObject *)moduledict_telegram;
    tmp_locals_name_57 = Py_None;
    tmp_fromlist_name_57 = const_tuple_str_plain_InlineQueryResultCachedVoice_tuple;
    tmp_level_name_57 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 77;
    tmp_import_name_from_61 = IMPORT_MODULE5( tmp_name_name_57, tmp_globals_name_57, tmp_locals_name_57, tmp_fromlist_name_57, tmp_level_name_57 );
    if ( tmp_import_name_from_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_61 ) )
    {
       tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_61,
            (PyObject *)MODULE_DICT(tmp_import_name_from_61),
            const_str_plain_InlineQueryResultCachedVoice,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_67 = IMPORT_NAME( tmp_import_name_from_61, const_str_plain_InlineQueryResultCachedVoice );
    }

    Py_DECREF( tmp_import_name_from_61 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultCachedVoice, tmp_assign_source_67 );
    }
    {
    PyObject *tmp_assign_source_68;
    PyObject *tmp_import_name_from_62;
    PyObject *tmp_name_name_58;
    PyObject *tmp_globals_name_58;
    PyObject *tmp_locals_name_58;
    PyObject *tmp_fromlist_name_58;
    PyObject *tmp_level_name_58;
    tmp_name_name_58 = const_str_digest_a83a8f701f7c700ed97d42fe29dbbe4e;
    tmp_globals_name_58 = (PyObject *)moduledict_telegram;
    tmp_locals_name_58 = Py_None;
    tmp_fromlist_name_58 = const_tuple_str_plain_InlineQueryResultContact_tuple;
    tmp_level_name_58 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 78;
    tmp_import_name_from_62 = IMPORT_MODULE5( tmp_name_name_58, tmp_globals_name_58, tmp_locals_name_58, tmp_fromlist_name_58, tmp_level_name_58 );
    if ( tmp_import_name_from_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_62 ) )
    {
       tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_62,
            (PyObject *)MODULE_DICT(tmp_import_name_from_62),
            const_str_plain_InlineQueryResultContact,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_68 = IMPORT_NAME( tmp_import_name_from_62, const_str_plain_InlineQueryResultContact );
    }

    Py_DECREF( tmp_import_name_from_62 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultContact, tmp_assign_source_68 );
    }
    {
    PyObject *tmp_assign_source_69;
    PyObject *tmp_import_name_from_63;
    PyObject *tmp_name_name_59;
    PyObject *tmp_globals_name_59;
    PyObject *tmp_locals_name_59;
    PyObject *tmp_fromlist_name_59;
    PyObject *tmp_level_name_59;
    tmp_name_name_59 = const_str_digest_4c503415e573143c2fb508540c8c1512;
    tmp_globals_name_59 = (PyObject *)moduledict_telegram;
    tmp_locals_name_59 = Py_None;
    tmp_fromlist_name_59 = const_tuple_str_plain_InlineQueryResultDocument_tuple;
    tmp_level_name_59 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 79;
    tmp_import_name_from_63 = IMPORT_MODULE5( tmp_name_name_59, tmp_globals_name_59, tmp_locals_name_59, tmp_fromlist_name_59, tmp_level_name_59 );
    if ( tmp_import_name_from_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_63 ) )
    {
       tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_63,
            (PyObject *)MODULE_DICT(tmp_import_name_from_63),
            const_str_plain_InlineQueryResultDocument,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_69 = IMPORT_NAME( tmp_import_name_from_63, const_str_plain_InlineQueryResultDocument );
    }

    Py_DECREF( tmp_import_name_from_63 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultDocument, tmp_assign_source_69 );
    }
    {
    PyObject *tmp_assign_source_70;
    PyObject *tmp_import_name_from_64;
    PyObject *tmp_name_name_60;
    PyObject *tmp_globals_name_60;
    PyObject *tmp_locals_name_60;
    PyObject *tmp_fromlist_name_60;
    PyObject *tmp_level_name_60;
    tmp_name_name_60 = const_str_digest_62f470924d2bb02279205da735fd5971;
    tmp_globals_name_60 = (PyObject *)moduledict_telegram;
    tmp_locals_name_60 = Py_None;
    tmp_fromlist_name_60 = const_tuple_str_plain_InlineQueryResultGif_tuple;
    tmp_level_name_60 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 80;
    tmp_import_name_from_64 = IMPORT_MODULE5( tmp_name_name_60, tmp_globals_name_60, tmp_locals_name_60, tmp_fromlist_name_60, tmp_level_name_60 );
    if ( tmp_import_name_from_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_64 ) )
    {
       tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_64,
            (PyObject *)MODULE_DICT(tmp_import_name_from_64),
            const_str_plain_InlineQueryResultGif,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_70 = IMPORT_NAME( tmp_import_name_from_64, const_str_plain_InlineQueryResultGif );
    }

    Py_DECREF( tmp_import_name_from_64 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultGif, tmp_assign_source_70 );
    }
    {
    PyObject *tmp_assign_source_71;
    PyObject *tmp_import_name_from_65;
    PyObject *tmp_name_name_61;
    PyObject *tmp_globals_name_61;
    PyObject *tmp_locals_name_61;
    PyObject *tmp_fromlist_name_61;
    PyObject *tmp_level_name_61;
    tmp_name_name_61 = const_str_digest_09fdc64a5db67403aae92c7d41ce6073;
    tmp_globals_name_61 = (PyObject *)moduledict_telegram;
    tmp_locals_name_61 = Py_None;
    tmp_fromlist_name_61 = const_tuple_str_plain_InlineQueryResultLocation_tuple;
    tmp_level_name_61 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 81;
    tmp_import_name_from_65 = IMPORT_MODULE5( tmp_name_name_61, tmp_globals_name_61, tmp_locals_name_61, tmp_fromlist_name_61, tmp_level_name_61 );
    if ( tmp_import_name_from_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_65 ) )
    {
       tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_65,
            (PyObject *)MODULE_DICT(tmp_import_name_from_65),
            const_str_plain_InlineQueryResultLocation,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_71 = IMPORT_NAME( tmp_import_name_from_65, const_str_plain_InlineQueryResultLocation );
    }

    Py_DECREF( tmp_import_name_from_65 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultLocation, tmp_assign_source_71 );
    }
    {
    PyObject *tmp_assign_source_72;
    PyObject *tmp_import_name_from_66;
    PyObject *tmp_name_name_62;
    PyObject *tmp_globals_name_62;
    PyObject *tmp_locals_name_62;
    PyObject *tmp_fromlist_name_62;
    PyObject *tmp_level_name_62;
    tmp_name_name_62 = const_str_digest_bea721f53032458f9eb40cfad6fd7e97;
    tmp_globals_name_62 = (PyObject *)moduledict_telegram;
    tmp_locals_name_62 = Py_None;
    tmp_fromlist_name_62 = const_tuple_str_plain_InlineQueryResultMpeg4Gif_tuple;
    tmp_level_name_62 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 82;
    tmp_import_name_from_66 = IMPORT_MODULE5( tmp_name_name_62, tmp_globals_name_62, tmp_locals_name_62, tmp_fromlist_name_62, tmp_level_name_62 );
    if ( tmp_import_name_from_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_66 ) )
    {
       tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_66,
            (PyObject *)MODULE_DICT(tmp_import_name_from_66),
            const_str_plain_InlineQueryResultMpeg4Gif,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_72 = IMPORT_NAME( tmp_import_name_from_66, const_str_plain_InlineQueryResultMpeg4Gif );
    }

    Py_DECREF( tmp_import_name_from_66 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultMpeg4Gif, tmp_assign_source_72 );
    }
    {
    PyObject *tmp_assign_source_73;
    PyObject *tmp_import_name_from_67;
    PyObject *tmp_name_name_63;
    PyObject *tmp_globals_name_63;
    PyObject *tmp_locals_name_63;
    PyObject *tmp_fromlist_name_63;
    PyObject *tmp_level_name_63;
    tmp_name_name_63 = const_str_digest_c6985ee3fca9ff105002baf5d8c1c3e1;
    tmp_globals_name_63 = (PyObject *)moduledict_telegram;
    tmp_locals_name_63 = Py_None;
    tmp_fromlist_name_63 = const_tuple_str_plain_InlineQueryResultPhoto_tuple;
    tmp_level_name_63 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 83;
    tmp_import_name_from_67 = IMPORT_MODULE5( tmp_name_name_63, tmp_globals_name_63, tmp_locals_name_63, tmp_fromlist_name_63, tmp_level_name_63 );
    if ( tmp_import_name_from_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_67 ) )
    {
       tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_67,
            (PyObject *)MODULE_DICT(tmp_import_name_from_67),
            const_str_plain_InlineQueryResultPhoto,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_73 = IMPORT_NAME( tmp_import_name_from_67, const_str_plain_InlineQueryResultPhoto );
    }

    Py_DECREF( tmp_import_name_from_67 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultPhoto, tmp_assign_source_73 );
    }
    {
    PyObject *tmp_assign_source_74;
    PyObject *tmp_import_name_from_68;
    PyObject *tmp_name_name_64;
    PyObject *tmp_globals_name_64;
    PyObject *tmp_locals_name_64;
    PyObject *tmp_fromlist_name_64;
    PyObject *tmp_level_name_64;
    tmp_name_name_64 = const_str_digest_6f9c362946a4d000c52d73d1cb4e6f58;
    tmp_globals_name_64 = (PyObject *)moduledict_telegram;
    tmp_locals_name_64 = Py_None;
    tmp_fromlist_name_64 = const_tuple_str_plain_InlineQueryResultVenue_tuple;
    tmp_level_name_64 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 84;
    tmp_import_name_from_68 = IMPORT_MODULE5( tmp_name_name_64, tmp_globals_name_64, tmp_locals_name_64, tmp_fromlist_name_64, tmp_level_name_64 );
    if ( tmp_import_name_from_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_68 ) )
    {
       tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_68,
            (PyObject *)MODULE_DICT(tmp_import_name_from_68),
            const_str_plain_InlineQueryResultVenue,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_74 = IMPORT_NAME( tmp_import_name_from_68, const_str_plain_InlineQueryResultVenue );
    }

    Py_DECREF( tmp_import_name_from_68 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultVenue, tmp_assign_source_74 );
    }
    {
    PyObject *tmp_assign_source_75;
    PyObject *tmp_import_name_from_69;
    PyObject *tmp_name_name_65;
    PyObject *tmp_globals_name_65;
    PyObject *tmp_locals_name_65;
    PyObject *tmp_fromlist_name_65;
    PyObject *tmp_level_name_65;
    tmp_name_name_65 = const_str_digest_bbf47d8b3033cf72b5b2e6ee4b5111bf;
    tmp_globals_name_65 = (PyObject *)moduledict_telegram;
    tmp_locals_name_65 = Py_None;
    tmp_fromlist_name_65 = const_tuple_str_plain_InlineQueryResultVideo_tuple;
    tmp_level_name_65 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 85;
    tmp_import_name_from_69 = IMPORT_MODULE5( tmp_name_name_65, tmp_globals_name_65, tmp_locals_name_65, tmp_fromlist_name_65, tmp_level_name_65 );
    if ( tmp_import_name_from_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_69 ) )
    {
       tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_69,
            (PyObject *)MODULE_DICT(tmp_import_name_from_69),
            const_str_plain_InlineQueryResultVideo,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_75 = IMPORT_NAME( tmp_import_name_from_69, const_str_plain_InlineQueryResultVideo );
    }

    Py_DECREF( tmp_import_name_from_69 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultVideo, tmp_assign_source_75 );
    }
    {
    PyObject *tmp_assign_source_76;
    PyObject *tmp_import_name_from_70;
    PyObject *tmp_name_name_66;
    PyObject *tmp_globals_name_66;
    PyObject *tmp_locals_name_66;
    PyObject *tmp_fromlist_name_66;
    PyObject *tmp_level_name_66;
    tmp_name_name_66 = const_str_digest_fee821f0dd084b6e02eca6454a75cbcf;
    tmp_globals_name_66 = (PyObject *)moduledict_telegram;
    tmp_locals_name_66 = Py_None;
    tmp_fromlist_name_66 = const_tuple_str_plain_InlineQueryResultVoice_tuple;
    tmp_level_name_66 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 86;
    tmp_import_name_from_70 = IMPORT_MODULE5( tmp_name_name_66, tmp_globals_name_66, tmp_locals_name_66, tmp_fromlist_name_66, tmp_level_name_66 );
    if ( tmp_import_name_from_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_70 ) )
    {
       tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_70,
            (PyObject *)MODULE_DICT(tmp_import_name_from_70),
            const_str_plain_InlineQueryResultVoice,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_76 = IMPORT_NAME( tmp_import_name_from_70, const_str_plain_InlineQueryResultVoice );
    }

    Py_DECREF( tmp_import_name_from_70 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultVoice, tmp_assign_source_76 );
    }
    {
    PyObject *tmp_assign_source_77;
    PyObject *tmp_import_name_from_71;
    PyObject *tmp_name_name_67;
    PyObject *tmp_globals_name_67;
    PyObject *tmp_locals_name_67;
    PyObject *tmp_fromlist_name_67;
    PyObject *tmp_level_name_67;
    tmp_name_name_67 = const_str_digest_535f260351bc2980c7ffe34433191937;
    tmp_globals_name_67 = (PyObject *)moduledict_telegram;
    tmp_locals_name_67 = Py_None;
    tmp_fromlist_name_67 = const_tuple_str_plain_InlineQueryResultGame_tuple;
    tmp_level_name_67 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 87;
    tmp_import_name_from_71 = IMPORT_MODULE5( tmp_name_name_67, tmp_globals_name_67, tmp_locals_name_67, tmp_fromlist_name_67, tmp_level_name_67 );
    if ( tmp_import_name_from_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_71 ) )
    {
       tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_71,
            (PyObject *)MODULE_DICT(tmp_import_name_from_71),
            const_str_plain_InlineQueryResultGame,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_77 = IMPORT_NAME( tmp_import_name_from_71, const_str_plain_InlineQueryResultGame );
    }

    Py_DECREF( tmp_import_name_from_71 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InlineQueryResultGame, tmp_assign_source_77 );
    }
    {
    PyObject *tmp_assign_source_78;
    PyObject *tmp_import_name_from_72;
    PyObject *tmp_name_name_68;
    PyObject *tmp_globals_name_68;
    PyObject *tmp_locals_name_68;
    PyObject *tmp_fromlist_name_68;
    PyObject *tmp_level_name_68;
    tmp_name_name_68 = const_str_digest_eb541965097650f8b9a58b6959d5ab7e;
    tmp_globals_name_68 = (PyObject *)moduledict_telegram;
    tmp_locals_name_68 = Py_None;
    tmp_fromlist_name_68 = const_tuple_str_plain_InputTextMessageContent_tuple;
    tmp_level_name_68 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 88;
    tmp_import_name_from_72 = IMPORT_MODULE5( tmp_name_name_68, tmp_globals_name_68, tmp_locals_name_68, tmp_fromlist_name_68, tmp_level_name_68 );
    if ( tmp_import_name_from_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_72 ) )
    {
       tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_72,
            (PyObject *)MODULE_DICT(tmp_import_name_from_72),
            const_str_plain_InputTextMessageContent,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_78 = IMPORT_NAME( tmp_import_name_from_72, const_str_plain_InputTextMessageContent );
    }

    Py_DECREF( tmp_import_name_from_72 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputTextMessageContent, tmp_assign_source_78 );
    }
    {
    PyObject *tmp_assign_source_79;
    PyObject *tmp_import_name_from_73;
    PyObject *tmp_name_name_69;
    PyObject *tmp_globals_name_69;
    PyObject *tmp_locals_name_69;
    PyObject *tmp_fromlist_name_69;
    PyObject *tmp_level_name_69;
    tmp_name_name_69 = const_str_digest_ca78ee200cef31ae9254c0baef6962e6;
    tmp_globals_name_69 = (PyObject *)moduledict_telegram;
    tmp_locals_name_69 = Py_None;
    tmp_fromlist_name_69 = const_tuple_str_plain_InputLocationMessageContent_tuple;
    tmp_level_name_69 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 89;
    tmp_import_name_from_73 = IMPORT_MODULE5( tmp_name_name_69, tmp_globals_name_69, tmp_locals_name_69, tmp_fromlist_name_69, tmp_level_name_69 );
    if ( tmp_import_name_from_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_73 ) )
    {
       tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_73,
            (PyObject *)MODULE_DICT(tmp_import_name_from_73),
            const_str_plain_InputLocationMessageContent,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_79 = IMPORT_NAME( tmp_import_name_from_73, const_str_plain_InputLocationMessageContent );
    }

    Py_DECREF( tmp_import_name_from_73 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputLocationMessageContent, tmp_assign_source_79 );
    }
    {
    PyObject *tmp_assign_source_80;
    PyObject *tmp_import_name_from_74;
    PyObject *tmp_name_name_70;
    PyObject *tmp_globals_name_70;
    PyObject *tmp_locals_name_70;
    PyObject *tmp_fromlist_name_70;
    PyObject *tmp_level_name_70;
    tmp_name_name_70 = const_str_digest_98ae3b3c7702f9421a52dd714e598b90;
    tmp_globals_name_70 = (PyObject *)moduledict_telegram;
    tmp_locals_name_70 = Py_None;
    tmp_fromlist_name_70 = const_tuple_str_plain_InputVenueMessageContent_tuple;
    tmp_level_name_70 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 90;
    tmp_import_name_from_74 = IMPORT_MODULE5( tmp_name_name_70, tmp_globals_name_70, tmp_locals_name_70, tmp_fromlist_name_70, tmp_level_name_70 );
    if ( tmp_import_name_from_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_74 ) )
    {
       tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_74,
            (PyObject *)MODULE_DICT(tmp_import_name_from_74),
            const_str_plain_InputVenueMessageContent,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_80 = IMPORT_NAME( tmp_import_name_from_74, const_str_plain_InputVenueMessageContent );
    }

    Py_DECREF( tmp_import_name_from_74 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputVenueMessageContent, tmp_assign_source_80 );
    }
    {
    PyObject *tmp_assign_source_81;
    PyObject *tmp_import_name_from_75;
    PyObject *tmp_name_name_71;
    PyObject *tmp_globals_name_71;
    PyObject *tmp_locals_name_71;
    PyObject *tmp_fromlist_name_71;
    PyObject *tmp_level_name_71;
    tmp_name_name_71 = const_str_digest_4b3f24869682b31e76cdf1980932e66f;
    tmp_globals_name_71 = (PyObject *)moduledict_telegram;
    tmp_locals_name_71 = Py_None;
    tmp_fromlist_name_71 = const_tuple_str_plain_InputContactMessageContent_tuple;
    tmp_level_name_71 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 91;
    tmp_import_name_from_75 = IMPORT_MODULE5( tmp_name_name_71, tmp_globals_name_71, tmp_locals_name_71, tmp_fromlist_name_71, tmp_level_name_71 );
    if ( tmp_import_name_from_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_75 ) )
    {
       tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_75,
            (PyObject *)MODULE_DICT(tmp_import_name_from_75),
            const_str_plain_InputContactMessageContent,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_81 = IMPORT_NAME( tmp_import_name_from_75, const_str_plain_InputContactMessageContent );
    }

    Py_DECREF( tmp_import_name_from_75 );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputContactMessageContent, tmp_assign_source_81 );
    }
    {
    PyObject *tmp_assign_source_82;
    PyObject *tmp_import_name_from_76;
    PyObject *tmp_name_name_72;
    PyObject *tmp_globals_name_72;
    PyObject *tmp_locals_name_72;
    PyObject *tmp_fromlist_name_72;
    PyObject *tmp_level_name_72;
    tmp_name_name_72 = const_str_digest_b69f53439dcfda3cd79140662c0445ed;
    tmp_globals_name_72 = (PyObject *)moduledict_telegram;
    tmp_locals_name_72 = Py_None;
    tmp_fromlist_name_72 = const_tuple_str_plain_LabeledPrice_tuple;
    tmp_level_name_72 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 92;
    tmp_import_name_from_76 = IMPORT_MODULE5( tmp_name_name_72, tmp_globals_name_72, tmp_locals_name_72, tmp_fromlist_name_72, tmp_level_name_72 );
    if ( tmp_import_name_from_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_76 ) )
    {
       tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_76,
            (PyObject *)MODULE_DICT(tmp_import_name_from_76),
            const_str_plain_LabeledPrice,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_82 = IMPORT_NAME( tmp_import_name_from_76, const_str_plain_LabeledPrice );
    }

    Py_DECREF( tmp_import_name_from_76 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_LabeledPrice, tmp_assign_source_82 );
    }
    {
    PyObject *tmp_assign_source_83;
    PyObject *tmp_import_name_from_77;
    PyObject *tmp_name_name_73;
    PyObject *tmp_globals_name_73;
    PyObject *tmp_locals_name_73;
    PyObject *tmp_fromlist_name_73;
    PyObject *tmp_level_name_73;
    tmp_name_name_73 = const_str_digest_7cfaf5c44517849ce13a273a646bfc83;
    tmp_globals_name_73 = (PyObject *)moduledict_telegram;
    tmp_locals_name_73 = Py_None;
    tmp_fromlist_name_73 = const_tuple_str_plain_ShippingOption_tuple;
    tmp_level_name_73 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 93;
    tmp_import_name_from_77 = IMPORT_MODULE5( tmp_name_name_73, tmp_globals_name_73, tmp_locals_name_73, tmp_fromlist_name_73, tmp_level_name_73 );
    if ( tmp_import_name_from_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_77 ) )
    {
       tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_77,
            (PyObject *)MODULE_DICT(tmp_import_name_from_77),
            const_str_plain_ShippingOption,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_83 = IMPORT_NAME( tmp_import_name_from_77, const_str_plain_ShippingOption );
    }

    Py_DECREF( tmp_import_name_from_77 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ShippingOption, tmp_assign_source_83 );
    }
    {
    PyObject *tmp_assign_source_84;
    PyObject *tmp_import_name_from_78;
    PyObject *tmp_name_name_74;
    PyObject *tmp_globals_name_74;
    PyObject *tmp_locals_name_74;
    PyObject *tmp_fromlist_name_74;
    PyObject *tmp_level_name_74;
    tmp_name_name_74 = const_str_digest_86cc1cfa817db8e0e66d4f255ea2442b;
    tmp_globals_name_74 = (PyObject *)moduledict_telegram;
    tmp_locals_name_74 = Py_None;
    tmp_fromlist_name_74 = const_tuple_str_plain_PreCheckoutQuery_tuple;
    tmp_level_name_74 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 94;
    tmp_import_name_from_78 = IMPORT_MODULE5( tmp_name_name_74, tmp_globals_name_74, tmp_locals_name_74, tmp_fromlist_name_74, tmp_level_name_74 );
    if ( tmp_import_name_from_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_78 ) )
    {
       tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_78,
            (PyObject *)MODULE_DICT(tmp_import_name_from_78),
            const_str_plain_PreCheckoutQuery,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_84 = IMPORT_NAME( tmp_import_name_from_78, const_str_plain_PreCheckoutQuery );
    }

    Py_DECREF( tmp_import_name_from_78 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PreCheckoutQuery, tmp_assign_source_84 );
    }
    {
    PyObject *tmp_assign_source_85;
    PyObject *tmp_import_name_from_79;
    PyObject *tmp_name_name_75;
    PyObject *tmp_globals_name_75;
    PyObject *tmp_locals_name_75;
    PyObject *tmp_fromlist_name_75;
    PyObject *tmp_level_name_75;
    tmp_name_name_75 = const_str_digest_953d503dcf0354bda08508906ec00775;
    tmp_globals_name_75 = (PyObject *)moduledict_telegram;
    tmp_locals_name_75 = Py_None;
    tmp_fromlist_name_75 = const_tuple_str_plain_ShippingQuery_tuple;
    tmp_level_name_75 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 95;
    tmp_import_name_from_79 = IMPORT_MODULE5( tmp_name_name_75, tmp_globals_name_75, tmp_locals_name_75, tmp_fromlist_name_75, tmp_level_name_75 );
    if ( tmp_import_name_from_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_79 ) )
    {
       tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_79,
            (PyObject *)MODULE_DICT(tmp_import_name_from_79),
            const_str_plain_ShippingQuery,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_85 = IMPORT_NAME( tmp_import_name_from_79, const_str_plain_ShippingQuery );
    }

    Py_DECREF( tmp_import_name_from_79 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_ShippingQuery, tmp_assign_source_85 );
    }
    {
    PyObject *tmp_assign_source_86;
    PyObject *tmp_import_name_from_80;
    PyObject *tmp_name_name_76;
    PyObject *tmp_globals_name_76;
    PyObject *tmp_locals_name_76;
    PyObject *tmp_fromlist_name_76;
    PyObject *tmp_level_name_76;
    tmp_name_name_76 = const_str_plain_webhookinfo;
    tmp_globals_name_76 = (PyObject *)moduledict_telegram;
    tmp_locals_name_76 = Py_None;
    tmp_fromlist_name_76 = const_tuple_str_plain_WebhookInfo_tuple;
    tmp_level_name_76 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 96;
    tmp_import_name_from_80 = IMPORT_MODULE5( tmp_name_name_76, tmp_globals_name_76, tmp_locals_name_76, tmp_fromlist_name_76, tmp_level_name_76 );
    if ( tmp_import_name_from_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_80 ) )
    {
       tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_80,
            (PyObject *)MODULE_DICT(tmp_import_name_from_80),
            const_str_plain_WebhookInfo,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_86 = IMPORT_NAME( tmp_import_name_from_80, const_str_plain_WebhookInfo );
    }

    Py_DECREF( tmp_import_name_from_80 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_WebhookInfo, tmp_assign_source_86 );
    }
    {
    PyObject *tmp_assign_source_87;
    PyObject *tmp_import_name_from_81;
    PyObject *tmp_name_name_77;
    PyObject *tmp_globals_name_77;
    PyObject *tmp_locals_name_77;
    PyObject *tmp_fromlist_name_77;
    PyObject *tmp_level_name_77;
    tmp_name_name_77 = const_str_digest_08989de715f9e397fc8799c5b2b0c926;
    tmp_globals_name_77 = (PyObject *)moduledict_telegram;
    tmp_locals_name_77 = Py_None;
    tmp_fromlist_name_77 = const_tuple_str_plain_GameHighScore_tuple;
    tmp_level_name_77 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 97;
    tmp_import_name_from_81 = IMPORT_MODULE5( tmp_name_name_77, tmp_globals_name_77, tmp_locals_name_77, tmp_fromlist_name_77, tmp_level_name_77 );
    if ( tmp_import_name_from_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_81 ) )
    {
       tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_81,
            (PyObject *)MODULE_DICT(tmp_import_name_from_81),
            const_str_plain_GameHighScore,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_87 = IMPORT_NAME( tmp_import_name_from_81, const_str_plain_GameHighScore );
    }

    Py_DECREF( tmp_import_name_from_81 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_GameHighScore, tmp_assign_source_87 );
    }
    {
    PyObject *tmp_assign_source_88;
    PyObject *tmp_import_name_from_82;
    PyObject *tmp_name_name_78;
    PyObject *tmp_globals_name_78;
    PyObject *tmp_locals_name_78;
    PyObject *tmp_fromlist_name_78;
    PyObject *tmp_level_name_78;
    tmp_name_name_78 = const_str_plain_update;
    tmp_globals_name_78 = (PyObject *)moduledict_telegram;
    tmp_locals_name_78 = Py_None;
    tmp_fromlist_name_78 = const_tuple_str_plain_Update_tuple;
    tmp_level_name_78 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 98;
    tmp_import_name_from_82 = IMPORT_MODULE5( tmp_name_name_78, tmp_globals_name_78, tmp_locals_name_78, tmp_fromlist_name_78, tmp_level_name_78 );
    if ( tmp_import_name_from_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_82 ) )
    {
       tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_82,
            (PyObject *)MODULE_DICT(tmp_import_name_from_82),
            const_str_plain_Update,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_88 = IMPORT_NAME( tmp_import_name_from_82, const_str_plain_Update );
    }

    Py_DECREF( tmp_import_name_from_82 );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Update, tmp_assign_source_88 );
    }
    {
    PyObject *tmp_assign_source_89;
    PyObject *tmp_name_name_79;
    PyObject *tmp_globals_name_79;
    PyObject *tmp_locals_name_79;
    PyObject *tmp_fromlist_name_79;
    PyObject *tmp_level_name_79;
    tmp_name_name_79 = const_str_digest_90b3d407075ede821a5f78d001b93556;
    tmp_globals_name_79 = (PyObject *)moduledict_telegram;
    tmp_locals_name_79 = Py_None;
    tmp_fromlist_name_79 = const_tuple_b2dd450645c757acff7d3ab38927e2bb_tuple;
    tmp_level_name_79 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 99;
    tmp_assign_source_89 = IMPORT_MODULE5( tmp_name_name_79, tmp_globals_name_79, tmp_locals_name_79, tmp_fromlist_name_79, tmp_level_name_79 );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_89;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_90;
    PyObject *tmp_import_name_from_83;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_83 = tmp_import_from_3__module;
    if ( PyModule_Check( tmp_import_name_from_83 ) )
    {
       tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_83,
            (PyObject *)MODULE_DICT(tmp_import_name_from_83),
            const_str_plain_InputMedia,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_90 = IMPORT_NAME( tmp_import_name_from_83, const_str_plain_InputMedia );
    }

    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputMedia, tmp_assign_source_90 );
    }
    {
    PyObject *tmp_assign_source_91;
    PyObject *tmp_import_name_from_84;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_84 = tmp_import_from_3__module;
    if ( PyModule_Check( tmp_import_name_from_84 ) )
    {
       tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_84,
            (PyObject *)MODULE_DICT(tmp_import_name_from_84),
            const_str_plain_InputMediaVideo,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_91 = IMPORT_NAME( tmp_import_name_from_84, const_str_plain_InputMediaVideo );
    }

    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputMediaVideo, tmp_assign_source_91 );
    }
    {
    PyObject *tmp_assign_source_92;
    PyObject *tmp_import_name_from_85;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_85 = tmp_import_from_3__module;
    if ( PyModule_Check( tmp_import_name_from_85 ) )
    {
       tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_85,
            (PyObject *)MODULE_DICT(tmp_import_name_from_85),
            const_str_plain_InputMediaPhoto,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_92 = IMPORT_NAME( tmp_import_name_from_85, const_str_plain_InputMediaPhoto );
    }

    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputMediaPhoto, tmp_assign_source_92 );
    }
    {
    PyObject *tmp_assign_source_93;
    PyObject *tmp_import_name_from_86;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_86 = tmp_import_from_3__module;
    if ( PyModule_Check( tmp_import_name_from_86 ) )
    {
       tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_86,
            (PyObject *)MODULE_DICT(tmp_import_name_from_86),
            const_str_plain_InputMediaAnimation,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_93 = IMPORT_NAME( tmp_import_name_from_86, const_str_plain_InputMediaAnimation );
    }

    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputMediaAnimation, tmp_assign_source_93 );
    }
    {
    PyObject *tmp_assign_source_94;
    PyObject *tmp_import_name_from_87;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_87 = tmp_import_from_3__module;
    if ( PyModule_Check( tmp_import_name_from_87 ) )
    {
       tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_87,
            (PyObject *)MODULE_DICT(tmp_import_name_from_87),
            const_str_plain_InputMediaAudio,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_94 = IMPORT_NAME( tmp_import_name_from_87, const_str_plain_InputMediaAudio );
    }

    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputMediaAudio, tmp_assign_source_94 );
    }
    {
    PyObject *tmp_assign_source_95;
    PyObject *tmp_import_name_from_88;
    CHECK_OBJECT( tmp_import_from_3__module );
    tmp_import_name_from_88 = tmp_import_from_3__module;
    if ( PyModule_Check( tmp_import_name_from_88 ) )
    {
       tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_88,
            (PyObject *)MODULE_DICT(tmp_import_name_from_88),
            const_str_plain_InputMediaDocument,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_95 = IMPORT_NAME( tmp_import_name_from_88, const_str_plain_InputMediaDocument );
    }

    if ( tmp_assign_source_95 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_InputMediaDocument, tmp_assign_source_95 );
    }
    goto try_end_3;
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
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_3:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    }
    {
    PyObject *tmp_assign_source_96;
    PyObject *tmp_import_name_from_89;
    PyObject *tmp_name_name_80;
    PyObject *tmp_globals_name_80;
    PyObject *tmp_locals_name_80;
    PyObject *tmp_fromlist_name_80;
    PyObject *tmp_level_name_80;
    tmp_name_name_80 = const_str_plain_bot;
    tmp_globals_name_80 = (PyObject *)moduledict_telegram;
    tmp_locals_name_80 = Py_None;
    tmp_fromlist_name_80 = const_tuple_str_plain_Bot_tuple;
    tmp_level_name_80 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 101;
    tmp_import_name_from_89 = IMPORT_MODULE5( tmp_name_name_80, tmp_globals_name_80, tmp_locals_name_80, tmp_fromlist_name_80, tmp_level_name_80 );
    if ( tmp_import_name_from_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_89 ) )
    {
       tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_89,
            (PyObject *)MODULE_DICT(tmp_import_name_from_89),
            const_str_plain_Bot,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_96 = IMPORT_NAME( tmp_import_name_from_89, const_str_plain_Bot );
    }

    Py_DECREF( tmp_import_name_from_89 );
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Bot, tmp_assign_source_96 );
    }
    {
    PyObject *tmp_assign_source_97;
    PyObject *tmp_name_name_81;
    PyObject *tmp_globals_name_81;
    PyObject *tmp_locals_name_81;
    PyObject *tmp_fromlist_name_81;
    PyObject *tmp_level_name_81;
    tmp_name_name_81 = const_str_plain_constants;
    tmp_globals_name_81 = (PyObject *)moduledict_telegram;
    tmp_locals_name_81 = Py_None;
    tmp_fromlist_name_81 = const_tuple_d3691e3d779c15864f13a4daa4c3514a_tuple;
    tmp_level_name_81 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 102;
    tmp_assign_source_97 = IMPORT_MODULE5( tmp_name_name_81, tmp_globals_name_81, tmp_locals_name_81, tmp_fromlist_name_81, tmp_level_name_81 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_97;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_98;
    PyObject *tmp_import_name_from_90;
    CHECK_OBJECT( tmp_import_from_4__module );
    tmp_import_name_from_90 = tmp_import_from_4__module;
    if ( PyModule_Check( tmp_import_name_from_90 ) )
    {
       tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_90,
            (PyObject *)MODULE_DICT(tmp_import_name_from_90),
            const_str_plain_MAX_MESSAGE_LENGTH,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_98 = IMPORT_NAME( tmp_import_name_from_90, const_str_plain_MAX_MESSAGE_LENGTH );
    }

    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_MAX_MESSAGE_LENGTH, tmp_assign_source_98 );
    }
    {
    PyObject *tmp_assign_source_99;
    PyObject *tmp_import_name_from_91;
    CHECK_OBJECT( tmp_import_from_4__module );
    tmp_import_name_from_91 = tmp_import_from_4__module;
    if ( PyModule_Check( tmp_import_name_from_91 ) )
    {
       tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_91,
            (PyObject *)MODULE_DICT(tmp_import_name_from_91),
            const_str_plain_MAX_CAPTION_LENGTH,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_99 = IMPORT_NAME( tmp_import_name_from_91, const_str_plain_MAX_CAPTION_LENGTH );
    }

    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_MAX_CAPTION_LENGTH, tmp_assign_source_99 );
    }
    {
    PyObject *tmp_assign_source_100;
    PyObject *tmp_import_name_from_92;
    CHECK_OBJECT( tmp_import_from_4__module );
    tmp_import_name_from_92 = tmp_import_from_4__module;
    if ( PyModule_Check( tmp_import_name_from_92 ) )
    {
       tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_92,
            (PyObject *)MODULE_DICT(tmp_import_name_from_92),
            const_str_plain_SUPPORTED_WEBHOOK_PORTS,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_100 = IMPORT_NAME( tmp_import_name_from_92, const_str_plain_SUPPORTED_WEBHOOK_PORTS );
    }

    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_SUPPORTED_WEBHOOK_PORTS, tmp_assign_source_100 );
    }
    {
    PyObject *tmp_assign_source_101;
    PyObject *tmp_import_name_from_93;
    CHECK_OBJECT( tmp_import_from_4__module );
    tmp_import_name_from_93 = tmp_import_from_4__module;
    if ( PyModule_Check( tmp_import_name_from_93 ) )
    {
       tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_93,
            (PyObject *)MODULE_DICT(tmp_import_name_from_93),
            const_str_plain_MAX_FILESIZE_DOWNLOAD,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_101 = IMPORT_NAME( tmp_import_name_from_93, const_str_plain_MAX_FILESIZE_DOWNLOAD );
    }

    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_MAX_FILESIZE_DOWNLOAD, tmp_assign_source_101 );
    }
    {
    PyObject *tmp_assign_source_102;
    PyObject *tmp_import_name_from_94;
    CHECK_OBJECT( tmp_import_from_4__module );
    tmp_import_name_from_94 = tmp_import_from_4__module;
    if ( PyModule_Check( tmp_import_name_from_94 ) )
    {
       tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_94,
            (PyObject *)MODULE_DICT(tmp_import_name_from_94),
            const_str_plain_MAX_FILESIZE_UPLOAD,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_102 = IMPORT_NAME( tmp_import_name_from_94, const_str_plain_MAX_FILESIZE_UPLOAD );
    }

    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_MAX_FILESIZE_UPLOAD, tmp_assign_source_102 );
    }
    {
    PyObject *tmp_assign_source_103;
    PyObject *tmp_import_name_from_95;
    CHECK_OBJECT( tmp_import_from_4__module );
    tmp_import_name_from_95 = tmp_import_from_4__module;
    if ( PyModule_Check( tmp_import_name_from_95 ) )
    {
       tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_95,
            (PyObject *)MODULE_DICT(tmp_import_name_from_95),
            const_str_plain_MAX_MESSAGES_PER_SECOND_PER_CHAT,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_103 = IMPORT_NAME( tmp_import_name_from_95, const_str_plain_MAX_MESSAGES_PER_SECOND_PER_CHAT );
    }

    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_MAX_MESSAGES_PER_SECOND_PER_CHAT, tmp_assign_source_103 );
    }
    {
    PyObject *tmp_assign_source_104;
    PyObject *tmp_import_name_from_96;
    CHECK_OBJECT( tmp_import_from_4__module );
    tmp_import_name_from_96 = tmp_import_from_4__module;
    if ( PyModule_Check( tmp_import_name_from_96 ) )
    {
       tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_96,
            (PyObject *)MODULE_DICT(tmp_import_name_from_96),
            const_str_plain_MAX_MESSAGES_PER_SECOND,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_104 = IMPORT_NAME( tmp_import_name_from_96, const_str_plain_MAX_MESSAGES_PER_SECOND );
    }

    if ( tmp_assign_source_104 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_MAX_MESSAGES_PER_SECOND, tmp_assign_source_104 );
    }
    {
    PyObject *tmp_assign_source_105;
    PyObject *tmp_import_name_from_97;
    CHECK_OBJECT( tmp_import_from_4__module );
    tmp_import_name_from_97 = tmp_import_from_4__module;
    if ( PyModule_Check( tmp_import_name_from_97 ) )
    {
       tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_97,
            (PyObject *)MODULE_DICT(tmp_import_name_from_97),
            const_str_plain_MAX_MESSAGES_PER_MINUTE_PER_GROUP,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_105 = IMPORT_NAME( tmp_import_name_from_97, const_str_plain_MAX_MESSAGES_PER_MINUTE_PER_GROUP );
    }

    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_MAX_MESSAGES_PER_MINUTE_PER_GROUP, tmp_assign_source_105 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

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
    try_end_4:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    }
    {
    PyObject *tmp_assign_source_106;
    PyObject *tmp_name_name_82;
    PyObject *tmp_globals_name_82;
    PyObject *tmp_locals_name_82;
    PyObject *tmp_fromlist_name_82;
    PyObject *tmp_level_name_82;
    tmp_name_name_82 = const_str_digest_dac17a41ab773ca0c42ee751631a147f;
    tmp_globals_name_82 = (PyObject *)moduledict_telegram;
    tmp_locals_name_82 = Py_None;
    tmp_fromlist_name_82 = const_tuple_2a5b55ca4e25a7244947badb9a13058b_tuple;
    tmp_level_name_82 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 106;
    tmp_assign_source_106 = IMPORT_MODULE5( tmp_name_name_82, tmp_globals_name_82, tmp_locals_name_82, tmp_fromlist_name_82, tmp_level_name_82 );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_106;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_107;
    PyObject *tmp_import_name_from_98;
    CHECK_OBJECT( tmp_import_from_5__module );
    tmp_import_name_from_98 = tmp_import_from_5__module;
    if ( PyModule_Check( tmp_import_name_from_98 ) )
    {
       tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_98,
            (PyObject *)MODULE_DICT(tmp_import_name_from_98),
            const_str_plain_PassportElementError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_107 = IMPORT_NAME( tmp_import_name_from_98, const_str_plain_PassportElementError );
    }

    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportElementError, tmp_assign_source_107 );
    }
    {
    PyObject *tmp_assign_source_108;
    PyObject *tmp_import_name_from_99;
    CHECK_OBJECT( tmp_import_from_5__module );
    tmp_import_name_from_99 = tmp_import_from_5__module;
    if ( PyModule_Check( tmp_import_name_from_99 ) )
    {
       tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_99,
            (PyObject *)MODULE_DICT(tmp_import_name_from_99),
            const_str_plain_PassportElementErrorDataField,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_108 = IMPORT_NAME( tmp_import_name_from_99, const_str_plain_PassportElementErrorDataField );
    }

    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportElementErrorDataField, tmp_assign_source_108 );
    }
    {
    PyObject *tmp_assign_source_109;
    PyObject *tmp_import_name_from_100;
    CHECK_OBJECT( tmp_import_from_5__module );
    tmp_import_name_from_100 = tmp_import_from_5__module;
    if ( PyModule_Check( tmp_import_name_from_100 ) )
    {
       tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_100,
            (PyObject *)MODULE_DICT(tmp_import_name_from_100),
            const_str_plain_PassportElementErrorFile,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_109 = IMPORT_NAME( tmp_import_name_from_100, const_str_plain_PassportElementErrorFile );
    }

    if ( tmp_assign_source_109 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportElementErrorFile, tmp_assign_source_109 );
    }
    {
    PyObject *tmp_assign_source_110;
    PyObject *tmp_import_name_from_101;
    CHECK_OBJECT( tmp_import_from_5__module );
    tmp_import_name_from_101 = tmp_import_from_5__module;
    if ( PyModule_Check( tmp_import_name_from_101 ) )
    {
       tmp_assign_source_110 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_101,
            (PyObject *)MODULE_DICT(tmp_import_name_from_101),
            const_str_plain_PassportElementErrorFiles,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_110 = IMPORT_NAME( tmp_import_name_from_101, const_str_plain_PassportElementErrorFiles );
    }

    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportElementErrorFiles, tmp_assign_source_110 );
    }
    {
    PyObject *tmp_assign_source_111;
    PyObject *tmp_import_name_from_102;
    CHECK_OBJECT( tmp_import_from_5__module );
    tmp_import_name_from_102 = tmp_import_from_5__module;
    if ( PyModule_Check( tmp_import_name_from_102 ) )
    {
       tmp_assign_source_111 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_102,
            (PyObject *)MODULE_DICT(tmp_import_name_from_102),
            const_str_plain_PassportElementErrorFrontSide,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_111 = IMPORT_NAME( tmp_import_name_from_102, const_str_plain_PassportElementErrorFrontSide );
    }

    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportElementErrorFrontSide, tmp_assign_source_111 );
    }
    {
    PyObject *tmp_assign_source_112;
    PyObject *tmp_import_name_from_103;
    CHECK_OBJECT( tmp_import_from_5__module );
    tmp_import_name_from_103 = tmp_import_from_5__module;
    if ( PyModule_Check( tmp_import_name_from_103 ) )
    {
       tmp_assign_source_112 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_103,
            (PyObject *)MODULE_DICT(tmp_import_name_from_103),
            const_str_plain_PassportElementErrorReverseSide,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_112 = IMPORT_NAME( tmp_import_name_from_103, const_str_plain_PassportElementErrorReverseSide );
    }

    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportElementErrorReverseSide, tmp_assign_source_112 );
    }
    {
    PyObject *tmp_assign_source_113;
    PyObject *tmp_import_name_from_104;
    CHECK_OBJECT( tmp_import_from_5__module );
    tmp_import_name_from_104 = tmp_import_from_5__module;
    if ( PyModule_Check( tmp_import_name_from_104 ) )
    {
       tmp_assign_source_113 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_104,
            (PyObject *)MODULE_DICT(tmp_import_name_from_104),
            const_str_plain_PassportElementErrorSelfie,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_113 = IMPORT_NAME( tmp_import_name_from_104, const_str_plain_PassportElementErrorSelfie );
    }

    if ( tmp_assign_source_113 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportElementErrorSelfie, tmp_assign_source_113 );
    }
    {
    PyObject *tmp_assign_source_114;
    PyObject *tmp_import_name_from_105;
    CHECK_OBJECT( tmp_import_from_5__module );
    tmp_import_name_from_105 = tmp_import_from_5__module;
    if ( PyModule_Check( tmp_import_name_from_105 ) )
    {
       tmp_assign_source_114 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_105,
            (PyObject *)MODULE_DICT(tmp_import_name_from_105),
            const_str_plain_PassportElementErrorTranslationFile,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_114 = IMPORT_NAME( tmp_import_name_from_105, const_str_plain_PassportElementErrorTranslationFile );
    }

    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportElementErrorTranslationFile, tmp_assign_source_114 );
    }
    {
    PyObject *tmp_assign_source_115;
    PyObject *tmp_import_name_from_106;
    CHECK_OBJECT( tmp_import_from_5__module );
    tmp_import_name_from_106 = tmp_import_from_5__module;
    if ( PyModule_Check( tmp_import_name_from_106 ) )
    {
       tmp_assign_source_115 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_106,
            (PyObject *)MODULE_DICT(tmp_import_name_from_106),
            const_str_plain_PassportElementErrorTranslationFiles,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_115 = IMPORT_NAME( tmp_import_name_from_106, const_str_plain_PassportElementErrorTranslationFiles );
    }

    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportElementErrorTranslationFiles, tmp_assign_source_115 );
    }
    {
    PyObject *tmp_assign_source_116;
    PyObject *tmp_import_name_from_107;
    CHECK_OBJECT( tmp_import_from_5__module );
    tmp_import_name_from_107 = tmp_import_from_5__module;
    if ( PyModule_Check( tmp_import_name_from_107 ) )
    {
       tmp_assign_source_116 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_107,
            (PyObject *)MODULE_DICT(tmp_import_name_from_107),
            const_str_plain_PassportElementErrorUnspecified,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_116 = IMPORT_NAME( tmp_import_name_from_107, const_str_plain_PassportElementErrorUnspecified );
    }

    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_PassportElementErrorUnspecified, tmp_assign_source_116 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_5:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    }
    {
    PyObject *tmp_assign_source_117;
    PyObject *tmp_name_name_83;
    PyObject *tmp_globals_name_83;
    PyObject *tmp_locals_name_83;
    PyObject *tmp_fromlist_name_83;
    PyObject *tmp_level_name_83;
    tmp_name_name_83 = const_str_digest_7d2e767e35223be93e398854b962244c;
    tmp_globals_name_83 = (PyObject *)moduledict_telegram;
    tmp_locals_name_83 = Py_None;
    tmp_fromlist_name_83 = const_tuple_dbaeb5db63ba9e87e2369ce6957d5585_tuple;
    tmp_level_name_83 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 116;
    tmp_assign_source_117 = IMPORT_MODULE5( tmp_name_name_83, tmp_globals_name_83, tmp_locals_name_83, tmp_fromlist_name_83, tmp_level_name_83 );
    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_6__module == NULL );
    tmp_import_from_6__module = tmp_assign_source_117;

    }
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_118;
    PyObject *tmp_import_name_from_108;
    CHECK_OBJECT( tmp_import_from_6__module );
    tmp_import_name_from_108 = tmp_import_from_6__module;
    if ( PyModule_Check( tmp_import_name_from_108 ) )
    {
       tmp_assign_source_118 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_108,
            (PyObject *)MODULE_DICT(tmp_import_name_from_108),
            const_str_plain_Credentials,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_118 = IMPORT_NAME( tmp_import_name_from_108, const_str_plain_Credentials );
    }

    if ( tmp_assign_source_118 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_Credentials, tmp_assign_source_118 );
    }
    {
    PyObject *tmp_assign_source_119;
    PyObject *tmp_import_name_from_109;
    CHECK_OBJECT( tmp_import_from_6__module );
    tmp_import_name_from_109 = tmp_import_from_6__module;
    if ( PyModule_Check( tmp_import_name_from_109 ) )
    {
       tmp_assign_source_119 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_109,
            (PyObject *)MODULE_DICT(tmp_import_name_from_109),
            const_str_plain_DataCredentials,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_119 = IMPORT_NAME( tmp_import_name_from_109, const_str_plain_DataCredentials );
    }

    if ( tmp_assign_source_119 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_DataCredentials, tmp_assign_source_119 );
    }
    {
    PyObject *tmp_assign_source_120;
    PyObject *tmp_import_name_from_110;
    CHECK_OBJECT( tmp_import_from_6__module );
    tmp_import_name_from_110 = tmp_import_from_6__module;
    if ( PyModule_Check( tmp_import_name_from_110 ) )
    {
       tmp_assign_source_120 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_110,
            (PyObject *)MODULE_DICT(tmp_import_name_from_110),
            const_str_plain_SecureData,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_120 = IMPORT_NAME( tmp_import_name_from_110, const_str_plain_SecureData );
    }

    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_SecureData, tmp_assign_source_120 );
    }
    {
    PyObject *tmp_assign_source_121;
    PyObject *tmp_import_name_from_111;
    CHECK_OBJECT( tmp_import_from_6__module );
    tmp_import_name_from_111 = tmp_import_from_6__module;
    if ( PyModule_Check( tmp_import_name_from_111 ) )
    {
       tmp_assign_source_121 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_111,
            (PyObject *)MODULE_DICT(tmp_import_name_from_111),
            const_str_plain_FileCredentials,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_121 = IMPORT_NAME( tmp_import_name_from_111, const_str_plain_FileCredentials );
    }

    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_FileCredentials, tmp_assign_source_121 );
    }
    {
    PyObject *tmp_assign_source_122;
    PyObject *tmp_import_name_from_112;
    CHECK_OBJECT( tmp_import_from_6__module );
    tmp_import_name_from_112 = tmp_import_from_6__module;
    if ( PyModule_Check( tmp_import_name_from_112 ) )
    {
       tmp_assign_source_122 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_112,
            (PyObject *)MODULE_DICT(tmp_import_name_from_112),
            const_str_plain_TelegramDecryptionError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_122 = IMPORT_NAME( tmp_import_name_from_112, const_str_plain_TelegramDecryptionError );
    }

    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain_TelegramDecryptionError, tmp_assign_source_122 );
    }
    goto try_end_6;
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
    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    }
    {
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    }
    // End of try:
    try_end_6:;
    }
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    }
    {
    PyObject *tmp_assign_source_123;
    PyObject *tmp_import_name_from_113;
    PyObject *tmp_name_name_84;
    PyObject *tmp_globals_name_84;
    PyObject *tmp_locals_name_84;
    PyObject *tmp_fromlist_name_84;
    PyObject *tmp_level_name_84;
    tmp_name_name_84 = const_str_plain_version;
    tmp_globals_name_84 = (PyObject *)moduledict_telegram;
    tmp_locals_name_84 = Py_None;
    tmp_fromlist_name_84 = const_tuple_str_plain___version___tuple;
    tmp_level_name_84 = const_int_pos_1;
    frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame.f_lineno = 121;
    tmp_import_name_from_113 = IMPORT_MODULE5( tmp_name_name_84, tmp_globals_name_84, tmp_locals_name_84, tmp_fromlist_name_84, tmp_level_name_84 );
    if ( tmp_import_name_from_113 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_113 ) )
    {
       tmp_assign_source_123 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_113,
            (PyObject *)MODULE_DICT(tmp_import_name_from_113),
            const_str_plain___version__,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_123 = IMPORT_NAME( tmp_import_name_from_113, const_str_plain___version__ );
    }

    Py_DECREF( tmp_import_name_from_113 );
    if ( tmp_assign_source_123 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_123 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_22540acc750cfd2b71d7f5aac8727b0c );
#endif
    popFrameStack();

    assertFrameObject( frame_22540acc750cfd2b71d7f5aac8727b0c );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_22540acc750cfd2b71d7f5aac8727b0c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_22540acc750cfd2b71d7f5aac8727b0c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_22540acc750cfd2b71d7f5aac8727b0c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_22540acc750cfd2b71d7f5aac8727b0c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
    PyObject *tmp_assign_source_124;
    tmp_assign_source_124 = const_str_digest_7787b4cd933c978c27821a7cd4b9e730;
    UPDATE_STRING_DICT0( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_124 );
    }
    {
    PyObject *tmp_assign_source_125;
    tmp_assign_source_125 = LIST_COPY( const_list_dc2e27d19c29f5d43f1c7be8d2ff7bc2_list );
    UPDATE_STRING_DICT1( moduledict_telegram, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_125 );
    }

    return MOD_RETURN_VALUE( module_telegram );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
