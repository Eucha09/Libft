# **Libft**

C 라이브러리 만들기   
흔히 쓰이는 함수들을 재구성하여 이후의 프로젝트에 사용될 C 라이브러리 만들기.

## **Functions**

### **Libc functions**

<details>
<summary>ft_isalpha</summary>
<div markdown="1">       

|**함수 이름**|ft_isalpha|
|-|-|
|**프로토타입**|int ft_isalpha(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_isdigit</summary>
<div markdown="1">       

|**함수 이름**|ft_isdigit|
|-|-|
|**프로토타입**|int ft_isdigit(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|아스키코드 값으로 숫자이면 1 아니면 0 반환|
|**설명**|해당 문자가 숫자인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_isalnum</summary>
<div markdown="1">       

|**함수 이름**|ft_isalnum|
|-|-|
|**프로토타입**|int ft_isalnum(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|알파벳이거나 숫자이면 1 아니면 0 반환|
|**설명**|해당 문자가 알파벳이거나 숫자인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_isascii</summary>
<div markdown="1">       

|**함수 이름**|ft_isascii|
|-|-|
|**프로토타입**|int ft_isascii(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|아스키값(0~127)이면 1 아니면 0 반환|
|**설명**|해당 문자가 아스키값인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_isprint</summary>
<div markdown="1">       

|**함수 이름**|ft_isprint|
|-|-|
|**프로토타입**|int ft_isprint(int c);|
|**매개변수**|#1. 확인할 문자|
|**반환값**|출력가능한 문자이면 1 아니면 0 반환|
|**설명**|해당 문자가 출력가능한 문자인지 확인하는 함수|

</div>
</details>

<details>
<summary>ft_strlen</summary>
<div markdown="1">       

|**함수 이름**|ft_strlen|
|-|-|
|**프로토타입**|size_t ft_strlen(const char *s);|
|**매개변수**|#1. 문자열|
|**반환값**|문자열 길이를 반환|
|**설명**|문자열 길이를 반환해주는 함수|

</div>
</details>

<details>
<summary>ft_memset</summary>
<div markdown="1">       

|**함수 이름**|ft_memset|
|-|-|
|**프로토타입**|void *ft_memset(void *b, int c, size_t len);|
|**매개변수**|#1. 메모리 주소<br>#2. 초기화할 값<br>#3. 메모리 사이즈|
|**반환값**|없음.|
|**설명**|메모리 주소 b를 받아 len사이즈 만큼 c로 초기화해주는 함수|

</div>
</details>

<details>
<summary>ft_bzero</summary>
<div markdown="1">       

|**함수 이름**|ft_bzero|
|-|-|
|**프로토타입**|void ft_bzero(void *s, size_t n);|
|**매개변수**|#1. 메모리 주소<br>#2. 메모리 사이즈|
|**반환값**|없음.|
|**설명**|메모리 주소 s를 받아 n사이즈 만큼 0으로 초기화해주는 함수|

</div>
</details>

<details>
<summary>ft_memcpy</summary>
<div markdown="1">       

|**함수 이름**|ft_memcpy|
|-|-|
|**프로토타입**|void *ft_memcpy(void *dst, const void *src, size_t n);|
|**매개변수**|#1. 붙여넣을 메모리 주소<br>#2. 복사할 메모리 주소<br>#3. 복사할 사이즈|
|**반환값**|없음.|
|**설명**|src에서 n만큼 복사해 dst에 붙여넣는 함수|

</div>
</details>

<details>
<summary>ft_memmove</summary>
<div markdown="1">       

|**함수 이름**|ft_memmove|
|-|-|
|**프로토타입**|void *ft_memmove(void *dst, const void *src, size_t len);|
|**매개변수**|#1. 붙여넣을 메모리 주소<br>#2. 복사할 메모리 주소<br>#3. 복사할 사이즈|
|**반환값**|없음.|
|**설명**|src에서 len만큼을 dst로 옮기는 함수. dst와 src의 메모리 영역이 겹치더라도 문제가 발생하지 않는다.|

</div>
</details>

<details>
<summary>ft_strlcpy</summary>
<div markdown="1">       

|**함수 이름**|ft_strlcpy|
|-|-|
|**프로토타입**|size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);|
|**매개변수**|#1. 붙여넣을 문자열 주소<br>#2. 복사할 문자열 주소<br>#3. 사이즈|
|**반환값**|src 문자열 길이|
|**설명**|dst에 src를 복사해 넣는 함수. dstsize도 입력받아 '\0'값을 보장받을 수 있다.|

</div>
</details>

<details>
<summary>ft_strlcat</summary>
<div markdown="1">       

|**함수 이름**|ft_strlcat|
|-|-|
|**프로토타입**|size_t ft_strlcat(char *dst, const char *src, size_t dstsize);|
|**매개변수**|#1. 붙여넣을 문자열 주소<br>#2. 복사할 문자열 주소<br>#3. 사이즈|
|**반환값**|dst문자열 길이 + src문자열 길이 반환|
|**설명**|src를 복사해 dst뒤에 이어붙이는 함수. dstsize도 입력받아 '\0'값을 보장받을 수 있다.|

</div>
</details>

<details>
<summary>ft_strncmp</summary>
<div markdown="1">       

|**함수 이름**|ft_strncmp|
|-|-|
|**프로토타입**|int ft_strncmp(const char *str1, const char *str2, size_t n);|
|**매개변수**|#1. 비교할 문자열1<br>#2. 비교할 문자열2<br>#3. 비교할 길이|
|**반환값**|길이 n만큼 두 개의 문자열을 비교하여 완전히 같다면 0을 반환. 다르면 음수 혹은 양수를 반환|
|**설명**|길이 n만큼 두 개의 문자열이 같은지 비교하는 함수|

</div>
</details>

<details>
<summary>ft_toupper</summary>
<div markdown="1">       

|**함수 이름**|ft_toupper|
|-|-|
|**프로토타입**|int ft_toupper(int c);|
|**매개변수**|#1. 문자|
|**반환값**|해당 문자가 소문자이면 대문자로 변환해서 반환|
|**설명**|대문자로 변환해주는 함수|

</div>
</details>

<details>
<summary>ft_tolower</summary>
<div markdown="1">       

|**함수 이름**|ft_tolower|
|-|-|
|**프로토타입**|int ft_tolower(int c);|
|**매개변수**|#1. 문자|
|**반환값**|해당 문자가 대문자이면 소문자로 변환해서 반환|
|**설명**|소문자로 변환해주는 함수|

</div>
</details>

<details>
<summary>ft_strchr</summary>
<div markdown="1">       

|**함수 이름**|ft_strchr|
|-|-|
|**프로토타입**|char *ft_strchr(const char *str, int c);|
|**매개변수**|#1. 문자열<br>#2. 찾을 문자|
|**반환값**|문자열에서 해당 문자가 첫 등장하는 위치(주소값)를 반환. 없으면 NULL을 반환.|
|**설명**|문자열에서 원하는 문자를 찾는 함수|

</div>
</details>

<details>
<summary>ft_strrchr</summary>
<div markdown="1">       

|**함수 이름**|ft_strrchr|
|-|-|
|**프로토타입**|char *ft_strrchr(const char *str, int c);|
|**매개변수**|#1. 문자열<br>#2. 찾을 문자|
|**반환값**|문자열에서 해당 문자가 뒤에서 첫 등장하는 위치(주소값)를 반환. 없으면 NULL을 반환.|
|**설명**|문자열에서 원하는 문자를 찾는 함수|

</div>
</details>

<details>
<summary>ft_memchr</summary>
<div markdown="1">       

|**함수 이름**|ft_memchr|
|-|-|
|**프로토타입**|void *ft_memchr(const void *ptr, int value, size_t num);|
|**매개변수**|#1. 메모리 주소<br>#2. 찾을 값<br>#3. 메모리 사이즈|
|**반환값**|메모리에서 해당 값이 첫 등장하는 위치(주소값)를 반환. 없으면 NULL을 반환.|
|**설명**|메모리에서 원하는 값을 찾는 함수|

</div>
</details>

<details>
<summary>ft_memcmp</summary>
<div markdown="1">       

|**함수 이름**|ft_memcmp|
|-|-|
|**프로토타입**|int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);|
|**매개변수**|#1. 비교할 메모리 주소1<br>#2. 비교할 메모리 주소2<br>#3. 비교할 사이즈|
|**반환값**|사이즈 num만큼 두 개의 메모리를 비교하여 완전히 같다면 0을 반환. 다르면 음수 혹은 양수를 반환|
|**설명**|사이즈 num만큼 두 개의 메모리가 같은지 비교하는 함수|

</div>
</details>

<details>
<summary>ft_strnstr</summary>
<div markdown="1">       

|**함수 이름**|ft_strnstr|
|-|-|
|**프로토타입**|char *ft_strnstr(const char *big, const char *little, size_t len);|
|**매개변수**|#1. big 문자열<br>#2. little 문자열<br>#3. 찾을 범위|
|**반환값**|big 문자열에서 길이 len내에 little 문자열이 첫 등장하는 위치(주소값)를 반환. 없다면 NULL을 반환.|
|**설명**|big 문자열에서 길이 len내에 little 문자열을 찾는 함수|

</div>
</details>

<details>
<summary>ft_atoi</summary>
<div markdown="1">       

|**함수 이름**|ft_atoi|
|-|-|
|**프로토타입**|int ft_atoi(const char *str);|
|**매개변수**|#1. 문자열 형태의 정수값|
|**반환값**|문자열 형태의 정수값을 int형으로 변환하여 반환|
|**설명**|문자열 형태의 정수값을 int형으로 변환하는 함수|

</div>
</details>

<details>
<summary>ft_calloc</summary>
<div markdown="1">       

|**함수 이름**|ft_calloc|
|-|-|
|**프로토타입**|void *ft_calloc(size_t num, size_t size);|
|**매개변수**|#1. 변수의 수<br>#2. 변수의 사이즈|
|**반환값**|동적할당한 메모리 주소를 반환|
|**설명**|num * size만큼의 메모리를 할당하고 0으로 초기화된 상태로 반환해주는 함수|

</div>
</details>

<details>
<summary>ft_strdup</summary>
<div markdown="1">       

|**함수 이름**|ft_strdup|
|-|-|
|**프로토타입**|char *ft_strdup(const char *str1);|
|**매개변수**|#1. 문자열 주소|
|**반환값**|복제된 문자열 주소를 반환|
|**설명**|동적할당을 하여 문자열을 복제해 반환해주는 함수|

</div>
</details>
