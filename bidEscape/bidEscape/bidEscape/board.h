#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _BOARD_H
#define _BOARD_H

char** init(int N, int M);

int start(int N, int M, char** board);

#endif