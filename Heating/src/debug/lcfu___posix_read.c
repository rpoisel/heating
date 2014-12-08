#ifndef LC_PROT_LCFU___POSIX_READ__C
#define LC_PROT_LCFU___POSIX_READ__C

#include <lcfu___posix_read.h>
#include <stdio.h>
#include <unistd.h>

/*                            Functions                        */
void  lcfu___POSIX_READ(LC_TD_Function_POSIX_READ* LC_this, LC_TD_DINT LC_VD_FD, LC_TD_DINT LC_VD_COUNT, struct _lcoplck_epdb_1_impl* pEPDB)
{
	/*
	   LC_TD_BOOL LC_VD_ENO;
  	   LC_TD_DINT LC_VD_ERRNO;
       LC_TD_LINT LC_VD_POSIX_READ;
       LC_TD_BYTE LC_VD_DATA[64];
	 */
  int cnt = 0;

  LC_this->LC_VD_POSIX_READ = read(LC_VD_FD, LC_this->LC_VD_DATA, LC_VD_COUNT);
  if (LC_this->LC_VD_POSIX_READ == LC_VD_COUNT)
  {
	printf("Posix read: ");
	for (cnt = 0; cnt < LC_VD_COUNT; cnt++)
	{
		printf("0x%02x ", LC_this->LC_VD_DATA[cnt]);
	}
	printf("\n");
  }
  LC_this->LC_VD_ENO = LC_EL_true;
}

#endif
