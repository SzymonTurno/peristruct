#ifndef PERIPH_H
#define PERIPH_H

#if defined(__PERIPH_CHECK)
    #include __INPUT_FILE
    #include __OUTPUT_FILE

    #define BEGIN_DEFINE_PERIPH(name)
    #define END_DEFINE_PERIPH
    #define DEFINE_PERIPH_REG(type, name, addr) \
        _Static_assert(&__BASE_ADDR->name == (addr), "Wrong offset.")
    #define DEFINE_PERIPH_TAB(type, name, len, addr) \
        DEFINE_PERIPH_REG(type, name[0], addr)
#else
    #define BEGIN_DEFINE_PERIPH(name) struct name {
    #define END_DEFINE_PERIPH };
    #define DEFINE_PERIPH_REG(type, name, addr) type name
    #define DEFINE_PERIPH_TAB(type, name, len, addr) type name[len]
#endif /* __PERIPH_CHECK */

#endif /* PERIPH_H */
