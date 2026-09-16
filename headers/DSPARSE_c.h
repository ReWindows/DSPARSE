// Flat C exports observed in DSPARSE.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef DSPARSE_C_H
#define DSPARSE_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: DsCrackSpn2W (ABI unverified)
// Export: DsMakeSpnW (ABI unverified)
// Export: DsMakeSpn2W (ABI unverified)
// Export: DsGetRdnW (ABI unverified)
// Export: DsUnquoteRdnValueW (ABI unverified)
// Export: DsCrackSpnW (ABI unverified)
// Export: DsMakeSpnA (ABI unverified)
// Export: DsCrackSpn2A (ABI unverified)
// Export: DsCrackSpn3W (ABI unverified)
// Export: DsCrackSpn4W (ABI unverified)
// Export: DsCrackSpnA (ABI unverified)
// Export: DsCrackUnquotedMangledRdnA (ABI unverified)
// Export: DsCrackUnquotedMangledRdnW (ABI unverified)
// Export: DsIsMangledDnA (ABI unverified)
// Export: DsIsMangledDnW (ABI unverified)
// Export: DsIsMangledRdnValueA (ABI unverified)
// Export: DsIsMangledRdnValueW (ABI unverified)
// Export: DsQuoteRdnValueA (ABI unverified)
// Export: DsQuoteRdnValueW (ABI unverified)
// Export: DsUnquoteRdnValueA (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // DSPARSE_C_H
