#include <openssl/bio.h>
#include <ossl.h>

extern "C" const BIO_METHOD *BIO_s_socket() {
   return ossl.ossl_BIO_s_socket();
}
