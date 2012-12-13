/* Re-created 1/3/2010 */
typedef struct {
   short low_offset;
   short high_offset;
   short settings;
   short selector;
} INTERRUPT;

typedef struct {
   INTERRUPT* base;
   int limit;
} IDT_POINTER;
