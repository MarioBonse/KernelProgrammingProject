#ifndef IOCTL_H
#define IOCTL_H

#include <linux/ioctl.h>

#define MY_IOC_MAGIC_NUMBER 10 
struct ioctl_message{
    int capability;
    char *buff;
    int len;
};

#define NEW_CAPABILITY        	_IO(MY_IOC_MAGIC_NUMBER, 0)
#define WRITE_CAPABILITY        _IOW(MY_IOC_MAGIC_NUMBER, 1, struct ioctl_message*)
#define READ_CAPABILITY     	_IOR(MY_IOC_MAGIC_NUMBER, 2, struct ioctl_message*)
#define DEL_CAPABILITY          _IOW(MY_IOC_MAGIC_NUMBER, 3, struct ioctl_message*)


#endif

