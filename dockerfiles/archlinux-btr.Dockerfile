FROM archlinux:latest

RUN pacman -Sy cmake valgrind base-devel gtest --noconfirm
