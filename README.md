# Docker にホストマシンの VScode から編集できるようにする

## 競技プログラミングでの環境構築をローカルで行わなくても良い

### 0.拡張機能をインストール

VS Code 上で ctrl + shift + X で拡張機能メニューを開き、「Remote-Containers」を検索してインストールします。

### 1. Remote-Containers を実行

f1 メニュー「Remote-Containers: Open Folder in Container...」

#### 1.1 ソースコードを実行する方法

cd cpp
g++ -o main main.cpp && ./main < p.txt
