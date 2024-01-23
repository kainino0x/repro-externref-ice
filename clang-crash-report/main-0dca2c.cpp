# 1 "<built-in>"
# 1 "main.cpp"
static __externref_t mytable[0];

int main() {
#if 0 /* disabled by -frewrite-includes */
#if 1
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 5 "main.cpp"
    __externref_t x{}; // Yes compiler crash
#else
# 7 "main.cpp"
    __externref_t x; // No compiler crash
#endif
# 9 "main.cpp"
    __builtin_wasm_table_set(mytable, 0, x);
}
