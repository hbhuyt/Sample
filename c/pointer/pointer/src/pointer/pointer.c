/* ヘッダファイルのインクルード */
#include <stdio.h> /* 標準入出力 */

/* main関数の定義 */
int main(void){

  /* 変数の宣言 */
  int x; /* int型変数x */
  int *p; /* int型変数へのポインタp */

  /* 変数とポインタの操作. */
  x = 10; /* 変数xに10を代入. */
  p = &x; /* 変数xのアドレスをポインタpに代入. */

  /* 変数とポインタの出力. */
  printf("x = %d\n", x); /* 変数xの値を出力. */
  printf("&x = 0x%08x\n", &x); /* 変数xのアドレスを出力. */
  printf("p = 0x%08x\n", p); /* ポインタpを出力. */
  printf("*p = %d\n", *p); /* ポインタpの参照先の値を出力. */

  /* プログラムの終了 */
  return 0;

}
