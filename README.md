# robotsystem
# Robot system report1

# リポジトリの説明
課題１リポジトリです。
# 開発環境の説明
・ubuntu20.04

・Raspberry Pi 4(ubuntu os)
#　今回使用したもの
・Raspberry Pi 4
・LANケーブル
・抵抗　240Ω 別名:炭素皮膜抵抗 　誤差+-5%
・LED(発光ダイオード）　3.6V
・圧電ブザー　
# 繋ぎ方

# 実行方法
 ```   
sudo insmod myled.ko
```
```
sudo chmod 666 /dev/myled0
```
### LEDを点灯
```
echo 1 > /dev/myled0
```
### LEDを消灯
```
echo 0 > /dev/myled0
```
