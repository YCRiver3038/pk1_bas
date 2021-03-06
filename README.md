# pk1_bas 
## -初代ポケモン　任意コード実行バグ支援アプリケーション-
### 任意コード実行バグ　実行パターン想定
なかよしバッヂ→育てやポケモンニックネーム「てウんのの」・「てEんのの」→ボックス内ポケモンニックネーム

### フォルダ内のもの
* (フォルダ)src
    * このアプリのソースコードが入っています。
* (フォルダ)x86
    * 32ビット版アプリが入っています
* ABOUT.txt	
    * このアプリについての説明(このファイル)
* hex_to_mne.txt
    * コードとニーモニックの対応表(のようなもの)
* hex_to_mne_op.txt	
    * 命令別に分けたコードとニーモニックの対応表(のようなもの)
* hex_to_mne_can_be_input_chars.txt
    * 入力可能文字に対応するコードとニーモニックの対応表(のようなもの)
* pk1_bas.exe
    * 本体
* dispChars.exe	
    * 文字と内部コードの一覧を表示するプログラム
* dispChars.bat
    * dispChars.exeを本体から呼び出すためのバッチファイル

※バッチファイルは、消してしまっても本体を起動すると自動的に生成されます。また、自動では消えません。

## 何ができるか
1. 16進数、10進数の値を256で割った余りの計算
2. 指定した内部コード(16進数)に対応するポケモン/ポケモントレーナー名・文字・わざ名・道具名の表示
3. 複数バイトの内部コードから、対応するポケモン/ポケモントレーナー名・文字・わざ名・道具名の表示,逆アセンブリ
4. わざ名・文字/文字列・ポケモン/ポケモントレーナー名・どうぐの検索
5. 逆アセンブリ結果・対応する文字・対応するアイテムとその個数の一覧をファイルに書き出す。

## 使い方
pk1_bas.exeを起動するとウィンドウが2つ出てきます。  
1つが本体(pk1_bas.exe)、「文字列一覧」が文字と内部コードの一覧を表示するだけのプログラム(dispChars.exe)です。  
文字と内部コードの一覧は、任意コード実行(5かいバグ)などに役立てばと思います。  
本体以外のウィンドウは、本体を終了しても勝手には閉じません。手動で閉じてください。  

このアプリはWindows環境でスタンドアロンにて起動できますが、CUI(コンソールアプリケーション)です。  
機能の指定などはすべて数値で行います。  
機能:数値 という表示が出ますので、表示された数値をキーボードで入力してください。  

### 複数バイトのコード列からの表示について
2桁ずつ区切らなくても入力できます。  
ただし、 `0xXX` や `XXh` というような表記には対応していません。  
（たとえば `BFh` と入力した場合、hの位置に意図しない値(00)が出てきます。）  
また、すべての値を入力し終わったあとに `Enter -> EOF` という手順になりますが、  
その際、行末に入力された半角スペースは無視されず `0B` が入ります。  
（この仕様はそのうち修正するつもりです。）  

### ニーモニックと内部コードの対応に関して
`hex_to_mne.txt`を参照してください。 

### hex_to_mne.txtの中身についての補足
`%02X` は16進数2桁を指します。（例: `C7`）

## 動作確認環境
OS      : Windows 10 home x64(バージョン1709 ビルド16299.492)  
CPU     : Intel(R) Core(TM) i5-4690  
メモリ  : 8.0GB DDR3  

### misc
Ubuntu (18.04 LTS) 上のwine(wine-3.0 (Ubuntu 3.0-1ubuntu1))における動作は保証しません。  
筆者の環境では文字化けしました(Ubuntuコンソールに於いてはUTF-8が標準のため)。  
ただし、コンソールの文字コードを変更する手順がある場合はそれによって解決するかもしれません。  

#### これまでの履歴	
仮ver
* v0.1: とりあえず256で割った余りを表示するプログラムを書いた(当時の名前:256Spls)
* v0.2: 繰り返し入力できるようにした
* v0.3: 各種データを自動で表示するようにした
* v0.4: 試験的に検索機能を実装
* v0.5: 逆アセンブリ機能(Z80) を実装。しかしZ80とDMG-CPUの命令は少し違った。
* v0.6: DMG-CPU向けに修正
* v0.7: 一覧表示プログラムを実装
* v0.8: 参考情報源を別窓に表示するようにした(pk1_basに名前を変更)
* v0.8-develop: 参考情報源を表示するプログラムを削除した(ソースコード内にURLを入れてあるため)。また、ABOUTの文章を一部書きなおした。

##### 蛇足
GUI操作可能にもしたいし、DMG-CPU向けアセンブラも何とかしたいところ・・・

