/* Generated code for Python source for module 'cryptography.hazmat.bindings.openssl._conditional'
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

/* The _module_cryptography$hazmat$bindings$openssl$_conditional is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$bindings$openssl$_conditional;
PyDictObject *moduledict_cryptography$hazmat$bindings$openssl$_conditional;

/* The module constants used, if any. */
static PyObject *const_str_plain_SSL_OP_NO_DTLSv1;
extern PyObject *const_str_plain_Cryptography_HAS_EC2M;
static PyObject *const_str_plain_DTLS_client_method;
static PyObject *const_str_plain_cryptography_has_compression;
static PyObject *const_str_plain_Cryptography_CRYPTO_set_mem_functions;
static PyObject *const_str_plain_SSL_CTX_use_psk_identity_hint;
static PyObject *const_str_plain_Cryptography_HAS_SIGALGS;
static PyObject *const_str_plain_SSLv3_client_method;
extern PyObject *const_str_digest_f2f56e52e9bead94215489df18f9e023;
static PyObject *const_str_plain_SSL_CTX_add_server_custom_ext;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_fafbfe30544ba42854ed0b86baac5f84;
static PyObject *const_str_plain_SSL_ST_RENEGOTIATE;
extern PyObject *const_str_plain_NID_X25519;
static PyObject *const_list_2b0156be132bced5637961a9aa48cb51_list;
static PyObject *const_str_plain_SSL_CTX_set_alpn_protos;
static PyObject *const_str_plain_SSL_get_current_compression;
static PyObject *const_str_plain_SSL_CTX_set_ecdh_auto;
static PyObject *const_str_plain_Cryptography_HAS_PSK;
static PyObject *const_str_plain_SSL_set_alpn_protos;
static PyObject *const_str_plain_SSLv3_method;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c;
static PyObject *const_str_plain_SSL_ST_OK;
static PyObject *const_str_plain_SSL_CTX_set_psk_client_callback;
static PyObject *const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c;
static PyObject *const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS;
static PyObject *const_str_digest_0a25da58d8b65f965de99956a1b5aad7;
static PyObject *const_list_str_plain_SSL_get_server_tmp_key_list;
static PyObject *const_str_plain_SSL_get_sigalgs;
static PyObject *const_str_digest_0134e31627bb74f9df2edcd82a96ece3;
static PyObject *const_str_plain_cryptography_has_sct;
static PyObject *const_str_plain_X509_V_FLAG_TRUSTED_FIRST;
static PyObject *const_str_plain_Cryptography_HAS_CUSTOM_EXT;
extern PyObject *const_str_digest_6c6405718530cbdfc8da1bb69c050727;
static PyObject *const_list_str_plain_EVP_PKEY_DHX_list;
static PyObject *const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list;
static PyObject *const_str_plain_cryptography_has_x25519;
static PyObject *const_str_plain_SSL_set_cert_cb;
extern PyObject *const_str_plain_sk_SCT_value;
static PyObject *const_str_plain_SCT_set_source;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_SCT_get0_log_id;
static PyObject *const_str_plain_cryptography_has_scrypt;
static PyObject *const_str_digest_01d108639c365997e3ca830b00895c77;
static PyObject *const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY;
static PyObject *const_str_plain_X509_V_ERR_EMAIL_MISMATCH;
extern PyObject *const_str_plain_sk_SCT_num;
static PyObject *const_list_str_plain_OPENSSL_cleanup_list;
static PyObject *const_str_plain_cryptography_has_set_ecdh_auto;
static PyObject *const_str_plain_Cryptography_HAS_EC_1_0_2;
extern PyObject *const_str_plain_EVP_PKEY_X25519;
extern PyObject *const_str_plain_EVP_PKEY_get1_tls_encodedpoint;
extern PyObject *const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label;
static PyObject *const_list_45c2aad31922174b9e85f35567f07cbb_list;
static PyObject *const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH;
static PyObject *const_str_plain_Cryptography_HAS_FIPS;
static PyObject *const_str_plain_Cryptography_HAS_SSL3_METHOD;
static PyObject *const_str_plain_CRYPTO_lock;
static PyObject *const_str_plain_DTLS_method;
static PyObject *const_str_plain_DTLS_get_link_min_mtu;
static PyObject *const_list_86c40a5c21cefd9f6af8769ff1175caf_list;
static PyObject *const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a;
static PyObject *const_str_plain_DTLS_server_method;
static PyObject *const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1;
static PyObject *const_str_plain_TLS_ST_BEFORE;
static PyObject *const_str_plain_SSL_OP_NO_DTLSv1_2;
static PyObject *const_list_8cf6be4317fa4d6df8e3c06784c94792_list;
static PyObject *const_list_29407ac2cfa5bacd5103ba17ced806aa_list;
extern PyObject *const_str_plain_Cryptography_HAS_RSA_OAEP_MD;
static PyObject *const_list_e42cf9fb2f8a01e0e48c289d44276588_list;
extern PyObject *const_str_plain_EVP_PKEY_set1_tls_encodedpoint;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_Cryptography_HAS_SCT;
static PyObject *const_str_plain_cryptography_has_evp_pkey_dhx;
static PyObject *const_str_plain_CRYPTO_LOCK;
static PyObject *const_str_plain_Cryptography_HAS_SET_CERT_CB;
static PyObject *const_str_plain_cryptography_has_psk;
static PyObject *const_str_plain_SSL_CTX_set1_sigalgs_list;
static PyObject *const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9;
extern PyObject *const_str_plain_CONDITIONAL_NAMES;
static PyObject *const_str_plain_Cryptography_HAS_SSL_ST;
extern PyObject *const_str_plain_EVP_PBE_scrypt;
static PyObject *const_str_plain_SSL_ST_INIT;
static PyObject *const_str_digest_89c6e3f07e56ca3212435467944ee8af;
static PyObject *const_str_plain_FIPS_mode;
static PyObject *const_str_plain_SSL_CTX_set_alpn_select_cb;
extern PyObject *const_str_plain_SCT_LIST_free;
static PyObject *const_str_digest_05e8c3e45ca4a8d1991048b3b057a830;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION;
static PyObject *const_str_plain_Cryptography_HAS_COMPRESSION;
static PyObject *const_str_plain_cryptography_has_openssl_cleanup;
static PyObject *const_list_69b906847d25decb1cda42670e7e5241_list;
static PyObject *const_str_plain_cryptography_has_ssl_st;
static PyObject *const_str_digest_b2405d2434f1275e2b8933b43c529fbe;
static PyObject *const_str_plain_cryptography_has_ssl3_method;
static PyObject *const_str_plain_SSL_CTX_add_client_custom_ext;
static PyObject *const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP;
static PyObject *const_str_plain_CRYPTO_UNLOCK;
static PyObject *const_str_plain_cryptography_has_rsa_oaep_md;
extern PyObject *const_str_plain_SCT_get_version;
static PyObject *const_str_plain_SSLv3_server_method;
static PyObject *const_str_plain_Cryptography_HAS_X25519;
static PyObject *const_str_plain_X509_V_FLAG_PARTIAL_CHAIN;
extern PyObject *const_str_plain_Cryptography_HAS_SCRYPT;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_ip_asc;
static PyObject *const_str_plain_cryptography_has_tls_st;
static PyObject *const_str_plain_EC_curve_nid2nist;
extern PyObject *const_str_plain_Cryptography_HAS_RSA_OAEP_LABEL;
static PyObject *const_list_70d66b11b8b83912e7ed175ae865dfed_list;
static PyObject *const_list_136332fc21a01754e44f9a06545f3713_list;
static PyObject *const_str_plain_CRYPTO_LOCK_SSL;
static PyObject *const_str_plain_cryptography_has_locking_callbacks;
static PyObject *const_str_plain_SSL_get_current_expansion;
static PyObject *const_str_plain_SSL_extension_supported;
static PyObject *const_str_plain_SSL_get0_alpn_selected;
static PyObject *const_str_plain_SSL_get_server_tmp_key;
static PyObject *const_str_plain_SSL_CTX_set_psk_server_callback;
static PyObject *const_list_dc94f69f0c30ec1b61f8690466d0681f_list;
static PyObject *const_list_99d2a9f3afa4bd958ff3177b2faaca12_list;
static PyObject *const_str_plain_Cryptography_HAS_MEM_FUNCTIONS;
static PyObject *const_str_plain_cryptography_has_custom_ext;
static PyObject *const_str_plain_cryptography_has_ec2m;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_128_LOS;
static PyObject *const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list;
static PyObject *const_str_plain_X509_STORE_set_get_issuer;
static PyObject *const_str_plain_Cryptography_HAS_ALPN;
static PyObject *const_str_plain_CRYPTO_READ;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_Cryptography_HAS_EVP_PKEY_DHX;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set_hostflags;
static PyObject *const_str_plain_cryptography_has_ec_1_0_2;
static PyObject *const_str_plain_SSL_CTX_set_cert_cb;
static PyObject *const_str_plain_cryptography_has_ssl_sigalgs;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_ip;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_192_LOS;
static PyObject *const_str_plain_OPENSSL_cleanup;
static PyObject *const_str_plain_SSL_COMP_get_name;
static PyObject *const_str_plain_cryptography_has_fips;
static PyObject *const_str_plain_TLS_ST_OK;
static PyObject *const_str_digest_96e83fdb049b186bfc982a4b37cdf168;
static PyObject *const_str_plain_Cryptography_HAS_SET_ECDH_AUTO;
static PyObject *const_str_plain_Cryptography_HAS_TLS_ST;
static PyObject *const_str_plain_EC_POINT_set_affine_coordinates_GF2m;
static PyObject *const_str_plain_cryptography_has_rsa_oaep_label;
static PyObject *const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list;
static PyObject *const_str_plain_cryptography_has_generic_dtls_method;
extern PyObject *const_str_plain_EVP_PKEY_DHX;
extern PyObject *const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md;
extern PyObject *const_str_plain_RSA_R_PKCS_DECODING_ERROR;
static PyObject *const_list_str_plain_EVP_PBE_scrypt_list;
static PyObject *const_str_plain_FIPS_set_mode;
static PyObject *const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33;
static PyObject *const_list_f501d0e9bfb78a701032fc968ff559f6_list;
static PyObject *const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD;
static PyObject *const_str_plain_X509_STORE_get_get_issuer;
static PyObject *const_list_03133653ae1f779dd1ae650a3a80ba30_list;
static PyObject *const_list_str_plain_SSL_CTX_set_ecdh_auto_list;
static PyObject *const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list;
static PyObject *const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list;
static PyObject *const_str_plain_cryptography_has_get_server_tmp_key;
static PyObject *const_list_a2ccfb1541ef6968650ac43562856e84_list;
static PyObject *const_str_plain_cryptography_has_102_verification_params;
static PyObject *const_str_plain_Cryptography_HAS_LOCKING_CALLBACKS;
static PyObject *const_str_plain_EC_POINT_set_compressed_coordinates_GF2m;
static PyObject *const_list_e5729eb47bb2bb77d896a48e0ba4a292_list;
static PyObject *const_str_plain_cryptography_has_mem_functions;
static PyObject *const_str_plain_cryptography_has_alpn;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_host;
static PyObject *const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED;
extern PyObject *const_str_plain_EC_POINT_get_affine_coordinates_GF2m;
extern PyObject *const_str_plain_SCT_get_timestamp;
extern PyObject *const_str_plain_SCT_get_log_entry_type;
static PyObject *const_str_plain_DTLS_set_link_mtu;
static PyObject *const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list;
static PyObject *const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list;
static PyObject *const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list;
static PyObject *const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH;
static PyObject *const_str_plain_SSL_ST_BEFORE;
static PyObject *const_str_digest_38eba4904dfc59e8c0458109674fe900;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_email;
static PyObject *const_str_plain_cryptography_has_set_cert_cb;
static PyObject *const_list_str_plain_EC_curve_nid2nist_list;
static PyObject *const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_SSL_OP_NO_DTLSv1 = UNSTREAM_STRING( &constant_bin[ 485632 ], 16, 1 );
    const_str_plain_DTLS_client_method = UNSTREAM_STRING( &constant_bin[ 485648 ], 18, 1 );
    const_str_plain_cryptography_has_compression = UNSTREAM_STRING( &constant_bin[ 485666 ], 28, 1 );
    const_str_plain_Cryptography_CRYPTO_set_mem_functions = UNSTREAM_STRING( &constant_bin[ 485694 ], 37, 1 );
    const_str_plain_SSL_CTX_use_psk_identity_hint = UNSTREAM_STRING( &constant_bin[ 485731 ], 29, 1 );
    const_str_plain_Cryptography_HAS_SIGALGS = UNSTREAM_STRING( &constant_bin[ 485760 ], 24, 1 );
    const_str_plain_SSLv3_client_method = UNSTREAM_STRING( &constant_bin[ 485784 ], 19, 1 );
    const_str_plain_SSL_CTX_add_server_custom_ext = UNSTREAM_STRING( &constant_bin[ 485803 ], 29, 1 );
    const_str_digest_fafbfe30544ba42854ed0b86baac5f84 = UNSTREAM_STRING( &constant_bin[ 485832 ], 58, 0 );
    const_str_plain_SSL_ST_RENEGOTIATE = UNSTREAM_STRING( &constant_bin[ 485890 ], 18, 1 );
    const_list_2b0156be132bced5637961a9aa48cb51_list = PyList_New( 2 );
    const_str_plain_X509_STORE_get_get_issuer = UNSTREAM_STRING( &constant_bin[ 485908 ], 25, 1 );
    PyList_SET_ITEM( const_list_2b0156be132bced5637961a9aa48cb51_list, 0, const_str_plain_X509_STORE_get_get_issuer ); Py_INCREF( const_str_plain_X509_STORE_get_get_issuer );
    const_str_plain_X509_STORE_set_get_issuer = UNSTREAM_STRING( &constant_bin[ 485933 ], 25, 1 );
    PyList_SET_ITEM( const_list_2b0156be132bced5637961a9aa48cb51_list, 1, const_str_plain_X509_STORE_set_get_issuer ); Py_INCREF( const_str_plain_X509_STORE_set_get_issuer );
    const_str_plain_SSL_CTX_set_alpn_protos = UNSTREAM_STRING( &constant_bin[ 485958 ], 23, 1 );
    const_str_plain_SSL_get_current_compression = UNSTREAM_STRING( &constant_bin[ 485981 ], 27, 1 );
    const_str_plain_SSL_CTX_set_ecdh_auto = UNSTREAM_STRING( &constant_bin[ 486008 ], 21, 1 );
    const_str_plain_Cryptography_HAS_PSK = UNSTREAM_STRING( &constant_bin[ 486029 ], 20, 1 );
    const_str_plain_SSL_set_alpn_protos = UNSTREAM_STRING( &constant_bin[ 486049 ], 19, 1 );
    const_str_plain_SSLv3_method = UNSTREAM_STRING( &constant_bin[ 486068 ], 12, 1 );
    const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c = UNSTREAM_STRING( &constant_bin[ 486080 ], 50, 1 );
    const_str_plain_SSL_ST_OK = UNSTREAM_STRING( &constant_bin[ 486130 ], 9, 1 );
    const_str_plain_SSL_CTX_set_psk_client_callback = UNSTREAM_STRING( &constant_bin[ 486139 ], 31, 1 );
    const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c = UNSTREAM_STRING( &constant_bin[ 486170 ], 42, 1 );
    const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS = UNSTREAM_STRING( &constant_bin[ 486212 ], 40, 1 );
    const_str_digest_0a25da58d8b65f965de99956a1b5aad7 = UNSTREAM_STRING( &constant_bin[ 486252 ], 42, 1 );
    const_list_str_plain_SSL_get_server_tmp_key_list = PyList_New( 1 );
    const_str_plain_SSL_get_server_tmp_key = UNSTREAM_STRING( &constant_bin[ 486294 ], 22, 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_get_server_tmp_key_list, 0, const_str_plain_SSL_get_server_tmp_key ); Py_INCREF( const_str_plain_SSL_get_server_tmp_key );
    const_str_plain_SSL_get_sigalgs = UNSTREAM_STRING( &constant_bin[ 486316 ], 15, 1 );
    const_str_digest_0134e31627bb74f9df2edcd82a96ece3 = UNSTREAM_STRING( &constant_bin[ 486331 ], 45, 1 );
    const_str_plain_cryptography_has_sct = UNSTREAM_STRING( &constant_bin[ 486376 ], 20, 1 );
    const_str_plain_X509_V_FLAG_TRUSTED_FIRST = UNSTREAM_STRING( &constant_bin[ 486269 ], 25, 1 );
    const_str_plain_Cryptography_HAS_CUSTOM_EXT = UNSTREAM_STRING( &constant_bin[ 486396 ], 27, 1 );
    const_list_str_plain_EVP_PKEY_DHX_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_DHX_list, 0, const_str_plain_EVP_PKEY_DHX ); Py_INCREF( const_str_plain_EVP_PKEY_DHX );
    const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list, 0, const_str_plain_X509_V_FLAG_TRUSTED_FIRST ); Py_INCREF( const_str_plain_X509_V_FLAG_TRUSTED_FIRST );
    const_str_plain_cryptography_has_x25519 = UNSTREAM_STRING( &constant_bin[ 486423 ], 23, 1 );
    const_str_plain_SSL_set_cert_cb = UNSTREAM_STRING( &constant_bin[ 486446 ], 15, 1 );
    const_str_plain_SCT_set_source = UNSTREAM_STRING( &constant_bin[ 486461 ], 14, 1 );
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE = UNSTREAM_STRING( &constant_bin[ 486475 ], 32, 1 );
    const_str_plain_cryptography_has_scrypt = UNSTREAM_STRING( &constant_bin[ 486507 ], 23, 1 );
    const_str_digest_01d108639c365997e3ca830b00895c77 = UNSTREAM_STRING( &constant_bin[ 486530 ], 85, 0 );
    const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY = UNSTREAM_STRING( &constant_bin[ 486615 ], 35, 1 );
    const_str_plain_X509_V_ERR_EMAIL_MISMATCH = UNSTREAM_STRING( &constant_bin[ 486650 ], 25, 1 );
    const_list_str_plain_OPENSSL_cleanup_list = PyList_New( 1 );
    const_str_plain_OPENSSL_cleanup = UNSTREAM_STRING( &constant_bin[ 486675 ], 15, 1 );
    PyList_SET_ITEM( const_list_str_plain_OPENSSL_cleanup_list, 0, const_str_plain_OPENSSL_cleanup ); Py_INCREF( const_str_plain_OPENSSL_cleanup );
    const_str_plain_cryptography_has_set_ecdh_auto = UNSTREAM_STRING( &constant_bin[ 486690 ], 30, 1 );
    const_str_plain_Cryptography_HAS_EC_1_0_2 = UNSTREAM_STRING( &constant_bin[ 486720 ], 25, 1 );
    const_list_45c2aad31922174b9e85f35567f07cbb_list = PyList_New( 8 );
    const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY = UNSTREAM_STRING( &constant_bin[ 486745 ], 31, 1 );
    PyList_SET_ITEM( const_list_45c2aad31922174b9e85f35567f07cbb_list, 0, const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY ); Py_INCREF( const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY );
    const_str_plain_X509_V_FLAG_SUITEB_192_LOS = UNSTREAM_STRING( &constant_bin[ 486776 ], 26, 1 );
    PyList_SET_ITEM( const_list_45c2aad31922174b9e85f35567f07cbb_list, 1, const_str_plain_X509_V_FLAG_SUITEB_192_LOS ); Py_INCREF( const_str_plain_X509_V_FLAG_SUITEB_192_LOS );
    const_str_plain_X509_V_FLAG_SUITEB_128_LOS = UNSTREAM_STRING( &constant_bin[ 486745 ], 26, 1 );
    PyList_SET_ITEM( const_list_45c2aad31922174b9e85f35567f07cbb_list, 2, const_str_plain_X509_V_FLAG_SUITEB_128_LOS ); Py_INCREF( const_str_plain_X509_V_FLAG_SUITEB_128_LOS );
    const_str_plain_X509_VERIFY_PARAM_set1_host = UNSTREAM_STRING( &constant_bin[ 486802 ], 27, 1 );
    PyList_SET_ITEM( const_list_45c2aad31922174b9e85f35567f07cbb_list, 3, const_str_plain_X509_VERIFY_PARAM_set1_host ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_host );
    const_str_plain_X509_VERIFY_PARAM_set1_email = UNSTREAM_STRING( &constant_bin[ 486829 ], 28, 1 );
    PyList_SET_ITEM( const_list_45c2aad31922174b9e85f35567f07cbb_list, 4, const_str_plain_X509_VERIFY_PARAM_set1_email ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_email );
    const_str_plain_X509_VERIFY_PARAM_set1_ip = UNSTREAM_STRING( &constant_bin[ 486857 ], 25, 1 );
    PyList_SET_ITEM( const_list_45c2aad31922174b9e85f35567f07cbb_list, 5, const_str_plain_X509_VERIFY_PARAM_set1_ip ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_ip );
    const_str_plain_X509_VERIFY_PARAM_set1_ip_asc = UNSTREAM_STRING( &constant_bin[ 486882 ], 29, 1 );
    PyList_SET_ITEM( const_list_45c2aad31922174b9e85f35567f07cbb_list, 6, const_str_plain_X509_VERIFY_PARAM_set1_ip_asc ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set1_ip_asc );
    const_str_plain_X509_VERIFY_PARAM_set_hostflags = UNSTREAM_STRING( &constant_bin[ 486911 ], 31, 1 );
    PyList_SET_ITEM( const_list_45c2aad31922174b9e85f35567f07cbb_list, 7, const_str_plain_X509_VERIFY_PARAM_set_hostflags ); Py_INCREF( const_str_plain_X509_VERIFY_PARAM_set_hostflags );
    const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH = UNSTREAM_STRING( &constant_bin[ 486942 ], 28, 1 );
    const_str_plain_Cryptography_HAS_FIPS = UNSTREAM_STRING( &constant_bin[ 486970 ], 21, 1 );
    const_str_plain_Cryptography_HAS_SSL3_METHOD = UNSTREAM_STRING( &constant_bin[ 486991 ], 28, 1 );
    const_str_plain_CRYPTO_lock = UNSTREAM_STRING( &constant_bin[ 487019 ], 11, 1 );
    const_str_plain_DTLS_method = UNSTREAM_STRING( &constant_bin[ 487030 ], 11, 1 );
    const_str_plain_DTLS_get_link_min_mtu = UNSTREAM_STRING( &constant_bin[ 487041 ], 21, 1 );
    const_list_86c40a5c21cefd9f6af8769ff1175caf_list = PyList_New( 9 );
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION = UNSTREAM_STRING( &constant_bin[ 487062 ], 34, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 0, const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION );
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM = UNSTREAM_STRING( &constant_bin[ 487096 ], 36, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 1, const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 2, const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE );
    const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1 = UNSTREAM_STRING( &constant_bin[ 487132 ], 46, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 3, const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1 ); Py_INCREF( const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1 );
    const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED = UNSTREAM_STRING( &constant_bin[ 487178 ], 34, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 4, const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED ); Py_INCREF( const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED );
    const_str_digest_05e8c3e45ca4a8d1991048b3b057a830 = UNSTREAM_STRING( &constant_bin[ 487212 ], 47, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 5, const_str_digest_05e8c3e45ca4a8d1991048b3b057a830 ); Py_INCREF( const_str_digest_05e8c3e45ca4a8d1991048b3b057a830 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 6, const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH ); Py_INCREF( const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 7, const_str_plain_X509_V_ERR_EMAIL_MISMATCH ); Py_INCREF( const_str_plain_X509_V_ERR_EMAIL_MISMATCH );
    const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH = UNSTREAM_STRING( &constant_bin[ 487259 ], 30, 1 );
    PyList_SET_ITEM( const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 8, const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH ); Py_INCREF( const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH );
    const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a = UNSTREAM_STRING( &constant_bin[ 487289 ], 45, 1 );
    const_str_plain_DTLS_server_method = UNSTREAM_STRING( &constant_bin[ 487334 ], 18, 1 );
    const_str_plain_TLS_ST_BEFORE = UNSTREAM_STRING( &constant_bin[ 487352 ], 13, 1 );
    const_str_plain_SSL_OP_NO_DTLSv1_2 = UNSTREAM_STRING( &constant_bin[ 487365 ], 18, 1 );
    const_list_8cf6be4317fa4d6df8e3c06784c94792_list = PyList_New( 3 );
    const_str_plain_EC_POINT_set_affine_coordinates_GF2m = UNSTREAM_STRING( &constant_bin[ 487383 ], 36, 1 );
    PyList_SET_ITEM( const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 0, const_str_plain_EC_POINT_set_affine_coordinates_GF2m ); Py_INCREF( const_str_plain_EC_POINT_set_affine_coordinates_GF2m );
    PyList_SET_ITEM( const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 1, const_str_plain_EC_POINT_get_affine_coordinates_GF2m ); Py_INCREF( const_str_plain_EC_POINT_get_affine_coordinates_GF2m );
    const_str_plain_EC_POINT_set_compressed_coordinates_GF2m = UNSTREAM_STRING( &constant_bin[ 487419 ], 40, 1 );
    PyList_SET_ITEM( const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 2, const_str_plain_EC_POINT_set_compressed_coordinates_GF2m ); Py_INCREF( const_str_plain_EC_POINT_set_compressed_coordinates_GF2m );
    const_list_29407ac2cfa5bacd5103ba17ced806aa_list = PyList_New( 4 );
    const_str_plain_SSL_ST_BEFORE = UNSTREAM_STRING( &constant_bin[ 487459 ], 13, 1 );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 0, const_str_plain_SSL_ST_BEFORE ); Py_INCREF( const_str_plain_SSL_ST_BEFORE );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 1, const_str_plain_SSL_ST_OK ); Py_INCREF( const_str_plain_SSL_ST_OK );
    const_str_plain_SSL_ST_INIT = UNSTREAM_STRING( &constant_bin[ 487472 ], 11, 1 );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 2, const_str_plain_SSL_ST_INIT ); Py_INCREF( const_str_plain_SSL_ST_INIT );
    PyList_SET_ITEM( const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 3, const_str_plain_SSL_ST_RENEGOTIATE ); Py_INCREF( const_str_plain_SSL_ST_RENEGOTIATE );
    const_list_e42cf9fb2f8a01e0e48c289d44276588_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_e42cf9fb2f8a01e0e48c289d44276588_list, 0, const_str_plain_SCT_get_version ); Py_INCREF( const_str_plain_SCT_get_version );
    PyList_SET_ITEM( const_list_e42cf9fb2f8a01e0e48c289d44276588_list, 1, const_str_plain_SCT_get_log_entry_type ); Py_INCREF( const_str_plain_SCT_get_log_entry_type );
    PyList_SET_ITEM( const_list_e42cf9fb2f8a01e0e48c289d44276588_list, 2, const_str_plain_SCT_get0_log_id ); Py_INCREF( const_str_plain_SCT_get0_log_id );
    PyList_SET_ITEM( const_list_e42cf9fb2f8a01e0e48c289d44276588_list, 3, const_str_plain_SCT_get_timestamp ); Py_INCREF( const_str_plain_SCT_get_timestamp );
    PyList_SET_ITEM( const_list_e42cf9fb2f8a01e0e48c289d44276588_list, 4, const_str_plain_SCT_set_source ); Py_INCREF( const_str_plain_SCT_set_source );
    PyList_SET_ITEM( const_list_e42cf9fb2f8a01e0e48c289d44276588_list, 5, const_str_plain_sk_SCT_num ); Py_INCREF( const_str_plain_sk_SCT_num );
    PyList_SET_ITEM( const_list_e42cf9fb2f8a01e0e48c289d44276588_list, 6, const_str_plain_sk_SCT_value ); Py_INCREF( const_str_plain_sk_SCT_value );
    PyList_SET_ITEM( const_list_e42cf9fb2f8a01e0e48c289d44276588_list, 7, const_str_plain_SCT_LIST_free ); Py_INCREF( const_str_plain_SCT_LIST_free );
    const_str_plain_Cryptography_HAS_SCT = UNSTREAM_STRING( &constant_bin[ 487483 ], 20, 1 );
    const_str_plain_cryptography_has_evp_pkey_dhx = UNSTREAM_STRING( &constant_bin[ 487503 ], 29, 1 );
    const_str_plain_CRYPTO_LOCK = UNSTREAM_STRING( &constant_bin[ 487532 ], 11, 1 );
    const_str_plain_Cryptography_HAS_SET_CERT_CB = UNSTREAM_STRING( &constant_bin[ 487543 ], 28, 1 );
    const_str_plain_cryptography_has_psk = UNSTREAM_STRING( &constant_bin[ 487571 ], 20, 1 );
    const_str_plain_SSL_CTX_set1_sigalgs_list = UNSTREAM_STRING( &constant_bin[ 487591 ], 25, 1 );
    const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9 = UNSTREAM_STRING( &constant_bin[ 487616 ], 42, 1 );
    const_str_plain_Cryptography_HAS_SSL_ST = UNSTREAM_STRING( &constant_bin[ 487658 ], 23, 1 );
    const_str_digest_89c6e3f07e56ca3212435467944ee8af = UNSTREAM_STRING( &constant_bin[ 487681 ], 42, 1 );
    const_str_plain_FIPS_mode = UNSTREAM_STRING( &constant_bin[ 487723 ], 9, 1 );
    const_str_plain_SSL_CTX_set_alpn_select_cb = UNSTREAM_STRING( &constant_bin[ 487732 ], 26, 1 );
    const_str_plain_Cryptography_HAS_COMPRESSION = UNSTREAM_STRING( &constant_bin[ 487758 ], 28, 1 );
    const_str_plain_cryptography_has_openssl_cleanup = UNSTREAM_STRING( &constant_bin[ 487786 ], 32, 1 );
    const_list_69b906847d25decb1cda42670e7e5241_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 0, const_str_plain_SSL_CTX_set_alpn_protos ); Py_INCREF( const_str_plain_SSL_CTX_set_alpn_protos );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 1, const_str_plain_SSL_set_alpn_protos ); Py_INCREF( const_str_plain_SSL_set_alpn_protos );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 2, const_str_plain_SSL_CTX_set_alpn_select_cb ); Py_INCREF( const_str_plain_SSL_CTX_set_alpn_select_cb );
    const_str_plain_SSL_get0_alpn_selected = UNSTREAM_STRING( &constant_bin[ 487818 ], 22, 1 );
    PyList_SET_ITEM( const_list_69b906847d25decb1cda42670e7e5241_list, 3, const_str_plain_SSL_get0_alpn_selected ); Py_INCREF( const_str_plain_SSL_get0_alpn_selected );
    const_str_plain_cryptography_has_ssl_st = UNSTREAM_STRING( &constant_bin[ 487840 ], 23, 1 );
    const_str_digest_b2405d2434f1275e2b8933b43c529fbe = UNSTREAM_STRING( &constant_bin[ 487863 ], 42, 1 );
    const_str_plain_cryptography_has_ssl3_method = UNSTREAM_STRING( &constant_bin[ 487905 ], 28, 1 );
    const_str_plain_SSL_CTX_add_client_custom_ext = UNSTREAM_STRING( &constant_bin[ 487933 ], 29, 1 );
    const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP = UNSTREAM_STRING( &constant_bin[ 487962 ], 32, 1 );
    const_str_plain_CRYPTO_UNLOCK = UNSTREAM_STRING( &constant_bin[ 487994 ], 13, 1 );
    const_str_plain_cryptography_has_rsa_oaep_md = UNSTREAM_STRING( &constant_bin[ 488007 ], 28, 1 );
    const_str_plain_SSLv3_server_method = UNSTREAM_STRING( &constant_bin[ 488035 ], 19, 1 );
    const_str_plain_Cryptography_HAS_X25519 = UNSTREAM_STRING( &constant_bin[ 488054 ], 23, 1 );
    const_str_plain_X509_V_FLAG_PARTIAL_CHAIN = UNSTREAM_STRING( &constant_bin[ 488077 ], 25, 1 );
    const_str_plain_cryptography_has_tls_st = UNSTREAM_STRING( &constant_bin[ 488102 ], 23, 1 );
    const_str_plain_EC_curve_nid2nist = UNSTREAM_STRING( &constant_bin[ 488125 ], 17, 1 );
    const_list_70d66b11b8b83912e7ed175ae865dfed_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_70d66b11b8b83912e7ed175ae865dfed_list, 0, const_str_plain_SSL_CTX_set1_sigalgs_list ); Py_INCREF( const_str_plain_SSL_CTX_set1_sigalgs_list );
    PyList_SET_ITEM( const_list_70d66b11b8b83912e7ed175ae865dfed_list, 1, const_str_plain_SSL_get_sigalgs ); Py_INCREF( const_str_plain_SSL_get_sigalgs );
    const_list_136332fc21a01754e44f9a06545f3713_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_136332fc21a01754e44f9a06545f3713_list, 0, const_str_plain_EVP_PKEY_get1_tls_encodedpoint ); Py_INCREF( const_str_plain_EVP_PKEY_get1_tls_encodedpoint );
    PyList_SET_ITEM( const_list_136332fc21a01754e44f9a06545f3713_list, 1, const_str_plain_EVP_PKEY_set1_tls_encodedpoint ); Py_INCREF( const_str_plain_EVP_PKEY_set1_tls_encodedpoint );
    const_str_plain_CRYPTO_LOCK_SSL = UNSTREAM_STRING( &constant_bin[ 488142 ], 15, 1 );
    const_str_plain_cryptography_has_locking_callbacks = UNSTREAM_STRING( &constant_bin[ 488157 ], 34, 1 );
    const_str_plain_SSL_get_current_expansion = UNSTREAM_STRING( &constant_bin[ 488191 ], 25, 1 );
    const_str_plain_SSL_extension_supported = UNSTREAM_STRING( &constant_bin[ 488216 ], 23, 1 );
    const_str_plain_SSL_CTX_set_psk_server_callback = UNSTREAM_STRING( &constant_bin[ 488239 ], 31, 1 );
    const_list_dc94f69f0c30ec1b61f8690466d0681f_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_dc94f69f0c30ec1b61f8690466d0681f_list, 0, const_str_plain_CRYPTO_LOCK ); Py_INCREF( const_str_plain_CRYPTO_LOCK );
    PyList_SET_ITEM( const_list_dc94f69f0c30ec1b61f8690466d0681f_list, 1, const_str_plain_CRYPTO_UNLOCK ); Py_INCREF( const_str_plain_CRYPTO_UNLOCK );
    const_str_plain_CRYPTO_READ = UNSTREAM_STRING( &constant_bin[ 488270 ], 11, 1 );
    PyList_SET_ITEM( const_list_dc94f69f0c30ec1b61f8690466d0681f_list, 2, const_str_plain_CRYPTO_READ ); Py_INCREF( const_str_plain_CRYPTO_READ );
    PyList_SET_ITEM( const_list_dc94f69f0c30ec1b61f8690466d0681f_list, 3, const_str_plain_CRYPTO_LOCK_SSL ); Py_INCREF( const_str_plain_CRYPTO_LOCK_SSL );
    PyList_SET_ITEM( const_list_dc94f69f0c30ec1b61f8690466d0681f_list, 4, const_str_plain_CRYPTO_lock ); Py_INCREF( const_str_plain_CRYPTO_lock );
    const_list_99d2a9f3afa4bd958ff3177b2faaca12_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 0, const_str_plain_SSLv3_method ); Py_INCREF( const_str_plain_SSLv3_method );
    PyList_SET_ITEM( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 1, const_str_plain_SSLv3_client_method ); Py_INCREF( const_str_plain_SSLv3_client_method );
    PyList_SET_ITEM( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 2, const_str_plain_SSLv3_server_method ); Py_INCREF( const_str_plain_SSLv3_server_method );
    const_str_plain_Cryptography_HAS_MEM_FUNCTIONS = UNSTREAM_STRING( &constant_bin[ 488281 ], 30, 1 );
    const_str_plain_cryptography_has_custom_ext = UNSTREAM_STRING( &constant_bin[ 488311 ], 27, 1 );
    const_str_plain_cryptography_has_ec2m = UNSTREAM_STRING( &constant_bin[ 488338 ], 21, 1 );
    const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list, 0, const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md ); Py_INCREF( const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md );
    const_str_plain_Cryptography_HAS_ALPN = UNSTREAM_STRING( &constant_bin[ 488359 ], 21, 1 );
    const_str_plain_cryptography_has_ec_1_0_2 = UNSTREAM_STRING( &constant_bin[ 488380 ], 25, 1 );
    const_str_plain_SSL_CTX_set_cert_cb = UNSTREAM_STRING( &constant_bin[ 488405 ], 19, 1 );
    const_str_plain_cryptography_has_ssl_sigalgs = UNSTREAM_STRING( &constant_bin[ 488424 ], 28, 1 );
    const_str_plain_SSL_COMP_get_name = UNSTREAM_STRING( &constant_bin[ 488452 ], 17, 1 );
    const_str_plain_cryptography_has_fips = UNSTREAM_STRING( &constant_bin[ 488469 ], 21, 1 );
    const_str_plain_TLS_ST_OK = UNSTREAM_STRING( &constant_bin[ 488490 ], 9, 1 );
    const_str_digest_96e83fdb049b186bfc982a4b37cdf168 = UNSTREAM_STRING( &constant_bin[ 488499 ], 42, 1 );
    const_str_plain_Cryptography_HAS_SET_ECDH_AUTO = UNSTREAM_STRING( &constant_bin[ 488541 ], 30, 1 );
    const_str_plain_Cryptography_HAS_TLS_ST = UNSTREAM_STRING( &constant_bin[ 488571 ], 23, 1 );
    const_str_plain_cryptography_has_rsa_oaep_label = UNSTREAM_STRING( &constant_bin[ 488594 ], 31, 1 );
    const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list = PyList_New( 2 );
    const_str_plain_FIPS_set_mode = UNSTREAM_STRING( &constant_bin[ 488625 ], 13, 1 );
    PyList_SET_ITEM( const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list, 0, const_str_plain_FIPS_set_mode ); Py_INCREF( const_str_plain_FIPS_set_mode );
    PyList_SET_ITEM( const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list, 1, const_str_plain_FIPS_mode ); Py_INCREF( const_str_plain_FIPS_mode );
    const_str_plain_cryptography_has_generic_dtls_method = UNSTREAM_STRING( &constant_bin[ 488638 ], 36, 1 );
    const_list_str_plain_EVP_PBE_scrypt_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PBE_scrypt_list, 0, const_str_plain_EVP_PBE_scrypt ); Py_INCREF( const_str_plain_EVP_PBE_scrypt );
    const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33 = UNSTREAM_STRING( &constant_bin[ 488674 ], 42, 1 );
    const_list_f501d0e9bfb78a701032fc968ff559f6_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_f501d0e9bfb78a701032fc968ff559f6_list, 0, const_str_plain_SSL_get_current_compression ); Py_INCREF( const_str_plain_SSL_get_current_compression );
    PyList_SET_ITEM( const_list_f501d0e9bfb78a701032fc968ff559f6_list, 1, const_str_plain_SSL_get_current_expansion ); Py_INCREF( const_str_plain_SSL_get_current_expansion );
    PyList_SET_ITEM( const_list_f501d0e9bfb78a701032fc968ff559f6_list, 2, const_str_plain_SSL_COMP_get_name ); Py_INCREF( const_str_plain_SSL_COMP_get_name );
    const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD = UNSTREAM_STRING( &constant_bin[ 488716 ], 36, 1 );
    const_list_03133653ae1f779dd1ae650a3a80ba30_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_03133653ae1f779dd1ae650a3a80ba30_list, 0, const_str_plain_SSL_CTX_add_client_custom_ext ); Py_INCREF( const_str_plain_SSL_CTX_add_client_custom_ext );
    PyList_SET_ITEM( const_list_03133653ae1f779dd1ae650a3a80ba30_list, 1, const_str_plain_SSL_CTX_add_server_custom_ext ); Py_INCREF( const_str_plain_SSL_CTX_add_server_custom_ext );
    PyList_SET_ITEM( const_list_03133653ae1f779dd1ae650a3a80ba30_list, 2, const_str_plain_SSL_extension_supported ); Py_INCREF( const_str_plain_SSL_extension_supported );
    const_list_str_plain_SSL_CTX_set_ecdh_auto_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_SSL_CTX_set_ecdh_auto_list, 0, const_str_plain_SSL_CTX_set_ecdh_auto ); Py_INCREF( const_str_plain_SSL_CTX_set_ecdh_auto );
    const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list, 0, const_str_plain_EVP_PKEY_X25519 ); Py_INCREF( const_str_plain_EVP_PKEY_X25519 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list, 1, const_str_plain_NID_X25519 ); Py_INCREF( const_str_plain_NID_X25519 );
    const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list, 0, const_str_plain_TLS_ST_BEFORE ); Py_INCREF( const_str_plain_TLS_ST_BEFORE );
    PyList_SET_ITEM( const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list, 1, const_str_plain_TLS_ST_OK ); Py_INCREF( const_str_plain_TLS_ST_OK );
    const_str_plain_cryptography_has_get_server_tmp_key = UNSTREAM_STRING( &constant_bin[ 488752 ], 35, 1 );
    const_list_a2ccfb1541ef6968650ac43562856e84_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 0, const_str_plain_DTLS_method ); Py_INCREF( const_str_plain_DTLS_method );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 1, const_str_plain_DTLS_server_method ); Py_INCREF( const_str_plain_DTLS_server_method );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 2, const_str_plain_DTLS_client_method ); Py_INCREF( const_str_plain_DTLS_client_method );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 3, const_str_plain_SSL_OP_NO_DTLSv1 ); Py_INCREF( const_str_plain_SSL_OP_NO_DTLSv1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 4, const_str_plain_SSL_OP_NO_DTLSv1_2 ); Py_INCREF( const_str_plain_SSL_OP_NO_DTLSv1_2 );
    const_str_plain_DTLS_set_link_mtu = UNSTREAM_STRING( &constant_bin[ 488787 ], 17, 1 );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 5, const_str_plain_DTLS_set_link_mtu ); Py_INCREF( const_str_plain_DTLS_set_link_mtu );
    PyList_SET_ITEM( const_list_a2ccfb1541ef6968650ac43562856e84_list, 6, const_str_plain_DTLS_get_link_min_mtu ); Py_INCREF( const_str_plain_DTLS_get_link_min_mtu );
    const_str_plain_cryptography_has_102_verification_params = UNSTREAM_STRING( &constant_bin[ 488804 ], 40, 1 );
    const_str_plain_Cryptography_HAS_LOCKING_CALLBACKS = UNSTREAM_STRING( &constant_bin[ 488844 ], 34, 1 );
    const_list_e5729eb47bb2bb77d896a48e0ba4a292_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 0, const_str_plain_SSL_CTX_use_psk_identity_hint ); Py_INCREF( const_str_plain_SSL_CTX_use_psk_identity_hint );
    PyList_SET_ITEM( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 1, const_str_plain_SSL_CTX_set_psk_server_callback ); Py_INCREF( const_str_plain_SSL_CTX_set_psk_server_callback );
    PyList_SET_ITEM( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 2, const_str_plain_SSL_CTX_set_psk_client_callback ); Py_INCREF( const_str_plain_SSL_CTX_set_psk_client_callback );
    const_str_plain_cryptography_has_mem_functions = UNSTREAM_STRING( &constant_bin[ 488878 ], 30, 1 );
    const_str_plain_cryptography_has_alpn = UNSTREAM_STRING( &constant_bin[ 488908 ], 21, 1 );
    const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list, 0, const_str_plain_SSL_CTX_set_cert_cb ); Py_INCREF( const_str_plain_SSL_CTX_set_cert_cb );
    PyList_SET_ITEM( const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list, 1, const_str_plain_SSL_set_cert_cb ); Py_INCREF( const_str_plain_SSL_set_cert_cb );
    const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list, 0, const_str_plain_Cryptography_CRYPTO_set_mem_functions ); Py_INCREF( const_str_plain_Cryptography_CRYPTO_set_mem_functions );
    const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list, 0, const_str_plain_X509_V_FLAG_PARTIAL_CHAIN ); Py_INCREF( const_str_plain_X509_V_FLAG_PARTIAL_CHAIN );
    const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list, 0, const_str_plain_RSA_R_PKCS_DECODING_ERROR ); Py_INCREF( const_str_plain_RSA_R_PKCS_DECODING_ERROR );
    const_str_digest_38eba4904dfc59e8c0458109674fe900 = UNSTREAM_STRING( &constant_bin[ 488929 ], 50, 1 );
    const_str_plain_cryptography_has_set_cert_cb = UNSTREAM_STRING( &constant_bin[ 488979 ], 28, 1 );
    const_list_str_plain_EC_curve_nid2nist_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EC_curve_nid2nist_list, 0, const_str_plain_EC_curve_nid2nist ); Py_INCREF( const_str_plain_EC_curve_nid2nist );
    const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list, 0, const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label ); Py_INCREF( const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$bindings$openssl$_conditional( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_870bcc1b0cab9d6e1fad34c0d16896aa;
static PyCodeObject *codeobj_5ae0a8b23f51e033a17c76dc2c1486f2;
static PyCodeObject *codeobj_c81eb595c971f1596c3998caffbb47b3;
static PyCodeObject *codeobj_4003b55736c51c9745aeddaf3c92276e;
static PyCodeObject *codeobj_0e73185b5acf218b8eeb4cc49f214ef9;
static PyCodeObject *codeobj_5b2a07f9779f623a17bfa93570db3f05;
static PyCodeObject *codeobj_31fc5e130630ce53433cbf53998c46fb;
static PyCodeObject *codeobj_b0279eb7f7232ecd9d2b712dc0cec2d1;
static PyCodeObject *codeobj_8db28dab5a05b5cd415ba72bc8b3926b;
static PyCodeObject *codeobj_3066003b2b323532a0517ee4540c71dd;
static PyCodeObject *codeobj_e1690eca099ce28649da7eeaa4128d6b;
static PyCodeObject *codeobj_ea30cade05eaa1d23479ec0e8f069e91;
static PyCodeObject *codeobj_ef5c74a70601c07bf0792d999a62e88c;
static PyCodeObject *codeobj_204ebee159c29f344b4f32f67affee29;
static PyCodeObject *codeobj_d9c55832b71cd86486fdcb97a8181679;
static PyCodeObject *codeobj_1795ec5c5c03761f5b8b2df252d425fb;
static PyCodeObject *codeobj_749d1d7e9393b0f9e06ca4f7087f86bf;
static PyCodeObject *codeobj_d0bfc51e9162754b4f6506db05b3c15d;
static PyCodeObject *codeobj_08c6f332926f3a12d762e5d8f44c2ebf;
static PyCodeObject *codeobj_c747de5a7d6857dc34fe1bc88c72a9cb;
static PyCodeObject *codeobj_da96252f938ab522d57aea7e78b940ba;
static PyCodeObject *codeobj_3f1862dff2ac3fe550da6699be877497;
static PyCodeObject *codeobj_e658c73a2832ef0424a4b5fe1afb784c;
static PyCodeObject *codeobj_51e361eed9939ff1924488e5216a2349;
static PyCodeObject *codeobj_ce6f03ea711c7ec5c25e300409ec30b6;
static PyCodeObject *codeobj_f4e29c79fd6cbca8d4b9a4bd6795483e;
static PyCodeObject *codeobj_f251f1851735a266c79ec4c2da63d9be;
static PyCodeObject *codeobj_261779867715a8357671682097c0b920;
static PyCodeObject *codeobj_b6c23c0eb2f273d0d4e8e9f41099c52a;
static PyCodeObject *codeobj_4ddf3ee4e08a7bcfa73f36f90c294408;
static PyCodeObject *codeobj_5f135469fbda8faee9fd92b809657ca6;
static PyCodeObject *codeobj_0cc29ebc53e77db834df0c7e120a7937;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_01d108639c365997e3ca830b00895c77;
    codeobj_870bcc1b0cab9d6e1fad34c0d16896aa = MAKE_CODEOBJ( module_filename_obj, const_str_digest_fafbfe30544ba42854ed0b86baac5f84, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5ae0a8b23f51e033a17c76dc2c1486f2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0134e31627bb74f9df2edcd82a96ece3, 77, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c81eb595c971f1596c3998caffbb47b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_102_verification_params, 91, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4003b55736c51c9745aeddaf3c92276e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_alpn, 54, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0e73185b5acf218b8eeb4cc49f214ef9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_compression, 63, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5b2a07f9779f623a17bfa93570db3f05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_custom_ext, 235, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_31fc5e130630ce53433cbf53998c46fb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ec2m, 8, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b0279eb7f7232ecd9d2b712dc0cec2d1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ec_1_0_2, 16, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8db28dab5a05b5cd415ba72bc8b3926b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_evp_pkey_dhx, 167, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3066003b2b323532a0517ee4540c71dd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_38eba4904dfc59e8c0458109674fe900, 206, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e1690eca099ce28649da7eeaa4128d6b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_fips, 213, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ea30cade05eaa1d23479ec0e8f069e91 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_generic_dtls_method, 155, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef5c74a70601c07bf0792d999a62e88c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_get_server_tmp_key, 71, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_204ebee159c29f344b4f32f67affee29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_locking_callbacks, 139, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9c55832b71cd86486fdcb97a8181679 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_mem_functions, 173, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1795ec5c5c03761f5b8b2df252d425fb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_openssl_cleanup, 243, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_749d1d7e9393b0f9e06ca4f7087f86bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_psk, 227, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0bfc51e9162754b4f6506db05b3c15d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_rsa_oaep_label, 40, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_08c6f332926f3a12d762e5d8f44c2ebf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_rsa_oaep_md, 34, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c747de5a7d6857dc34fe1bc88c72a9cb = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9, 28, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_da96252f938ab522d57aea7e78b940ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_scrypt, 149, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3f1862dff2ac3fe550da6699be877497 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_sct, 179, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e658c73a2832ef0424a4b5fe1afb784c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_set_cert_cb, 116, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_51e361eed9939ff1924488e5216a2349 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_set_ecdh_auto, 22, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce6f03ea711c7ec5c25e300409ec30b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ssl3_method, 46, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f4e29c79fd6cbca8d4b9a4bd6795483e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ssl_sigalgs, 220, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f251f1851735a266c79ec4c2da63d9be = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_ssl_st, 123, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_261779867715a8357671682097c0b920 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_tls_st, 132, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b6c23c0eb2f273d0d4e8e9f41099c52a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cryptography_has_x25519, 199, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4ddf3ee4e08a7bcfa73f36f90c294408 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33, 192, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5f135469fbda8faee9fd92b809657ca6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_89c6e3f07e56ca3212435467944ee8af, 110, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0cc29ebc53e77db834df0c7e120a7937 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b2405d2434f1275e2b8933b43c529fbe, 104, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_x509_v_flag_trusted_first(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_partial_chain(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_set_cert_cb(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_ssl_st(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_tls_st(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_locking_callbacks(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_scrypt(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_generic_dtls_method(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_evp_pkey_dhx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_mem_functions(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_sct(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_x509_store_ctx_get_issuer(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x25519(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_evp_pkey_get_set_tls_encodedpoint(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_fips(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ssl_sigalgs(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_psk(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_custom_ext(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_openssl_cleanup(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_8cf6be4317fa4d6df8e3c06784c94792_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_EC_curve_nid2nist_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2 );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_SSL_CTX_set_ecdh_auto_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_99d2a9f3afa4bd958ff3177b2faaca12_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_69b906847d25decb1cda42670e7e5241_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_f501d0e9bfb78a701032fc968ff559f6_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_SSL_get_server_tmp_key_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_86c40a5c21cefd9f6af8769ff1175caf_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_45c2aad31922174b9e85f35567f07cbb_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_x509_v_flag_trusted_first( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_x509_v_flag_trusted_first );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_partial_chain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_partial_chain );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_set_cert_cb( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_set_cert_cb );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_ssl_st( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_29407ac2cfa5bacd5103ba17ced806aa_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_ssl_st );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_tls_st( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_tls_st );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_locking_callbacks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_dc94f69f0c30ec1b61f8690466d0681f_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_locking_callbacks );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_scrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PBE_scrypt_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_scrypt );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_generic_dtls_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_a2ccfb1541ef6968650ac43562856e84_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_generic_dtls_method );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_evp_pkey_dhx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_DHX_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_evp_pkey_dhx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_mem_functions( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_mem_functions );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_sct( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_e42cf9fb2f8a01e0e48c289d44276588_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_sct );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_x509_store_ctx_get_issuer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_2b0156be132bced5637961a9aa48cb51_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_x509_store_ctx_get_issuer );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x25519( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x25519 );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_evp_pkey_get_set_tls_encodedpoint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_136332fc21a01754e44f9a06545f3713_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_evp_pkey_get_set_tls_encodedpoint );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_fips( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_fips );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ssl_sigalgs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_70d66b11b8b83912e7ed175ae865dfed_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ssl_sigalgs );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_psk( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_e5729eb47bb2bb77d896a48e0ba4a292_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_psk );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_custom_ext( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_03133653ae1f779dd1ae650a3a80ba30_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_custom_ext );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_openssl_cleanup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function code.
    {
    tmp_return_value = LIST_COPY( const_list_str_plain_OPENSSL_cleanup_list );
    goto function_return_exit;
    }

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_openssl_cleanup );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key,
        const_str_plain_cryptography_has_get_server_tmp_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ef5c74a70601c07bf0792d999a62e88c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes,
        const_str_digest_0134e31627bb74f9df2edcd82a96ece3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5ae0a8b23f51e033a17c76dc2c1486f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params,
        const_str_plain_cryptography_has_102_verification_params,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c81eb595c971f1596c3998caffbb47b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_x509_v_flag_trusted_first(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_x509_v_flag_trusted_first,
        const_str_digest_b2405d2434f1275e2b8933b43c529fbe,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0cc29ebc53e77db834df0c7e120a7937,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_partial_chain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_partial_chain,
        const_str_digest_89c6e3f07e56ca3212435467944ee8af,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5f135469fbda8faee9fd92b809657ca6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_set_cert_cb(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_set_cert_cb,
        const_str_plain_cryptography_has_set_cert_cb,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e658c73a2832ef0424a4b5fe1afb784c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_ssl_st(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_ssl_st,
        const_str_plain_cryptography_has_ssl_st,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f251f1851735a266c79ec4c2da63d9be,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_tls_st(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_tls_st,
        const_str_plain_cryptography_has_tls_st,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_261779867715a8357671682097c0b920,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_locking_callbacks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_locking_callbacks,
        const_str_plain_cryptography_has_locking_callbacks,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_204ebee159c29f344b4f32f67affee29,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_scrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_scrypt,
        const_str_plain_cryptography_has_scrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_da96252f938ab522d57aea7e78b940ba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m,
        const_str_plain_cryptography_has_ec2m,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_31fc5e130630ce53433cbf53998c46fb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_generic_dtls_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_generic_dtls_method,
        const_str_plain_cryptography_has_generic_dtls_method,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ea30cade05eaa1d23479ec0e8f069e91,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_evp_pkey_dhx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_evp_pkey_dhx,
        const_str_plain_cryptography_has_evp_pkey_dhx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8db28dab5a05b5cd415ba72bc8b3926b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_mem_functions(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_mem_functions,
        const_str_plain_cryptography_has_mem_functions,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d9c55832b71cd86486fdcb97a8181679,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_sct(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_sct,
        const_str_plain_cryptography_has_sct,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3f1862dff2ac3fe550da6699be877497,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_x509_store_ctx_get_issuer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_x509_store_ctx_get_issuer,
        const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ddf3ee4e08a7bcfa73f36f90c294408,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x25519(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x25519,
        const_str_plain_cryptography_has_x25519,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b6c23c0eb2f273d0d4e8e9f41099c52a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_evp_pkey_get_set_tls_encodedpoint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
        const_str_digest_38eba4904dfc59e8c0458109674fe900,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3066003b2b323532a0517ee4540c71dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_fips(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_fips,
        const_str_plain_cryptography_has_fips,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e1690eca099ce28649da7eeaa4128d6b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ssl_sigalgs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ssl_sigalgs,
        const_str_plain_cryptography_has_ssl_sigalgs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f4e29c79fd6cbca8d4b9a4bd6795483e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_psk(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_psk,
        const_str_plain_cryptography_has_psk,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_749d1d7e9393b0f9e06ca4f7087f86bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2,
        const_str_plain_cryptography_has_ec_1_0_2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b0279eb7f7232ecd9d2b712dc0cec2d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_custom_ext(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_custom_ext,
        const_str_plain_cryptography_has_custom_ext,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5b2a07f9779f623a17bfa93570db3f05,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_openssl_cleanup(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_openssl_cleanup,
        const_str_plain_cryptography_has_openssl_cleanup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1795ec5c5c03761f5b8b2df252d425fb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto,
        const_str_plain_cryptography_has_set_ecdh_auto,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_51e361eed9939ff1924488e5216a2349,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error,
        const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c747de5a7d6857dc34fe1bc88c72a9cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md,
        const_str_plain_cryptography_has_rsa_oaep_md,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_08c6f332926f3a12d762e5d8f44c2ebf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label,
        const_str_plain_cryptography_has_rsa_oaep_label,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d0bfc51e9162754b4f6506db05b3c15d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method,
        const_str_plain_cryptography_has_ssl3_method,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ce6f03ea711c7ec5c25e300409ec30b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn,
        const_str_plain_cryptography_has_alpn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4003b55736c51c9745aeddaf3c92276e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression,
        const_str_plain_cryptography_has_compression,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0e73185b5acf218b8eeb4cc49f214ef9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$bindings$openssl$_conditional =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.bindings.openssl._conditional",   /* m_name */
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

MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$_conditional )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$bindings$openssl$_conditional );
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
    puts("cryptography.hazmat.bindings.openssl._conditional: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$bindings$openssl$_conditional" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$bindings$openssl$_conditional = Py_InitModule4(
        "cryptography.hazmat.bindings.openssl._conditional",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$bindings$openssl$_conditional = PyModule_Create( &mdef_cryptography$hazmat$bindings$openssl$_conditional );
#endif

    moduledict_cryptography$hazmat$bindings$openssl$_conditional = MODULE_DICT( module_cryptography$hazmat$bindings$openssl$_conditional );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$bindings$openssl$_conditional );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_6c6405718530cbdfc8da1bb69c050727, module_cryptography$hazmat$bindings$openssl$_conditional );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_870bcc1b0cab9d6e1fad34c0d16896aa;
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

    // Module code.
    {
    PyObject *tmp_assign_source_1;
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
    PyObject *tmp_assign_source_2;
    tmp_assign_source_2 = const_str_digest_01d108639c365997e3ca830b00895c77;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
    PyObject *tmp_assign_source_3;
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
    PyObject *tmp_assign_source_4;
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( !(tmp_assign_source_4 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    }
    // Frame without reuse.
    frame_870bcc1b0cab9d6e1fad34c0d16896aa = MAKE_MODULE_FRAME( codeobj_870bcc1b0cab9d6e1fad34c0d16896aa, module_cryptography$hazmat$bindings$openssl$_conditional );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_870bcc1b0cab9d6e1fad34c0d16896aa );
    assert( Py_REFCNT( frame_870bcc1b0cab9d6e1fad34c0d16896aa ) == 2 );

    // Framed code:
    {
    // Tried code:
    {
    PyObject *tmp_assign_source_5;
    PyObject *tmp_import_name_from_1;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_1 = tmp_import_from_1__module;
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    }
    {
    PyObject *tmp_assign_source_6;
    PyObject *tmp_import_name_from_2;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_2 = tmp_import_from_1__module;
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    }
    {
    PyObject *tmp_assign_source_7;
    PyObject *tmp_import_name_from_3;
    CHECK_OBJECT( tmp_import_from_1__module );
    tmp_import_name_from_3 = tmp_import_from_1__module;
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_870bcc1b0cab9d6e1fad34c0d16896aa );
#endif
    popFrameStack();

    assertFrameObject( frame_870bcc1b0cab9d6e1fad34c0d16896aa );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_870bcc1b0cab9d6e1fad34c0d16896aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_870bcc1b0cab9d6e1fad34c0d16896aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_870bcc1b0cab9d6e1fad34c0d16896aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_870bcc1b0cab9d6e1fad34c0d16896aa, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    }
    {
    PyObject *tmp_assign_source_8;
    tmp_assign_source_8 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m, tmp_assign_source_8 );
    }
    {
    PyObject *tmp_assign_source_9;
    tmp_assign_source_9 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2, tmp_assign_source_9 );
    }
    {
    PyObject *tmp_assign_source_10;
    tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto, tmp_assign_source_10 );
    }
    {
    PyObject *tmp_assign_source_11;
    tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9, tmp_assign_source_11 );
    }
    {
    PyObject *tmp_assign_source_12;
    tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md, tmp_assign_source_12 );
    }
    {
    PyObject *tmp_assign_source_13;
    tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label, tmp_assign_source_13 );
    }
    {
    PyObject *tmp_assign_source_14;
    tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method, tmp_assign_source_14 );
    }
    {
    PyObject *tmp_assign_source_15;
    tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn, tmp_assign_source_15 );
    }
    {
    PyObject *tmp_assign_source_16;
    tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression, tmp_assign_source_16 );
    }
    {
    PyObject *tmp_assign_source_17;
    tmp_assign_source_17 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key, tmp_assign_source_17 );
    }
    {
    PyObject *tmp_assign_source_18;
    tmp_assign_source_18 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3, tmp_assign_source_18 );
    }
    {
    PyObject *tmp_assign_source_19;
    tmp_assign_source_19 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params, tmp_assign_source_19 );
    }
    {
    PyObject *tmp_assign_source_20;
    tmp_assign_source_20 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_x509_v_flag_trusted_first(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe, tmp_assign_source_20 );
    }
    {
    PyObject *tmp_assign_source_21;
    tmp_assign_source_21 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_partial_chain(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af, tmp_assign_source_21 );
    }
    {
    PyObject *tmp_assign_source_22;
    tmp_assign_source_22 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_set_cert_cb(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb, tmp_assign_source_22 );
    }
    {
    PyObject *tmp_assign_source_23;
    tmp_assign_source_23 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_ssl_st(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st, tmp_assign_source_23 );
    }
    {
    PyObject *tmp_assign_source_24;
    tmp_assign_source_24 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_tls_st(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st, tmp_assign_source_24 );
    }
    {
    PyObject *tmp_assign_source_25;
    tmp_assign_source_25 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_locking_callbacks(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks, tmp_assign_source_25 );
    }
    {
    PyObject *tmp_assign_source_26;
    tmp_assign_source_26 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_scrypt(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt, tmp_assign_source_26 );
    }
    {
    PyObject *tmp_assign_source_27;
    tmp_assign_source_27 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_generic_dtls_method(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method, tmp_assign_source_27 );
    }
    {
    PyObject *tmp_assign_source_28;
    tmp_assign_source_28 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_evp_pkey_dhx(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx, tmp_assign_source_28 );
    }
    {
    PyObject *tmp_assign_source_29;
    tmp_assign_source_29 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_mem_functions(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions, tmp_assign_source_29 );
    }
    {
    PyObject *tmp_assign_source_30;
    tmp_assign_source_30 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_sct(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct, tmp_assign_source_30 );
    }
    {
    PyObject *tmp_assign_source_31;
    tmp_assign_source_31 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_x509_store_ctx_get_issuer(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33, tmp_assign_source_31 );
    }
    {
    PyObject *tmp_assign_source_32;
    tmp_assign_source_32 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x25519(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519, tmp_assign_source_32 );
    }
    {
    PyObject *tmp_assign_source_33;
    tmp_assign_source_33 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_evp_pkey_get_set_tls_encodedpoint(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900, tmp_assign_source_33 );
    }
    {
    PyObject *tmp_assign_source_34;
    tmp_assign_source_34 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_fips(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips, tmp_assign_source_34 );
    }
    {
    PyObject *tmp_assign_source_35;
    tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ssl_sigalgs(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs, tmp_assign_source_35 );
    }
    {
    PyObject *tmp_assign_source_36;
    tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_psk(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk, tmp_assign_source_36 );
    }
    {
    PyObject *tmp_assign_source_37;
    tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_custom_ext(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext, tmp_assign_source_37 );
    }
    {
    PyObject *tmp_assign_source_38;
    tmp_assign_source_38 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_openssl_cleanup(  );



    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup, tmp_assign_source_38 );
    }
    {
    PyObject *tmp_assign_source_39;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_mvar_value_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_mvar_value_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_mvar_value_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_mvar_value_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_mvar_value_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_mvar_value_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_mvar_value_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_mvar_value_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_mvar_value_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_mvar_value_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_mvar_value_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_mvar_value_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_mvar_value_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_mvar_value_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_mvar_value_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_mvar_value_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_mvar_value_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_mvar_value_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_mvar_value_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_mvar_value_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_mvar_value_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_mvar_value_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_mvar_value_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_mvar_value_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_mvar_value_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_mvar_value_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_mvar_value_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_mvar_value_28;
    PyObject *tmp_dict_key_29;
    PyObject *tmp_dict_value_29;
    PyObject *tmp_mvar_value_29;
    PyObject *tmp_dict_key_30;
    PyObject *tmp_dict_value_30;
    PyObject *tmp_mvar_value_30;
    PyObject *tmp_dict_key_31;
    PyObject *tmp_dict_value_31;
    PyObject *tmp_mvar_value_31;
    tmp_dict_key_1 = const_str_plain_Cryptography_HAS_EC2M;
    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m );

    if (unlikely( tmp_mvar_value_1 == NULL ))
    {
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m );
    }

    CHECK_OBJECT( tmp_mvar_value_1 );
    tmp_dict_value_1 = tmp_mvar_value_1;
    tmp_assign_source_39 = _PyDict_NewPresized( 31 );
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_Cryptography_HAS_EC_1_0_2;
    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2 );

    if (unlikely( tmp_mvar_value_2 == NULL ))
    {
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2 );
    }

    CHECK_OBJECT( tmp_mvar_value_2 );
    tmp_dict_value_2 = tmp_mvar_value_2;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_Cryptography_HAS_SET_ECDH_AUTO;
    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto );

    if (unlikely( tmp_mvar_value_3 == NULL ))
    {
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto );
    }

    CHECK_OBJECT( tmp_mvar_value_3 );
    tmp_dict_value_3 = tmp_mvar_value_3;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_digest_f2f56e52e9bead94215489df18f9e023;
    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9 );

    if (unlikely( tmp_mvar_value_4 == NULL ))
    {
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9 );
    }

    CHECK_OBJECT( tmp_mvar_value_4 );
    tmp_dict_value_4 = tmp_mvar_value_4;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_Cryptography_HAS_RSA_OAEP_MD;
    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md );

    if (unlikely( tmp_mvar_value_5 == NULL ))
    {
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md );
    }

    CHECK_OBJECT( tmp_mvar_value_5 );
    tmp_dict_value_5 = tmp_mvar_value_5;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_Cryptography_HAS_RSA_OAEP_LABEL;
    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label );

    if (unlikely( tmp_mvar_value_6 == NULL ))
    {
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label );
    }

    CHECK_OBJECT( tmp_mvar_value_6 );
    tmp_dict_value_6 = tmp_mvar_value_6;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_Cryptography_HAS_SSL3_METHOD;
    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method );

    if (unlikely( tmp_mvar_value_7 == NULL ))
    {
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method );
    }

    CHECK_OBJECT( tmp_mvar_value_7 );
    tmp_dict_value_7 = tmp_mvar_value_7;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_Cryptography_HAS_ALPN;
    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn );

    if (unlikely( tmp_mvar_value_8 == NULL ))
    {
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn );
    }

    CHECK_OBJECT( tmp_mvar_value_8 );
    tmp_dict_value_8 = tmp_mvar_value_8;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_Cryptography_HAS_COMPRESSION;
    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression );

    if (unlikely( tmp_mvar_value_9 == NULL ))
    {
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression );
    }

    CHECK_OBJECT( tmp_mvar_value_9 );
    tmp_dict_value_9 = tmp_mvar_value_9;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY;
    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key );

    if (unlikely( tmp_mvar_value_10 == NULL ))
    {
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key );
    }

    CHECK_OBJECT( tmp_mvar_value_10 );
    tmp_dict_value_10 = tmp_mvar_value_10;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a;
    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3 );

    if (unlikely( tmp_mvar_value_11 == NULL ))
    {
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3 );
    }

    CHECK_OBJECT( tmp_mvar_value_11 );
    tmp_dict_value_11 = tmp_mvar_value_11;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_12 = const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS;
    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params );

    if (unlikely( tmp_mvar_value_12 == NULL ))
    {
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params );
    }

    CHECK_OBJECT( tmp_mvar_value_12 );
    tmp_dict_value_12 = tmp_mvar_value_12;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_13 = const_str_digest_0a25da58d8b65f965de99956a1b5aad7;
    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe );

    if (unlikely( tmp_mvar_value_13 == NULL ))
    {
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe );
    }

    CHECK_OBJECT( tmp_mvar_value_13 );
    tmp_dict_value_13 = tmp_mvar_value_13;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_14 = const_str_digest_96e83fdb049b186bfc982a4b37cdf168;
    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af );

    if (unlikely( tmp_mvar_value_14 == NULL ))
    {
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af );
    }

    CHECK_OBJECT( tmp_mvar_value_14 );
    tmp_dict_value_14 = tmp_mvar_value_14;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_15 = const_str_plain_Cryptography_HAS_SET_CERT_CB;
    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb );

    if (unlikely( tmp_mvar_value_15 == NULL ))
    {
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb );
    }

    CHECK_OBJECT( tmp_mvar_value_15 );
    tmp_dict_value_15 = tmp_mvar_value_15;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_16 = const_str_plain_Cryptography_HAS_SSL_ST;
    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st );

    if (unlikely( tmp_mvar_value_16 == NULL ))
    {
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st );
    }

    CHECK_OBJECT( tmp_mvar_value_16 );
    tmp_dict_value_16 = tmp_mvar_value_16;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_17 = const_str_plain_Cryptography_HAS_TLS_ST;
    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st );

    if (unlikely( tmp_mvar_value_17 == NULL ))
    {
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st );
    }

    CHECK_OBJECT( tmp_mvar_value_17 );
    tmp_dict_value_17 = tmp_mvar_value_17;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_18 = const_str_plain_Cryptography_HAS_LOCKING_CALLBACKS;
    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks );

    if (unlikely( tmp_mvar_value_18 == NULL ))
    {
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks );
    }

    CHECK_OBJECT( tmp_mvar_value_18 );
    tmp_dict_value_18 = tmp_mvar_value_18;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_19 = const_str_plain_Cryptography_HAS_SCRYPT;
    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt );

    if (unlikely( tmp_mvar_value_19 == NULL ))
    {
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt );
    }

    CHECK_OBJECT( tmp_mvar_value_19 );
    tmp_dict_value_19 = tmp_mvar_value_19;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_19, tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_20 = const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD;
    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method );

    if (unlikely( tmp_mvar_value_20 == NULL ))
    {
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method );
    }

    CHECK_OBJECT( tmp_mvar_value_20 );
    tmp_dict_value_20 = tmp_mvar_value_20;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_21 = const_str_plain_Cryptography_HAS_EVP_PKEY_DHX;
    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx );

    if (unlikely( tmp_mvar_value_21 == NULL ))
    {
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx );
    }

    CHECK_OBJECT( tmp_mvar_value_21 );
    tmp_dict_value_21 = tmp_mvar_value_21;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_22 = const_str_plain_Cryptography_HAS_MEM_FUNCTIONS;
    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions );

    if (unlikely( tmp_mvar_value_22 == NULL ))
    {
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions );
    }

    CHECK_OBJECT( tmp_mvar_value_22 );
    tmp_dict_value_22 = tmp_mvar_value_22;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_22, tmp_dict_value_22 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_23 = const_str_plain_Cryptography_HAS_SCT;
    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct );

    if (unlikely( tmp_mvar_value_23 == NULL ))
    {
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct );
    }

    CHECK_OBJECT( tmp_mvar_value_23 );
    tmp_dict_value_23 = tmp_mvar_value_23;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_23, tmp_dict_value_23 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_24 = const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c;
    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33 );

    if (unlikely( tmp_mvar_value_24 == NULL ))
    {
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33 );
    }

    CHECK_OBJECT( tmp_mvar_value_24 );
    tmp_dict_value_24 = tmp_mvar_value_24;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_24, tmp_dict_value_24 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_25 = const_str_plain_Cryptography_HAS_X25519;
    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519 );

    if (unlikely( tmp_mvar_value_25 == NULL ))
    {
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519 );
    }

    CHECK_OBJECT( tmp_mvar_value_25 );
    tmp_dict_value_25 = tmp_mvar_value_25;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_25, tmp_dict_value_25 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_26 = const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c;
    tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900 );

    if (unlikely( tmp_mvar_value_26 == NULL ))
    {
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900 );
    }

    CHECK_OBJECT( tmp_mvar_value_26 );
    tmp_dict_value_26 = tmp_mvar_value_26;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_26, tmp_dict_value_26 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_27 = const_str_plain_Cryptography_HAS_FIPS;
    tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips );

    if (unlikely( tmp_mvar_value_27 == NULL ))
    {
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips );
    }

    CHECK_OBJECT( tmp_mvar_value_27 );
    tmp_dict_value_27 = tmp_mvar_value_27;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_27, tmp_dict_value_27 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_28 = const_str_plain_Cryptography_HAS_SIGALGS;
    tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs );

    if (unlikely( tmp_mvar_value_28 == NULL ))
    {
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs );
    }

    CHECK_OBJECT( tmp_mvar_value_28 );
    tmp_dict_value_28 = tmp_mvar_value_28;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_28, tmp_dict_value_28 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_29 = const_str_plain_Cryptography_HAS_PSK;
    tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk );

    if (unlikely( tmp_mvar_value_29 == NULL ))
    {
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk );
    }

    CHECK_OBJECT( tmp_mvar_value_29 );
    tmp_dict_value_29 = tmp_mvar_value_29;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_29, tmp_dict_value_29 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_30 = const_str_plain_Cryptography_HAS_CUSTOM_EXT;
    tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext );

    if (unlikely( tmp_mvar_value_30 == NULL ))
    {
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext );
    }

    CHECK_OBJECT( tmp_mvar_value_30 );
    tmp_dict_value_30 = tmp_mvar_value_30;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_30, tmp_dict_value_30 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_31 = const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP;
    tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup );

    if (unlikely( tmp_mvar_value_31 == NULL ))
    {
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup );
    }

    CHECK_OBJECT( tmp_mvar_value_31 );
    tmp_dict_value_31 = tmp_mvar_value_31;
    tmp_res = PyDict_SetItem( tmp_assign_source_39, tmp_dict_key_31, tmp_dict_value_31 );
    assert( !(tmp_res != 0) );
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_CONDITIONAL_NAMES, tmp_assign_source_39 );
    }

    return MOD_RETURN_VALUE( module_cryptography$hazmat$bindings$openssl$_conditional );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
