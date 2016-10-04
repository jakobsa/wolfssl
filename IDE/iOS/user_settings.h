/* Configuration */
#define IPHONE	/* Needed for Xcode */
#define HAVE_HASHDRBG
#define HAVE_AESGCM
#define WOLFSSL_SHA512
#define WOLFSSL_SHA384
#define USE_FAST_MATH

#define FP_MAX_BITS 8192
#define SIZEOF_LONG_LONG 8
#define OPENSSL_EXTRA
#define DEBUG_WOLFSSL
#define SESSION_CERTS
#define HAVE_AESGCM
#define HAVE_ECC
#define ATOMIC_USER

//gibts einen case wo tls über datagrams (UDP) benutzt wird?
#define WOLFSSL_DTLS
#define TFM_ECC256
#define ECC_SHAMIR
#define HAVE_CRL
#define PERSIST_SESSION_CACHE
#define PERSIST_CERT_CACHE

#define NO_DSA
#define NO_HC128
#define NO_RABBIT
#define NO_MD4