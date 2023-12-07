#ifndef DEF_DEV_H
#define DEF_DEV_H

#include "periph.h"

#define __BASE_ADDR ((struct inner_s*)DEV_BASE_REG6)
BEGIN_DEFINE_PERIPH(inner_s)
    DEFINE_PERIPH_REG(int32_t, reg1, DEV_BASE_REG6);
    DEFINE_PERIPH_REG(int16_t, reg2, DEV_BASE_REG7);
    DEFINE_PERIPH_REG(uint16_t, reg3, DEV_BASE_REG8);
END_DEFINE_PERIPH
#undef __BASE_ADDR

#define __BASE_ADDR ((struct dev_s*)DEV_BASE_REG0)
BEGIN_DEFINE_PERIPH(dev_s)
    DEFINE_PERIPH_REG(uint32_t, reg0, DEV_BASE_REG0);
    DEFINE_PERIPH_REG(uint16_t, reg1, DEV_BASE_REG1);
    DEFINE_PERIPH_REG(uint16_t, reg2, DEV_BASE_REG2);
    DEFINE_PERIPH_REG(uint32_t, reg3, DEV_BASE_REG3);
    DEFINE_PERIPH_REG(uint32_t, reg4, DEV_BASE_REG4);
    DEFINE_PERIPH_REG(uint16_t, reg5, DEV_BASE_REG5);
    DEFINE_PERIPH_REG(struct inner_s, s, (struct inner_s*)DEV_BASE_REG6);
    DEFINE_PERIPH_REG(uint32_t, reg9, DEV_BASE_REG9);
    DEFINE_PERIPH_TAB(uint16_t, tab, 4, DEV_BASE_REGA);
    DEFINE_PERIPH_REG(uint16_t, rege, DEV_BASE_REGE);
END_DEFINE_PERIPH
#undef __BASE_ADDR

#endif /* DEF_DEV_H */
