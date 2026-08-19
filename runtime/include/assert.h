#ifndef LAME_ASSERT_H_
#define LAME_ASSERT_H_

#ifdef NDEBUG
#  define assert(expr) ((void) 0)
#else
void lame_assert_fail(const char *expr, const char *file, int line);
#  define assert(expr) \
     ((expr) ? (void) 0 : lame_assert_fail(#expr, __FILE__, __LINE__))
#endif

#endif /* LAME_ASSERT_H_ */
