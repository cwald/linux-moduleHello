obj-m += hello.o

KDIR=/nxp/repos/github/linux-imx

.PHONY: all clean

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	make -C $(KDIR) M=$(PWD) clean
	$(RM) *~


