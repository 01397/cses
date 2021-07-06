# Introductory Problems

## Weird Algorithm

- [Problem](https://cses.fi/problemset/task/1068/)
- Code: [1068.cpp](../tasks/1068.cpp)

奇数なら $n*3+1$ , 偶数なら $n/2$ をする問題。単純にそのまま実装した。`n` が `int` で失敗したので `long long` にした。

## Missing Number

- [Problem](https://cses.fi/problemset/task/1083)
- Code: [1083.cpp](../tasks/1083.cpp)

等差数列の和の公式で $1$から$n$の総和を求め、入力の総和と差をとった。

## Repetitions

- [Problem](https://cses.fi/problemset/task/1069/)
- Code: [1069.cpp](../tasks/1069.cpp), [1069-2.cpp](../tasks/1069-2.cpp)

`char`と`string`に慣れていない。少しコードが汚かったので`string`のインデックスを使って書き直した。範囲外のインデックスを取ることで、綺麗にはなったけど... `i` が文字数長を超えている時、`str[i]`は未定義動作、

## Increasing Array

- [Problem](https://cses.fi/problemset/task/1094)
- Code: [1094.cpp](../tasks/1094.cpp)

問題文の英語に慣れないと。`while (cin >> x) { ... }` という書き方を覚えた。EOFまで繰り返し入力を受け取ってくれるらしい。

## Permutations

- [Problem](https://cses.fi/problemset/task/1070)
- Code: [1070.cpp](../tasks/1070.cpp)

隣あう2数の差が1にならない順列を作る問題。やっと実直な実装以外のが出てきた気がする。末尾にスペースが残ってても大丈夫だった。

2と3だけ順列が存在せず、4以降は偶数,奇数の順で出力すれば良い(2, 4, 6..., 1, 3, 5...)。1は`1`だけになるが、特別に場合分けしなくてもループにまとめられた。

## Number Spiral

- [Problem](https://cses.fi/problemset/task/1071)
- Code: [1071-2.cpp](../tasks/1071-2.cpp)

考え方1. 対角線の上側と左側で場合分けして、行/列の偶奇で4通りに場合分けする。対角線の数を求めて、そこからの差で計算する。TLEになってしまったのは対角線の求め方が悪かったかも。$n * n - n + 1$で求められるらしい。確かに。

考え方2. ACした方法。大変だった。考え方1と同様に対角線の上側と左側で場合分けして、行/列の偶奇で場合分けする。そして、行または列の一番外側の数を求めて差を計算する。xとyがどっちなのか混乱した

## Two Sets

- [Problem](https://cses.fi/problemset/task/1092)
- Code: [1092.cpp](../tasks/1092.cpp)

### 問題の要約

nが与えられる。1からnまでの数を2セットにわけ、それぞれの総和が等しくなるようにせよ。可能なら"YES"とセットを出力、不可能なら"NO"を出力。

### 考え方

各セットの総和$s$は、1からnの総和を2で割ったもの。$s$を超えない範囲で、大きい方から順に和をとり、最後に端数$k( < n)$で帳尻合わせをする。($n + (n-1) + ... + k$)。ここで出てきた数が1組目。出てこなかったn以下の数が2組目。
