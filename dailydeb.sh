#!/bin/bash

PACKAGE_VERSION=0.3.20100604
CURDATE=`date +%Y%m%d`
ORGLANG=$LANG
LANG=en_US

mv debian/changelog debian/changelog.old

echo "osdlyrics ($PACKAGE_VERSION.$CURDATE) unstable; urgency=low

  * Daily build

 -- TigerSoldier <tigersoldi@gmail.com>  `date -R`
" | cat - debian/changelog.old > debian/changelog

#cat debian/changelog
LANG=$ORGLANG
dpkg-buildpackage

mv debian/changelog.old debian/changelog
