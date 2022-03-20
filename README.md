# libft_lts
My 42library

### When using...
```c
#include "./includes/libft.h"
```
It'll include all libft functions including GNL and ft_printf  
or not  
+norm checked

### lst함수에 대한 간략한 메모

t_list 첫번째 node는 head node개념으로 사용. 값 입력, 사용x

그러니까 lst_add_front는 가능한 사용하지 않으면 좋다.  
lstprint 등 함수들도 이 기준에 맞춰져 있음
lstselect함수의 index의 1도 두번째 노드. 0도 있어야 하긴 하지.