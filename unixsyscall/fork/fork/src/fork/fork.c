/* ヘッダファイルのインクルード */
#include <stdio.h> /* 標準入出力 */
#include <sys/types.h> /* 派生型 */
#include <unistd.h> /* UNIX標準 */

/* main関数の定義 */
int main(void){

  /* 変数の宣言 */
  pid_t pid1; /* fork前のgetpidで取得した自分のプロセスID pid1. */
  pid_t pid2; /* fork時の戻り値として取得したプロセスID pid2. */
  pid_t pid3; /* fork後のgetpidで取得した自分のプロセスID pid3. */
  int i; /* ループ用変数i */

  /* fork前の自分のプロセスIDを取得. */
  pid1 = getpid(); /* getpidで自分のプロセスIDを取得し, pid1に格納. */
  printf("pid1 = %d\n", pid1); /* printfでpid1を出力. */

  /* 子プロセスの生成 */
  pid2 = fork(); /* forkで子プロセスを生成し, 戻り値をpid2に格納. */
  if (pid2 < 0){ /* pid2が負の場合. */

    /* エラー処理 */
    printf("Error!: pid2 = %d\n", pid2); /* "Error!"とともにpid2の値を出力. */
    return -1; /* -1を返して異常終了. */

  }
  else if (pid2 == 0){ /* pid2が0の場合. */

    /* 子プロセスなので, 自分のプロセスIDをgetpidで取得して出力. */
    pid3 = getpid(); /* getpidで自分のプロセスIDを取得し, pid3に格納. */
    for (i = 0; i < 5; i++){ /* 5回繰り返す. */

      printf("I am child!, pid3 = %d.\n", pid3); /* pid3の値を出力. */
      sleep(1); /* sleepで1秒休止. */

    }

  }
  else{ /* pid2が正の場合. */

    /* 親プロセスなので, 自分のプロセスIDをgetpidで取得して, 子プロセスIDであるpid2とともに出力. */
    pid3 = getpid(); /* getpidで自分のプロセスIDを取得し, pid3に格納. */
    for (i = 0; i < 5; i++){ /* 5回繰り返す. */

      printf("I am parent!, pid3 = %d, my child pid2 = %d\n", pid3, pid2); /* pid3とpid2を出力. */
      sleep(1); /* sleepで1秒休止. */

    }

  }

  /* プログラムの終了 */
  return 0;

}
