#include <openssl/bio.h>
#include <ossl.h>

extern "C" int BIO_meth_set_ctrl(BIO_METHOD *biom,
                      long (*ctrl)(BIO *, int, long, void *)) {
  return ossl.ossl_BIO_meth_set_ctrl(biom, ctrl);
}
