#include "chibi/eval.h"

#define sexp_init_library sexp_init_lib_srfi_98
#include "lib/srfi/98/env.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_srfi_95
#include "lib/srfi/95/qsort.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_srfi_69
#include "lib/srfi/69/hash.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_srfi_39
#include "lib/srfi/39/param.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_srfi_27
#include "lib/srfi/27/rand.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_srfi_151
#include "lib/srfi/151/bit.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_srfi_144
#include "lib/srfi/144/math.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_scheme_time
#include "lib/scheme/time.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_chibi_win32_process_win32
#include "lib/chibi/win32/process-win32.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_chibi_weak
#include "lib/chibi/weak.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_chibi_optimize_rest
#include "lib/chibi/optimize/rest.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_chibi_optimize_profile
#include "lib/chibi/optimize/profile.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_chibi_io
#include "lib/chibi/io/io.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_chibi_heap_stats
#include "lib/chibi/heap-stats.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_chibi_filesystem
#include "lib/chibi/filesystem.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_chibi_disasm
#include "lib/chibi/disasm.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_chibi_crypto_sha2
#include "lib/chibi/crypto/crypto.c"
#undef sexp_init_library

#define sexp_init_library sexp_init_lib_chibi_ast
#include "lib/chibi/ast.c"
#undef sexp_init_library


struct sexp_library_entry_t sexp_static_libraries_array[] = {
  { "lib/srfi/98/env", sexp_init_lib_srfi_98 },
  { "lib/srfi/95/qsort", sexp_init_lib_srfi_95 },
  { "lib/srfi/69/hash", sexp_init_lib_srfi_69 },
  { "lib/srfi/39/param", sexp_init_lib_srfi_39 },
  { "lib/srfi/27/rand", sexp_init_lib_srfi_27 },
  { "lib/srfi/151/bit", sexp_init_lib_srfi_151 },
  { "lib/srfi/144/math", sexp_init_lib_srfi_144 },
  { "lib/scheme/time", sexp_init_lib_scheme_time },
  { "lib/chibi/win32/process-win32", sexp_init_lib_chibi_win32_process_win32 },
  { "lib/chibi/weak", sexp_init_lib_chibi_weak },
  { "lib/chibi/optimize/rest", sexp_init_lib_chibi_optimize_rest },
  { "lib/chibi/optimize/profile", sexp_init_lib_chibi_optimize_profile },
  { "lib/chibi/io/io", sexp_init_lib_chibi_io },
  { "lib/chibi/heap-stats", sexp_init_lib_chibi_heap_stats },
  { "lib/chibi/filesystem", sexp_init_lib_chibi_filesystem },
  { "lib/chibi/disasm", sexp_init_lib_chibi_disasm },
  { "lib/chibi/crypto/crypto", sexp_init_lib_chibi_crypto_sha2 },
  { "lib/chibi/ast", sexp_init_lib_chibi_ast },
  { NULL, NULL }
};

struct sexp_library_entry_t* sexp_static_libraries = sexp_static_libraries_array;
