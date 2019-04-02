![waver-Logo](https://ip.bitcointalk.org/?u=https%3A%2F%2Fi.imgur.com%2FiJ3ErYR.png&t=597&c=Qc_hvASVSubrjA)

> Music content has had two of big problems from the past to the present. We're trying to create a Waver platform to solve that.

> The first is the issue of copyright.

> Content such as music is always problematic for copyright. It's hard to prove who made it first. But if you can record your work perfectly in a block-chain, it's going to be hard for anyone to fake that they made it first. Sometimes people can register what others have made as if it were their own. However, as his project files and sound files record are fully registered in the block-chain, no one can claim them. It's because you can't claim your own copyright with the music files alone.


> Second, payment is difficult.

>We've built this platform to address the numerous copyright issues that we've encountered in our music content business, and we're designed to catch up with [AudioJungle](https://audiojungle.net/), the largest existing music content site. Audiojungle can be paid in dollars, but we will make it possible with Bitcoin and our Waver Coin. There are countless currencies around the world, but it's hard to have the same value around the world. It's the cryptocurrency that solved it. Cryptocurrency can be easily shared across the world. It can be transferred from the U.S. to Japan and from Japan to India for a small transfer fee. This is currency innovation.

>There are people in the world who want to use some music, but they can't pay in dollars, or they don't know how to buy the content they want. But Bitcoin and Waver Coin are available all over the world. This will help you buy the content you want at any time.


>We will continue to introduce the progress of our Waver project through the discord community and our SNS.


>For more information, please visit our website and the discord community!!



***
![Coin-Specs](https://ip.bitcointalk.org/?u=https%3A%2F%2Fi.imgur.com%2F4oX49YJ.png&t=597&c=8MNixV-kEm7yag)

| Coin Name | Waver Coin |
| :------: | :------: |
| Ticker | WVC |
| Algorithm | x11 |
| Block Time | 1 Min |
| Max Supply | 10,000,000 WVC |
| Premine | 400,000 WVC (1% of MAX SUPPLY) |
| Reward Rate. | POS 10% / MN 90% |
| POS Immature Time | 1Hours |
| Masternode Collateral | 500 - 3,000 |

![coin-specs1](https://ip.bitcointalk.org/?u=https%3A%2F%2Fi.imgur.com%2Ff3iGC4q.png&t=597&c=nhkLw0s7Eht12A)
***
![roadmap](https://ip.bitcointalk.org/?u=https%3A%2F%2Fi.imgur.com%2FLFfh8Vn.jpg&t=597&c=9oNWKko0Y4J3FA)
***
![links](https://ip.bitcointalk.org/?u=https%3A%2F%2Fi.imgur.com%2FXbfbEuD.png&t=597&c=vLOBYrshoLT-Bw)

# [Website](https://www.wavercoin.com) [Discord](https://discord.gg/GHf55pM) [Bitcointalk](https://bitcointalk.org/index.php?topic=5107567) [Explorer](http://explorer.wavercoin.com/) [Twitter](https://twitter.com/PlatformWaver)

***
# How to install waver vpn server script
1. Get a VPS server with min. 1GB RAM and Ubuntu 16.04 as operating system
2. Get PUTTY for your operating system from https://www.putty.org
    - Always use mouse selection for COPY text from PUTTY to WINDOWS
    - Always use right button click for PASTE text in PUTTY from WINDOWS
3. RUN script bellow(select from below, COPY, PASTE in Putty and press ENTER):


```
wget https://github.com/wavercoin/core-project/releases/download/v2.0/waver_autoinstall-v2.0.sh
bash waver_autoinstall-v2.0.sh
```

### If the download speed is too slow when running with the above script, run the script below.

```
wget https://github.com/wavercoin/core-project/releases/download/v2.0/waver_autoinstall-v2.0_dropbox.sh
bash waver_autoinstall-v2.0_dropbox.sh
```


(It may take 3-6 minutes. It will automatically install and configure masternode wallet for your masternode server!)

4. Note VPS_IP:PORT and Masternode Privatekey(this will be the masternode’s privkey) in Notepad(text file)! - We’ll use this later…
***


## Desktop wallet setup

After the MN is up and running, you need to configure the desktop wallet accordingly. Here are the steps for Windows Wallet

1. Open the WAVER Coin Coin Desktop Wallet.
2. Go to RECEIVE and create a New Address: **MN01**
3. Send **2500** **WAVER Coin** to **MN01**.
4. Wait for 10 confirmations.
5. Go to **Tools -> "Debug console - Console"**
6. Type the following command: **masternode outputs**
7. Go to  **Tools -> "Open Masternode Configuration File"**
8. Add the following entry:

```
Alias Address Privkey TxHash Output_index
MN01 255.255.255.255:21501 12331233WAVER1233 989998989899WVC9899 0
```
* Alias: **MN01**
* Address: **VPS_IP:PORT** ```(255.255.255.21501)```
* Privkey: **Masternode Private Key** ```(12331233WAVER1233)```
* TxHash: **First value from Step 6** ```(989998989899WVC9899)```
* Output_index:  **Second value from Step 6** ```(0)```
9. Save and close the file.
10. Go to **Masternode Tab**. If you tab is not shown, please enable it from: **Settings - Options - Wallet - Show Masternodes Tab**
11. Click **start** all in the masternodes tab
12. If it does not start at 11, follow the instructions below. Go to wallet - Tools - Debug console - Console - Type to **masternode start-alias MN01**
13. Next, go to our **Discord channel** for detailed instructions: [Discord](https://discord.gg/GHf55pM)
***


***
# How to update from version v1.1 -> v2.0
Script for updating version 2.0 from version 1.1.
If the update is not successful, delete the vpn server and reinstall it with 2.0 script

```
wget https://github.com/wavercoin/core-project/releases/download/v2.0/waver_autoinstall-v1.1-v2.0-update.sh
bash waver_autoinstall-v1.1-v2.0-update.sh
```