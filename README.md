# slock

This is my patched version of slock. The base version is directly from suckless.org.

## Patches

The list below shows the currently applied patches to the master branch.

- slock-background-image-20220318-1c5a538.diff (shows a background image in locked state)
- slock-capscolor-20220921-35633d4.diff (displays a separate color if caps is set)
- slock-dwmlogo-20210324.diff (adds dwm logo on lock screen)
- slock-git-20161012-control-clear.diff (doesnt turn logo red when pressing control keys)
- slock-secret-password-1.4.diff (modified) (can give additional passwords that run commands)

## Installation

The most basic way is to clone the repository and then invoke make.

- `git clone https://github.com/tiyn/slock`
- `make clean install`
