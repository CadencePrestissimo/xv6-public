#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(void)
{
  printf(1, "Total Number of Active Processes: %d\n", cgetNumProc());
  printf(1, "Maximum PID: %d\n", getMaxPid());
  exit();
}
