static __externref_t mytable[0];

int main() {
#if 1
    __externref_t x{}; // Yes compiler crash
#else
    __externref_t x; // No compiler crash
#endif
    __builtin_wasm_table_set(mytable, 0, x);
}
