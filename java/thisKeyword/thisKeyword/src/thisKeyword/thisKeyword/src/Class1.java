// 整数値と文字列を持つクラス
class Class1 {	// Class1クラスの定義

	// フィールドの定義
	private int i;	// int型フィールドi
	private String str;	// Stringクラスフィールドstr

	// メソッドの定義
	// 初期化処理
	Class1() {	// コンストラクタClass1()
		i = 0;	// 0をiにセット.
		str = "-";	// "-"をstrにセット.
	}

	// 初期化処理(指定の値をセット.)
	Class1(int i, String str) {	// コンストラクタClass1(int i, String str).(これも名前が同じで引数が違うのでオーバーロードと言える.)
		this.i = i;	// iをthis.iにセット.(this.iはフィールドのi, iは引数のi.)
		this.str = str;	// strをthis.strにセット.(this.strはフィールドのstr, strは引数のstr.)
	}

	// 整数値をフィールドにセット.(文字列はそのまま.)
	public void set(int i) {	// メソッドset(int i)の定義
		this.i = i;	// iをthis.iにセット.(this.iはフィールドのi, iは引数のi.)
	}

	// 文字列をフィールドにセット.(整数値はそのまま.)
	public void set(String str) {	// メソッドset(String str)の定義.(set(int i)のオーバーロードメソッド.)
		this.str = str;	// strをthis.strにセット.(this.strはフィールドのstr, strは引数のstr.)
	}

	// 整数値と文字列をフィールドにセット.
	public void set(int i, String str) {	// メソッドset(int i, String str)の定義.(set(int i)のオーバーロードメソッド.)
		this.i = i;	// iをthis.iにセット.(this.iはフィールドのi, iは引数のi.)
		this.str = str;	// strをstrにセット.(this.strはフィールドのstr, strは引数のstr.)
	}

	// 各フィールドを出力.
	public void output(){	// メソッドoutputの定義
		System.out.println("i = " + i + ", " + "str = " + str);	// iとstrを出力.
	}

}