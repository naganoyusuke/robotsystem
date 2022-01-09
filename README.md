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
![S__79945764](https://user-images.githubusercontent.com/72643479/148679855-3a873c8a-5b39-47b1-bcde-5a10ebb6dfe4.jpg)
![S__79945766](https://user-images.githubusercontent.com/72643479/148679864-ecf0f323-04a8-48c1-9c73-31ed808a85de.jpg)
![S__79945771](https://user-images.githubusercontent.com/72643479/148680979-aa0c9243-2e27-4c34-833d-c46e707d6954.jpg)

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
# ライセンス
Copyright (c) 2021 Ryuich Ueda

> This program is free software; you can redistribute it and/or
> modify it under the terms of the GNU General Public License
> as published by the Free Software Foundation; either version 2
> of the License, or any later version.

> This program is distributed in the hope that it will be useful,
> but WITHOUT ANY WARRANTY; without even the implied warranty of
> MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
> GNU General Public License for more details.

> You should have received a copy of the GNU General Public License
> along with this program. If not, see http://www.gnu.org/licenses/.

