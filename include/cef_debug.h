#ifndef __CEF_INCLUDE_CEF_DEBUG_H
#define __CEF_INCLUDE_CEF_DEBUG_H

#define CEF_DEBUG(...) \
    if (1) { \
        fprintf(stderr, "DBG %s ", __PRETTY_FUNCTION__); \
        fprintf(stderr, __VA_ARGS__); \
        fprintf(stderr, "\n"); \
    };

#endif /* __CEF_INCLUDE_CEF_DEBUG_H */
