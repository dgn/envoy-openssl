#include <openssl/bio.h>
#include <ossl.h>

extern "C" int BIO_meth_set_write(BIO_METHOD *biom,
                       int (*write)(BIO *, const char *, int)) {
  return ossl.ossl_BIO_meth_set_write(biom, write);
}
