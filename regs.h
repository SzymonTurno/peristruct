#ifndef REGS_H
#define REGS_H

#include <stdint.h>

#define DEV_BASE_REG0 ((uint32_t*)0x08000000)
#define DEV_BASE_REG1 ((uint16_t*)0x08000004)
#define DEV_BASE_REG2 ((uint16_t*)0x08000006)
#define DEV_BASE_REG3 ((uint32_t*)0x08000008)
#define DEV_BASE_REG4 ((uint32_t*)0x0800000C)
#define DEV_BASE_REG5 ((uint16_t*)0x08000010)
#define DEV_BASE_REG6 ((int32_t*)0x08000014)
#define DEV_BASE_REG7 ((int16_t*)0x08000018)
#define DEV_BASE_REG8 ((uint16_t*)0x0800001A)
#define DEV_BASE_REG9 ((uint32_t*)0x0800001C)
#define DEV_BASE_REGA ((uint16_t*)0x08000020)
#define DEV_BASE_REGB ((uint16_t*)0x08000022)
#define DEV_BASE_REGC ((uint16_t*)0x08000024)
#define DEV_BASE_REGD ((uint16_t*)0x08000026)
#define DEV_BASE_REGE ((uint16_t*)0x08000028)

#endif /* REGS_H */
