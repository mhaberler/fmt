#if defined(ARDUINO)
#include <Arduino.h>
extern "C"
{
    void __attribute__((weak)) fmtlib_error(const char *file, int line, const char *message)
    {
        Serial.printf("%s:%d: assertion failed: %s\n", file, line, message);
    }
}
#else

extern "C"
{
    void __attribute__((weak)) fmtlib_error(const char *file, int line, const char *message)
    {
        printf("%s:%d: assertion failed: %s\n", file, line, message);
    }
}

#endif
