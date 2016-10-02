deb http://apt.wxwidgets.org/ natty-wx main
deb-src http://apt.wxwidgets.org/ natty-wx main
curl http://apt.wxwidgets.org/key.asc | sudo apt-key add -
sudo apt-get update
sudo apt-get install libwxgtk3.0-0v5:i386 libwxgtk3.0-0v5
cd /usr/include

