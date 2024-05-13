#include <openssl/bio.h>
#include <ossl.h>

extern "C" BIO *BIO_new(const BIO_METHOD *bsslMethod) {
  return ossl.ossl_BIO_new(bsslMethod);
}
