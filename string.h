
typedef struct s_chrs {
    char chr;
    struct s_chrs *nxt;
} chrs_t;

typedef struct s_string {
    chrs_t *head;
    unsigned int len;
} string_t;

string_t new_str(const char *src);
unsigned int push_str(string_t *dest, const char *src);

