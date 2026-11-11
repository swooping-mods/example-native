/* example-native: minimal read-only native integration example.
 * Called on an IL2CPP-attached worker. Unity scene mutations need a separately
 * qualified main-thread dispatch; do not call them from this entry point. */
typedef void *PTR;
__declspec(dllimport) PTR __stdcall GetProcAddress(PTR,const char *);
int MoonLab_ModStart(PTR domain,PTR game) {
    typedef PTR(*Current)(void);
    Current current=(Current)GetProcAddress(game,"il2cpp_thread_current");
    return domain!=0 && current!=0 && current()!=0;
}
