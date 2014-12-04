#ifndef LC_PROT_LCFU___POSIX_WRITE__C
#define LC_PROT_LCFU___POSIX_WRITE__C

#include <lcfu___posix_write.h>
#include <unistd.h>

/*                            Functions                        */
void  lcfu___POSIX_WRITE(LC_TD_Function_POSIX_WRITE* LC_this, LC_TD_DINT LC_VD_FD, LC_TD_DINT LC_VD_COUNT, LC_TD_BYTE LC_VD_DATA[64], struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* LC_TD_BOOL LC_VD_ENO;
     LC_TD_DINT LC_VD_ERRNO;
     LC_TD_LINT LC_VD_POSIX_WRITE;
   */
	int cnt = 0;

	printf("Posix write: ");
	for (cnt = 0; cnt < LC_VD_COUNT; cnt++)
	{
		printf("0x%02x ", LC_VD_DATA[cnt]);
	}
	printf("\n");

	LC_this->LC_VD_POSIX_WRITE = write(LC_VD_FD, LC_VD_DATA, LC_VD_COUNT);
	LC_this->LC_VD_ENO;
}

#endif
