SET(LIBUTILS_SRC b_util_at.c b_util_delay.c b_util_i2c.c b_util_spi.c)

INCLUDE_DIRECTORIES(inc../../ Examples / Test / bos_config../../ Examples / Test / bos_hal / inc../
                    modules / inc../ core / inc)

ADD_LIBRARY(utils SHARED ${LIBUTILS_SRC})
