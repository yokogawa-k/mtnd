/*
 * mtnexec.h
 * Copyright (C) 2011 KLab Inc.
 */
#define MTNEXECMODE_LOCAL  0
#define MTNEXECMODE_HYBRID 1
#define MTNEXECMODE_REMOTE 2
#define MTNEXECMODE_ALL0   3
#define MTNEXECMODE_ALL1   4

typedef struct mtnexec_context
{
  int efd;
  int mode;
  int zero;
  int conv;
  int nobuf;
  int child;
  STR group;
  STR stdin;
  STR stdout;
  STR stderr;
  ARG getarg;
  ARG putarg;
  MTNSVR *svr;
  MTNJOB *job;
  int dryrun;
  int verbose;
  int arg_num;
  int job_max;
  ARG linearg;
  int fsig[2];
} CTX;
extern int optind;