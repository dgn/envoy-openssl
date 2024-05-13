#include <openssl/bio.h>
#include <ossl.h>

// This is just a simple wrapper that the generator script wasn't able to handle.
extern "C" BIO_METHOD *BIO_meth_new(int type, const char *name) {
  return ossl.ossl_BIO_meth_new(type, name);
}
