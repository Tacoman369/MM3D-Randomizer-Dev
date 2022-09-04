#!/bin/bash

compile() {
  # If building manually just replace SHA with your own text.
  export commitHashShort=$(echo ${GITHUB_SHA::6})
  sed -i "s/develop/${commitHashShort:-develop}/" ./source/include/version.hpp
  make
  bannertoolexec makebanner -i ./banner.png -a ./audio.wav -o ./banner.bnr
  bannertoolexec makesmdh -s "Majora's Mask 3D Randomizer" -l "A Randomized Majoras Mask experience" -p "Tacoman369 & Phlex Plexico & Clover Sage" -i icon.png -o ./icon.icn
  3dstool -cvtf romfs ./romfs.bin --romfs-dir ./romfs
  makerom -f cia -o MM3D_Randomizer.cia -DAPP_ENCRYPTED=false -target t -exefslogo -elf ./MM3D_Randomizer.elf -icon ./icon.icn -banner ./banner.bnr -rsf ./mmrando.rsf -romfs ./romfs.bin -major 1 -minor 1 -micro 1
  #qrencode -ocia.png https://github.com/$GITHUB_REPOSITORY/releases/download/Nightly-$commitHashShort/OoT3D_Randomizer.cia
  #qrencode -o3dsx.png https://github.com/$GITHUB_REPOSITORY/releases/download/Nightly-$commitHashShort/OoT3D_Randomizer.3dsx
  ls -la
}

clean_up() {
  rm -rf bannertool* makerom* 3dstool* icon.icn ext_key.txt ignore_3dstool.txt banner.bnr romfs.bin
}

compile
clean_up